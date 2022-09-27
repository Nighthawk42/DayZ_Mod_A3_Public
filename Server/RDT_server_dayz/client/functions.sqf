/*
    File: functions.sqf
    Author: Cytech Dev Team (Cytech)
    Description: Init for any plugin container
*/
//TF_server_addon_version = TF_ADDON_VERSION;
if (isserver) exitWith {};
0 spawn {
	RE = {};
	enableEnvironment true;
	DayZ_Functions = {	
		dayz_variables = {	
			#include "\RDT_server_dayz\DZ_client\init\variables.sqf"
		};		
		_dayz_variables = 0 spawn dayz_variables;	
		waitUntil { scriptDone _dayz_variables };			
		systemChat "Dev: progressLoadingScreen 0.1";
		
		dayz_publicEH = {		
			#include "\RDT_server_dayz\DZ_client\init\publicEH.sqf"	
		};		
		_dayz_publicEH = 0 spawn dayz_publicEH;	
		waitUntil { scriptDone _dayz_publicEH };		
		systemChat "Dev: progressLoadingScreen 0.2";
		
		dayz_setup_functions_med = {		
			#include "\dayz_code\medical\setup_functions_med.sqf"
		};		
		_dayz_setup_functions_med = 0 spawn dayz_setup_functions_med;	
		waitUntil { scriptDone _dayz_setup_functions_med };	
		systemChat "Dev: progressLoadingScreen 0.4";
		
		dayz_compiles = {
			#include "\RDT_server_dayz\DZ_client\init\compiles.sqf"
		};		
		_dayz_compiles = 0 spawn dayz_compiles;	
		systemChat "Dev: progressLoadingScreen 0.5";		
		waitUntil { scriptDone _dayz_compiles };	
		systemChat "Dev: progressLoadingScreen 1.0";
		dayz_clientPreload = true;
	};
	cytech_functions = {
		0 spawn {	
			// Client Side INIT 
			#include "\RDT_server_dayz\client\fn_init.sqf"
		};	
		
		0 spawn {
			//Character Creation System Client Side code
			#include "\RDT_server_dayz\client\item\useItem.sqf"	
		};	
		
		0 spawn {
			//Character Creation System Client Side code
			#include "\RDT_server_dayz\client\repair_code\fn_repair_code_init.sqf"	
		};		
		0 spawn {
			//Character Creation System Client Side code
			#include "\RDT_server_dayz\client\splitmap_code\fn_splitmap_code_init.sqf"	
		};
		0 spawn {
			//Character Creation System Client Side code
			#include "\RDT_server_dayz\client\gathering_code\fn_gathering_code_init.sqf"	
		};
		
	};			
};	