/*
    File: functions.sqf
    Author: Cytech Dev Team (Cytech)
    Description: Init for any plugin container
*/
RDT_fnc_init2 = {

	RDT_FNC_ProfileSync = {
		profileNamespace setVariable ["RDT_Apoc_Gear",(getUnitLoadout player)];
		saveProfileNamespace;	
	};	
	
};