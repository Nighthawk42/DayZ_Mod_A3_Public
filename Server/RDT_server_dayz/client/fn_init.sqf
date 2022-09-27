/*
    File: functions.sqf
    Author: Cytech Dev Team (Cytech)
    Description: Init for any plugin container
*/
0 spawn {
	systemchat "Dev: progressLoadingScreen 0.0";
};
0 spawn {
	waitUntil {!isNull(findDisplay 46)};
	cytech_plugs = false;
	Cytech_fnc_keyhandler = {
		private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh"];
		params ["_control", "_key", "_shift", "_ctrl", "_alt"];
		_handled = false;
		_customkey_1 = if (count (actionKeys "User1") isEqualTo 0) then {57} else {(actionKeys "User1") select 0};
		_customkey_2 = if (count (actionKeys "User2") isEqualTo 0) then {79} else {(actionKeys "User2") select 0};
		_customkey_3 = if (count (actionKeys "User3") isEqualTo 0) then {80} else {(actionKeys "User3") select 0};
		_customkey_4 = if (count (actionKeys "User4") isEqualTo 0) then {81} else {(actionKeys "User4") select 0};
		switch (true) do {
			case (_key isEqualTo _customkey_3): {if (cytech_plugs) then {cytech_plugs = false;1 fadeSound 0.5;systemChat "Ear Plugs in";}else{cytech_plugs = true;systemChat "Ear Plugs out";1 fadeSound 1;}};
			case (_key isEqualTo _customkey_2): {if (dayzDebug) then {dayzDebug = false;hint "";}else{dayzDebug = true;}};
		};	
		_handled;	
	};
	if (isnil "Cytech_keyhandler") then {
		Cytech_keyhandler = (findDisplay 46) displayAddEventHandler ["keydown", "call Cytech_fnc_keyhandler;"];	
	};
};



0 spawn {
		RDT_hudelements = [];
		RDT_hudslots = [];
		disableSerialization;	
		"RDT_Hud" cutRsc ["RscTitleDisplayEmpty", "PLAIN"];
		
		private _display = uiNamespace getVariable "RscTitleDisplayEmpty";	
		private _colour101 = parseText "#ffffff";	
		private _scaleFactorCtrlH = (getResolution select 1) / 1080;
		private _scaleFactorCtrlW = (getResolution select 0) / 1920;
		private _pW = (pixelW * 5) * _scaleFactorCtrlW;
		private _pH = (pixelH * 5) * _scaleFactorCtrlH;
		private _fontsize = (200 * _pH);
		
		private _RDT_watermark = _display ctrlCreate ["RscStructuredText", -1];
		_RDT_watermark ctrlSetStructuredText parseText format ["<t color='#ffffff'>DZA3 (DayZ Mod Ported to A3)<t color='#7CFC00'> Public Development Build </t> %2 </t><t color='#ffffff'> %3</t>",_fontsize,cytech_Currentbuild,(getplayeruid player)];
		_RDT_watermark ctrlSetPosition [
			 -0.000156274 * safezoneW + safezoneX
			,0.973 * safezoneH + safezoneY
			,0.960937 * safezoneW
			,0.022 * safezoneH
		];	
		_RDT_watermark ctrlCommit 0;			
		
			
		RDT_drivinghudelements = [];
		private _RDT_fuel = _display ctrlCreate ["RscStructuredText", -1];
		_RDT_fuel ctrlSetStructuredText parseText  format ["<img size='%2'  image='cytech_rt_gamemode_core_dayz\hud\blank.paa' color='%1'/>",_colour101,_fontsize];
		_RDT_fuel ctrlSetPosition [ 
			0.01 * safezoneW + safezoneX 
			,0.909 * safezoneH + safezoneY 
			,0.0567187 * safezoneW 
			,0.066 * safezoneH 
		];  
		_RDT_fuel ctrlCommit 0;
		RDT_drivinghudelements pushBack _RDT_fuel;	
		
		private _RDT_kmh = _display ctrlCreate ["RscStructuredText", -1];
		_RDT_kmh ctrlSetStructuredText parseText  format ["<img size='%2'  image='cytech_rt_gamemode_core_dayz\hud\blank.paa' color='%1'/>",_colour101,_fontsize];
		_RDT_kmh ctrlSetPosition [
			 0.06 * safezoneW + safezoneX
			,0.909 * safezoneH + safezoneY
			,0.0567187 * safezoneW
			,0.066 * safezoneH
		];	
		_RDT_kmh ctrlCommit 0;
		RDT_drivinghudelements pushBack _RDT_kmh;	
			
		private _RDT_rpm = _display ctrlCreate ["RscStructuredText", -1];
		_RDT_rpm ctrlSetStructuredText parseText  format ["<img size='%2'  image='cytech_rt_gamemode_core_dayz\hud\blank.paa' color='%1'/>",_colour101,_fontsize];
		_RDT_rpm ctrlSetPosition [
			 0.11 * safezoneW + safezoneX
			,0.909 * safezoneH + safezoneY
			,0.0567187 * safezoneW
			,0.066 * safezoneH
		];	
		_RDT_rpm ctrlCommit 0;
		RDT_drivinghudelements pushBack _RDT_rpm;	
		

};
