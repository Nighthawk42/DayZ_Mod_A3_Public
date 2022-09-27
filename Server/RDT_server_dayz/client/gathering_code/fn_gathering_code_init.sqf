Cytech_fnc_notification_system = {
	systemchat format ["Dev Notifcation: %1",_this select 0];
};
//Cytech_Debug = true;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// Melee ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cytech_fnc_detect_melee  = {
	_gridins = [];
	_gridarray = [2,15,_this];
	for "_i" from (-(_gridarray select 1)) to (_gridarray select 1) do { 
		private _pos1 = [(getPosASL player) select 0,(getPosASL player) select 1,((getPosASL player) select 2) + (1.5)];
		private _pos2 = [(player getRelPos [(_gridarray select 0),_i]) select 0,(player getRelPos [(_gridarray select 0),_i]) select 1,((ASLTOAGL _pos1) select 2) - (_gridarray select 2)];
		_pos2 = _pos2 vectorAdd [0, 0, 1];		
		private _ins = lineIntersectsSurfaces [ 
			_pos1, 
			AGLtoASL _pos2,
			player
		] select 0 select 2; 	
		if (isnil "_ins") then {
			if !(isnil "Cytech_DEBUG") then {drawLine3D [ASLTOAGL _pos1,_pos2, [1,0,0,1]];}; 
		} else {
			_gridins pushBackUnique _ins;
			if !(isnil "Cytech_DEBUG") then {drawLine3D [ASLTOAGL _pos1,_pos2, [0,1,0,1]];};
		};
	};
	_gridins
};
if !(isnil "Cytech_DEBUG") then {
	onEachFrame { 
		systemchat str (2 call cytech_fnc_detect_melee);		
	};
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// Mining ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if !(isnil "Cytech_DEBUG") then {
	diag_log ":: Cytech SCRIPT - Cytech_mining is running!";
};

[] spawn {
	waitUntil {!isNull player && player isequalto player};
	waitUntil {!(isNull (findDisplay 46))};
	if !(isnil "Cytech_fnc_Mine") exitWith {};

	cytech_re_melee_damage = {
		r_player_blood = r_player_blood - 500;
		player setVariable["USEC_BloodQty",r_player_blood,true];
	};
	
	Cytech_fnc_tool_melee = {
		_target = _this select 0;
		systemChat str _target;
		if (isplayer _target) exitWith {
			[] remoteExecCall ["cytech_re_melee_damage",_target];
			systemChat format["Dev: Hit Player %1",(_target getVariable "RDT_blood")];
		};
		_target setDamage ((damage _target) + (0.5));
		systemChat format["Dev: Hit Zombie %1",(damage _target)];
	};
	
	Cytech_fnc_Mine = {
		if (vehicle player isequalto player) exitwith {};
		_vanilla_rocks = (getArray (MissionconfigFile >> "mining_config" >> "vanilla_rocks"));
		_Cytech_rocks = (getArray (MissionconfigFile >> "mining_config" >> "Cytech_rocks"));
		_Cytech_rock_textures = (getArray (MissionconfigFile >> "mining_config" >> "Cytech_rock_textures"));
		_Cytech_all_rocks = _Cytech_rocks + _vanilla_rocks;

		_rock = ((getModelInfo (_this select 0)) select 1);
		if !(isnil "Cytech_Debug") then {

		};			
		if (((_Cytech_all_rocks find (_rock)) isequalto -1)) exitwith {
			systemChat "fucked";
			//Cytech_Swing = false;
		};

		switch true do {
			case ((_vanilla_rocks find (_rock)) > -1): {
				if !(isnil "Cytech_Debug") then {
					systemchat str (_vanilla_rocks select (_vanilla_rocks find (_rock)) + (1));
				};
				_item = (_vanilla_rocks select (_vanilla_rocks find (_rock)) + (1));
				player additem _item;
				systemchat "yesssss you collected a wock";
				uisleep 1;
				//Cytech_Swing = false;
			};
			case ((_Cytech_rocks find (_rock)) > -1): {
				_texture = toLower ((getObjectTextures (_this select 0)) select 0);
				if ((str ((getObjectTextures (_this select 0)) select 0) find "mpmissions\__" > -1)) then {
					_texture = toLower ([((getObjectTextures (_this select 0)) select 0), 26] call BIS_fnc_trimString);
				};
				if !(isnil "Cytech_Debug") then {
					systemchat str (_texture);
				};
				if !((_Cytech_rock_textures find _texture) isequalto -1) then {
					if !(isnil "Cytech_Debug") then {
						systemchat str (_Cytech_rock_textures select ((_Cytech_rock_textures find _texture) + (1)));
					};
					_item = (_Cytech_rock_textures select ((_Cytech_rock_textures find _texture) + (1)));
					player additem _item;
					systemchat "yesssss you collected a wock";

					[format["%2%1%3",localize (getText(missionConfigFile >> ((getText (MissionconfigFile >> "mining_config" >> "vitemsclassname"))) >> _item >> "displayName")),(getText(MissionconfigFile >> "mining_config" >> "pickupitem")),(getText(MissionconfigFile >> "mining_config" >> "pickupitem2"))], false,"slow"] call Cytech_fnc_notification_system;

					uisleep 1;
					//Cytech_Swing = false;
				};
			};
			default {Cytech_Swing = false;};
		};
	};

	If (isnil "Cytech_Swing") then {Cytech_Swing = false;};

	Cytech_fnc_mouseHandlermining = {
		params [
			"_ctrl",
			"_code",
			"_shift",
			"_ctrlKey",
			"_alt"
		];

		private _handled = false;

		if (dialog) exitwith {};

		if !(isnil "Cytech_Debug") then {
			hintSilent str _code;
		};
		if (vehicle player isequalto player) exitwith {};
		if (!Cytech_Swing && {_code isEqualTo 0} && {(currentWeapon player) isequalto "Cytech_Melee_Pickaxe"} && (vehicle player isequalto player)) then
		{
			Cytech_Swing = true;
			player playAction "Cytech_Swing_Pickaxe";
			0 spawn {Cytech_Swing = true; sleep 1; Cytech_Swing = false;};
			_pos1 = [(getPosASL player) select 0,(getPosASL player) select 1,((getPosASL player) select 2) + (1)];
			_pos2 = [(player getRelPos [1.5,0]) select 0,(player getRelPos [1.5,0]) select 1,((ASLTOAGL _pos1) select 2) - (1.2)];
			_pos2 = _pos2 vectorAdd [0, 0, 1];
			_ins = lineIntersectsWith   [ 
				_pos1, 
				AGLtoASL _pos2
			] select 0; 
			if !(isnil "Cytech_Debug") then {
				systemchat str _ins;
			};			
			if (!isnull _ins && {(str ((getModelInfo _ins) # 1) find "rock" > -1)}) then {
				[player,"Pickaxe"] remoteexec ["say3d",-2];
				[_ins] spawn Cytech_fnc_Mine;
			};
			if (count ((2 call cytech_fnc_detect_melee) select {_x iskindof "man"}) > 0) then {
				{[_x] spawn Cytech_fnc_tool_melee;}foreach ((2 call cytech_fnc_detect_melee) select {_x iskindof "man"});
			};			
		};
		_handled
	};

	if (isnil "Cytech_Miningkeys") then {
		Cytech_Miningkeys = (findDisplay 46) displayAddEventHandler ["MouseButtonDown", "call Cytech_fnc_mouseHandlermining;"];
	};

};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////// Woodcutting //////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if !(isnil "Cytech_DEBUG") then {
	diag_log ":: Cytech SCRIPT - Cytech_woodcutting is running!";
};

[] spawn {
	waitUntil {!isNull player && player isequalto player};
	waitUntil {!(isNull (findDisplay 46))};
	if !(isnil "Cytech_fnc_Chop") exitWith {};
	if (isnil "Cytech_Swing") then {Cytech_Swing = false;};
	
	Cytech_fnc_Chop = {
		_tree = _this select 1;
		if ({if (player inArea _x) then {true};} foreach ((getArray 	(MissionconfigFile >> "woodcutting_config" >> "blacklist_markers")))) exitWith {[((getText 	(MissionconfigFile >> "woodcutting_config" >> "cantcuthere"))), true,"slow"] call Cytech_fnc_notification_system;};	
		if (vehicle player isequalto player) exitwith {};
		if (dialog) exitwith {};
		[player,"Axe"] remoteexec ["say3d",-2];
		if !(isnil "Cytech_Debug") then {
			systemChat str "Cut";
		};
		if (((getModelInfo _tree) select 1) isequalto ((getText 	(MissionconfigFile >> "woodcutting_config" >> "pilemodel")))) exitwith {
			_trees = (getArray 	(MissionconfigFile >> "woodcutting_config" >> "tree_types"));
			_tree_type = ((getModelInfo cursorObject) select 1);
			_item = (_tree getVariable ["wood",[0,((getText 	(MissionconfigFile >> "woodcutting_config" >> "defaultwood")))]]) select 1;
			if !(isnil "Cytech_Debug") then {
					systemchat str (_item);
			};	
			_tree setVariable ["wood",
				[
					(((_tree getVariable ["wood",[0,((getText 	(MissionconfigFile >> "woodcutting_config" >> "pilemodel")))]]) select 0) - (1)),
					((_tree getVariable ["wood",[0,((getText 	(MissionconfigFile >> "woodcutting_config" >> "pilemodel")))]]) select 1)
				]
			];
			
			if(([_item,1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff) == 0) exitWith {[((getText	(MissionconfigFile >> "woodcutting_config" >> "fullinv"))), true,"slow"] call Cytech_fnc_notification_system;  };		
			[true,_item,1] call life_fnc_handleInv; 
			[format["%2%1%3",localize (getText(missionConfigFile >> ((getText 	(MissionconfigFile >> "woodcutting_config" >> "vitemsclassname"))) >> _item >> "displayName")),(getText	(MissionconfigFile >> "woodcutting_config" >> "pickupitem")),(getText	(MissionconfigFile >> "woodcutting_config" >> "pickupitem2"))], false,"slow"] call Cytech_fnc_notification_system;
			if ((((_tree getVariable ["wood",[0,((getText 	(MissionconfigFile >> "woodcutting_config" >> "pilemodel")))]]) select 0) - (1)) < 1) then {deleteVehicle _tree;};
		};
		
		_tree setdamage (damage _tree) + ((getnumber (MissionconfigFile >> "woodcutting_config" >> "damagetotree"))); 
		if (((damage _tree) > 0.9) && !(_tree getVariable ["isdead",false])) then {			
			[_tree,"fallingtree"] remoteexec ["say3d",-2];	
			_tree setVariable ["isdead",true,true];
			[_tree] remoteExec ["Cytech_fnc_updatetree",2];
		};	
	};



	Cytech_fnc_mouseHandlerwoodcutting = {
		private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh"];
		params ["_ctrl", "_code", "_shift", "_ctrlKey", "_alt"];
		_handled = false;
			
		if !(isnil "Cytech_Debug") then {
			hintSilent str _code;
		};
		switch (_code) do {
			case 0:
			{
				if (((currentWeapon player) isequalto "Cytech_Melee_Axe") && !Cytech_Swing) then {
					player playAction "Cytech_Swing_Pickaxe"; 
					0 spawn {Cytech_Swing = true; sleep 1; Cytech_Swing = false;};
					_pos1 = [(getPosASL player) select 0,(getPosASL player) select 1,((getPosASL player) select 2) + (1)];
					_pos2 = [(player getRelPos [1.5,0]) select 0,(player getRelPos [1.5,0]) select 1,((ASLTOAGL _pos1) select 2) - (1.2)];
					_pos2 = _pos2 vectorAdd [0, 0, 1];
					_ins = lineIntersectsWith   [ 
						_pos1, 
						AGLtoASL _pos2
					] select 0; 
					if (
							(
								(str ((getModelInfo _ins) select 1) find "tree" > -1) OR
								(((getModelInfo _ins) select 1) in ((getArray 	(MissionconfigFile >> "woodcutting_config" >> "tree_types")))) OR 
								(((getModelInfo _ins) select 1) isequalto ((getText 	(MissionconfigFile >> "woodcutting_config" >> "pilemodel"))))
							)
						) then {
						//[((getModelInfo _ins) select 1), _ins] call Cytech_fnc_Chop;
						0 spawn player_chopWood;
					};
					if (!isnull _ins && (_ins iskindof "man")) then {
						[_ins] spawn Cytech_fnc_tool_melee;
					};
					if (count ((2 call cytech_fnc_detect_melee) select {_x iskindof "man"}) > 0) then {
						{[_x] spawn Cytech_fnc_tool_melee;}foreach ((2 call cytech_fnc_detect_melee) select {_x iskindof "man"});
					};						
				};
			};
		};
		_handled;
	};

	if (isnil "Cytech_woodcuttingkeys") then {
		Cytech_woodcuttingkeys = (findDisplay 46) displayAddEventHandler ["MouseButtonDown", " call Cytech_fnc_mouseHandlerwoodcutting;"];
	};

};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////// Fishing ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if !(isnil "Cytech_DEBUG") then {
	diag_log ":: Cytech SCRIPT - Cytech_fishing is running!";
};

[] spawn {
	waitUntil {!isNull player && player == player};
	waitUntil {!(isNull (findDisplay 46))};

	if (isnil "Cytech_Fishing_timeout") then {
		Cytech_Fishing_timeout = false;
		Cytech_has_fish = false;
		Cytech_Fishing_timeout2 = false;
		Cytech_Fishing_Run_Loop = false;
	};	
	
	Cytech_fnc_add_fish = {
		private _chance = floor(random 100);
		private _rewards = switch(true) do 
		{
			case(_chance > 50): {(getarray(MissionconfigFile >> "fishing_config" >> "Fishing_common"));};
			case((_chance < 51) && (_chance > 15)): {(getarray(MissionconfigFile >> "fishing_config" >> "Fishing_uncommon"));};
			case((_chance < 16) && (_chance > 5)): {(getarray(MissionconfigFile >> "fishing_config" >> "Fishing_rare"));};
			case((_chance < 6) && (_chance >= 0)): {(getarray(MissionconfigFile >> "fishing_config" >> "Fishing_veryrare"));};
			default {(getarray(MissionconfigFile >> "fishing_config" >> "Fishing_common"));};
		};
		private _item = selectRandom _rewards;
		if (!isnil "Cytech_Debug") then {	
			systemchat str _item;
		};
		//if(([_item,1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff) == 0) exitWith {["Your inventory is full!", true,"slow"] call Cytech_fnc_notification_system;  };		
		//[true,_item,1] call life_fnc_handleInv; 
		//[format["%2%1%3",localize (getText(missionConfigFile >> ((gettext(MissionconfigFile >> "fishing_config" >> "vitemsclassname"))) >> _item >> "displayName")),(gettext(MissionconfigFile >> "fishing_config" >> "pickupitem")),(gettext(MissionconfigFile >> "fishing_config" >> "pickupitem2"))], true,"slow"] call Cytech_fnc_notification_system;
	};
	

	["Cytech_FishingFrames", "onEachFrame", 
	{
		if (currentweapon player isequalto "Cytech_Melee_FishingRod" && isnil "Cytech_Fish_Helper") then {
			Cytech_Fish_Helper = "Cytech_Fishing_helper" createVehicle [0,0,0];	
			[Cytech_Fish_Helper] remoteexeccall ["Cytech_fnc_hidefishhelp",2];
			Cytech_Fish_Helper disableCollisionWith player;
		};	
		if !(currentweapon player isequalto "Cytech_Melee_FishingRod"  && !isnil "Cytech_Fish_Helper") then {
			deletevehicle Cytech_Fish_Helper;	
			deletevehicle Cytech_Ballon;
			Cytech_Fish_Helper = nil;
			Cytech_Ballon = nil;
			Cytech_Fishing_Run_Loop = false;
		};

		if (currentweapon player isequalto "Cytech_Melee_FishingRod") then {
			_range = -2.02;   
			_rwrist = (player selectionPosition "lefthand");
			_start = player modeltoworld [_rwrist select 0, (_rwrist select 1) + 0, (_rwrist select 2) + 0];
			
			if (surfaceIsWater getpos player) then {
				_lstart = (player modeltoworld _rwrist);
				_lend = (player weaponDirection currentWeapon player) vectorMultiply _range;
				_end = (_lend vectoradd _lstart);
				_endL = _end;
				Cytech_Fish_Helper setposASL _endl;
			} else {
				_lstart = atltoasl(player modeltoworld _rwrist);
				_lend = (player weaponDirection currentWeapon player) vectorMultiply _range;
				_end = asltoatl(_lend vectoradd _lstart);
				_endL = _end;
				Cytech_Fish_Helper setposATL _endl;	
			};

			
			Cytech_Fish_Helper setdir (getDir	player);	
			if (!isnil "Cytech_Debug") then {	
					drawLine3D [_start, _endL, [1,0,0,1.5-sunOrmoon]];
			};		
			if (!isnil "Cytech_Debug") then {	
				_beg = ASLToAGL eyePos player;
				_endE = (_beg vectorAdd (eyeDirection player vectorMultiply 50));
				if (surfaceIsWater _endE) then {
					drawLine3D [ _beg, _endE, [0,1,0,1]];
				} else {
					drawLine3D [ _beg, _endE, [1,0,0,1]];		
				};
			}; 
			if (Cytech_Fish_Helper distance Cytech_Ballon > 50) then {
					_vehicle = Cytech_Ballon;
					_vel = velocity _vehicle;
					_dir = Cytech_Ballon getDir Cytech_Fish_Helper;
					_speed = 2;
					_vehicle setVelocity [
						(sin _dir * _speed), 
						(cos _dir * _speed), 
						0
					];
			};	
			if (isnull(ropeAttachedTo Cytech_Ballon) && count(ropes Cytech_Fish_Helper) > 0) then {
				[format["%1",((gettext(MissionconfigFile >> "fishing_config" >> "brokenline")))], false,"slow"] call Cytech_fnc_notification_system; 
				{
					ropeDestroy _x;
				} foreach (ropes Cytech_Fish_Helper);
				deletevehicle Cytech_Ballon;
				Cytech_Ballon = nil;
				Cytech_Fishing_Run_Loop = false;
			};		
			if !(vehicle player isequalto player) then {		
				{
					ropeDestroy _x;
				} foreach (ropes Cytech_Fish_Helper);
				deletevehicle Cytech_Fish_Helper;	
				deletevehicle Cytech_Ballon;
				Cytech_Fish_Helper = nil;
				Cytech_Ballon = nil;
				Cytech_Fishing_Run_Loop = false;
			};
		};
	}] call BIS_fnc_addStackedEventHandler;


	Cytech_FNC_mouseHandler = {
		private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh"];
		params ["_ctrl", "_code", "_shift", "_ctrlKey", "_alt"];
		_handled = false;
			
		if (dialog) exitwith {};

		if !(isnil "Cytech_Debug") then {
			hintSilent str _code;
		};
		switch (_code) do {
			case 0:
			{
				if (if (isnil "Cytech_Ballon") then {true} else {If ((player distance Cytech_Ballon < 10)) then {True} else {!surfaceIsWater getpos Cytech_Ballon}} && currentweapon player isequalto "Cytech_Melee_FishingRod" && surfaceIsWater ((ASLToAGL eyePos player) vectorAdd (eyeDirection player vectorMultiply 50)) && !Cytech_Fishing_timeout) then {
					0 spawn {
						Cytech_Fishing_Run_Loop = false;
						Cytech_Fishing_timeout = true;
						{
							ropeDestroy _x;
						} foreach (ropes Cytech_Fish_Helper);
						if !(isnil "Cytech_Ballon") then {deletevehicle Cytech_Ballon;};
						Cytech_Ballon = "Land_Balloon_01_air_F" createVehicle position player;
						Balrope = ropeCreate[Cytech_Fish_Helper, [0, 0.1, -0.5], Cytech_Ballon, [0, 0, 0], 55];	
						sleep 0.1;
						ropesegmentX = player nearObjects ["ropesegment", 20];
						{if (typeOf _x == "ropesegment") then {_x setObjectTextureglobal [0, ""]; _x setObjectTextureglobal [1, ""]; _x setObjectTextureglobal [2, "#(argb,8,8,3)color(0.752941,0.752941,0.752941,0.5,CA)"];};} foreach ropesegmentX;
						Cytech_Ballon allowdamage false;
						sleep 1;
						_vehicle = Cytech_Ballon;
						_vehicle setposASL (getposASL player);
						_vel = velocity _vehicle;
						_dir = direction player;
						_speed = 19;
						_vehicle setVelocity [
							(_vel select 0) + (sin _dir * _speed), 
							(_vel select 1) + (cos _dir * _speed), 
							((_vel select 2) + 12)
						];
						player playAction "Cytech_Swing_Pickaxe";  
						sleep 0.5; 
						player playAction "Cytech_Rod_hold";  

						sleep (2);
						Cytech_Fishing_timeout = false;
						Cytech_Fishing_Run_Loop = true;
						while {Cytech_Fishing_Run_Loop} do {
							scopeName "loop1";
							if (!isnil "Cytech_Debug") then {
								systemchat "loop 1";
							};				
							sleep 1;
							while {Cytech_Fishing_Run_Loop} do {
								scopeName "loop2";
								if (!isnil "Cytech_Debug") then {
									systemchat "loop 2";
								};
								if (Cytech_Fishing_timeout2 OR Cytech_Fishing_timeout) then {breakOut "loop2"};
								sleep 1;
								if ((surfaceIsWater getpos Cytech_Ballon) && !(Cytech_Fishing_timeout2) && (player distance Cytech_Ballon > 10)) then {
									if (floor random 100 <= ((getNumber(MissionconfigFile >> "fishing_config" >> "gethooked")))) then {
										_vehicle = Cytech_Ballon;
										_vel = velocity _vehicle;
										_dir = Cytech_Ballon getDir Cytech_Fish_Helper;
										_speed = 0;
										_vehicle setVelocity [
											(sin _dir * _speed), 
											(cos _dir * _speed), 
											-10
										];	
										if (!isnil "Cytech_Debug") then {
											systemchat "Fish Cytech_Ballon";
										};	
										0 spawn {
											Cytech_has_fish = true;
											sleep 1;
											Cytech_has_fish = false
										};
									};
									0 spawn {
										Cytech_Fishing_timeout2 = true;
										sleep 5;
										Cytech_Fishing_timeout2 = false
									};
									breakOut "loop2";
								} else {
									if (!isnil "Cytech_Debug") then {
										systemchat "Timeout = True";
									};	
								};			
							};
							sleep 1;
							if (if !(isnil "Cytech_Ballon") then {((isnull(ropeAttachedTo Cytech_Ballon) OR (count(ropes Cytech_Fish_Helper) < 1)))} else {true}) exitwith {
								if (!isnil "Cytech_Debug") then {
									systemchat "Exitwith fishing loop";
									Cytech_Fishing_Run_Loop = false;
								};				
							};
						};		
					};	
				};
				if (if (isnil "Cytech_Ballon") then {true} else {If ((player distance Cytech_Ballon < 10)) then {True} else {!surfaceIsWater getpos Cytech_Ballon}} && currentweapon player isequalto "Cytech_Melee_FishingRod" && !(surfaceIsWater ((ASLToAGL eyePos player) vectorAdd (eyeDirection player vectorMultiply 50))) && !Cytech_Fishing_timeout) then {
					[format["%1",((gettext(MissionconfigFile >> "fishing_config" >> "You_cannot_fish_here")))], true,"slow"] call Cytech_fnc_notification_system; 
				};
				if (if (!isnil "Cytech_Ballon") then {surfaceIsWater getpos Cytech_Ballon} else {false} && !Cytech_Fishing_timeout && ((player distance Cytech_Ballon > 9)) && currentweapon player isequalto "Cytech_Melee_FishingRod") then {
					Cytech_Ballon allowdamage false;
					[] spawn {
						Cytech_Fishing_timeout = true;
						if (Cytech_has_fish) then {
							0 spawn {
								[format["%1",((gettext(MissionconfigFile >> "fishing_config" >> "reelin")))], false,"slow"] call Cytech_fnc_notification_system; 
								_fish = "Mullet_F" createVehicle [0,0,0];
								_fish attachTo [Cytech_Ballon, [0, 0, 0.5]]; 
								_fish setVectorUp [0,0.99,0.01];				
								waituntil {sleep 1;(player distance Cytech_Ballon < 1.5)};
								deletevehicle _fish;
								0 call Cytech_fnc_add_fish;
							};
						} else {
							[format["%1",((gettext(MissionconfigFile >> "fishing_config" >> "reelinfail")))], false,"slow"] call Cytech_fnc_notification_system; 
						};
						while {(player distance Cytech_Ballon > 1)} do {
							ropeUnwind [ Balrope, 3, ((player distance Cytech_Ballon) + 1)];
							_vehicle = Cytech_Ballon;
							_vel = velocity _vehicle;
							_dir = Cytech_Ballon getDir player;
							_speed = 2;
							_vehicle setVelocity [
								(sin _dir * _speed), 
								(cos _dir * _speed), 
								0
							];
						};
						waituntil {sleep 1; if !(isnil "Cytech_Ballon") then {(player distance Cytech_Ballon < 1.5)}else {true}};
						Cytech_Fishing_timeout = false;
					};	
				};
			};
		};
		_handled;
	};


	Cytech_fishykeys = (findDisplay 46) displayAddEventHandler ["MouseButtonDown", "call Cytech_FNC_mouseHandler;"];
};