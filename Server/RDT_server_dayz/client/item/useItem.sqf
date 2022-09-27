
ATM_fnc_useItem = {

	private _unit = _this select 0 select 0;
	private _containerObj = _this select 0 select 1;

	fnc_usableItem = {
		_item = (cytech_dblCitem select 0);
		
		switch (_item) do {
			case ("ItemBloodbag"): {
				if ((isplayer cursortarget) && (cursorTarget distance2d player < 3) && (cursortarget getVariable["USEC_lowBlood",false])) then {
					player playActionNow "Medic";
					cursorTarget setVariable["LastTransfusion",time,true];
					cursorTarget setVariable["USEC_lowBlood",false,true];
					player removeMagazine "ItemBloodbag";	
					[cursorTarget,player] remoteExec ["player_medTransfuse",cursorTarget];
					[player,250] call dayzHumanity_code;
					closeDialog 0;
				} else {
					systemChat "Your not looking at anyone!";
				};
			};
			case ("ItemBandage"): {
				_item spawn player_useMeds;
				closeDialog 0;
			};	
			case ("ItemHeatPack"): {
				_item spawn player_useMeds;
				closeDialog 0;
			};	
			case ("PartWoodPile"): {
				0 spawn player_makeFire;
				closeDialog 0;
			};			
			case ("ItemMorphine"): {
				_item spawn player_useMeds;
				closeDialog 0;
			};
			case ("ItemPainkiller"): {
				_item spawn player_useMeds;
				closeDialog 0;
			};
			case ("ItemAntibiotic"): {
				_item spawn player_useMeds;
				closeDialog 0;
			};			
			case ("ItemWaterbottleUnfilled"): {
				0 spawn player_fillWater;
				closeDialog 0;
			};
			case ("FoodCanSardines"): {
				_item spawn player_eat;
				closeDialog 0;
			};			
			case ("FoodCanBakedBeans"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodCanFrankBeans"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodCanPasta"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodmuttonRaw"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodchickenRaw"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodrabbitRaw"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodbaconRaw"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodbeefRaw"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodmuttonCooked"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodchickenCooked"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodbaconCooked"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodrabbitCooked"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("FoodbeefCooked"): {
				_item spawn player_eat;
				closeDialog 0;
			};
			case ("ItemSodaPepsi"): {
				_item spawn player_drink;
				closeDialog 0;
			};
			case ("ItemSodaCoke"): {
				_item spawn player_drink;
				closeDialog 0;
			};
			case ("ItemSodaMdew"): {
				_item spawn player_drink;
				closeDialog 0;
			};
			case ("ItemWaterbottle"): {
				_item spawn player_drink;
				closeDialog 0;
			};
			case ("ItemWaterbottleBoiled"): {
				_item spawn player_drink;
				closeDialog 0;
			};			
			
			case ("ItemWire"): {
				[player,_item,"Land_Razorwire_F"] spawn engineer_upgrade;
				closeDialog 0;
			};
			
			case ("ItemTent"): {
				_item spawn player_tentPitch;
				closeDialog 0;
			};
			
			default {
				systemChat "This Item is not usable";
			};
		};
	};

	fnc_getDblClickItem = {
		params ["_control", "_selectedIndex"];
		private _idc = ctrlIDC(_control); 
		private _selectedItem = "";
		private _cytech_class_name_list= [];
		private _containerList = [];
		private _machtingError = false;

		switch (true) do {
			case ( _idc == 633 ): {
				_containerList =(((getWeaponCargo (uniformContainer  player)) select 0) + 
								((getItemCargo (uniformContainer  player)) select 0) + 
								((getMagazineCargo (uniformContainer  player)) select 0) + 
								((getBackpackCargo (uniformContainer player)) select 0));
			};
			case ( _idc == 638 ): {
				_containerList =(((getWeaponCargo (vestContainer  player)) select 0) + 
								((getItemCargo (vestContainer  player)) select 0) + 
								((getMagazineCargo (vestContainer  player)) select 0) + 
								((getBackpackCargo (vestContainer  player)) select 0));
			};
			case ( _idc == 619 ): {
				_containerList =(((getWeaponCargo (backpackContainer player)) select 0) + 
								((getItemCargo (backpackContainer player)) select 0) + 
								((getMagazineCargo (backpackContainer player)) select 0) + 
								((getBackpackCargo (backpackContainer player)) select 0));
			};
			case ( _idc == 632 && !(_containerObj isKindOf "Man") ): {
				_containerList =(((getWeaponCargo _containerObj) select 0) + 
								((getItemCargo _containerObj) select 0) + 
								((getMagazineCargo _containerObj) select 0) + 
								((getBackpackCargo _containerObj) select 0));
								{
									_containerList append(	((getWeaponCargo _x) select 0) + 
															((getItemCargo _x) select 0) + 
															((getMagazineCargo _x) select 0) + 
															((getBackpackCargo _x) select 0));
								} forEach (everyBackpack _containerObj);
			};
			case ( _idc == 632 && (_containerObj isKindOf "Man") ): {
				_containerList = [];
								_rekursiv = {
									private _import = _this select 0;
									{
										if ( typeName( _import select _forEachIndex ) == "ARRAY") then {
											if !(count(_import select _forEachIndex) < 1) then {
												[_import select _forEachIndex] call _rekursiv;
											};
										} else {
											if ( typeName( _import select _forEachIndex) == "STRING" ) then {
												if !( _import select _forEachIndex == "") then {
													_containerList pushBack (_import select _forEachIndex);
												};
											};
										};	
									} forEach _import;
								};
								[getUnitLoadout _containerObj] call _rekursiv;
			};
			case ( _idc == 640 ): {
				_containerList =((getWeaponCargo _containerObj) select 0) +
								((getMagazineCargo _containerObj) select 0) +
								((getItemCargo _containerObj) select 0) +
								((getBackpackCargo _containerObj) select 0);
								{
									_containerList append(	((getWeaponCargo _x) select 0) + 
															((getItemCargo _x) select 0) + 
															((getMagazineCargo _x) select 0) + 
															((getBackpackCargo _x) select 0));
								} forEach (everyBackpack _containerObj);								
			};
			default {
				_machtingError = true;
			};
		};	

		{
			switch (true) do {
				case ( isClass (configFile >> "CfgWeapons" >> _x)): {
					_cytech_class_name_list pushback [ gettext (configFile >> "CfgWeapons" >> _x >> "displayName") , _x ];
				};
				case ( isClass (configFile >> "CfgMagazines" >> _x)): {
					_cytech_class_name_list pushback [ gettext (configFile >> "CfgMagazines" >> _x >> "displayName") , _x ];
				};
				case ( isClass (configFile >> "CfgVehicles" >> _x)): {
					_cytech_class_name_list pushback [ gettext (configFile >> "CfgVehicles" >> _x >> "displayName") , _x ];
				};
				case ( isClass (configFile >> "CfgGlasses" >> _x)): {
					_cytech_class_name_list pushback [ gettext (configFile >> "CfgGlasses" >> _x >> "displayName") , _x ];
				};
				default {
					hint format["coud not match %1 with class Name",_x];
					_machtingError = true;
				};
			};
		} forEach _containerList;

		if !( _machtingError ) then {
			{
				if (_x select 0 == lbText [_idc, _selectedIndex] ) exitWith {
					_selectedItem = _x select 1;
				};
			} forEach _cytech_class_name_list;
			if !(_selectedItem == "") then {
				cytech_dblCitem = [_selectedItem, (lbPicture [_idc, _selectedIndex]) ];
			} else {
				_selectedItem = "";
				cytech_dblCitem = [];
			};
		} else {
			_selectedItem = "";
			cytech_dblCitem = [];
		};

		private _display = findDisplay 602;
		private _gridx = (ctrlPosition((_display) displayCtrl 2)) select 0;
		private _gridy = (ctrlPosition((_display) displayCtrl 2)) select 1;
		private _gridW = (ctrlPosition((_display) displayCtrl 2)) select 2;
		ctrlDelete ((_display) displayCtrl 246204);
		ctrlDelete ((_display) displayCtrl 843121);
		private _ctrl = _display ctrlCreate ["RscPicture", 246204]; 
		_ctrl ctrlSetPosition [_gridx +0.02 + _gridW, _gridy ,0.2,0.2]; 
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText (cytech_dblCitem select 1);
		_ctrl = _display ctrlCreate ["RscButton", 843121]; 
		_ctrl ctrlSetPosition [_gridx +0.02+ _gridW, _gridy + 0.2,0.2 ,0.1]; 
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText "Use";
		((findDisplay 602) displayCtrl 843121) ctrlSetEventHandler ["MouseButtonClick", "[] call fnc_usableItem"];
	}; 

	fnc_clearEVs = {
		params ["_display", "_exitCode"];
		{
			_x ctrlRemoveAllEventHandlers "LBDblClick";
		} forEach allControls (_display select 0);
		cytech_dblCitem = [];
	};



	private _containerLB = [ 638 , 632 , 633 , 619 , 640 ];

	(findDisplay 602) displayAddEventHandler ["Unload", "[_this] call fnc_clearEVs;"];

	while {true} do { 
		waituntil {!(isnull (finddisplay 602))}; 
		{
			((findDisplay 602) displayCtrl _x) ctrlSetEventHandler ["LBDblClick", "_this call fnc_getDblClickItem;"]; 
		} forEach _containerLB;
		waituntil {isnull (finddisplay 602)}; 
	}; 

	true
};

player addEventHandler ["InventoryOpened", "[_this] spawn ATM_fnc_useItem;"];	
