/*
    File: functions2.sqf
    Author: Cytech Dev Team (Cytech)
    Description: Init for any plugin container
*/
//TF_server_addon_version = TF_ADDON_VERSION;
0 spawn {
	RDT_fnc_spawned_init = {
		diag_log "Dev: Init Code Spawned";
		Systemchat "Dev: Init Code Spawned";

		0 spawn {

			//Legs and Arm fractures
			_legs = player getVariable ["hit_legs",0];
			_arms = player getVariable ["hit_hands",0];

			if (_legs > 1) then {
				player setHit["legs",1];
				r_fracture_legs = true;
			};
			if (_arms > 1) then {
				player setHit["hands",1];
				r_fracture_arms = true;
			};

			//Record current weapon state
			dayz_myWeapons = 		weapons player;		//Array of last checked weapons
			dayz_myItems = 			items player;		//Array of last checked items
			dayz_myMagazines = 	magazines player;

			dayz_playerUID = getplayeruid player;


			//Work out survival time
			_totalMins = _survival select 0;
			_days = floor (_totalMins / 1440);
			_totalMins = (_totalMins - (_days * 1440));
			_hours = floor (_totalMins / 60);
			_mins =  (_totalMins - (_hours * 60));

			//player variables
			dayz_characterID =		1337;
			dayz_hasFire = 			objNull;		//records players Fireplace object
			dayz_myCursorTarget = 	objNull;
			dayz_myPosition = 		getPosATL player;	//Last recorded position
			dayz_lastMeal =			(_lastAte * 60);
			dayz_lastDrink =		(_lastDrank * 60);
			dayz_zombiesLocal = 	0;			//Used to record how many local zombies being tracked
			dayz_skilllevel = _days;  //total alive dayz

			//load in medical details
			r_player_dead = 		player getVariable["USEC_isDead",false];
			r_player_unconscious = 	player getVariable["NORRN_unconscious", false];
			r_player_infected =	player getVariable["USEC_infected",false];
			r_player_injured = 	player getVariable["USEC_injured",false];
			r_player_inpain = 		player getVariable["USEC_inPain",false];
			r_player_cardiac = 	player getVariable["USEC_isCardiac",false];
			r_player_lowblood =	player getVariable["USEC_lowBlood",false];
			r_player_blood = 		player getVariable["USEC_BloodQty",r_player_bloodTotal];

			//Hunger/Thirst
			_messing =			player getVariable["messing",[0,0]];
			dayz_hunger = 		_messing select 0;
			dayz_thirst = 		_messing select 1;

			//player setVariable ["humanity",-3000, true];		
		};

		setTerrainGrid 45; 
		setObjectViewDistance [1500,30]; 
		setViewDistance 1500; 
		setDetailMapBlendPars [50, 50];	
		0 spawn {
			0 spawn RDT_fnc_init2;
		};
		
		0 spawn {
			//Events System Client Side code
			#include "\RDT_server\client\events_code\fn_events_code_init.sqf"	
		};		
	

		0 spawn {
			//AutoRun
			#include "\RDT_server\client\auto_run\auto_run.sqf"
		};	

		0 spawn {
			//AutoRun
			#include "\RDT_server\client\servertransfer_code\fn_servertransfer_code_init.sqf"
		};			

	};	
	0 spawn {
		systemChat "Dev: 211231232132321";
		0 spawn DayZ_Functions;	
		systemChat "Dev: asdasd213412";
		waitUntil {initialized};		
		_id = player addEventHandler ["Respawn", {private _id = [] spawn player_death;}];
		systemChat "Dev: 4234234";
		0 spawn player_spawn_1;	
		systemChat "Dev: 21233242342321";	
		dayz_preloadFinished = true;
		0 SPAWN {
			systemchat "Dev: 212321";
			SLEEP 5;
			0 spawn player_monitor;
			
			//Spoof DayZ Player Monitor
			0 Spawn {
				dayz_myPosition = 0;
				0 Spawn {
					dayz_versionNo = getText(configFile >> "CfgMods" >> "DayZ" >> "version");
					diag_log ("DAYZ: CLIENT IS RUNNING DAYZ_CODE " + str(dayz_versionNo));

					0 fadeSound 0;
					//player setPosATL [-2148,6655,0];
					progressLoadingScreen 0.1;
					_timeStart = time;
					player enableSimulation false;

				};
				0 Spawn {
					endLoadingScreen;
					diag_log ("PLOGIN: Initating");

					dayz_loadScreenMsg = (localize "str_player_13"); 
					progressLoadingScreen 0.2;
				};	
				0 Spawn {
					_myAnim = getNumber(configFile >> "CfgPatches" >> "dayz_anim" >> "isUpdated");
				};	
				0 Spawn {
					//startLoadingScreen ["","DayZ_loadingScreen"];

					diag_log ("PLOGIN: Requesting Authentication... (" + _playerUID + ")");
					dayz_loadScreenMsg = (localize "str_player_15");
					progressLoadingScreen 0.5;

					_msg = [];

					//["dayzLogin",[_playerUID,player]] call callRpcProcedure;
					//[_playerUID,player] remoteexec ["server_playerLogin",2];
					dayzPlayerLogin = []; 
				};	
				0 Spawn {
					progressLoadingScreen 0.6;
					_charID		= _msg select 0;
					_inventory	= _msg select 1;
					_backpack	= _msg select 2;
					_survival 	= _msg select 3;
					_isNew 		= _msg select 4;
					//_state 		= _msg select 5;
					_version	= _msg select 5;
					_model		= _msg select 6;

					_isHiveOk = false;
					_newPlayer = false;

					if (count _msg > 7) then {
						_isHiveOk = _msg select 7;
						_newPlayer = _msg select 8;
						diag_log ("PLAYER RESULT: " + str(_isHiveOk));
					};

					dayz_loadScreenMsg = (localize "str_player_17"); 
					progressLoadingScreen 0.7;
					diag_log ("PLOGIN: authenticated with : " + str(_msg));

					//Not Equal Failure

					if (isNil "_model") then {
						_model = "Survivor2_DZ";
						diag_log ("PLOGIN: Model was nil, loading as survivor");
					};

					if (_model == "") then {
						_model = "Survivor2_DZ";
						diag_log ("PLOGIN: Model was empty, loading as survivor");
					};

					if (_model == "Survivor1_DZ") then {
						_model = "Survivor2_DZ";
					};

					_isHack = false;
					if (_model == "hacker") then {
						_isHack = true;
					};
				};	
				0 Spawn {
					//_model = "BanditW1_DZ";

					dayz_playerName = name player;


					player allowDamage false;
					_lastAte = _survival select 1;
					_lastDrank = _survival select 2;

					_usedFood = 0;
					_usedWater = 0;

					//_inventory = [["Mk_48_DZ","NVGoggles","Binocular_Vector","M9SD","ItemGPS","ItemToolbox","ItemEtool","ItemCompass","ItemMatchbox","FoodCanBakedBeans","ItemKnife","ItemMap","ItemWatch"],[["100Rnd_762x51_M240",47],"ItemPainkiller","ItemBandage","15Rnd_9x19_M9SD","100Rnd_762x51_M240","ItemBandage","ItemBandage","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","ItemMorphine","PartWoodPile"]];

					dayzGearSave = false;
					_inventory call player_gearSet;


					dayzPlayerLogin2 = [];
					//["dayzLogin2",[_charID,player,_playerUID]] call callRpcProcedure;
					//[_charID,player,_playerUID] remoteexec ["server_playerSetup",2];
					dayz_loadScreenMsg =  "Requesting Character data from server";
					progressLoadingScreen 0.8;
					diag_log "Attempting Phase two...";
				};	
	
				0 Spawn {

					//Location
					_myLoc = getPosATL player;

					dayz_loadScreenMsg = "Setup Completed, please wait...";
					progressLoadingScreen 0.9;

					//GUI
					3 cutRsc ["playerStatusGUI", "PLAIN",0];
					//5 cutRsc ["playerKillScore", "PLAIN",2];

					//Update GUI
					call player_updateGui;
					_id = [] spawn {
						disableSerialization;
						_display = uiNamespace getVariable 'DAYZ_GUI_display';
						_control = 	_display displayCtrl 1204;
						_control ctrlShow false;
						if (!r_player_injured) then {
							_ctrlBleed = 	_display displayCtrl 1303;
							_ctrlBleed ctrlShow false;
						};
						if (!r_fracture_legs and !r_fracture_arms) then {
							_ctrlFracture = 	_display displayCtrl 1203;
							_ctrlFracture ctrlShow false;
						};
					};

					call ui_changeDisplay;
				};	
				0 Spawn {
					//stream in location
					call stream_locationCheck;

					_zombies = (getPosATL player) nearEntities ["zZombie_Base",30];
					{deleteVehicle _x} forEach _zombies;

					//endLoadingScreen;
					//Reveal action types

					{player reveal _x} forEach (nearestObjects [getPosATL player, ["AllVehicles","groundWeaponHolder","TentStorage","BuiltItems"], 50]);

					dayz_clientPreload = true;
					3 fadeSound 1;
					1 cutText ["", "PLAIN"];
					0 fadeMusic 0.5;

					//Check mission objects
					{ _id = [_x,0] spawn object_roadFlare } forEach (allMissionObjects "RoadFlare");
					{ _id = [_x,1] spawn object_roadFlare } forEach (allMissionObjects "ChemLight");
				};	
				0 Spawn {
					dayz_lastCheckBit = 0;

					(findDisplay 46) displayAddEventHandler ["KeyDown","_this call dayz_spaceInterrupt"];
					player disableConversation true;

					eh_player_killed = player addeventhandler ["FiredNear",{_this call player_weaponFiredNear;} ];
					//_eh_combat_projectilenear = player addEventHandler ["IncomingFire",{_this call player_projectileNear;}];

					//Select Weapon
					// Desc: select default weapon & handle multiple muzzles
					_playerObjName = format["player%1",_playerUID];
					call compile format["player%1 = player;",_playerUID];
					diag_log (format["player%1 = player",_playerUID]);
					publicVariable _playerObjName;

					//_state = player getVariable["state",[]];
					_currentWpn = "";
					_currentAnim = "";
					if (count _state > 0) then {
						//Reload players state
						_currentWpn		=	_state select 0;
						_currentAnim	=	_state select 1;
						//Reload players state
						if (count _state > 2) then {
							dayz_temperatur = _state select 2;
						};
					};

					if (_currentWpn == "MeleeCrowbar") then {
						player addMagazine 'crowbar_swing';
					};
					if (_currentWpn == "MeleeHatchet") then {
						player addMagazine 'hatchet_swing';
					};

					reload player;

					if (_currentAnim != "") then {
						[objNull, player, rSwitchMove,_currentAnim] call RE;
					};
					if (_currentWpn != "") then {
						player selectWeapon _currentWpn;
					} else {
						//Establish default weapon
						if (count weapons player > 0) then
						{
							private['_type', '_muzzles'];

							_type = ((weapons player) select 0);
							// check for multiple muzzles (eg: GL)
							_muzzles = getArray(configFile >> "cfgWeapons" >> _type >> "muzzles");

							if (count _muzzles > 1) then {
								player selectWeapon (_muzzles select 0);
							} else {
								player selectWeapon _type;
							};
						};
					};

					//Player control loop
					dayz_monitor1 = [] spawn {
						while {true} do {
							call player_zombieCheck;
							sleep 1;
						};
					};


				};	
				//FSM INIT
				0 Spawn {
					//Medical
					dayz_medicalH = 	[] execVM "\dayz_code\medical\init_medical.sqf";	//Medical Monitor Script (client only)
					[player] call fnc_usec_damageHandle;
					if (r_player_unconscious) then {
						r_player_timeout = player getVariable["unconsciousTime",0];
						player playActionNow "Die";
					};
					//player allowDamage true;
					//player enableSimulation true;
					[PLAYER,TRUE] remoteExec ["allowdamage",0,true];
					[PLAYER,TRUE] remoteExec ["enableSimulation",0,true];
					player enableStamina false;
					[player] joinSilent grpNull;
					//0 cutText ["", "BLACK IN",3];

					//Add core tools
					//player addWeapon "Loot";
					//player addWeapon "Flare";

					//load in medical details
					r_player_dead = 		player getVariable["USEC_isDead",false];
					r_player_unconscious = 	player getVariable["NORRN_unconscious", false];
					r_player_infected =		player getVariable["USEC_infected",false];
					r_player_injured = 		player getVariable["USEC_injured",false];
					r_player_inpain = 		player getVariable["USEC_inPain",false];
					r_player_cardiac = 		player getVariable["USEC_isCardiac",false];
					r_player_lowblood =		player getVariable["USEC_lowBlood",false];
					r_player_blood = 		player getVariable["USEC_BloodQty",r_player_bloodTotal];

					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, (r_player_blood/r_player_bloodTotal)],  [1, 1, 1, 0.0]];
					"colorCorrections" ppEffectCommit 0;

					dayz_gui = [] spawn {
						private["_distance"];
						dayz_musicH = [] spawn player_music;
						while {true} do {
							_array = player call world_surfaceNoise;
							dayz_surfaceNoise = _array select 1;
							dayz_surfaceType = 	_array select 0;

							call player_checkStealth;
							dayz_statusArray = [] call player_updateGui;
							if (!isNull cursorTarget and !dayz_heartBeat) then {
								if (alive cursorTarget) then {
									_id = cursorTarget spawn dayz_lowHumanity;
								};
							};
							sleep 0.2;
						};
					};

					dayzGearSave = true;

					dayz_slowCheck = 	[] spawn player_spawn_2;

					_world = toUpper(worldName); //toUpper(getText (configFile >> "CfgWorlds" >> (worldName) >> "description"));
					_nearestCity = nearestLocations [getPos player, ["NameCityCapital","NameCity","NameVillage","NameLocal"],1000];
					_town = "Wilderness";

					if (count _nearestCity > 0) then {_town = text (_nearestCity select 0)};

					_strTime = call curTimeStr;
					_strDate = date;

					_first = [_world,_town,localize ("str_player_06") + " " + str(_days)] spawn BIS_fnc_infoText;

					dayz_animalCheck = 	[] spawn player_spawn_1;

					dayz_spawnCheck = [] spawn {
						while {true} do {
							["both"] call player_spawnCheck;
							sleep 8;
						};
					};
					dayz_locationCheck = [] spawn {
						while {true} do {
							call stream_locationCheck;
							sleep 2;
						};
					};
					// TODO: questionably
					{ _x call fnc_vehicleEventHandler; } forEach vehicles;

					private["_fadeFire"];
					{
						_fadeFire = _x getVariable['fadeFire', true];
						if (!_fadeFire) then {
							nul = [_x,2,0,false,false] spawn BIS_Effects_Burn;
						};
					} forEach allMissionObjects "SpawnableWreck";

				};	
				
				0 Spawn {
					dayzGearSave = true;
					dayz_myPosition = getPosATL player;

					//["dayzLoginRecord",[_playerUID,_charID,0]] call callRpcProcedure;
					//[_playerUID,_charID,0] remoteexec ["dayz_recordLogin",2];

					dayzDebug = true;
					0 cutText ["", "BLACK IN",3];
					0 spawn {
						waitUntil {(isnil "Cytech_fnc_initdayz")};
						Systemchat "Dev: Running Functions";
						0 spawn cytech_functions; 
						//0 spawn Cytech_fnc_initdayz; 
					};
				};
				0 spawn {
					player setVariable ["isready",true,true];
					if !(player getVariable ["cytech_newplayer",false]) then {
						[player] remoteExec ["fnc_finalload",2];
					};				
				};		
				0 spawn {sleep 10;if (uniform player isequalto "U_C_Poloshirt_stripped") then {systemchat "Loading Error Forcing Relog!";["epicFail", false, 2, false] call BIS_fnc_endMission;};};						
			};

			systemChat "Dev: sadaas3q421";			
		};
	};
};	