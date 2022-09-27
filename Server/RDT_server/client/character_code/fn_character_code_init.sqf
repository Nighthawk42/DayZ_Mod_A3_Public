cytech_fnc_runfirsttime = {
	player setVariable ["Cytech_firsttime",false,true];
	_player = player;
	_medical = [false,false,false,false,false,false,false,12000,[],[0,0],0,[0,0]]; 
	_player setVariable["USEC_isDead",(_medical select 0),true];
	_player setVariable["NORRN_unconscious", (_medical select 1), true];
	_player setVariable["USEC_infected",(_medical select 2),true];
	_player setVariable["USEC_injured",(_medical select 3),true];
	_player setVariable["USEC_inPain",(_medical select 4),true];
	_player setVariable["USEC_isCardiac",(_medical select 5),true];
	_player setVariable["USEC_lowBlood",(_medical select 6),true];
	_player setVariable["USEC_BloodQty",(_medical select 7),true];
	_player setVariable["unconsciousTime",(_medical select 10),true];

	_player setVariable["zombieKills",0,true];
	_player setVariable["humanKills",0,true];
	_player setVariable["banditKills",0,true];
	_player setVariable["headShots",0,true];	
	_player setVariable["humanity",0,true];		
	
	_pos = [
		[(worldSize / 2), (worldSize / 2), 0],
		0,
		(worldSize / 2),
		3,
		0,
		20,
		1 
	] call BIS_fnc_findSafePos;
	_player setpos _pos;
	[_player,((_player getVariable ["cytech_info",[]] select 0 select 3) select 2)] remoteExecCall ["setface",-2];
	_player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];
	_player adduniform ((_player getVariable ["cytech_info",[]] select 0 select 3) select 5);
	_player addheadgear ((_player getVariable ["cytech_info",[]] select 0 select 3) select 3);
	_player addgoggles ((_player getVariable ["cytech_info",[]] select 0 select 3) select 4);	
	
	_player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];
	_inv = getArray (configFile >> "CfgSurvival" >> "Inventory" >> "Default" >> (selectrandom["civilian_1","civilian_2","civilian_3","civilian_4","civilian_5"]));
	_player setunitloadout _inv;
	
	player setVariable ["cytech_newplayer",true];
	0 spawn RDT_fnc_spawned_init;
};

/*
cytech_fnc_runfirsttime = {
	disableSerialization;
	player allowDammage false;

	//rt_endcreationpos = [SetposASL,Setdir];
	rt_endcreationpos = [[3624.86,13116.6,10.0688],274.716];

	//CHARACTER CREATION CLASSES
	//((configfile >> 'Cfgfaces'>> 'man_a3' ) call BIS_fnc_getCfgSubClasses);
	cytech_faceclass = ((configfile >> 'Cfgfaces'>> 'man_a3' ) call BIS_fnc_getCfgSubClasses);
	cytech_faceclass deleteAt 0;
	cytech_faceclass deleteAt 0;

	glasses_names = [];
	glasses_classnames = 
	[
		"G_Spectacles_Tinted",
		"G_Squares",
		"G_Squares_Tinted",
		"G_Sport_Greenblack",
		"G_Sport_Blackred",
		"G_Sport_BlackWhite",
		"G_Sport_Blackyellow",
		"G_Sport_Red",
		"G_Spectacles",
		"G_Shades_Red",
		"G_Shades_Green",
		"G_Shades_Blue",
		"G_Shades_Black",
		"G_Lowprofile"

	];
	hats_names = [];
	hats_classnames = 
	[
		"H_Cap_blk",
		"H_Cap_grn",
		"H_Cap_oli",
		"H_Cap_red",
		"RDS_woodlander_cap1",
		"RDS_woodlander_cap2",
		"RDS_woodlander_cap3",
		"RDS_woodlander_cap4"

	];
	clothing_classnames = 
	[
		"RDT_PMC_Spawn","RDT_PMC_Spawn_1"
	];
	jobs_classnames = 
	[
		"Soldier",
		"Farmer",
		"Unemployed"
	];
	jobs_classnames_str = 
	[
		"(Unused) Better Accuracy",
		"(Unused) Better Crop Yields",
		"(Unused) Slower Metabolism"
	];
	hobby_classnames = 
	[
		"Running",
		"Sports Shooting"
	];
	hobby_classnames_str = 
	[
		"(Unused) More Stamina",
		"(Unused) Less ADS Shake"
	];

	player setVariable ["Cytech_firsttime",true,true];
	player_firstname = "First name";
	player_lastname = "Last name";
	player_face = (cytech_faceclass select 0);

	player_hat = "";
	player_glass = "";
	player_clothing = "";
	player_job = "";
	player_hobby = "";
	 
	removeHeadgear player; 
	removeVest player; 
	removeUniform player; 
	removeGoggles player; 
	 
	//createcam 
	firsttimecam = "camera" camCreate [0,0,0]; 
	firsttimecam camPrepareTarget [-55615.08,83552.13,10]; 
	firsttimecam camPreparePos [580.40,835.57,1.5]; 
	firsttimecam camPrepareFOV 0.500; 
	firsttimecam camCommitPrepared 0; 
	firsttimecam cameraEffect ["internal", "BACK"]; 
	player switchMove "Acts_CivilIdle_1";
	firtimeeventhander = player addEventHandler ['AnimDone',{
		params ['_unit'];
		_unit switchMove "Acts_CivilIdle_1";
	}];
	
	player setpos [579.389,836.949,0.5]; 
	player setdir 153.751; 
	showCinemaBorder false;
	cutText ["","BLACK IN"];	

	cytech_rt_firstimemenu_gui =
	[
		["RscText","",[0.159687 * safezoneW + safezoneX,0.203 * safezoneH + safezoneY,0.128906 * safezoneW,0.132 * safezoneH],[-1,-1,-1,0.7],1002,"false"],
		["RscText","Character Customization",[0.159687 * safezoneW + safezoneX,0.181 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,1],1001,"false"],
		["RscButtonmenu","Confirm And Continue",[0.407187 * safezoneW + safezoneX,0.819 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,1,-1,0.8],2401,"true"],	
		["RscText","Items",[0.716563 * safezoneW + safezoneX,0.181 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,1],1004,"false"],
		["RscText","",[0.716562 * safezoneW + safezoneX,0.203 * safezoneH + safezoneY,0.128906 * safezoneW,0.132 * safezoneH],[-1,-1,-1,0.7],1005,"false"],
		["RscText","",[0.407187 * safezoneW + safezoneX,0.797 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.7],1010,"false"],
		["RscText","Confirm:",[0.407187 * safezoneW + safezoneX,0.775 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,-1,1],1011,"false"],
		["RscText","Your Character Name",[0.396875 * safezoneW + safezoneX,0.104 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,-1,1],1036,"false"],
		["RscText","Your Full name is: ",[0.407187 * safezoneW + safezoneX,0.797 * safezoneH + safezoneY,0.201094 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.1],1022,"false"],
		["RscText","",[0.396875 * safezoneW + safezoneX,0.126 * safezoneH + safezoneY,0.20625 * safezoneW,0.033 * safezoneH],[-1,-1,-1,0.7],1012,"false"],
		["RscEdit","First Name",[0.396875 * safezoneW + safezoneX,0.126 * safezoneH + safezoneY,0.0979687 * safezoneW,0.033 * safezoneH],[-1,-1,-1,-1],1400,"true"],
		["RscText","Clothing:",[0.716562 * safezoneW + safezoneX,0.203 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1035,"false"],
		["RscEdit","Last Name",[0.505156 * safezoneW + safezoneX,0.126 * safezoneH + safezoneY,0.0979687 * safezoneW,0.033 * safezoneH],[-1,-1,-1,-1],1401,"true"],
		["RscCombo","",[0.716562 * safezoneW + safezoneX,0.225 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2106,"true"],
		["RscCombo","",[0.716562 * safezoneW + safezoneX,0.269 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2107,"true"],
		["RscText","Hat:",[0.716563 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1037,"false"],
		["RscText","Glasses:",[0.716562 * safezoneW + safezoneX,0.291 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1038,"false"],
		["RscCombo","",[0.716562 * safezoneW + safezoneX,0.313 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2108,"true"],
		["RscText","Face:",[0.159687 * safezoneW + safezoneX,0.203 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1003,"false"],
		["RscCombo","",[0.159687 * safezoneW + safezoneX,0.225 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2105,"true"],
		["RscText","Previous Job:",[0.159687 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1006,"false"],
		["RscCombo","",[0.159687 * safezoneW + safezoneX,0.269 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2109,"true"],
		["RscText","Hobby:",[0.159687 * safezoneW + safezoneX,0.291 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1007,"false"],
		["RscCombo","",[0.159687 * safezoneW + safezoneX,0.313 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,-1],2110,"true"]
	];
		//onLBSelChanged = |[] spawn fnc_rtftu;|]
		//button ;","onButtonClick = |[] spawn fnc_rtftif; player_firstname = ctrltext ((ctrlParent (_this select 0)) displayCtrl 1400); player_lastname = ctrltext ((ctrlParent (_this select 0)) displayCtrl 1401);|


	private _display = findDisplay 46 createDisplay "RscDisplayEmpty";
	_escKeyEH = _display displayAddEventHandler ["KeyDown", "if (((_this select 1) == 1) && (!isServer)) then {true} else {false};"];
	cytech_rt_firstimemenu = [];
	{
		_part = _display ctrlCreate [(_x select 0), (_x select 4)];
		_part ctrlSetText (_x select 1);	
		_part ctrlSetPosition (_x select 2);		
		_part ctrlSetBackgroundColor (_x select 3);
		if (_x select 5 isEqualTo "true") then {
			switch (_x select 0) do {
				case "RscCombo": { 
					_part ctrlSetEventHandler ["LBSelChanged", "_this call cytech_fnc_rtftu;"];
				};
				case "RscEdit": { 
					_part ctrlSetEventHandler ["KillFocus", "_this call cytech_fnc_rtftu;"];
				};			
				case "RscButtonmenu": { 
					_part ctrlSetEventHandler ["ButtonClick", "[] spawn Cytech_fnc_final;"];
					_part ctrlSetBackgroundColor [-1,1,-1,0.8];				
					_part ctrlSetActiveColor [-1, -1, -1, 1];
				};
			};
		};
		_part ctrlCommit 0;
		cytech_rt_firstimemenu pushback _part;
	} forEach cytech_rt_firstimemenu_gui;
	cytech_rt_firstimemenu pushback _display;

		

		
	//Face: 19	
	//Job: 21	
	//Hobby: 23	
	//Clothing: 13	
	//Hat: 14	
	//Glasses: 17	
	_facelist = (cytech_rt_firstimemenu select 19);
	_joblist = (cytech_rt_firstimemenu select 21);
	_Hobbylist = (cytech_rt_firstimemenu select 23);
	_Clothinglist = (cytech_rt_firstimemenu select 13);
	_Hatlist = (cytech_rt_firstimemenu select 14);
	_Glasseslist = (cytech_rt_firstimemenu select 17);	

		
	//Face Stuff
	{
		_facelist lbAdd format["%1", gettext (configfile >> 'Cfgfaces'>> 'man_a3' >> _x >> "displayname")];
	} forEach cytech_faceclass;
		

	//Respawn ITems
	//Clothing
	{
		_Clothinglist lbAdd format["%1", gettext(configFile >> 'CfgWeapons'>> _x >> "displayName")];
	} forEach clothing_classnames;

	//glasses
	{
		_Glasseslist lbAdd format["%1", gettext(configFile >> 'CfgGlasses'>> _x >> "displayName")];
	} forEach glasses_classnames;

	//hats	
	{
		_Hatlist lbAdd format["%1", gettext(configFile >> 'CfgWeapons'>> _x >> "displayName")];
	} forEach hats_classnames;

	//jobs	
	{
		_joblist lbAdd format["%1",_x];
	} forEach jobs_classnames;

	//hobby	
	{
		_Hobbylist lbAdd format["%1",_x];
	} forEach hobby_classnames;

	_facelist lbSetCurSel 0;
	_joblist lbSetCurSel 0;
	_Hobbylist lbSetCurSel 0;
	_Clothinglist lbSetCurSel 0;
	_Hatlist lbSetCurSel 0;
	_Glasseslist lbSetCurSel 0;
};

cytech_fnc_rtftu = {
	disableSerialization;
	systemchat str _this;
	switch (str (_this select 0)) do {
		case "Control #2108": { 
			systemchat "glasses";
			removeGoggles player; 
			player addgoggles (glasses_classnames select (_this select 1));
			player_glass = (glasses_classnames select (_this select 1));				
		};
		case "Control #2107": { 
			removeHeadgear player; 
			systemchat "hat"; 
			player addHeadgear (hats_classnames select (_this select 1));	
			player_hat = (hats_classnames select (_this select 1));					
		};
		case "Control #2105": { 
			systemchat "face";
			player setface (cytech_faceclass select (_this select 1));	
			player_face = (cytech_faceclass select (_this select 1));
		};
		case "Control #2110": { 
			systemchat "hobby"; 
			player_hobby  = (hobby_classnames select (_this select 1));			
		};
		case "Control #2109": { 
			systemchat "Job" ;
			player_job  = (jobs_classnames select (_this select 1));
			clothing_classnames = 
			[
				"RDT_PMC_Spawn"
			];
			switch (jobs_classnames select (_this select 1)) do {
				case "Soldier": { 
					systemchat "Soldier";
					clothing_classnames = 
					[
						"RDT_PMC_Spawn","RDT_PMC_Spawn_1","RDT_PMC_Spawn_2","RDT_PMC_Spawn_3"
					];
				};		
				case "Farmer": { 
					systemchat "Farmer";				
					clothing_classnames = 
					[
						"RDT_PMC_Spawn","RDT_PMC_Spawn_1","RDT_PMC_Spawn_2","RDT_PMC_Spawn_3"
					];
				};
				case "Unemployed": { 
					systemchat "Unemployed";				
					clothing_classnames = 
					[
						"RDT_PMC_Spawn","RDT_PMC_Spawn_1","RDT_PMC_Spawn_2","RDT_PMC_Spawn_3"
					];
				};
				case "Tesco Worker": { 
					systemchat "Worker";
					clothing_classnames = 
					[
						"RDT_PMC_Spawn","RDT_PMC_Spawn_1","RDT_PMC_Spawn_2","RDT_PMC_Spawn_3"
					];
				};
			};
			lbClear (cytech_rt_firstimemenu select 13);
			{
				(cytech_rt_firstimemenu select 13) lbAdd format["%1", gettext(configFile >> 'CfgWeapons'>> _x >> "displayName")];
			} forEach clothing_classnames;
			(cytech_rt_firstimemenu select 13) lbSetCurSel 0;
			removeUniform player; 
			player forceaddUniform (clothing_classnames select 0);			
		};
		case "Control #2106": {
			removeUniform player; 
			systemchat "clothing";
			player forceaddUniform (clothing_classnames select (_this select 1));
			player_clothing = (clothing_classnames select (_this select 1));
		};		
		case "Control #1400": {
			player_firstname = (ctrlText (cytech_rt_firstimemenu select 10));
			(cytech_rt_firstimemenu select 8) ctrlSetText format["Your Full name is %1 %2",(ctrlText (cytech_rt_firstimemenu select 10)),(ctrlText (cytech_rt_firstimemenu select 12))];
		};		
		case "Control #1401": {
			player_lastname = (ctrlText (cytech_rt_firstimemenu select 12));
			(cytech_rt_firstimemenu select 8) ctrlSetText format["Your Full name is %1 %2",(ctrlText (cytech_rt_firstimemenu select 10)),(ctrlText (cytech_rt_firstimemenu select 12))];
		};
		default {
			systemchat "default"; 
		};
	};	
	
};
		
Cytech_fnc_final = {
	disableSerialization;

	life_youfuckedup = false;
	_data = [player_firstname,player_lastname,player_face,player_hat,player_glass,player_clothing,player_job,player_hobby];
	_data_str = ["First name","Last name","Face","Hat","Glasses","Clothing","Job","Hobby"];	
	_data_count = 0;
	{
		if (_x isEqualTo "") then {
			Systemchat format "You have not set %1",(_data_str select _data_count);
			life_youfuckedup = true;
		};
		_data_count = _data_count + (1);		
	}	foreach _data;

	if (player_firstname == "First Name") then {
		life_youfuckedup = true;
		Systemchat "Put a First name in. Please Try Again!";
	};

	if (player_firstname == "Last Name") then {
		life_youfuckedup = true;
		Systemchat "Put a last name in. Please Try Again!";
	};

	if (life_youfuckedup) exitwith {};
	Systemchat "Checks passed";		
	systemChat str _data;
	(cytech_rt_firstimemenu select 24) closeDisplay 0;
	[] spawn {	
		cytech_rt_firstimemenu_gui =
		[
			["RscText","Character Details:",[0.159687 * safezoneW + safezoneX,0.159 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,1],1001,"false"],
			["RscButtonmenu","Confirm And Begin Surviving!",[0.407187 * safezoneW + safezoneX,0.841 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,1,-1,0.7],2401,"true"],
			["RscText","This is your final chance to go back and edit",[0.407187 * safezoneW + safezoneX,0.775 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.7],1022,"false"],
			["RscText","your character",[0.407187 * safezoneW + safezoneX,0.797 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.7],1004,"false"],
			["RscText","Warning:",[0.407187 * safezoneW + safezoneX,0.753 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[1,-1,-1,0.7],1005,"false"],
			["RscText",(format ["Name: %1 %2",player_firstname,player_lastname]),[0.159687 * safezoneW + safezoneX,0.181 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText",(format ["Face: %1",gettext (configfile >> 'Cfgfaces'>> 'man_a3' >> Player_face >> "displayname")]),[0.159687 * safezoneW + safezoneX,0.203 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText",(format ["Previous Job: %1",Player_job]),[0.159687 * safezoneW + safezoneX,0.225 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText",(format ["Previous Hobby: %1",Player_hobby]),[0.159687 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText","Perks:",[0.159687 * safezoneW + safezoneX,0.269 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText",(format ["	- %1",hobby_classnames_str select(hobby_classnames find Player_hobby)]),[0.159687 * safezoneW + safezoneX,0.291 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscText",(format ["	- %1",jobs_classnames_str select(jobs_classnames find Player_job)]),[0.159687 * safezoneW + safezoneX,0.313 * safezoneH + safezoneY,0.128906 * safezoneW,0.022 * safezoneH],[-1,-1,-1,0.8],1008,"false"],
			["RscButtonmenu","Go Back to Character Creation",[0.407187 * safezoneW + safezoneX,0.819 * safezoneH + safezoneY,0.20625 * safezoneW,0.022 * safezoneH],[-1,-1,1,0.7],2401,"true"]

		];
		
		private _display = findDisplay 46 createDisplay "RscDisplayEmpty";
		//_escKeyEH = _display displayAddEventHandler ["KeyDown", "if (((_this select 1) == 1) && (!isServer)) then {true} else {false};"];
		cytech_rt_firstimemenu = [];
		{
			_part = _display ctrlCreate [(_x select 0), (_x select 4)];
			_part ctrlSetText (_x select 1);	
			_part ctrlSetPosition (_x select 2);		
			_part ctrlSetBackgroundColor (_x select 3);
			if (_x select 5 isEqualTo "true") then {
				switch (_x select 1) do {
					case "Confirm And Begin Surviving!": { 
						_part ctrlSetEventHandler ["ButtonClick", "player removeEventHandler ['AnimDone', firtimeeventhander];closeDialog 0;[player,[player_firstname,player_lastname,player_face,player_hat,player_glass,player_clothing,player_job,player_hobby]] remoteExec ['cytech_fnc_runfirstsave_server',2];0 call cytech_fnc_spawnplayer;"];
						_part ctrlSetBackgroundColor [-1,1,-1,0.8];				
						_part ctrlSetActiveColor [-1, -1, -1, 1];
					};
					case "Go Back to Character Creation": { 
						_part ctrlSetEventHandler ["ButtonClick", "player removeEventHandler ['AnimDone', firtimeeventhander];closeDialog 0;[] spawn cytech_fnc_runfirsttime;"];
						_part ctrlSetBackgroundColor [1,-1,-1,0.8];				
						_part ctrlSetActiveColor [-1, -1, -1, 1];
					};			
				};
			};
			_part ctrlCommit 0;
			cytech_rt_firstimemenu pushback _part;
		} forEach cytech_rt_firstimemenu_gui;
		cytech_rt_firstimemenu pushback _display;	
	};
};	

cytech_fnc_spawnplayer = {
	player switchmove "";
	firsttimecam cameraEffect ["terminate","back"];
	camDestroy firsttimecam;
	systemChat format ["%1 %2 %3",(cytech_rt_firstimemenu select 12),(cytech_rt_firstimemenu select 11),cytech_rt_firstimemenu];
	(cytech_rt_firstimemenu select 13) closeDisplay 0;
	player setVariable ["Cytech_firsttime",false,true];
	_player = player;
	_medical = [false,true,false,true,true,false,true,12000,[],[0,0],0,[0,0]];
	_player setVariable["USEC_isDead",(_medical select 0),true];
	_player setVariable["NORRN_unconscious", (_medical select 1), true];
	_player setVariable["USEC_infected",(_medical select 2),true];
	_player setVariable["USEC_injured",(_medical select 3),true];
	_player setVariable["USEC_inPain",(_medical select 4),true];
	_player setVariable["USEC_isCardiac",(_medical select 5),true];
	_player setVariable["USEC_lowBlood",(_medical select 6),true];
	_player setVariable["USEC_BloodQty",(_medical select 7),true];
	_player setVariable["unconsciousTime",(_medical select 10),true];		
	_pos = [
		[(worldSize / 2), (worldSize / 2), 0],
		0,
		(worldSize / 2),
		3,
		0,
		20,
		1 
	] call BIS_fnc_findSafePos;
	_player setpos _pos;
	[_player,((_player getVariable ["cytech_info",[]] select 0 select 3) select 2)] remoteExecCall ["setface",-2];
	_player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];
	_player adduniform ((_player getVariable ["cytech_info",[]] select 0 select 3) select 5);
	_player addheadgear ((_player getVariable ["cytech_info",[]] select 0 select 3) select 3);
	_player addgoggles ((_player getVariable ["cytech_info",[]] select 0 select 3) select 4);	
	
	player setVariable ["cytech_newplayer",true];
	0 spawn RDT_fnc_spawned_init;
};
*/