saveProfileNamespace;

// Custom Functions 
0 spawn {
	private _script = preprocessFile "\RDT_server_dayz\client\functions.sqf";
	[[_script],{
		if (!hasInterface && !isDedicated) exitWith {};
		params ["_script"];
		0 call (compile _script);
	}] remoteExec ["spawn", -2, "RDT_functions"];	
	
	private _script2 = preprocessFile "\RDT_server\client\functions.sqf";
	private _script3 = preprocessFile "\RDT_server\client\functions2.sqf";
	[[_script2,_script3],{
		if (!hasInterface && !isDedicated) exitWith {};
		params ["_script2","_script3"];
		0 call (compile _script2);
		sleep 1;
		0 call (compile _script3);	
	}] remoteExec ["spawn", -2, "RDT_functions2"];	
};



/*
onPlayerConnected { 
	[_id, _uid, _name] spawn fnc_Handleplayerspawn;
};

fnc_Handleplayerspawn = {
	waitUntil {(count ((allplayers) select {(getplayeruid _x) isEqualto (_this select 1)}) > 0)};
	private _player = (allplayers) select {(getplayeruid _x) isEqualto (_this select 1)} select 0;	
	sleep 10;
	[] remoteExec ["cytech_functions",_player];
	[] remoteExec ["Cytech_fnc_initdayz",_player];
	systemChat "devcall"; 
};

*/
0 setfog 0.09;

cytech_Currentbuild = profileNamespace getVariable ["Currentbuild","null"];
publicVariable "cytech_Currentbuild";
If !(cytech_Currentbuild isequalto (profileNamespace getVariable ["lastbuild","null"])) then {
	[
		"Arma3Server",
		"",
		"DZA3 Server",
		"https://i.gyazo.com/8bd3f194698570f5276e1b7a77277a27.png",
		false,
		[
			[
				"Server Framework Update",
				format ["New Build: %1",cytech_Currentbuild],
				"www.Website.com",
				"33FFF6", 
				true,
				"",  
				"https://i.gyazo.com/63a1bc2c9286c6e5c3b1263956999959.png" 				
			]
		]
	] call DiscordEmbedBuilder_fnc_buildSqf;
	profileNamespace setVariable ["lastbuild",cytech_Currentbuild];
	saveProfileNamespace;
};

_id = addMissionEventHandler ["EntityKilled",{
	_this call Cytech_killfeed;
}];

Cytech_killfeed = {
	params ["_killed", "_killer", "_instigator"];
	if !(isplayer _killed) exitWith {};
	if !(isplayer _instigator) exitWith {};
	if (isNull _instigator) then {_instigator = UAVControl vehicle _killer select 0};
	if (isNull _instigator) then {_instigator = _killer}; 
	[
		"killfeed",
		"",
		"DZA3 Server",
		"https://i.gyazo.com/8bd3f194698570f5276e1b7a77277a27.png",
		false,
		[
			[
				format ["%2 Murdered %1, range %3M with an %4",name _killed, name _instigator,(_instigator distance2D _killed),gettext (configfile >> "cfgweapons" >> currentweapon _instigator >> "displayname")],
				"",
				"",
				"33FFF6", 
				true,
				"",  
				"" 				
			]
		]
	] call DiscordEmbedBuilder_fnc_buildSqf;	
};

0 spawn {
	While {true} do {
		{
			[_x,TRUE] remoteExec ["allowdamage",0,true]; 
			[_x,TRUE] remoteExec ["enableSimulation",0,true];
		} foreach (allplayers);
		sleep 1;
	};
};

Cytech_fnc_antihackcheck = {
	private _unit = (_this select 0);
	private _allowedvests = [
		 "V_Pocketed_black_F"
		,"V_Safety_yellow_F"
		,"V_BandollierB_rgr"
		,"V_PlateCarrierSpec_mtp"
		,"rds_pistol_holster"
		,"V_Rangemaster_belt"
		,"V_TacVest_oli"
		,"V_TacVest_blk_POLICE"
		,"V_LegStrapBag_black_F"
		,"V_PlateCarrier2_blk"
		,""
	]; 
	private _allowedbags = [
		 "Cytech_BI_Backpack_acr_small"
		,"Cytech_BI_B_AssaultPack_rgr"
		,"Cytech_BI_B_TacticalPack_oli"
		,"Cytech_RT_Backpack_01"
		,"RDT_Backpack_04_grn"
		,"RDT_Backpack_04"
		,"RDT_Backpack_03"
		,"Cytech_BI_Backpack_tk_alice"
		,"Cytech_BI_B_AssaultPack_rgr"
		,"Cytech_BI_Backpack_civil_assault"
		,"Cytech_BI_B_Bergen_mcamo_F"
		,"Cytech_BI_B_FieldPack_khk"
		,"Cytech_BI_B_Kitbag_cbr"
		,"Cytech_BI_Backpack_acr"
		,"Cytech_BI_Backpack_us_Coyote"
		,"Cytech_BI_Backpack_us_assault_Coyote"
		,"Cytech_BI_B_Carryall_cbr"

		,"B_AssaultPack_rgr"
		,"B_Bergen_mcamo_F"
		,"B_Carryall_cbr"
		,"B_FieldPack_khk"
		,"B_Kitbag_cbr"
		,"B_TacticalPack_oli"

		,""
	]; 
	private _alloweduniforms = [
		 "RDT_PMC_Spawn"
		,"RDT_PMC_Spawn_1"
		,"RDT_PMC_Spawn_2"
		,"RDT_PMC_Spawn_3"
		,"RDT_PMC_blu"
		,"RDT_PMC_brn"
		,"RDT_PMC_gry"
		,"RDT_PMC_olv"
		,"RDT_PMC_red"
		,"rds_uniform_Woodlander3"
		,"rds_uniform_Functionary2"
		,"U_B_CombatUniform_mcam_tshirt"
		,"U_I_FullGhillie_lsh"
		,"U_BG_Guerrilla_6_1"
		,"U_BG_Guerilla2_3"
		,"U_I_G_Story_Protagonist_F"
		,"U_B_CombatUniform_mcam"
		,"U_I_GhillieSuit"
		,"Policeman_uniform"
		,"Functionary_uniform"
		,"Functionary_uniform_2"
		,"Worker_uniform"
		,"Worker_uniform_2"
		,"Worker_uniform_3"
		,"Doctor_uniform"
		,"Teacher_uniform"
		,"Woodlander_uniform"
		,"Villager_uniform"
		,"Villager_uniform_2"
		,"Villager_uniform_3"
		,"Priest_uniform"
		,"z_soldier_heavy"
		,"z_soldier_pilot"
		,"z_soldier"
		,"U_C_Poloshirt_stripped"
		,""
	]; 
	private _banreason = [];
	if !(vest _unit in _allowedvests) then {_banreason pushBack (format["Illegal Vest: %1",vest _unit]);};
	if !(backpack _unit in _allowedbags) then {_banreason pushBack (format["Illegal Backpack: %1",backpack _unit]);};
	if !(uniform _unit in _alloweduniforms) then {_banreason pushBack (format["Illegal Uniform: %1",uniform _unit]);};

	
	if !(_banreason isEqualTo []) then 
	{
		[
			"banfeed",
			"",
			"Ban Hammer",
			"https://i.gyazo.com/2b0b1f7bab919e7a238daff68114eac6.png",
			false,
			[
				[
					"BAN",
					format ["Player UID: %1, Player name: %2, Reason: %3",(getplayeruid _unit),(name _unit),(_banreason)],
					"",
					"ff0000", 
					true,
					"",  
					"" 				
				]
			]
		] call DiscordEmbedBuilder_fnc_buildSqf;
		diag_log format["[INFO] Ban triggerd by %1 because of %2  uid %3", name _unit,_banreason,(getPlayerUID _unit)];
		if ((getplayeruid _unit) in ["76561198068321776","76561198004853216"]) exitWith {};
		"sdfhjjopwsejr3-fsdyhflkhesrlkh2" serverCommand format ["#exec ban %1",(owner _unit)];		
	};
};
0 spawn {
	while {true} do {
		{[_x] call Cytech_fnc_antihackcheck; sleep 1;} forEach allPlayers;
		sleep 30;
	};
};

//Clean bugged Zombies
0 spawn {
	while {true} do {
		{ 
			
			if (isPlayer _x and(((_x getVariable ["Lastpos",[0,0,0]]) distance _x) < 1)) then {
				deleteVehicle _x;
			};
			_x setVariable ["Lastpos",(getposatl _x)];	
			sleep 1;
		} foreach (allMissionObjects "man");
		
	};
};

if (isServer) then {
	RDT_servertimer = {
		params ["_timer","_type","_object"];
		partspos = [];
		private _distance = 0.50;
		switch (_type) do {
			case "repair": {
				 [_timer,_object, remoteExecutedOwner] spawn {(_this select 1) setVariable ["RDT_beingrepaired",(_this select 2),true];sleep (_this select 0);(_this select 1) setVariable ["RDT_beingrepaired",nil,true];};
			};				
		};
	};
};

[] execVM "\RDT_server_dayz\server\RestartMsg.sqf";

[] execFSM "\RDT_server_dayz\fsm\cleanup.fsm";

private _a2Houses = [ //cup buildings
    "Land_HouseV_2I",
    "Land_HouseV_1I1",
    "Land_HouseV_1I1_dam",
    "Land_HouseV_3I1",
    "Land_HouseV_3I2",
    "Land_HouseV_1I2",
    "Land_HouseV_1L2",
    "Land_HouseV_1I3",
    "Land_HouseV_3I3",
    "Land_HouseV_1I4",
    "Land_HouseV_3I4",
    "Land_HouseV_2L",
    "Land_HouseV_2L_dam",
    "Land_HouseV_1L1",
    "Land_HouseV_1T",
    "Land_houseV_2T1",
    "Land_houseV_2T2",
    "Land_HouseV2_01A",
    "Land_HouseV2_01A_dam",
    "Land_HouseV2_01B",
    "Land_HouseV2_01B_dam",
    "Land_HouseV2_02_Interier",
    "Land_HouseV2_02_Interier_dam",
    "Land_HouseV2_02",
    "Land_HouseV2_02",
    "Land_HouseV2_03",
    "Land_HouseV2_03_dam",
    "Land_HouseV2_03B",
    "Land_HouseV2_03B_dam",
    "Land_HouseV2_04_interier",
    "Land_HouseV2_04_interier_dam",
    "Land_HouseV2_04",
    "Land_HouseV2_05",
    "Land_Barn_W_01",
    "Land_Barn_W_01_dam",
    "Land_Barn_W_02",
    "Land_rail_station_big",
    "Land_Farm_WTower",
    "Land_Church_02",
    "Land_Church_02a",
    "Land_Church_03",
    "Land_Church_03_dam",
    "Land_Church_01",
    "Land_Mil_Guardhouse",
    "Land_Mil_Guardhouse_no_interior_CUP",
    "Land_Mil_Barracks",
    "Land_Mil_Barracks_i",
    "Land_Mil_Barracks_no_interior_CUP",
    "Land_Mil_Barracks_L",
    "Land_Mil_ControlTower",
    "Land_Mil_House_no_interior_CUP",
    "Land_Vez",
    "Land_Ind_Pec_03",
    "Land_Ind_Pec_03a",
    "Land_Stodola_open",
    "Land_pila"
];

private _a3Houses = [
    ["Land_House_1B01_F", [-2.19082, -2.27899, 0]],
    ["Land_House_1W01_F", [-0.00138474, -1.09467, 0]],
    ["Land_House_1W01_F", [-0.0279999, -1.67834, 0]],
    ["Land_House_1W08_F", [-0.787834, -1.2926, 0]],
    ["Land_House_1W09_F", [0.710976, -0.0109253, 0]],
    ["Land_House_1W02_F", [-1.09787, -1.00354, 0]],
    ["Land_House_1W06_F", [-1.40576, -0.292542, 0]],
    ["Land_House_1W03_F", [0.708817, 0.00646973, 0]],
    ["Land_House_1W10_F", [-0.00294495, 1.74329, 0]],
    ["Land_House_1W04_F", [-0.00827026, 0.00744629, 0]],
    ["Land_House_1W11_F", [1.84929, 1.72522, 0]],
    ["Land_House_2B01_F", [0.46109, -0.00610352, 0]],
    ["Land_House_2B01_F", [0.401337, -0.166748, 0]],
    ["Land_House_1W05_F", [-1.38541, 0.556824, 0]],
    ["Land_House_1W07_F", [-0.00726318, 2.41974, 0]],
    ["Land_House_2W01_F", [0.320435, -0.079834, 0]],
    ["Land_House_2W02_F", [-1.28995, -0.00408936, 0]],
    ["Land_House_2W03_F", [-0.0329895, -1.18066, 0]],
    ["Land_House_2W03_F", [0.000488281, -1.46698, 0]],
    ["Land_House_2W04_F", [-0.0276794, -1.37115, 0]],
    ["Land_House_2W04_F", [1.15747, -2.27582, 0]],
    ["Land_House_2B02_F", [0.0125122, -0.131409, 0]],
    ["Land_House_2B02_F", [0.0276489, -0.177002, 0]],
    ["Land_House_2B02_F", [0.0163574, -0.113831, 0]],
    ["Land_House_2B02_F", [0.0622559, -0.108948, 0]],
    ["Land_Factory_02_F", [0.251282, -0.72821, 0]],
    ["Land_Factory_02_F", [0.272766, -0.763855, 0]],
    ["Land_House_2B03_F", [0.0889893, -2.11298, 0]],
    ["Land_House_2B03_F", [0.137634, -2.12695, 0]],
    ["Land_House_2B04_F", [-0.0449219, -0.0530396, 0]],
    ["Land_House_2B04_F", [-0.328979, -0.0549927, 0]],
    ["Land_House_2B04_F", [-0.0599976, 0.910217, 0]],
    ["Land_House_1W12_F", [-2.03125, 2.34387, 0]],
    ["Land_Barn_03_large_F", [0.108948, -0.427246, 0]],
    ["Land_Barn_03_large_F", [0.113037, -0.561279, 0]],
    ["Land_Barn_03_small_F", [1.24255, -0.305603, 0]],
    ["Land_Rail_Station_Big_F", [-0.00549316, -0.0487671, 0]],
    ["Land_WaterTower_02_F", [-0.00598145, 0.0202637, 0]],
    ["Land_OrthodoxChurch_02_F", [-2.50645, 0.0505371, 0]],
    ["Land_OrthodoxChurch_02_F", [-2.50895, 0.249878, 0]],
    ["Land_OrthodoxChurch_03_F", [-1.37905, 0.0699463, 0]],
    ["Land_OrthodoxChurch_03_F", [-1.62038, 0.15979, 0]],
    ["Land_Church_05_F", [-0.0385742, -0.00671387, 0]],
    ["Land_GuardHouse_02_F", [-0.198242, -0.000366211, 0]],
    ["Land_GuardHouse_02_grey_F", [-0.199341, -0.00256348, 0]],
    ["Land_Barracks_02_F", [2.00037, 0.124146, 0]],
    ["Land_Barracks_03_F", [1.84033, 0.00421143, 0]],
    ["Land_Barracks_05_F", [1.83887, -0.0112305, 0]],
    ["Land_Barracks_04_F", [0.0240479, -2.21167, 0]],
    ["Land_ControlTower_02_F", [0.0296631, 0.99353, 0]],
    ["Land_Barracks_06_F", [-0.000610352, 1.24219, 0]],
    ["Land_GuardTower_02_F", [-0.0455322, -0.280334, 0]],
    ["Land_CementWorks_01_brick_F", [-3.21716, 0.149109, 0]],
    ["Land_CementWorks_01_grey_F", [-2.77161, 0.869507, 0]],
    ["Land_Barn_02_F", [-1.07214, 0.00463867, 0]],
    ["Land_Sawmill_01_F", [0.204956, -2.38843, 0]]
];


{
    if (isObjectHidden _x) then {continue};
    //get the position, dir and all that good stuff for each cup/a2 building
    private _a3Equivalent = _a2Houses find (typeOf _x);
    //now hide the old one & place the a3 version in its place
    if (_a3Equivalent isEqualTo -1) then {continue};
    private _pitchBank = _x call BIS_fnc_getPitchBank;
    private _selectedBuilding = _a3Houses select _a3Equivalent;
    private _newBuilding = createVehicle [_selectedBuilding select 0, getPosWorld _x, [], 0, "CAN_COLLIDE"];
    //apply the offset to make it line up
    _newBuilding setPosWorld (_x modelToWorldWorld (_selectedBuilding select 1));
    _newBuilding setDir getDir _x;
    [_newBuilding, (_pitchBank select 0), (_pitchBank select 1)] call BIS_fnc_setPitchBank;
    _x hideObjectGlobal true;
    [_x, false] remoteExec ["allowDamage", 0, true];
} forEach (nearestObjects [[worldSize / 2, worldSize / 2], _a2Houses, worldSize * sqrt 2 / 2]);




/*
addMissionEventHandler ["EntityKilled", 
{
	params ["_killed", "_killer", "_instigator"];
	if (isNull _instigator) then {_instigator = _killer}; 
	if (_killer isKindOf "zZombie_Base") then {
		diag_log "[STAT TRACKER] Zombie Killed";
	};	
}];
*/

//0 spawn TFAR_Fnc_TaskForceArrowheadRadioInit;

0 spawn {
	sleep 9900;
	["Server Shutddown in 15 Minutes"] remoteexec ["Systemchat",-2];
	sleep 300;	
	["Server Shutddown in 10 Minutes"] remoteexec ["Systemchat",-2];
	sleep 300;		
	["Server Shutddown in 5 Minutes"] remoteexec ["Systemchat",-2];
	sleep 60;	
	["Server Shutddown in 4 Minutes"] remoteexec ["Systemchat",-2];
	sleep 60;	
	["Server Shutddown in 3 Minutes"] remoteexec ["Systemchat",-2];
	sleep 60;	
	["Server Shutddown in 2 Minutes"] remoteexec ["Systemchat",-2];
	sleep 60;	
	["Server Shutddown in 1 Minutes"] remoteexec ["Systemchat",-2];
	sleep 60;	
	"sdfhjjopwsejr3-fsdyhflkhesrlkh2" serverCommand "#shutdown";
};

/*
replacebuildings = {
	params ["_obj_ori"];
	_debug = false; 

	if (!isServer) exitWith {}; //get the fuck out nonservers

	///////Parallel Arrays to make shit easier
	_oldBuildingsVillage = ["Land_HouseV_2I","Land_HouseV_2L","Land_HouseV2_02","Land_HouseV2_03B","Land_HouseV2_04_interier","Land_HouseV_1I1","Land_HouseV_3I3","Land_HouseV_3I4","Land_HouseV_1I2","Land_HouseV_1I3","Land_HouseV_1I4","Land_HouseV_1L1","Land_HouseV_1L2","Land_HouseV_1T","Land_HouseV_3I1","Land_HouseV_3I2","Land_houseV_2T1","Land_houseV_2T2","Land_HouseV2_01A","Land_HouseV2_01B","Land_HouseV2_03_dam"];
	_newBuildingsVillage = ["Land_House_1B01_F","Land_House_2B01_F","Land_House_2B02_F","Land_House_2B03_F","Land_House_2B04_F","Land_House_1W01_F","Land_House_1W10_F","Land_House_1W11_F","Land_House_1W02_F","Land_House_1W03_F","Land_House_1W04_F","Land_House_1W05_F","Land_House_1W06_F","Land_House_1W07_F","Land_House_1W08_F","Land_House_1W09_F","Land_House_2W01_F","Land_House_2W02_F","Land_House_2W03_F","Land_House_2W04_F","Land_Factory_02_F"];

	_oldBuildingsReligious = ["Land_Church_02a", "Land_Church_02", "Land_Church_01"];
	_newBuildingsReligious = ["Land_OrthodoxChurch_02_F", "Land_OrthodoxChurch_02_F", "Land_Church_05_F"];

	_oldBuildingsMilitary = ["Land_Mil_Guardhouse_no_interior_CUP","Land_Mil_Guardhouse_no_interior_EP1_CUP"];
	_newBuildingsMilitary = ["Land_GuardHouse_02_F","Land_GuardHouse_02_F"];

	_oldBuildingsOther = ["Land_Misc_WaterStation"];
	_newBuildingsOther = ["Land_WaterStation_01_F"];

	// These offsets are too extreme
	_oldBuildingsIndustrial = ["Land_Ind_Pec_03", "Land_Ind_Pec_03b", "Land_Ind_Pec_03a"]; 
	_newBuildingsIndustrial = ["Land_CementWorks_01_brick_F", "Land_CementWorks_01_grey_F","Land_CementWorks_01_brick_F"]; 

	_oldAesthetic = ["Vec03","Haystack_small","Land_seno_balik","Land_Barn_W_01","Land_Barn_W_02","Land_Stodola_open","Haystack"];


	_newAesthetic = ["Land_HayBale_01_F","Land_HayBale_01_F","Land_HayBale_01_F","Land_Barn_03_large_F","Land_Barn_03_small_F","Land_Barn_02_F","Land_StrawStack_01_F"];

	_oldBuildings = _oldBuildingsVillage + _oldBuildingsReligious + _oldBuildingsMilitary + _oldBuildingsOther;
	_newBuildings = _newBuildingsVillage + _newBuildingsReligious + _newBuildingsMilitary + _newBuildingsOther;



	_obj = typeOf _obj_ori;
	_index = _oldBuildings find _obj;
		
	if (_index > -1) then
	{
		//if Object found replace object
		_pos = getPosWorld _obj_ori;
		_dir = getDir _obj_ori;
		_pitchBank = _obj_ori call BIS_fnc_getPitchBank;
		_obj_ori hideObjectGlobal true;
		_new = (_newBuildings select _index) createVehicle _pos;
		_new setPosWorld _pos;
		_new setDir _dir;
		[_new, _pitchBank select 0, _pitchBank select 1] call BIS_fnc_setPitchBank;
	};
};

0 spawn {
	{
		[_x] call replacebuildings;	
		
	}forEach nearestTerrainObjects
	[
		[worldSize / 2, worldSize / 2],
		[],
		worldSize,
		false
	];
	Systemchat "Done";
};
*/
/*
0 spawn {
	execVM "\RDT_server_dayz\DB\fn_db_init.sqf"	
};	
0 spawn {
	execVM "\RDT_server_dayz\DB\fn_db_vehicles.sqf"	
};	
*/
//Load Vehicles
//0 call Cytech_fnc_spawndbvehicles;

/*
//0 spawn TFAR_Fnc_TaskForceArrowheadRadioInit;

if (isServer) then 
{
	{
		if (count (animationNames _x) > 0) then {
			_x enableSimulationGlobal false;
		};
	} 
	forEach nearestTerrainObjects 
	[
		[worldSize/2, worldSize/2], 
		[], 
		worldSize, 
		false
	];
};

cytech_fnc_zed_spawnDamage = {
	params ["_zed", "_target"];
	_target setVariable ["RDT_blood",((_target getVariable ["RDT_blood",0]) - (floor Random [300,400,500])),true];
	_target setVariable ["RDT_lastdamager",[_zed,"Zombie",-1],true];
	[] remoteExec ["RDT_fnc_attackscreenoverlay",_target];
	if ((_target getVariable ["is_infected",false]) && ((round random 100) < 1)) then {
		_target setVariable ["is_infected",false,true];				
	};
};

RDT_server_dayztimer = {
	params ["_timer","_type","_object"];
	partspos = [];
	private _distance = 0.50;
	switch (_type) do {
		case "repair": {
			 [_timer,_object, remoteExecutedOwner] spawn {(_this select 1) setVariable ["RDT_beingrepaired",(_this select 2),true];sleep (_this select 0);(_this select 1) setVariable ["RDT_beingrepaired",nil,true];};
		};				
	};
};



[] spawn ATM_fnc_fetchPlayerHouseBuilding;
*/
