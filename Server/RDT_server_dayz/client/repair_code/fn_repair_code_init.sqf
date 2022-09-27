/*

if !(isnil "Cytech_Debug") then {
	arrow = "Sign_Arrow_F" createVehicle [0,0,0];
	onEachFrame { 
		_ins = lineIntersectsSurfaces [ 
			AGLToASL positionCameraToWorld [0,0,0],  
			AGLToASL positionCameraToWorld [0,0,1000],  
			player, 
			objNull, 
			true, 
			1, 
			"VIEW", 
			"NONE" 
		]; 
		if (count _ins == 0) exitWith {arrow setPosASL [0,0,0]}; 
		arrow setPosASL (_ins select 0 select 0);  
		arrow setVectorUp (_ins select 0 select 1); 
		hintSilent str (_ins select 0 select 1);
		Cytechpos = (_ins select 0 select 1)
	};
	};

RDT_busy = false;
RDT_busy2 = false;

RDT_server_progressbar = {
	params ["_player","_anim","_Time"];
	[player,_anim] remoteExec ["playMove",0];
	RDT_busy = true;
	sleep _Time;
	waitUntil {animationState player != _anim};
	RDT_busy = false;
};


RDT_hardcodedvehiclepoints = {
	private _cursorpos = (_this select 1) select 1;
	private _cursorpos2 = (_this select 1) select 0;
	private _object = _this select 0;
	private _return = ["",[]];
	private _partspos = [];
	private _distance = 0.50;
	private _distance_cursor = 0.50;
	switch (typeof _object) do {
		case "Cytech_BI_C_Hatchback_01": {
			_partspos = [[[-0.27833,-0.357926,0.891303],"Engine"],[[0.956778,0.0472532,0.286955],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};			
		case "Cytech_BI_C_Hatchback_02": {
			_partspos = [[[-0.27833,-0.357926,0.891303],"Engine"],[[0.956778,0.0472532,0.286955],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_BI_C_Hatchback_03": {
			_partspos = [[[-0.27833,-0.357926,0.891303],"Engine"],[[0.956778,0.0472532,0.286955],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};			
		case "Cytech_BI_Truck_02_transport": {
			_partspos = [[[-0.869186,-0.494479,0.00231679],"Engine"],[[-0.494482,0.869187,-0.000773458],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_BI_Truck_02_covered": {
			_partspos = [[[-0.856099,-0.48716,-0.172541],"Engine"],[[0.869167,0.494519,5.48609e-005],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_BI_B_Truck_01": {
			_partspos = [[[-0.49451,0.869168,-0.00273057],"Engine"],[[0.49451,-0.869168,0.00273027],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_BI_O_MRAP_02": {
			_partspos = [[[-0.869165,-0.494521,0.000729041],"Engine"],[[0.515271,0.293829,-0.805084],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_RDS_Lada_police": {
			_partspos = [[[-0.068933,-0.0975333,0.992842],"Engine"],[[0.0810922,-0.00487329,0.996695],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_RDS_Lada": {
			_partspos = [[[-0.208872,-0.11893,0.970684],"Engine"],[[0.0736434,0.0450623,0.996266],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_RDS_S1203_medical": {
			_partspos = [[[-0.864217,-0.49172,-0.106489],"Engine"],[[-0.489199,0.862845,0.127211],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_RDS_S1203": {
			_partspos = [[[-0.864217,-0.49172,-0.106489],"Engine"],[[-0.489199,0.862845,0.127211],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_RDS_Octavia": {
			_partspos = [[[-0.15064,-0.0470963,0.987466],"Engine"],[[0.846665,0.503005,0.173623],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};						
		case "Cytech_BI_Quad": {
			_partspos = [[[0.494515,-0.869169,0.000701584],"Engine"],[[-0.423906,0.84249,0.332437],"Fuel"]];
			_distance = 1.50;
			_distance_cursor = 0.50;
		};	
		//"Cytech_RDS_Ikarus"	
		//"Cytech_RDS_GAZ"	
		//"Cytech_BI_B_MRAP_01"	
	};
	private _count = 0;
	{
		_count = _count + (1);
//		systemChat str format ["Dev: Distance %2m to %1 Point, Player to point %3.  %4 %5",(_x select 1),((_object modeltoworld _cursorpos) distance2d (_object modeltoworld (_x select 0))),(_cursorpos2) distance2d (getposASL player),(((_object modeltoworld _cursorpos) distance2d (_object modeltoworld (_x select 0))) < _distance_cursor),((_cursorpos2) distance2d (getposASL player) < _distance)];
		if ((((_object modeltoworld _cursorpos) distance2d (_object modeltoworld (_x select 0))) < _distance_cursor) &&	((_cursorpos2) distance2d (getposASL player) < _distance)) exitWith {
			_return = [(_x select 1),_cursorpos2,(_x select 0)];
		};
	} forEach _partspos;
	_return
};

RDT_edititem_durabilty = {
	params ["_magazineClassName", "_ammoToChange"]; 
	private _container = player;
	private _ammoPerMagazine = getNumber(configFile >> "CfgMagazines" >> _magazineClassName >> "count");
	private _equippedAmmo = 0;
	private _equippedMagazines = magazinesAmmo _container;
	if (_ammoPerMagazine > 1) then
	{
		{
			if ((_x select 0) isEqualTo _magazineClassName) then
			{
				_equippedAmmo = _equippedAmmo + (_x select 1);
			};
		}
		forEach _equippedMagazines;
		_container removeMagazines _magazineClassName;
		private _ammoToRefund = _equippedAmmo + _ammoToChange;
		while {_ammoToRefund > 0} do
		{
			private _ammoToRefundThisRound = _ammoToRefund min _ammoPerMagazine;
			_container addMagazine [_magazineClassName, _ammoToRefundThisRound];
			_ammoToRefund = _ammoToRefund - _ammoToRefundThisRound;
		};
	};
};

RDT_fnc_runaction = {
	params ["_obj","_info"];  
	if (RDT_busy) exitWith {};
	if (RDT_busy2) exitWith {};
	[] spawn {RDT_busy2 = true; sleep 1; RDT_busy2 = false;};
	if !(str _info isEqualto "[]") then {
		if (count crew cursorObject > 0) exitWith {Systemchat "Someone is in the vehicle the vehicle must be empty.";};
		if !(_obj getVariable ["RDT_beingrepaired",2] isEqualTo 2) exitWith {Systemchat "Someone else is repairing this vehicle.";};
		if (RDT_ctrlhold) then {
			if ((_info select 2) isEqualTo "tire") then {
				if !('ItemToolbox' in  (backpackItems player + uniformItems player + vestItems player)) exitWith {Systemchat "You require a Wrench or Toolbox to perform this action.";};
				_tires = (magazinesAmmo player) Select {_x find "PartWheel" > -1};
				if (count _tires > 0) then {
					
					_tires sort false; 
					_bestpart = ((_tires select 0) select 1);
					_vehiclepart = round (100 - ((_obj getHitPointDamage (_info select 1)) * 100));
					if (_bestpart > _vehiclepart) then {
						
						["PartWheel", - _bestpart] call RDT_edititem_durabilty;
						[26,"repair",_obj] remoteexec ["RDT_servertimer",2];
						_script_handler = [player,"Acts_carFixingWheel",25] spawn RDT_server_progressbar;
						waitUntil { scriptDone _script_handler };	
						if !(_obj getVariable ["RDT_beingrepaired",2] isEqualTo clientOwner) exitWith {};
						if ((_obj getHitPointDamage (_info select 1))< 1) then {
							if !(player canAdd "PartWheel") exitWith {player addMagazine ["PartWheel",_bestpart];Systemchat "You cannot remove the tire with out room in your inventory!";};					
							
							player addMagazine ["PartWheel",_vehiclepart];			
						};	
						Systemchat "You have replaced the vehicle's tire.";
						[_obj,[(_info select 1),(1 - (_bestpart) / 100)]] remoteExec ["setHitPointDamage",0];							
				
					} else {
						Systemchat "The Current part is better then the part/s you have.";
					};
				} else {
					Systemchat "You have part to repair this with.";
				};
			} else {
				if !('ItemToolbox' in (backpackItems player + uniformItems player + vestItems player)) exitWith {Systemchat "You require a Toolbox to perform this action.";};
				private _hitpoint = "";
				private _hitpointitem = "";
				_hitpointitem = (_info select 2);
				_hitpoint = (_info select 1);
			
				private _parts = (magazinesAmmo player) Select {_x find _hitpointitem > -1};
				if (count _parts > 0) then {
					
					_parts sort false; 
					_bestpart = ((_parts select 0) select 1);
					_vehiclepart = round (100 - ((_obj getHitPointDamage _hitpoint) * 100));
					if (_bestpart > _vehiclepart) then {
						
						[_hitpointitem, - _bestpart] call RDT_edititem_durabilty;
						[61,"repair",_obj] remoteexec ["RDT_servertimer",2];
						_script_handler = [player,"Acts_carFixingWheel",60] spawn RDT_server_progressbar;	
						waitUntil { scriptDone _script_handler };	
						if !(_obj getVariable ["RDT_beingrepaired",2] isEqualTo clientOwner) exitWith {};	
						if ((_obj getHitPointDamage _hitpoint)< 1) then {
							if !(player canAdd _hitpointitem) exitWith {player addMagazine [_hitpointitem,_bestpart];Systemchat "You cannot remove the tire with out room in your inventory!";};					
							
							player addMagazine [_hitpointitem,_vehiclepart];			
						};						
						Systemchat format["You have replaced the vehicle's %1.",(_info select 1)];
						[_obj,[_hitpoint,(1 - (_bestpart) / 100)]] remoteExec ["setHitPointDamage",0];						
						if (getmass _obj < _obj getVariable ["defaultmass",-1]) then {
							_obj setMass [_obj getVariable ["defaultmass",-1],0.5];
						};						
					} else {
						Systemchat "The Current part is better then the part/s you have.";
					};
				} else {
					Systemchat "You have part to repair this with.";
				};
			};
		} else {
			if ((_info select 2) isEqualTo "tire") then {
				if !('ItemToolbox' in (backpackItems player + uniformItems player + vestItems player)) exitWith {Systemchat "You require a Wrench or Toolbox to perform this action.";};
				if (_obj getHitPointDamage (_info select 1) isEqualTo 1) exitWith {Systemchat "This vehicle does not have this part to remove!";};				
				if !(player canAdd "PartWheel") exitWith {Systemchat "You cannot remove the tire with out room in your inventory!";};
				_script_handler = [player,"Acts_carFixingWheel",25] spawn RDT_server_progressbar;
				[26,"repair",_obj] remoteexec ["RDT_servertimer",2];				
				waitUntil { scriptDone _script_handler };
				if !(_obj getVariable ["RDT_beingrepaired",2] isEqualTo clientOwner) exitWith {};
				player addMagazine ["PartWheel",(round (100 - ((_obj getHitPointDamage (_info select 1)) * 100)))];					
				[_obj,[(_info select 1),1]] remoteExec ["setHitPointDamage",0];
				Systemchat "You have removed part from the vehicle.";				
			} else {
				if !('ItemToolbox' in (backpackItems player + uniformItems player + vestItems player)) exitWith {Systemchat "You require a Toolbox to perform this action.";};
				_hitpointitem = (_info select 2);
				_hitpoint = (_info select 1);
				if (_obj getHitPointDamage _hitpoint isEqualTo 1) exitWith {Systemchat "This vehicle does not have this part to remove!";};				
				if !(player canAdd _hitpointitem) exitWith {Systemchat "You cannot remove the tire with out room in your inventory!";};
				[61,"repair",_obj] remoteexec ["RDT_servertimer",2];
				_script_handler = [player,"Acts_carFixingWheel",60] spawn RDT_server_progressbar;	
				waitUntil { scriptDone _script_handler };	
				if !(_obj getVariable ["RDT_beingrepaired",2] isEqualTo clientOwner) exitWith {};		
				player addMagazine [_hitpointitem,(round (100 - ((_obj getHitPointDamage _hitpoint) * 100)))];
				if ((_obj getVariable ["defaultmass",-1] isEqualTo -1) OR (_obj getVariable ["defaultmass",-1] isEqualTo (getmass _obj))) then {
					_obj setVariable ["defaultmass",(getmass _obj),true];
					_obj setMass [((_obj getVariable ["defaultmass",-1]) - (1000)),0.5];
				};			
				Systemchat "You have removed part from the vehicle.";		
				[_obj,[_hitpoint,1]] remoteExec ["setHitPointDamage",0];					
			};
		};	
	};
};

RT_isInsideBuilding = {
	params ["_unit","_obj"];
	_uPos = _obj worldToModel (getPosatl _unit);
	_oBox = boundingBox _obj;
	_inHelper = {
		params ["_pt0", "_pt1"];
		(_pt0 select 0 <= _pt1 select 0) && (_pt0 select 1 <= _pt1 select 1) && (_pt0 select 2 <= _pt1 select 2)
	};
	([_oBox select 0, _uPos] call _inHelper) && ([_uPos, _oBox select 1] call _inHelper)
};

/*

helpIcons =
{
	if (RDT_busy) exitWith {};
	_customkey_1 = if (count (actionKeys "User1") isEqualTo 0) then {57} else {(actionKeys "User1") select 0};
	_customkey_2 = if (count (actionKeys "User2") isEqualTo 0) then {79} else {(actionKeys "User2") select 0};
	_customkey_3 = if (count (actionKeys "User3") isEqualTo 0) then {80} else {(actionKeys "User3") select 0};
	_customkey_4 = if (count (actionKeys "User4") isEqualTo 0) then {81} else {(actionKeys "User4") select 0};
	private["_currentTarget","_player","_distance2d","_pos","_nBuilding","_size","_color","_icon","_text"];
	_currentTarget = cursorobject;
	_player = (vehicle player);
	if (!(vehicle player isEqualTo player) && (driver vehicle player isEqualTo player)) then {
		private _scaleFactorCtrlH = (getResolution select 1) / 1080;
		private _scaleFactorCtrlW = (getResolution select 0) / 1920;
		private _pW = (pixelW * 5) * _scaleFactorCtrlW;
		private _pH = (pixelH * 5) * _scaleFactorCtrlH;
		private _fontsize = (200 * _pH);
		
		_RDT_fuel = RDT_drivinghudelements select 0;
		_RDT_kmh = RDT_drivinghudelements select 1;
		_RDT_rpm = RDT_drivinghudelements select 2;
		_RDT_fuel ctrlSetStructuredText parseText format["<img size='%2' align='center'  color='%4' image='cytech_rt_gamemode_core_dayz\hud\fuel.paa'/><br /> <t align='center' color='%4' size='%2'>%1%3</t>",round (fuel vehicle player * 100),_fontsize, "%",[round (fuel vehicle player * 100)] call RDT_fnc_gethudcolour];
		_RDT_kmh ctrlSetStructuredText parseText format ["<img size='%2' align='center'  image='cytech_rt_gamemode_core_dayz\hud\kmh.paa'/><br /> <t align='center' size='%2'>%1 hm/h</t>", round (speed vehicle player),_fontsize];
		_RDT_rpm ctrlSetStructuredText parseText format ["<img size='%2' align='center'  image='cytech_rt_gamemode_core_dayz\hud\rpm.paa'/><br /> <t align='center' size='%2'>%1</t>",round (vehicle player getSoundController "rpm"),_fontsize];
	} else {
		if (ctrltext (RDT_drivinghudelements select 0) != "") then {
			_RDT_fuel = RDT_drivinghudelements select 0;
			_RDT_kmh = RDT_drivinghudelements select 1;
			_RDT_rpm = RDT_drivinghudelements select 2;
			_RDT_fuel ctrlSetText "";
			_RDT_kmh ctrlSetText "";
			_RDT_rpm ctrlSetText "";
		};
	};
	RDT_3d_interaction = [];
	if (!isNull _currentTarget && {_player != _player}) exitwith {};
	if (!isNull _currentTarget && {_player isEqualto _player}) then
	{
		//Building icon
		_distance2d = _player distance2d _currentTarget;
		_nBuilding	= cursorobject;
		
		//Wheels
//		systemChat str _currentTarget;
		RDT_vehicleparts = ["wheel_2_1_damper_land","wheel_2_2_damper_land","wheel_2_3_damper_land","wheel_1_1_damper_land","wheel_1_2_damper_land","wheel_1_3_damper_land","wheel_2_1_damper","wheel_2_2_damper","wheel_2_3_damper","wheel_1_1_damper","wheel_1_2_damper","wheel_1_3_damper","wheel_2_1_hide","wheel_2_2_hide","wheel_2_3_hide","wheel_1_1_hide","wheel_1_2_hide","wheel_1_3_hide"];
		if ( _currentTarget iskindof "Landvehicle" && ([_currentTarget,"GEOM"] intersect [(ASLtoATL (eyepos _player)),(screentoworld [0.5,0.5])] select 0 select 0 in RDT_vehicleparts)) exitWith {
			_begPos = positionCameraToWorld [0,0,0];
			_begPosASL = AGLToASL _begPos;
			_endPos = positionCameraToWorld [0,0,1000];
			_endPosASL = AGLToASL _endPos;
			_ins = lineIntersectsSurfaces [_begPosASL, _endPosASL, _player, objNull, true, 1, "GEOM", "NONE"];
			if (_ins isEqualTo []) exitWith {};
			_ins select 0 params ["_pos", "_norm", "_obj", "_parent"];
			if !(getModelInfo _parent select 2) exitWith {};
			_ins2 = [_parent, "GEOM"] intersect [_begPos, _endPos];
			if (_ins2 isEqualTo []) exitWith {};
			_ins2 select 0 params ["_name", "_dist"];
			_posASL = _begPosASL vectorAdd ((_begPosASL vectorFromTo _endPosASL) vectorMultiply _dist);
			if (_player distance2d (ASLToAGL _posASL) < 1.5) then {
				_hitpoint = "";
				switch (_name) do {
					case "wheel_2_1_damper_land": {_hitpoint = "hitrfwheel"; };
					case "wheel_2_2_damper_land": {_hitpoint = "hitrf2wheel"; };
					case "wheel_2_3_damper_land": {_hitpoint = "hitrmwheel"; };   

					case "wheel_1_1_damper_land": {_hitpoint = "hitlfwheel"; };
					case "wheel_1_2_damper_land": {_hitpoint = "hitlf2wheel"; };
					case "wheel_1_3_damper_land": {_hitpoint = "hitlmwheel"; };
							
					case "wheel_2_1_damper": {_hitpoint = "hitrfwheel"; };
					case "wheel_2_2_damper": {_hitpoint = "hitrf2wheel"; };
					case "wheel_2_3_damper": {_hitpoint = "hitrmwheel"; };   

					case "wheel_1_1_damper": {_hitpoint = "hitlfwheel"; };
					case "wheel_1_2_damper": {_hitpoint = "hitlf2wheel"; };
					case "wheel_1_3_damper": {_hitpoint = "hitlmwheel"; };
									
					case "wheel_2_1_hide": {_hitpoint = "hitrfwheel"; };
					case "wheel_2_2_hide": {_hitpoint = "hitrf2wheel"; };
					case "wheel_2_3_hide": {_hitpoint = "hitrmwheel"; };   

					case "wheel_1_1_hide": {_hitpoint = "hitlfwheel"; };
					case "wheel_1_2_hide": {_hitpoint = "hitlf2wheel"; };
					case "wheel_1_3_hide": {_hitpoint = "hitlmwheel"; };
				};	
				_hitpointdamage = (_currentTarget getHitPointDamage _hitpoint);
				_colour = 0;
				switch (true) do {
					case (_hitpointdamage >= 0.8): {_colour = 0;};
					case (_hitpointdamage <= 0.79 && _hitpointdamage >= 0.5): {_colour = 0.5;};
					case (_hitpointdamage <= 0.49 && _hitpointdamage >= 0.2): {_colour = 0.7;};
					case (_hitpointdamage <= 0.19): {_colour = 1;};
				};	
				if (RDT_ctrlhold) then {
					private _tires = (magazines player) Select {_x find "PartWheel" > -1};
					if (count _tires > 0) then {
						drawIcon3D
						[
							"\a3\ui_f\data\IGUI\Cfg\Cursors\iconRepairVehicle_ca.paa",
							[(_currentTarget getHitPointDamage _hitpoint),_colour,0,1],
							ASLToAGL _posASL,
							1.5,
							1.5,
							0,
							format["Press %2 to replace tire",_dir,(Keyname _customkey_1)]
						];
						RDT_3d_interaction = [_currentTarget,_hitpoint,"tire"];
					};
				} else {
					drawIcon3D
					[
						"\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa",
						[(_currentTarget getHitPointDamage _hitpoint),_colour,0,1],
						ASLToAGL _posASL,
						1.5,
						1.5,
						0,
						format["Press %2 to remove tire",_dir,(Keyname _customkey_1)]
					];
					RDT_3d_interaction = [_currentTarget,_hitpoint,"tire"];			
				};					
			};
		};

		//Other Parts
		private _cursorpos = (lineIntersectsSurfaces [ 
			AGLToASL positionCameraToWorld [0,0,0],  
			AGLToASL positionCameraToWorld [0,0,1000],  
			player, 
			objNull, 
			true, 
			1, 
			"VIEW", 
			"NONE" 
		] select 0);

		private _cursorparts = [_currentTarget,_cursorpos] call RDT_hardcodedvehiclepoints;
		_cursorpos = _cursorpos select 1;
//		systemChat str _cursorparts;
		if !((_cursorparts select 1) isEqualto []) exitWith {
			private _hitpoint = "";
			private _hitpointitem = "";
			switch (_cursorparts select 0) do {
				case "Engine": {_hitpoint = "hitengine";_hitpointitem = "PartEngine";};
				case "Fuel": {_hitpoint = "hitfuel";_hitpointitem = "PartFueltank";};
			};		
			_hitpointdamage = (_currentTarget getHitPointDamage _hitpoint);
			_colour = 0;
			switch (true) do {
				case (_hitpointdamage >= 0.8): {_colour = 0;};
				case (_hitpointdamage <= 0.79 && _hitpointdamage >= 0.5): {_colour = 0.5;};
				case (_hitpointdamage <= 0.49 && _hitpointdamage >= 0.2): {_colour = 0.7;};
				case (_hitpointdamage <= 0.19): {_colour = 1;};
			};					
			if (RDT_ctrlhold) then {
				if (count ((magazines player) Select {_x find _hitpointitem > -1}) > 0) then {
					drawIcon3D
					[
						"\a3\ui_f\data\IGUI\Cfg\Cursors\iconRepairVehicle_ca.paa",
						[(_currentTarget getHitPointDamage _hitpoint),_colour,0,1],
						ASLToAGL (_cursorparts select 1),
						1.5,
						1.5,
						0,
						format["Press %2 to replace %1",(_cursorparts select 0),(Keyname _customkey_1)]
					];
					RDT_3d_interaction = [_currentTarget,_hitpoint,_hitpointitem];							
				};
			} else {
				drawIcon3D
				[
					"\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa",
					[(_currentTarget getHitPointDamage _hitpoint),_colour,0,1],
					ASLToAGL (_cursorparts select 1),
					1.5,
					1.5,
					0,
					format["Press %2 to remove %1",(_cursorparts select 0),(Keyname _customkey_1)]
				];	
				RDT_3d_interaction = [_currentTarget,_hitpoint,_hitpointitem];
			};
		};
	};	
};

helpIcons =
{
	if (RDT_busy) exitWith {};
	_customkey_1 = if (count (actionKeys "User1") isEqualTo 0) then {57} else {(actionKeys "User1") select 0};
	_customkey_2 = if (count (actionKeys "User2") isEqualTo 0) then {79} else {(actionKeys "User2") select 0};
	_customkey_3 = if (count (actionKeys "User3") isEqualTo 0) then {80} else {(actionKeys "User3") select 0};
	_customkey_4 = if (count (actionKeys "User4") isEqualTo 0) then {81} else {(actionKeys "User4") select 0};
	private["_currentTarget","_player","_distance2d","_pos","_nBuilding","_size","_color","_icon","_text"];
	_currentTarget = cursorobject;
	_player = (vehicle player);
	if (!(vehicle player isEqualTo player) && (driver vehicle player isEqualTo player)) then {
		private _scaleFactorCtrlH = (getResolution select 1) / 1080;
		private _scaleFactorCtrlW = (getResolution select 0) / 1920;
		private _pW = (pixelW * 5) * _scaleFactorCtrlW;
		private _pH = (pixelH * 5) * _scaleFactorCtrlH;
		private _fontsize = (200 * _pH);
		
		_RDT_fuel = RDT_drivinghudelements select 0;
		_RDT_kmh = RDT_drivinghudelements select 1;
		_RDT_rpm = RDT_drivinghudelements select 2;
		_RDT_fuel ctrlSetStructuredText parseText format["<img size='%2' align='center'  color='%4' image='cytech_rt_gamemode_core_dayz\hud\fuel.paa'/><br /> <t align='center' color='%4' size='%2'>%1%3</t>",round (fuel vehicle player * 100),_fontsize, "%",[round (fuel vehicle player * 100)] call RDT_fnc_gethudcolour];
		_RDT_kmh ctrlSetStructuredText parseText format ["<img size='%2' align='center'  image='cytech_rt_gamemode_core_dayz\hud\kmh.paa'/><br /> <t align='center' size='%2'>%1 hm/h</t>", round (speed vehicle player),_fontsize];
		_RDT_rpm ctrlSetStructuredText parseText format ["<img size='%2' align='center'  image='cytech_rt_gamemode_core_dayz\hud\rpm.paa'/><br /> <t align='center' size='%2'>%1</t>",round (vehicle player getSoundController "rpm"),_fontsize];
	} else {
		if (ctrltext (RDT_drivinghudelements select 0) != "") then {
			_RDT_fuel = RDT_drivinghudelements select 0;
			_RDT_kmh = RDT_drivinghudelements select 1;
			_RDT_rpm = RDT_drivinghudelements select 2;
			_RDT_fuel ctrlSetText "";
			_RDT_kmh ctrlSetText "";
			_RDT_rpm ctrlSetText "";
		};
	};
	RDT_3d_interaction = [];
};

0 spawn {
	["RDT_OnEachFrame", "OnEachFrame", "RDT_fnc_OnEachFrame"] call BIS_fnc_addStackedEventHandler;
	RDT_fnc_OnEachFrame = {
		0 call helpIcons;
	};
};

RDT_FNC_interactkeyHandler2 = {
	private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh"];
	params ["_control", "_key", "_shift", "_ctrl", "_alt"];
	_handled = false;
	_customkey_1 = if (count (actionKeys "User1") isEqualTo 0) then {57} else {(actionKeys "User1") select 0};
	_customkey_2 = if (count (actionKeys "User2") isEqualTo 0) then {79} else {(actionKeys "User2") select 0};
	_customkey_3 = if (count (actionKeys "User3") isEqualTo 0) then {80} else {(actionKeys "User3") select 0};
	_customkey_4 = if (count (actionKeys "User4") isEqualTo 0) then {81} else {(actionKeys "User4") select 0};
	RDT_ctrlhold = _ctrl;
	switch (true) do {
		case (_key isEqualTo _customkey_1): {[cursorTarget,RDT_3d_interaction] spawn RDT_fnc_runaction};
	};	
	_handled;	
};
if (isnil "RDT_ineractkeys") then {
	RDT_ineractkeys = (findDisplay 46) displayAddEventHandler ["keydown", "call RDT_FNC_interactkeyHandler2;"];	
};

RDT_FNC_interactkeyHandler = {
	private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh"];
	params ["_ctrl", "_code", "_shift", "_ctrlKey", "_alt"];
	RDT_ctrlhold = false;
	_handled = false;
	_handled;
};
if (isnil "RDT_ineractkeys2") then {
	RDT_ineractkeys2 = (findDisplay 46) displayAddEventHandler ["KeyUp", "call RDT_FNC_interactkeyHandler;"];

};	

*/