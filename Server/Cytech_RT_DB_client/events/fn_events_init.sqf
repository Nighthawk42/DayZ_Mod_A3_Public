onPlayerConnected { 
	format["ID: %1 uid: %2 name: %3", _id, _uid, _name] call kk_fnc_log;
	if (count ([(format["SELECT * FROM players WHERE uid=%1",_uid])] call db_fnc_update) isEqualTo 0) then {
		[(format["INSERT INTO players (uid,pos,inv,blood,charinfo,food,water,medical_info,alive,stats) VALUES (%1,'[]','[]','12000','[]','100','100','[]','1','[0,0,0,0,0]')",_uid])] call db_fnc_update;
		[_id, _uid, _name] spawn fnc_Handleplayerfirstime;
	} else {
		if (count ([(format["SELECT charinfo FROM players WHERE uid=%1",_uid])] call db_fnc_update) isEqualTo 0) exitWith {
			[_id, _uid, _name] spawn fnc_Handleplayerfirstime;
		};
		[_id, _uid, _name] spawn fnc_Handleplayerspawn;
	};
};

addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	if (_unit getVariable ["Cytech_firsttime",false]) exitWith {
		deleteVehicle _unit;
	};
	if (_player getVariable ["isready",false]) exitWith {};
	if ((uniform _player) isEqualTo "U_C_Poloshirt_stripped") exitWith {};
	[(format[
		"UPDATE players SET pos = '%2', inv = '%3', blood = '%4', food = '%5',water = '%6',medical_info = '%7',stats = '%8' WHERE uid = '%1'",
		_uid,
		(getposasl _unit),
		str (getUnitLoadout _unit),
		(_unit getVariable["USEC_BloodQty",20000]),
		(_unit getVariable ["messing",[0,0]]) select 0,
		(_unit getVariable ["messing",[0,0]]) select 1,
		str (_unit call player_sumMedical),
		str [(_unit getVariable["zombieKills",0]),(_unit getVariable["humanKills",0]),(_unit getVariable["banditKills",0]),(_unit getVariable["headShots",0]),(_unit getVariable["humanity",0])]
	])] call db_fnc_update;
	deleteVehicle _unit;
}];

fnc_Handleplayerfirstime = {
	waitUntil {(count ((allplayers) select {(getplayeruid _x) isEqualto (_this select 1)}) > 0)};
	private _player = ((allplayers) select {(getplayeruid _x) isEqualto (_this select 1)} select 0);	
	waitUntil {(_player getVariable ["isready",false])};
	0 remoteExec ["cytech_fnc_runfirsttime", _player];
};

fnc_Handleplayerspawn = {
	diag_log "fnc_Handleplayerspawn started";
	waitUntil {(count ((allplayers) select {(getplayeruid _x) isEqualto (_this select 1)}) > 0)};
	private _player = (allplayers) select {(getplayeruid _x) isEqualto (_this select 1)} select 0;
	private _info = [(format["SELECT pos, inv, blood, charinfo, food, water, medical_info, alive, stats FROM players WHERE uid='%1'",_this select 1])] call db_fnc_update;
	_player setVariable ["cytech_info",_info,true];	
};

fnc_finalload = {
	params ["_player"];
	private _info = (_player getVariable ["cytech_info",[]]);	
	private _pos = call compile ((_info select 0) select 0);
	private _inv = ((_info select 0) select 1);
	private _blood = ((_info select 0) select 2);
	private _charinfo = ((_info select 0) select 3);
	private _food = ((_info select 0) select 4);
	private _water = ((_info select 0) select 5);
	private _medical = ((_info select 0) select 6);	
	private _alive = ((_info select 0) select 7);	
	private _stats = ((_info select 0) select 8);	
	
	if (_alive isEqualTo 0) then {
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

		_player setVariable["zombieKills",	(_stats select 0),true];
		_player setVariable["humanKills",	(_stats select 1),true];
		_player setVariable["banditKills",	(_stats select 2),true];
		_player setVariable["headShots",	(_stats select 3),true];	
		_player setVariable["humanity",		(_stats select 4),true];	
		
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
		_player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];
		_inv = getArray (configFile >> "CfgSurvival" >> "Inventory" >> "Default" >> (selectrandom["civilian_1","civilian_2","civilian_3","civilian_4","civilian_5"]));
		_player setunitloadout _inv;
		
		_player setVariable ["messing",[_food,_water],true];
		[(format["UPDATE players SET alive = '1' WHERE uid = '%1'",(getplayeruid _player)])] call db_fnc_update;		
	} else {
		_player setVariable["USEC_isDead",(_medical select 0),true];
		_player setVariable["NORRN_unconscious", (_medical select 1), true];
		_player setVariable["USEC_infected",(_medical select 2),true];
		_player setVariable["USEC_injured",(_medical select 3),true];
		_player setVariable["USEC_inPain",(_medical select 4),true];
		_player setVariable["USEC_isCardiac",(_medical select 5),true];
		_player setVariable["USEC_lowBlood",(_medical select 6),true];
		_player setVariable["USEC_BloodQty",(_medical select 7),true];
		_player setVariable["unconsciousTime",(_medical select 10),true];
		
		_player setVariable["zombieKills",	(_stats select 0),true];
		_player setVariable["humanKills",	(_stats select 1),true];
		_player setVariable["banditKills",	(_stats select 2),true];
		_player setVariable["headShots",	(_stats select 3),true];	
		_player setVariable["humanity",		(_stats select 4),true];		
		
		_player setPosASL _pos;	
		_player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];
		_player setUnitLoadout _inv;
		_player setVariable ["RDT_blood",_blood,true];	
		_player setVariable ["messing",[_food,_water],true];
	};
	[] remoteExeccall ["RDT_fnc_spawned_init",_player];
};