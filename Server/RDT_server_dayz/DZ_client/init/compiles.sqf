
//Player only
if (!isDedicated) then {
	_config = 	configFile >> "CfgLoot";
	_config1 = 	configFile >> "CfgMagazines" >> "FoodEdible";
	_config2 = 	configFile >> "CfgWeapons" >> "Loot";

	//"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

//	BIS_Effects_Burn = 			compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf"; 
	player_zombieCheck = { 
		#include  "\RDT_server_dayz\DZ_client\compile\player_zombieCheck.sqf";	
	};	
	player_onPause = { 
		#include  "\RDT_server_dayz\DZ_client\compile\player_onPause.sqf";	
	};
	player_zombieAttack = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_zombieAttack.sqf";	
	};
	fnc_usec_damageActions =	{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_damageActions.sqf";	
	};
	fnc_inAngleSector =			{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_inAngleSector.sqf";	
	};		
	fnc_usec_selfActions =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_selfActions.sqf";	
	};		
	fnc_usec_unconscious =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_unconscious.sqf";
	};
	player_temp_calculation	=	{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_temperatur.sqf";	
	};		
	player_weaponFiredNear =	{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_weaponFiredNear.sqf";
	};		
	player_animalCheck =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_animalCheck.sqf";
	};		
	player_spawnCheck = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_spawnCheck.sqf";
	};		
	player_spawnLootCheck =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_spawnlootCheck.sqf";
	};		
	player_spawnZedCheck =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_spawnzedCheck.sqf";
	};		
	building_spawnLoot =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\building_spawnLoot.sqf";
	};		
	player_taskHint =			{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_taskHint.sqf";
	};		
	building_spawnZombies =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\building_spawnZombies.sqf";
	};		
	building_monitor =			{ 
		#include  "\RDT_server_dayz\DZ_client\system\building_monitor.sqf";
	};		
	player_fired =				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_fired.sqf";	
	};	
	player_packTent =			{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_packTent.sqf";
	};		
	control_zombieAgent = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\control_zombieAgent.sqf"
	};
	player_updateGui =			{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_updateGui.sqf"
	};
	player_crossbowBolt =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_crossbowBolt.sqf"
	};
	spawn_flies = 				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\spawn_flies.sqf"
	};
	stream_locationFill = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\stream_locationFill.sqf"
	};
	stream_locationDel = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\stream_locationDel.sqf"
	};
	stream_locationCheck = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\stream_locationCheck.sqf"
	};
	player_music = 				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_music.sqf"
	};			
	player_login = 				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_login.sqf"
	};			
	player_death =				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_death.sqf"
	};

	player_checkStealth =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_checkStealth.sqf"
	};
	world_sunRise =				{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_sunRise.sqf"
	};
	world_surfaceNoise =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\fn_surfaceNoise.sqf"
	};
	player_humanityMorph =		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_humanityMorph.sqf"
	};
	player_throwObject = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_throwObject.sqf"
	};
	player_alertZombies = 		{ 
		#include  "\RDT_server_dayz\DZ_client\compile\player_alertZombies.sqf"
	};
	player_fireMonitor = 		{ 
		#include  "\RDT_server_dayz\DZ_client\system\fire_monitor.sqf"
	};

	//Objects
	object_roadFlare = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_roadFlare.sqf"
	};
	object_setpitchbank	=		{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_setpitchbank.sqf"
	};
	
	//Zombies
	zombie_findTargetAgent = 	{ 
		#include "\RDT_server_dayz\DZ_client\compile\zombie_findTargetAgent.sqf"
	};
	zombie_loiter = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\zombie_loiter.sqf"
	};		
	zombie_generate = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\zombie_generate.sqf"
	};		
	
	
	dog_findTargetAgent =   { 
		#include "\RDT_server_dayz\DZ_client\compile\dog_findTargetAgent.sqf"
	};
	
	// Vehicle damage fix
	vehicle_handleDamage    = { 
		#include "\RDT_server_dayz\DZ_client\compile\vehicle_handleDamage.sqf"
	};
	vehicle_handleKilled    = { 
		#include "\RDT_server_dayz\DZ_client\compile\vehicle_handleKilled.sqf"
	};

	//actions
	player_countmagazines =	{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_countmagazines.sqf"
	};
	player_addToolbelt =		{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_addToolbelt.sqf"
	};
	player_reloadMag =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_reloadMags.sqf"
	};
	player_tentPitch =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\tent_pitch.sqf"
	};
	player_drink =				{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_drink.sqf"
	};
	player_eat =				{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_eat.sqf"
	};
	player_useMeds =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_useMeds.sqf"
	};
	player_fillWater = 			{ 
		#include "\RDT_server_dayz\DZ_client\actions\water_fill.sqf"
	};
	player_makeFire =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_makefire.sqf"
	};
	player_chopWood =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_chopWood.sqf"
	};
	player_build =				{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_build.sqf"
	};
	player_wearClothes =		{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_wearClothes.sqf"
	};
	player_dropWeapon =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_dropWeapon.sqf"
	};
	player_setTrap =			{ 
		#include "\RDT_server_dayz\DZ_client\actions\player_setTrap.sqf"
	};
	object_pickup = 			{ 
		#include "\dayz_code\actions\object_pickup.sqf"
	};
	player_flipvehicle = 		{ 
		#include "\dayz_code\actions\player_flipvehicle.sqf"
	};
	player_sleep = 				{ 
		#include "\dayz_code\actions\player_sleep.sqf"
	};
	
	//ui
	player_selectSlot =			{ 
		#include "\RDT_server_dayz\DZ_client\compile\ui_selectSlot.sqf"
	};
	player_gearSync	=			{ 
		#include "\RDT_server_dayz\DZ_client\compile\player_gearSync.sqf"
	};
	player_gearSet	=			{ 
		#include "\RDT_server_dayz\DZ_client\compile\player_gearSet.sqf"
	};
	ui_changeDisplay = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\ui_changeDisplay.sqf"
	};
	
	//System
	player_monitor =			{ 
		#include "\RDT_server_dayz\DZ_client\system\player_monitor.sqf"
	};
	player_spawn_1 =			{ 
		#include "\RDT_server_dayz\DZ_client\system\player_spawn_1.sqf"
	};
	player_spawn_2 =			{ 
		#include "\RDT_server_dayz\DZ_client\system\player_spawn_2.sqf"
	};


	//Reworks
	engineer_upgrade =	{ 
		#include "\RDT_server_dayz\DZ_client\actions\engineer_upgrade.sqf"
	};
	DayZ_builditem = {
		
	
	};
};
	onPreloadStarted 			"dayz_preloadFinished = false;";
	onPreloadFinished 			"dayz_preloadFinished = true;";

	// TODO: need move it in player_monitor.fsm
	// allow player disconnect from server, if loading hang, kicked by BE etc.

	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = 	_this select 0;
		_dis =		_this select 1;
		_maxDis = 	_this select 2;
	//diag_log ("VAL:  " + str(_this));
		_val = 		(_maxDis - _dis) max 0;
		_maxExp = 	((exp 2) * _maxDis);
		_myExp = 	((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};
	
	ui_initDisplay = {
		private["_control","_ctrlBleed","_display","_ctrlFracture","_ctrlDogFood","_ctrlDogWater","_ctrlDogWaterBorder", "_ctrlDogFoodBorder"];
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
		_ctrlDogFoodBorder = _display displayCtrl 1501;
		_ctrlDogFoodBorder ctrlShow false;
		_ctrlDogFood = _display displayCtrl 1701;
		_ctrlDogFood ctrlShow false;
		
		_ctrlDogWaterBorder = _display displayCtrl 1502;
		_ctrlDogWaterBorder ctrlShow false;
		_ctrlDogWater = _display displayCtrl 1702;
		_ctrlDogWater ctrlShow false
	};
	
	dayz_losCheck = {
		private["_target","_agent","_cantSee"];
		_target = _this select 0;
		_agent = _this select 1;
		_cantSee = true;
		if (!isNull _target) then {
			_tPos = eyePos _target;	//(getPosASL _target);
			_zPos = eyePos _agent;	//(getPosASL _agent);
			if ((count _tPos > 0) and (count _zPos > 0)) then {
				_cantSee = terrainIntersectASL [_tPos, _zPos];
				//diag_log ("terrainIntersectASL: " + str(_cantSee));
				if (!_cantSee) then {
					_cantSee = lineIntersects [_tPos, _zPos];
					//diag_log ("lineIntersects: " + str(_cantSee));
				};
			};
		};
		_cantSee
	};
	
	eh_zombieInit = 	{
		private["_unit","_pos"];
		//_unit = 	_this select 0;
		//_pos =		getPosATL _unit;
		//_id = [_pos,_unit] execFSM "\dayz_code\system\zombie_agent.fsm";
	};
	
	dayz_equipCheck = {
		private ["_empty", "_needed","_diff","_success"];
		_config = _this;
		_empty = [player] call BIS_fnc_invSlotsEmpty;
		_needed = [_config] call BIS_fnc_invSlotType;
		_diff = [_empty,_needed] call BIS_fnc_vectorDiff;
		
		_success = true;
		{
			if (_x > 0) then {_success = false};
		} forEach _diff;
		hint format["Config: %5\nEmpty: %1\nNeeded: %2\nDiff: %3\nSuccess: %4",_empty,_needed,_diff,_success,_config];
		_success
	};
		
	dayz_spaceInterrupt = {
		private ["_dikCode", "_handled"];
		_dikCode = 	_this select 1;
		_handled = false;
		if (_dikCode in (actionKeys "GetOver")) then {
			DoRE = ({isPlayer _x} count (player nearEntities ["AllVehicles",500]) > 1);
			if (canRoll && animationState player in ["amovpercmrunslowwrfldf","amovpercmrunsraswrfldf","amovpercmevaslowwrfldf","amovpercmevasraswrfldf"]) then {
				canRoll = false;
				null = [] spawn {
					if (DoRE) then {
						[nil, player, rSWITCHMOVE, "ActsPercMrunSlowWrflDf_FlipFlopPara"] call RE;
					} else {
						player switchMove "ActsPercMrunSlowWrflDf_FlipFlopPara";
					};
					sleep 0.3;
					player setVelocity [(velocity player select 0) + 1.5 * sin direction player, (velocity player select 1) + 1.5 * cos direction player, (velocity player select 2) + 4];
					sleep 1;
					canRoll = true;
				};
				_handled = true;
			};
		};
		//if (_dikCode == 57) then {_handled = true}; // space
		//if (_dikCode in actionKeys 'MoveForward' or _dikCode in actionKeys 'MoveBack') then {r_interrupt = true};
		if ("ItemMap_Debug" in items player) then {
			if (_dikCode == 88) then //SCROLL LOCK
			{
				_nill = execVM "\dayz_code\actions\playerstats.sqf";
			};
		} else {
			if (_dikCode == 70) then //SCROLL LOCK
			{
				_nill = execVM "\dayz_code\actions\playerstats.sqf";
			};
		};
		if (_dikCode in actionKeys "MoveLeft") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveRight") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveForward") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveBack") then {r_interrupt = true};
		if (_dikCode in actionKeys "ForceCommandingMode") then {_handled = true};
		if (_dikCode in actionKeys "PushToTalk" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "VoiceOverNet" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "PushToTalkDirect" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "Chat" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		
		
		if ((_dikCode == 0x38 or _dikCode == 0xB8) and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			call dayz_forceSave;
		};

		_handled
	};
	
	player_serverModelChange = {
		private["_object","_model"];
		_object = _this select 0;
		_model = _this select 1;
		if (_object == player) then {
			//_model call player_switchModel;
		};
	};
	
	player_guiControlFlash = 	{
		private["_control"];
		_control = _this;
		if (ctrlShown _control) then {
			_control ctrlShow false;
		} else {
			_control ctrlShow true;
		};
	};
	
	gear_ui_offMenu = {
		private["_control","_parent","_menu"];
		disableSerialization;
		_control = 	_this select 0;
		_parent = 	findDisplay 106;
		if (!(_this select 3)) then {
			for "_i" from 0 to 9 do {
				_menu = _parent displayCtrl (1600 + _i);
				_menu ctrlShow false;
			};
			_grpPos = ctrlPosition _control;
			_grpPos set [3,0];
			_control ctrlSetPosition _grpPos;
			_control ctrlShow false;
			_control ctrlCommit 0;
		};
	}; 
	

	gear_ui_init = {
		private["_control","_parent","_menu","_dspl","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = 	_parent displayCtrl 6902;
		for "_i" from 0 to 9 do {
			_menu = _parent displayCtrl (1600 + _i);
			_menu ctrlShow false;
		};
		_grpPos = ctrlPosition _control;
		_grpPos set [3,0];
		_control ctrlSetPosition _grpPos;
		_control ctrlShow false;
		_control ctrlCommit 0;
	};
	
	dayz_eyeDir = {
		private["_vval","_vdir"];
		_vval = (eyeDirection _this);
		_vdir = (_vval select 0) atan2 (_vval select 1);
		if (_vdir < 0) then {_vdir = 360 + _vdir};
		_vdir
	};
	
	dayz_lowHumanity = {
		private["_unit","_humanity","_delay"];
		_unit = _this;
		if ((_unit distance player) < 15) then {
			_humanity = _unit getVariable["humanity",0];
			dayz_heartBeat = true;
			if (_humanity < -3000) then {
				_delay = ((10000 + _humanity) / 5500) + 0.3;
				playSound "heartbeat_1";
				sleep _delay;
			};
			dayz_heartBeat = false;
		};
	};

	dayz_originalPlayer =		player;

	progressLoadingScreen 0.8;

	//Both
	BIS_fnc_selectRandom =	{	
	#include "\RDT_server_dayz\DZ_client\compile\fn_selectRandom.sqf"
	};		
	fnc_buildWeightedArray = 	{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_buildWeightedArray.sqf"
	};		//Checks which actions for nearby casualty
	fnc_usec_damageVehicle =	{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_damageHandlerVehicle.sqf"
	};		//Event handler run on damage
	zombie_initialize = 		{ 
		#include "\RDT_server_dayz\DZ_client\init\zombie_init.sqf"
	};
	object_vehicleKilled =		{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_vehicleKilled.sqf"
	};		//Event handler run on damage
	object_setHitServer =		{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_setHitServer.sqf"
	};	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_setFixServer =		{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_setFixServer.sqf"
	};	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_getHit =				{ 
		private["_unit","_hp","_selection","_strH","_dam"];
		_unit =		_this select 0;
		_hp =		_this select 1;
		_dam = (_unit getHitPointDamage _hp);
		_dam
	};			//gets the hit value for a HitPoint (i.e. HitLegs) against the selection (i.e. "legs"), returns the value
	object_setHit =				{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_setHit.sqf"
	};			//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_processHit =			{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_processHit.sqf"
	};		
	object_delLocal =			{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_delLocal.sqf"
	};
	object_cargoCheck =			{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_cargoCheck.sqf"
	};		//Run by the player or server to monitor changes in cargo contents
	fnc_usec_damageHandler =	{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_damageHandler.sqf"
	};		
	vehicle_handleDamage    = { 
		#include "\RDT_server_dayz\DZ_client\compile\vehicle_handleDamage.sqf"
	};
	vehicle_handleKilled    = { 
		#include "\RDT_server_dayz\DZ_client\compile\vehicle_handleKilled.sqf"
	};
	fnc_vehicleEventHandler = 	{ 
		#include "\RDT_server_dayz\DZ_client\init\vehicle_init.sqf"
	};			//Initialize vehicle
	fnc_inString = 				{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_inString.sqf"
	};	
	RT_fnc_refuel = {
		private["_vehicle","_curFuel","_newFuel","_timeLeft"];
		_vehicle = 		_this;
		_canSize = 		getNumber(configFile >> "cfgMagazines" >> "ItemJerrycan" >> "fuelQuantity");
		_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
		_capacity = 	getNumber(_configVeh >> "fuelCapacity");
		_nameType = 	getText(_configVeh >> "displayName");
		_curFuel = 		((fuel _vehicle) * _capacity);
		_newFuel = 		(_curFuel + _canSize);
		if (_newFuel > _capacity) then {_newFuel = _capacity};
		_newFuel = (_newFuel / _capacity);
		player removeMagazine "ItemJerrycan";
		player addMagazine "ItemJerrycanEmpty";
		player playActionNow "Medic";
		[player,"refuel",0,false] call dayz_zombieSpeak;
		_id = [player,20,true,(getPosATL player)] spawn player_alertZombies;
		sleep 6;
		[_vehicle,_newFuel] remoteExec ["local_setFuel",0];
		cutText [format[localize "str_player_05",_nameType,_canSize], "PLAIN DOWN"];
		sleep 1;
		call fnc_usec_medic_removeActions;
		r_action = false;		
		
		
	};	
	
	fnc_isInsideBuilding = 		{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_isInsideBuilding.sqf"
	};	
	dayz_zombieSpeak = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\object_speak.sqf"
	};		
	vehicle_getHitpoints =		{ 
		#include "\RDT_server_dayz\DZ_client\compile\vehicle_getHitpoints.sqf"
	};
	local_gutObject =			{ 
		#include "\RDT_server_dayz\DZ_client\compile\local_gutObject.sqf"
	};		//Generated on the server (or local to unit) when gutting an object
	local_zombieDamage = 		{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_damageHandlerZ.sqf"
	};		//Generated by the client who created a zombie to track damage
	local_setFuel =				{ 
		#include "\RDT_server_dayz\DZ_client\compile\local_setFuel.sqf"
	};			//Generated when someone refuels a vehicle
	local_eventKill = 			{ 
		#include "\RDT_server_dayz\DZ_client\compile\local_eventKill.sqf"
	};		//Generated when something is killed
	curTimeStr =				{ 
		#include "\RDT_server_dayz\DZ_client\compile\fn_curTimeStr.sqf"
	};
	player_medBandage =			{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medBandaged.sqf"
	};
	player_medInject =			{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medInject.sqf"
	};
	player_medEpi =				{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medEpi.sqf"
	};
	player_medTransfuse =		{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medTransfuse.sqf"
	};
	player_medMorphine =		{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medMorphine.sqf"
	};
	player_medPainkiller =		{ 
		#include "\RDT_server_dayz\DZ_client\medical\publicEH\medPainkiller.sqf"
	};
	
	world_isDay = {if ((daytime < (24 - dayz_sunRise)) and (daytime > dayz_sunRise)) then {true} else {false}};
	
	player_humanityChange =		{ 
		#include "\RDT_server_dayz\DZ_client\compile\player_humanityChange.sqf"
	};
	spawn_loot =				{ 
		#include "\RDT_server_dayz\DZ_client\compile\spawn_loot.sqf"
	};
	player_projectileNear = 		{ 
		#include "\RDT_server_dayz\DZ_client\compile\player_projectileNear.sqf"
	};
	
	player_sumMedical = {
		private["_character","_wounds","_legs","_arms","_medical"];
		_character = 	_this;
		_wounds =		[];
		if (_character getVariable["USEC_injured",false]) then {
			{
				if (_character getVariable[_x,false]) then {
					_wounds set [count _wounds,_x];
				};
			} forEach USEC_typeOfWounds;
		};
		_legs = _character getVariable ["hit_legs",0];
		_arms = _character getVariable ["hit_arms",0];
		_medical = [
			_character getVariable["USEC_isDead",false],
			_character getVariable["NORRN_unconscious", false],
			_character getVariable["USEC_infected",false],
			_character getVariable["USEC_injured",false],
			_character getVariable["USEC_inPain",false],
			_character getVariable["USEC_isCardiac",false],
			_character getVariable["USEC_lowBlood",false],
			_character getVariable["USEC_BloodQty",12000],
			_wounds,
			[_legs,_arms],
			_character getVariable["unconsciousTime",0],
			_character getVariable["messing",[0,0]]
		];
		_medical
	};
	
	
	//Server Only
	if (isServer) then {
		call compile preprocessFileLineNumbers "\dayz_server\init\server_functions.sqf";
	} else {
		eh_localCleanup = {};
	};
	
	
	//Start Dynamic Weather
	execVM "\dayz_code\external\DynamicWeatherEffects.sqf";
	initialized = true;
