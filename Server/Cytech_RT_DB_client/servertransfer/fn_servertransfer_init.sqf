
cytech_fnc_servertransfer = {
	params ["_player", "_worldinfo"];
	format ["[cytech_fnc_servertransfer] Result: %1 is trasfering to %2 #1111", _player, _worldinfo] call kk_fnc_log;
	_uid = getplayeruid _player;	
	[(format[
		"UPDATE players SET worldname = '%2' WHERE uid = '%1'",
		_uid,
		_worldinfo
	])] call db_fnc_update;
	if !((_worldinfo select 1) isEqualTo "RT") then {
		format ["[cytech_fnc_servertransfer] Result: Calling Server change %1 to %2 #1111", _player, (getArray (MissionconfigFile >> "CfgTransferWorlds" >> (_worldinfo select 0) >> "Serverinfo"))] call kk_fnc_log;
		_worldinfo remoteexec ["cytech_fnc_exectransfer",_player]; 
	};
};


cytech_fnc_handletransfer = {
	params ["_player", "_worldinfo"];
	format ["[cytech_fnc_handletransfer] Result: %1 %2 %3 #1111", _worldinfo, _player, (getArray (MissionconfigFile >> "CfgTransferWorlds" >> (_worldinfo select 0) >> (_worldinfo select 1) >> "TransferPos"))] call kk_fnc_log;
	_pos = (getArray (MissionconfigFile >> "CfgTransferWorlds" >> (_worldinfo select 0) >> (_worldinfo select 1) >> "TransferPos"));
	_player setposASL (_pos select 0);
	_player setdir (_pos select 1);
	[_player,[worldname,"RT"]] call cytech_fnc_servertransfer;
};
