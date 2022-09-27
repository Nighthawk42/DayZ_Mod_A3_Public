Cytech_fnc_spawndbvehicles = {
	private _query = "SELECT * FROM vehicles";
	_result = ["executeQuery", _query] call db_fnc_extdb3;	
	{
		_vehicleClass = (_x select 1);
		_vehicleID = (_x select 0);
		_spawnpos = (_x select 2) select 0;
		_spawndir = (_x select 2) select 1;
		_inv = (_x select 3);
		_dammage = (_x select 4);
		str _inv call kk_fnc_log;
		systemChat str _spawnpos;
		private _vehicleObject = _vehicleClass createVehicle [0,0,0];
		_vehicleObject setVariable ["Cytech_veh_id",_vehicleID];
		_vehicleObject setposASL [_spawnpos select 0,_spawnpos select 1,_spawnpos select 2];
		_vehicleObject setVectorDirAndUp [_spawndir select 1,_spawndir select 0];
		_dir = [vectorUp _vehicleObject,vectordir _vehicleObject];
		_vehicleObject allowDamage true;
		clearItemCargoGlobal _vehicleObject; 
		clearMagazineCargoGlobal _vehicleObject; 
		clearWeaponCargoGlobal _vehicleObject; 
		clearBackpackCargoGlobal _vehicleObject; 
		{		
		    _x params ["_it","_mag","_wp",["_bpk",[]]]; 
			{_vehicleObject addItemCargoGlobal [_x,1];true} count _it; 
			{_vehicleObject addMagazineCargoGlobal [_x,1];true} count _mag; 
			{_vehicleObject addWeaponCargoGlobal [_x,1];true} count _wp; 
			{_vehicleObject addBackpackCargoGlobal [_x,1];true} count _bpk; 
		} forEach _inv; 
		private _hitPoints = ((_dammage select 0) select 0);
		private _hitPointDamage = ((_dammage select 0) select 2);		
		{_vehicleObject setHitPointDamage [_x,(_hitPointDamage select _forEachIndex),false]; } forEach _hitPoints;
		
		_vehicleObject setFuel (_dammage select 1);
	} forEach _result;
};

Cytech_fnc_savedbvehicles = {
	private _fnc_getVehicleLoadout = {
		private _veh = param [0,objNull, [objNull]];
		private _return = [];
		(_return) pushBack [itemCargo _veh,magazineCargo _veh,weaponCargo _veh,backpackCargo _veh];
		{(_return) pushBack [_x select 0,itemCargo (_x select 1),magazineCargo (_x select 1),weaponCargo (_x select 1),[]]} forEach everyContainer _veh;
		_return
	};
	{
		_pos = ([getposASL _x,[vectorUp _x,vectordir _x]]);
		_dammage = ([getAllHitPointsDamage _x,fuel _x]);
		_inv = ([_x] call _fnc_getVehicleLoadout);
		str _inv call kk_fnc_log;
		[(format[
			"UPDATE vehicles SET pos = '%2', inv = '%3', damage = '%4' WHERE id = '%1'",
			(_x getVariable ["Cytech_veh_id",0]),
			str _pos,
			str _inv,
			str _dammage
		])] call db_fnc_update;
	
	} forEach nearestObjects [[worldSize / 2, worldSize / 2], ["Car", "Helicopter", "Motorcycle", "Ship", "TentStorage"], (worldSize * sqrt 2 / 2)];
};
