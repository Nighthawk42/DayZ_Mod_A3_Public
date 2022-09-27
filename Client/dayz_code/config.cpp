#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","Cytech_bp_weapons"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ";
		name = "DayZ";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzmod.com";
		version = "1.7.5.1";
		hiveVersion = 0.96; //0.93
	};
};

class CfgAddons
{

	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 0, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 1};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
    };
	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
};

class RscPictureGUI
{
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};


class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};
//#include "CfgWorlds.hpp"
#include "cfgMoves.hpp"
#include "rscTitles.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "cfgLoot.hpp"
#include "CfgMarkers.hpp"

class CfgSurvival {
	class Inventory {
		class Default {
			civilian_1[] = {{},{},{"BP_Mak_Old","","","",{"BP_12Rnd_9x18",12},{},""},{"RDT_PMC_Spawn",{{"BP_12Rnd_9x18",3,12}}},{"rds_pistol_holster",{{"BP_12Rnd_9x18",2,12},{"ItemBandage",2,1},{"FoodCanBakedBeans",1,1},{"ItemSodaMdew",1,1}}},{"Cytech_BI_Backpack_us_assault_Coyote",{}},"","",{},{"","","","","",""}};
			civilian_2[] = {{},{},{"BP_Mak_Old","","","",{"BP_12Rnd_9x18",12},{},""},{"RDT_PMC_Spawn_1",{{"BP_12Rnd_9x18",3,12}}},{"rds_pistol_holster",{{"BP_12Rnd_9x18",2,12},{"ItemBandage",2,1},{"FoodCanBakedBeans",1,1},{"ItemSodaMdew",1,1}}},{"Cytech_BI_Backpack_us_assault_Coyote",{}},"","",{},{"","","","","",""}};
			civilian_3[] = {{},{},{"BP_Mak_Old","","","",{"BP_12Rnd_9x18",12},{},""},{"RDT_PMC_Spawn_2",{{"BP_12Rnd_9x18",3,12}}},{"rds_pistol_holster",{{"BP_12Rnd_9x18",2,12},{"ItemBandage",2,1},{"FoodCanBakedBeans",1,1},{"ItemSodaMdew",1,1}}},{"Cytech_BI_Backpack_us_assault_Coyote",{}},"","",{},{"","","","","",""}};
			civilian_4[] = {{},{},{"BP_Mak_Old","","","",{"BP_12Rnd_9x18",12},{},""},{"RDT_PMC_Spawn_3",{{"BP_12Rnd_9x18",3,12}}},{"rds_pistol_holster",{{"BP_12Rnd_9x18",2,12},{"ItemBandage",2,1},{"FoodCanBakedBeans",1,1},{"ItemSodaMdew",1,1}}},{"Cytech_BI_Backpack_us_assault_Coyote",{}},"","",{},{"","","","","",""}};
			civilian_5[] = {{},{},{"BP_Mak_Old","","","",{"BP_12Rnd_9x18",12},{},""},{"RDT_PMC_Spawn",{{"BP_12Rnd_9x18",3,12}}},{"rds_pistol_holster",{{"BP_12Rnd_9x18",2,12},{"ItemBandage",2,1},{"FoodCanBakedBeans",1,1},{"ItemSodaMdew",1,1}}},{"Cytech_BI_Backpack_us_assault_Coyote",{}},"","",{},{"","","","","",""}};
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cytech_BI_Cow_F: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};

		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Cytech_BI_WildBoar_F: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};
/*
class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"launch_MRAWS_green_rail_F",
			"launch_NLAW_F",
			"BP_G36C",
			"launch_I_Titan_short_F"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"BP_Mak_Old","weapon"},
			{"BP_1911","weapon"},
			{"rds_weap_latarka_janta","weapon"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_SW45","weapon"},
			
			{"B_AssaultPack_khk","object"}, //8
			{"Cytech_BI_B_TacticalPack_oli","object"}, // 12
			{"B_Messenger_Black_F","object"}, // 12-0
			
			{"BP_1866","weapon"},
			{"ItemTent","item"},
			{"","military"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"optic_Aco","magazine"},
			{"optic_MRCO","magazine"},
			{"groundWeaponHolder_MeleeCrowbar","object"},
			{"BP_Lupara","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.15,
			0.05,
			0.03,
			0.13,
			0.05,
			0.03,
			0.08,
			0.06,
			2,
			0.06,
			0.04,
			0.04, //8
			0.01, //12
			0.03, //12-0
			0.01,
			0.01,
			0.03,
			0.5,
			0.01,
			0.06,
			0.06,
			0.01,
			0.01,
			0.08,
			0.03
		};		
	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"groundWeaponHolder_PartGeneric","object"},
			{"groundWeaponHolder_PartWheel","object"},
			{"groundWeaponHolder_PartFueltank","object"},
			{"groundWeaponHolder_PartEngine","object"},
			{"groundWeaponHolder_PartGlass","object"},
			{"groundWeaponHolder_PartVRotor","object"},
			{"groundWeaponHolder_ItemJerrycan","object"},
			{"groundWeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"}
		};
		itemChance[] =	{
			0.18,
			0.29,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.04
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"groundWeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_1866","weapon"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"PartWoodPile","magazine"},
			{"groundWeaponHolder_ItemHatchet","object"},
			{"BP_Lupara","weapon"},
			{"TrapBear","magazine"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			0.01
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"BP_Mak_Old","weapon"},
			{"BP_1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_SW45","weapon"},
					
			{"B_AssaultPack_khk","object"}, //8
			{"Cytech_BI_B_TacticalPack_oli","object"}, // 12
			{"B_Messenger_Black_F","object"}, // 12-0
			
			{"BP_1866","weapon"},
			{"ItemTent","item"},
			{"","food"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"BP_Lupara","weapon"}
		};
		itemChance[] =	{
			0.15,
			0.01,
			0.05,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.04, //8
			0.01, //12
			0.03, // 12-0
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_FNFAL","weapon"},
			{"srifle_DMR_04_F","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_MRT","magazine"},
			{"BP_M107","weapon"},
			{"BP_LRR_F","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"BP_MX_black","weapon"},
			{"BP_M24Des","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"optic_Aco","magazine"},
			{"optic_MRCO","magazine"},
			{"BP_G36C","weapon"},
			{"BP_G36C_WDL","weapon"},
			//{"BP_G36C","weapon"},
			{"G36A_camo","weapon"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"BP_FNFAL","weapon"},
			0.05,		//{"srifle_DMR_04_F","weapon"},
			0.05,		//{"BP_DMR_Officer","weapon"},
			0.02,		//{"BP_Mk12mod1Spec","weapon"},
			0.02,		//{"m107","weapon"},
			0.01,		//{"BP_LRR_F","weapon"},
			0.03,		//{"BP_Minimi_762","weapon"},
			0.05,		//{"BP_Minimi_HG","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BP_MX_black
			0.06,		//{"BP_M24Des","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//optic_Aco
			0.05,	//optic_MRCO
			0.03,	//BP_G36C"
			0.02,	//BP_G36C_WDL
			//0.01,	//BP_G36C
			0.02,	//G36A_camo
			0.02,	//BP_FALM
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_FNFAL","weapon"},
			{"srifle_DMR_04_F","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Mk12mod1Spec","weapon"},
//			{"BP_M107","weapon"},
//			{"BP_LRR_F","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"BP_MX_black","weapon"},
			{"BP_M24Des","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"optic_Aco","magazine"},
			{"optic_MRCO","magazine"},
			{"BP_G36C","weapon"},
			{"BP_G36C_WDL","weapon"},
			//{"BP_G36C","weapon"},
			{"BP_G36DMR","weapon"},
			{"BP_FALM","weapon"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"BP_FNFAL","weapon"},
			0.05,		//{"srifle_DMR_04_F","weapon"},
			0.05,		//{"BP_DMR_Officer","weapon"},
			0.02,		//{"BP_Mk12mod1Spec","weapon"},
//			0.02,		//{"m107","weapon"},
//			0.01,		//{"BP_LRR_F","weapon"},
			0.03,		//{"BP_Minimi_762","weapon"},
			0.05,		//{"BP_Minimi_HG","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BP_MX_black
			0.06,		//{"BP_M24Des","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//optic_Aco
			0.05,	//optic_MRCO
			0.03,	//BP_G36C"
			0.02,	//BP_G36C_WDL
			//0.01,	//BP_G36C
			0.02,	//G36A_camo
			0.02,	//BP_FALM
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			1,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"BP_m9","weapon"},
			{"BP_M16a2","weapon"},
			{"BP_MX_GL","weapon"},
			{"BP_m9qd","magazine"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M4","weapon"},
			{"BP_optic_ACOG","magazine"},
			{"arifle_AKS_F","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_M4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Uzi","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_G17","weapon"},
			{"BP_MP5","weapon"},
			{"BP_m9qd","magazine"},
			{"BP_M4OLD","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			
			{"Cytech_BI_B_Carryall_cbr","object"}, // 16
			{"Cytech_BI_B_FieldPack_khk","object"}, // 16
			{"B_Kitbag_rgr","object"}, // 18
			{"B_LegStrapBag_black_F","object"}, // 24
			{"Cytech_BI_B_Bergen_mcamo_F","object"}, // 24
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"BP_AK74U","weapon"},
			{"BP_Ruger","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			0.10, 
			1.00,
			2.50,
			//0.20,
			0.05,
			0.02,
			0.03,
			0.03
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"BP_M16a2","weapon"},
			{"BP_MX_GL","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_m9qd","magazine"},
			//{"M136","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M4","weapon"},
			{"BP_optic_ACOG","weapon"},
			{"arifle_AKS_F","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_SVDK","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_M107","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_M4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Uzi","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_G17","weapon"},
			{"BP_M24Des0_DZ","weapon"},
			{"BP_M4_SD_camo","weapon"},
			{"BP_Tavor","weapon"},
			{"BP_M4_HWS_GL_camo","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_M4OLD","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},

			//{"NVGoggles","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Rangefinder","military"},

			{"Cytech_BI_B_Carryall_cbr","object"}, // 16
			{"Cytech_BI_B_FieldPack_khk","object"}, // 16
			{"B_Kitbag_rgr","object"}, // 18
			{"B_LegStrapBag_black_F","object"}, // 24
			{"Cytech_BI_B_Bergen_mcamo_F","object"}, // 24		

			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"BP_SVT40","weapon"},
			{"BP_PSOP","magazine"},
			{"BP_G36C","weapon"},
			{"BP_Mk12mod1","weapon"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			//0.01, //m136
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,
			//0.01, //NVGoggles
			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			0.30,
			1.00,
			5.00, //military
			//0.20,
			0.01, //PipeBomb
			0.01, //BP_SVT40
			0.01, //Sa58V_CCO_EP1
			0.01, //{"BP_G36C","weapon"},
			0.02, // BP_Mk12mod1
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_SS_hangar: Military {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.9;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0.3;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Military {
		zombieChance = 0.3;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1



	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	
	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0.5;
		zombieChance = 0.2;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0.3;
		zombieChance = 0.4;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};
};
*/
/*
class Land_Mil_House: Default {}; // Qty: 5
*/
class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"launch_MRAWS_green_rail_F",
			"launch_NLAW_F",
			"BP_G36C",
			"launch_I_Titan_short_F"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemMap","weapon"},
			{"BP_Mak_Old","weapon"},
			{"BP_1911","weapon"},
			{"rds_weap_latarka_janta","weapon"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_SW45","weapon"},
			
			//Uniforms
			{"rds_uniform_Woodlander3","item"}, //8
			{"rds_uniform_Functionary2","item"}, // 12
			{"U_B_CombatUniform_mcam_tshirt","item"}, // 12-0
			
			//bags
			{"Cytech_BI_Backpack_acr_small","uniform"}, //60
			{"Cytech_BI_B_AssaultPack_rgr","uniform"}, // 60			
			{"Cytech_BI_B_TacticalPack_oli","uniform"}, //80
			{"Cytech_RT_Backpack_01","uniform"}, //80
			{"RDT_Backpack_04","uniform"}, //80
			{"Cytech_BI_Backpack_tk_alice","uniform"}, // 240
			
			//hats
			{"H_Hat_checker","item"}, //8
			{"H_Helmet_Skate","item"}, // 12
			{"H_RacingHelmet_3_F","item"}, // 12-0
			
			//vests
			{"V_Pocketed_black_F","item"}, //8
			{"V_Safety_yellow_F","item"}, // 12
			{"V_BandollierB_rgr","item"}, // 12-0
			
			{"BP_1866","weapon"},
			{"ItemTent","item"},
			{"","military"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"optic_Aco","magazine"},
			{"optic_MRCO","magazine"},
			{"Cytech_Melee_Axe","weapon"},
			{"BP_Lupara","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.10,
			0.13,
			0.05,
			0.03,
			0.08,
			0.06,
			2,
			0.06,
			0.04,
			
			//Uniforms
			0.04, //8
			0.01, //12
			0.03, //12-0
			//Bags
			0.1, //60
			0.1, //60	
			0.1, //80
			0.1, //80
			0.1, //80
			0.01, //240
			//Uniforms
			0.04, //8
			0.01, //12
			0.03, //12-0
			//Uniforms
			0.04, //8
			0.01, //12
			0.03, //12-0
			
			0.01,
			0.01,
			0.03,
			0.5,
			0.01,
			0.06,
			0.06,
			0.01,
			0.01,
			0.08,
			0.03
		};		
	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"PartGeneric","magazine"},
			{"PartWheel","magazine"},
			{"PartFueltank","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"PartVRotor","magazine"},
			{"ItemJerrycan","magazine"},
			{"Cytech_Melee_Axe","weapon"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"}
		};
		itemChance[] =	{
			0.18,
			0.29,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.08,
			0.01,
			0.04
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"ItemJerrycan","magazine"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_1866","weapon"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"PartWoodPile","magazine"},
			{"Cytech_Melee_Axe","weapon"},
			{"BP_Lupara","weapon"},
			{"TrapBear","magazine"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			0.01
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemMap","weapon"},
			{"BP_Mak_Old","weapon"},
			{"BP_1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"BP_LeeEnfield_old2","weapon"},
			{"BP_SW45","weapon"},
					
			{"Cytech_BI_B_AssaultPack_rgr","uniform"}, //8
			{"Cytech_BI_Backpack_civil_assault","uniform"}, // 12
			{"Cytech_BI_Backpack_tk_alice","uniform"}, // 12-0
			
			{"BP_1866","weapon"},
			{"ItemTent","item"},
			{"","food"},
			{"","trash"},
			{"BP_Crossbow","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"BP_Lupara","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.1, //8
			0.08, //12
			0.01, // 12-0
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_FNFAL","weapon"},
			{"H_HelmetAggressor_cover_taiga_F","uniform"},
			{"BP_DMR_Officer","weapon"},
			{"BP_MRT","item"},
			{"BP_M107","weapon"},
			{"BP_LRR_F","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"V_PlateCarrierSpec_mtp","uniform"},
			{"BP_M24Des","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"optic_Aco","item"},
			{"optic_MRCO","item"},
			{"BP_G36C","weapon"},
			{"U_I_FullGhillie_lsh","uniform"},
			{"Cytech_BI_B_Bergen_mcamo_F","uniform"},
			{"G36A_camo","weapon"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"BP_FNFAL","weapon"},
			0.05,		//{"srifle_DMR_04_F","weapon"},
			0.05,		//{"BP_DMR_Officer","weapon"},
			0.02,		//{"BP_Mk12mod1Spec","weapon"},
			0.02,		//{"m107","weapon"},
			0.01,		//{"BP_LRR_F","weapon"},
			0.03,		//{"BP_Minimi_762","weapon"},
			0.05,		//{"BP_Minimi_HG","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BP_MX_black
			0.06,		//{"BP_M24Des","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//optic_Aco
			0.05,	//optic_MRCO
			0.03,	//BP_G36C"
			0.02,	//BP_G36C_WDL
			0.01,	//Cytech_BI_B_Bergen_mcamo_F
			0.02,	//G36A_camo
			0.02,	//BP_FALM
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_FNFAL","weapon"},
			{"srifle_DMR_04_F","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Mk12mod1Spec","weapon"},
			//{"BP_M107","weapon"},
			//{"BP_LRR_F","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			//{"BAF_L85A2_RIS_CWS","weapon"},
			{"BP_MX_black","weapon"},
			{"BP_M24Des","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","item"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"optic_Aco","item"},
			{"optic_MRCO","item"},
			{"BP_G36C","weapon"},
			{"U_I_FullGhillie_lsh","uniform"},
			{"Cytech_BI_B_Bergen_mcamo_F","uniform"},
			{"BP_G36DMR","weapon"},
			{"BP_FALM","weapon"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.02,		//{"BP_FNFAL","weapon"},
			0.05,		//{"srifle_DMR_04_F","weapon"},
			0.05,		//{"BP_DMR_Officer","weapon"},
			0.02,		//{"BP_Mk12mod1Spec","weapon"},
			//0.02,		//{"m107","weapon"},
			//0.01,		//{"BP_LRR_F","weapon"},
			0.03,		//{"BP_Minimi_762","weapon"},
			0.05,		//{"BP_Minimi_HG","weapon"},
			0.01,		//{"BAF_L85A2_RIS_CWS","weapon"}, BP_MX_black
			0.06,		//{"BP_M24Des","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//optic_Aco
			0.05,	//optic_MRCO
			0.03,	//BP_G36C"
			0.02,	//BP_G36C_WDL
			0.01,	//BP_G36C
			0.02,	//G36A_camo
			0.02,	//BP_FALM
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			1,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"BP_m9","weapon"},
			{"BP_M16a2","weapon"},
			{"BP_MX_GL","weapon"},
			{"BP_m9qd","item"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M4","weapon"},
			{"BP_optic_ACOG","item"},
			{"arifle_AKS_F","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_M4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Uzi","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_G17","weapon"},
			{"BP_MP5","weapon"},
			{"BP_m9qd","item"},
			{"BP_M4OLD","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemMap","weapon"},
			
			{"H_Bandanna_surfer_blk","item"}, // B_LegStrapBag_black_F
			{"H_Watchcap_blk","item"}, // 16 B_Kitbag_rgr
			{"H_HelmetB","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"H_HelmetSpecB_paint1","item"}, // Cytech_BI_B_Carryall_cbr
			{"H_PilotHelmetHeli_O","item"}, // 24		

			{"rds_pistol_holster","item"}, // B_LegStrapBag_black_F
			{"V_Rangemaster_belt","item"}, // 16 B_Kitbag_rgr
			{"V_TacVest_oli","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"V_TacVest_blk_POLICE","item"}, // Cytech_BI_B_Carryall_cbr
			{"V_PlateCarrier2_blk","item"}, // 24
			
			{"U_BG_Guerrilla_6_1","item"}, // B_LegStrapBag_black_F
			{"U_BG_Guerilla2_3","item"}, // 16 B_Kitbag_rgr
			{"U_I_G_Story_Protagonist_F","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"U_B_CombatUniform_mcam","item"}, // Cytech_BI_B_Carryall_cbr
			{"U_I_GhillieSuit","item"}, // 24
						
			//bags		
			{"Cytech_BI_B_FieldPack_khk","uniform"}, //80
			{"Cytech_BI_B_Kitbag_cbr","uniform"}, //120
			{"Cytech_BI_Backpack_civil_assault","uniform"}, //120 
			{"Cytech_BI_Backpack_acr","uniform"}, //180
			{"Cytech_BI_Backpack_us_Coyote","uniform"}, //240
			{"Cytech_BI_B_Carryall_cbr","uniform"}, //240
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"BP_AK74U","weapon"},
			{"BP_Ruger","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.05, //MAP
			//hats
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24	
			//Vest
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			//uniforms
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			//bags
			0.08, //80
			0.05, //120
			0.05, //120
			0.05, //180
			0.01, //240		
			0.01, //240		
						
			0.10, 
			1.00,
			2.50,
			//0.20,
			0.05,
			0.02,
			0.03,
			0.03
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"BP_M16a2","weapon"},
			{"BP_MX_GL","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_m9qd","magazine"},
			//{"M136","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M4","weapon"},
			{"BP_optic_ACOG","weapon"},
			{"arifle_AKS_F","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_SVDK","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_M107","weapon"},
			{"BP_M24Des","weapon"},
			{"BP_M4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_Uzi","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_G17","weapon"},
			{"BP_M24Des0_DZ","weapon"},
			{"BP_M4_SD_camo","weapon"},
			{"BP_Tavor","weapon"},
			{"BP_M4_HWS_GL_camo","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_M4OLD","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},

			//{"NVGoggles","weapon"},
			{"Binocular","weapon"},
			{"ItemMap","weapon"},
			{"Rangefinder","military"},

			{"H_Bandanna_surfer_blk","item"}, // B_LegStrapBag_black_F
			{"H_Watchcap_blk","item"}, // 16 B_Kitbag_rgr
			{"H_HelmetB","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"H_HelmetSpecB_paint1","item"}, // Cytech_BI_B_Carryall_cbr
			{"H_PilotHelmetHeli_O","item"}, // 24		

			{"rds_pistol_holster","item"}, // B_LegStrapBag_black_F
			{"V_Rangemaster_belt","item"}, // 16 B_Kitbag_rgr
			{"V_TacVest_oli","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"V_TacVest_blk_POLICE","item"}, // Cytech_BI_B_Carryall_cbr
			{"V_PlateCarrier2_blk","item"}, // 24
			
			{"U_BG_Guerrilla_6_1","item"}, // B_LegStrapBag_black_F
			{"U_BG_Guerilla2_3","item"}, // 16 B_Kitbag_rgr
			{"U_I_G_Story_Protagonist_F","item"}, // 18 Cytech_BI_B_FieldPack_khk
			{"U_B_CombatUniform_mcam","item"}, // Cytech_BI_B_Carryall_cbr
			{"U_I_GhillieSuit","item"}, // 24
						
			//bags		
			{"Cytech_BI_B_FieldPack_khk","uniform"}, //80
			{"Cytech_BI_B_Kitbag_cbr","uniform"}, //120
			{"Cytech_BI_Backpack_civil_assault","uniform"}, //120 
			{"Cytech_BI_Backpack_acr","uniform"}, //180
			{"Cytech_BI_Backpack_us_Coyote","uniform"}, //240
			{"Cytech_BI_B_Carryall_cbr","uniform"}, //240

			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"BP_SVT40","weapon"},
			{"BP_PSOP","magazine"},
			{"BP_G36C","weapon"},
			{"BP_Mk12mod1","weapon"},
			{"BP_ScarH","weapon"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			//0.01, //m136
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,
			//0.01, //NVGoggles
			0.10,
			0.05,
			0.01,
			//hats
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24	
			//Vest
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			//uniforms
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //Cytech_BI_B_Bergen_mcamo_F 24
			//bags
			0.08, //80
			0.05, //120
			0.05, //120
			0.05, //180
			0.01, //240		
			0.01, //240		
			0.30,
			1.00,
			5.00, //military
			//0.20,
			0.01, //PipeBomb
			0.01, //BP_SVT40
			0.01, //Sa58V_CCO_EP1
			0.01, //{"BP_G36C","weapon"},
			0.02, // BP_Mk12mod1
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};   
	class Camp : MilitarySpecial {
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	};

	class Land_rozvodna2: Industrial
	{
		positions[] =
		{
			{7.28522,-14.1221,-6.07237},
			{-6.95403,-9.69629,-6.07451},
			{-7.09808,0.47168,-6.07368},
			{1.503,0.974609,-6.07214},
			{7.54499,5.95801,-6.07201},
			{6.98102,13.2578,-6.07135},
			{-1.14056,15.8184,-6.07349},
			{-5.59857,22.5732,-6.07376},
			{-7.47796,31.0146,-6.07497},
			{-1.64739,32.4287,-6.0741},
			{6.01911,33.6123,-6.0714},
			{7.57282,40.2012,-6.07167},
			{7.19391,47.1914,-6.07232},
			{-6.75823,48.1631,-6.07485},
			{-0.839289,43.7314,-6.07344}
		};
	};

	class Land_posta: Residential
	{
		positions[] =
		{
			{20.752,-8.93359,1.08989},
			{-1.21045,-9.32178,1.08989},
			{-17.4922,-8.69434,1.08989},
			{-11.5732,-4.88965,1.08989},
			{0.945313,-3.48389,1.08989},
			{10.272,-0.00537109,1.08989},
			{13.8687,9.97363,1.08989},
			{7.55859,15.207,1.08989},
			{7.17334,14.728,1.08989},
			{7.62256,9.02783,1.08989},
			{-6.50293,1.61572,1.08989},
			{-15.25,2.9541,1.08989},
			{-16.7905,15.4795,1.08989},
			{-9.4873,13.1343,1.08989},
			{-3.49316,6.5708,1.08989},
			{-3.66602,15.7734,1.08989}
		};
	};

	class Land_Skola: Residential
	{
		positions[] =
		{
			{29.458,-24.8208,-1.91201},
			{23.438,-12.5732,-1.91201},
			{29.0107,-9.76025,-1.91201},
			{-3.89893,-12.8237,-1.25769},
			{-5.15283,-9.45117,-1.2367},
			{2.05322,-15.4038,-1.26687},
			{0.86084,-19.3984,-1.26754},
			{23.8945,-8.68896,1.97939},
			{24.8828,-13.3545,1.95893},
			{23.1567,-22.6318,1.95345},
			{27.1108,-21.334,1.95463},
			{-5.45068,-9.1748,1.97939},
			{-3.17578,-13.208,1.95153},
			{3.01025,-15.9751,1.94991},
			{0.515137,-2.05127,1.3164},
			{29.498,5.80029,1.97939},
			{29.3174,9.09033,1.93231},
			{25.248,11.7949,1.96659},
			{21.3101,12.0117,1.95086},
			{2.33057,8.28516,2.47657},
			{1.90137,7.43359,2.28895},
			{-6.00146,16.1377,1.3164},
			{0.137695,20.7588,1.3164},
			{3.02197,5.81348,-1.23669},
			{1.52051,11.3101,-1.26189},
			{29.5864,5.91211,-1.2367},
			{28.9805,8.93066,-1.2693},
			{23.2817,10.377,-1.26153},
			{25.0449,16.8535,-1.25363},
			{16.2202,20.8105,-1.91201}
		};
	};

	class Land_konecna: Supermarket
	{
		positions[] =
		{
			{-24.6147,-3.16357,-1.50941},
			{-18.3394,-12.0063,-1.50941},
			{-15.4565,-7.72168,-1.50941},
			{8.99854,-1.45361,-1.57668},
			{6.54102,-7.5918,-1.57668},
			{9.52686,-6.4248,-1.57668},
			{11.8623,-7.12695,-1.57668},
			{9.20752,-4.29785,-1.57668},
			{14.8955,-1.7915,-1.57668},
			{14.6885,-4.16016,-1.57668},
			{15.1357,-8.09814,-1.57668},
			{6.41504,-4.3208,-1.57668}
		};
	};

	class Land_zachytka: Military
	{
		positions[] =
		{
			{2.42383,-8.13184,-3.30232},
			{4.62305,-10.2168,-3.99046},
			{5.1499,-4.83887,-3.95359},
			{3.95508,11.9424,-3.95359},
			{-3.92578,8.60205,-3.95359},
			{-6.25732,3.55225,-3.59051},
			{2.20898,1.49072,-0.0781212},
			{2.26563,-2.42871,-0.103809},
			{-3.93457,3.42822,0.232128},
			{4.16748,11.4561,-0.411125},
			{4.6416,8.69531,-0.316086},
			{2.30176,9.15967,-0.375877},
			{-5.64746,12.0864,-0.311489},
			{-1.2627,5.98096,-0.375877},
			{4.17529,-2.24805,-3.34383},
			{5.37354,6.12939,-3.95359}
		};
	};

	class Land_Supermarketping_sab5: Supermarket
	{
		positions[] =
		{
			{0.350586,-12.1704,-2.06668},
			{-10.1323,-10.749,-2.06668},
			{-21.397,-11.3525,-2.06668},
			{-20.2529,-2.50928,-2.06668},
			{-21.2549,3.82178,-2.06668},
			{-7.89355,2.57764,-2.06668},
			{-9.2085,-3.74805,-2.06668},
			{1.73682,3.60791,-2.06668},
			{0.760742,-3.38135,-2.06668},
			{9.12793,-4.77441,-1.25337},
			{7.06152,-13.2114,-1.25337},
			{12.7627,4.80518,-1.25337},
			{21.8989,14.0908,-1.25337},
			{7.43555,12.5483,-1.25337},
			{-20.1807,13.2207,-1.25337},
			{0.996582,7.8418,-2.08583},
			{0.422363,-17.4556,-2.79032},
			{-0.345703,-18.1704,-2.79032},
			{-0.88623,-17.7837,-2.79032},
			{-1.979,-17.4058,-2.79032},
			{-0.934082,-16.8672,-2.79032},
			{1.45313,-18.1299,-2.79032},
			{1.83008,-17.7134,-2.79032},
			{2.06738,-16.7153,-2.79032},
			{3.27979,-17.4688,-2.79032},
			{0.0239258,-15.7593,-2.06668},
			{0.848145,-15.7598,-2.06668},
			{14.2144,-13.1338,-1.25337},
			{14.4702,-13.1338,-1.25337},
			{22.9922,0.759766,-1.25337},
			{22.9922,0.503906,-1.25337},
			{21.0479,0.63623,-1.25337},
			{14.2368,0.75,-1.25337},
			{14.7671,0.243652,-1.25337},
			{14.3096,-7.87158,-1.25337},
			{20.6851,2.78955,-1.25337},
			{21.2676,2.78955,-1.25337},
			{12.4302,-7.4375,-1.25337},
			{12.4302,-8.08887,-1.25337},
			{22.8345,7.49805,-1.25337},
			{-11.7773,11.2373,-1.25337},
			{-11.7773,13.9502,-1.25337},
			{8.49902,-2.03857,-1.25337},
			{5.24902,-1.81152,-1.25337},
			{5.24902,-2.31934,-1.25337},
			{10.333,-13.2109,-1.25337},
			{8.74902,-7.70215,-1.25337},
			{7.92236,-4.7749,-1.25337},
			{4.23584,-2.06543,-2.08583},
			{4.23584,-2.06543,-2.08583},
			{-22.4873,7.90771,-1.25337},
			{-18.8022,8.39355,-1.25337},
			{-11.6406,8.3335,-1.25337},
			{-11.6406,7.80762,-1.25337},
			{-10.6382,8.33301,-2.08583},
			{-10.6382,7.80713,-2.08583},
			{-7.89355,-10.749,-2.06668},
			{-10.1323,-12.8452,-2.06668},
			{-7.89355,-12.8452,-2.06668},
			{-22.2319,-3.75439,-2.06668},
			{-20.2153,-5.0874,-2.06668},
			{-10.1328,4.67432,-2.06668},
			{-7.89355,4.67383,-2.06668},
			{-10.1323,2.57764,-2.06668},
			{0.760254,-0.803223,-2.06668},
			{2.77686,-3.38135,-2.06668},
			{2.77686,-0.803223,-2.06668}
		};
	};

	class Land_avtovokzal: Industrial
	{
		positions[] =
		{
			{-0.551758,11.7432,-8.0099},
			{6.80078,13.9683,-7.99359},
			{-7.67871,28.1436,-8.08513},
			{-7.69238,18.437,-4.40897},
			{12.6807,12.4702,-4.2021}
		};
	};

	class Land_Supermarketping_sab1: Supermarket
	{
		positions[] =
		{
			{9.14014,24.5234,-6.18354},
			{29.8994,28.4185,-6.14402},
			{40.6333,21.082,-6.19086},
			{33.9233,14.144,-6.06266},
			{20.2495,13.2993,-6.16827},
			{19.3535,-21.6108,-6.18029},
			{9.65039,-26.2803,-6.18264},
			{26.2769,-28.2725,-6.22197},
			{39.9761,-22.6064,-6.22077},
			{34.5537,-13.2607,-6.18822},
			{25.5127,-15.4653,-6.20272},
			{-20.2686,-19.5166,-6.18981},
			{-29.3052,-28.1021,-6.1837},
			{-13.2603,-27.6606,-6.21983},
			{0.214355,-23.5645,-6.22497},
			{0.499023,-12.8994,-6.19933},
			{-12.1836,-13.7549,-6.16758},
			{-27.4966,-12.4907,-6.10574},
			{-10.8022,21.7021,-6.17677},
			{-29.9038,26.0327,-6.17677},
			{-25.8389,13.6196,-6.17677},
			{-8.7251,18.2407,-6.17677},
			{3.31738,18.2041,-6.17677},
			{-17.8354,15.3604,-2.36147},
			{-26.4492,26.6953,-2.28554},
			{-7.09668,27.8472,-2.3336},
			{-0.798828,17.7993,-2.26628},
			{30.7407,18.5361,-2.32365},
			{20.2915,28.3081,-2.33172},
			{11.1489,18.2993,-2.28757},
			{20.2817,18.0571,-2.27654},
			{36.0596,11.7129,-2.36237},
			{41.7671,-3.66064,-2.13768},
			{40.0479,4.95801,-2.08167},
			{32.8535,7.15234,-2.05352},
			{33.8335,-3.71875,-2.28136},
			{30.0132,-7.39111,-2.21127},
			{30.4155,-0.740723,-2.21817},
			{19.1753,-16.5869,-2.25232},
			{15.0742,-29.4966,-2.22166},
			{32.1636,-23.77,-2.25169},
			{36.3452,-12.5298,-2.3328},
			{-27.791,-19.0762,-2.3174},
			{-12.106,-28.9521,-2.28348},
			{0.291992,-22.1978,-2.21698},
			{-6.69482,-13.0542,-2.24563},
			{-19.6865,-18.9399,-2.27887},
			{-21.2354,-26.1436,-2.19456},
			{-16.3179,-29.5215,-2.16704},
			{-12.375,-19.5635,-2.31621}
		};
	};

	class Land_spital: Hospital
	{
		positions[] =
		{
			{26.8193,-12.3379,-20.2831},
			{29.0967,-12.1376,-20.2831},
			{29.1611,-2.9179,-20.2831},
			{26.2285,4.06834,-20.2831},
			{30.5518,6.69835,-20.2831},
			{-15.0742,5.45772,-20.2831},
			{-16.832,3.47036,-20.2831},
			{-1.66504,-2.61707,-20.2831},
			{-0.701172,-9.7733,-20.2831},
			{1.7666,-14.8455,-20.2831},
			{17.6182,-12.5921,-20.2831},
			{16.6445,0.113946,-20.2831},
			{15.2285,2.02894,-20.2831}
		};
	};

	class Land_tav_houseblock_b1: Supermarket
	{
		positions[] =
		{
			{9.89453,-0.324921,-7.29474},
			{9.73242,2.38592,-7.29474},
			{3.19531,-4.16981,-7.25834},
			{3.38477,-4.82301,-7.25834},
			{3.0459,-4.82127,-7.25834},
			{2.55664,2.14914,-7.25834},
			{7.06836,-0.999488,-7.25834},
			{9.2832,2.62588,-7.25834},
			{9.52148,-3.77144,-7.25834},
			{3.72852,-1.50737,-7.25834},
			{-2.67285,2.59519,-7.25834},
			{0.0380859,1.9191,-7.25834},
			{-5.38281,2.32596,-7.25834},
			{-5.58984,3.98404,-7.25834},
			{-5.05176,3.97753,-7.25834}
		};
	};

	class Land_x: MilitarySpecial
	{
		positions[] =
		{
			{24.3643,1.05242,-3.84346},
			{24.4014,1.05242,-3.84346},
			{24.3643,1.01531,-3.84346},
			{24.3184,4.45964,-3.84346},
			{24.3184,4.50554,-3.84346},
			{24.3643,4.45476,-3.84346},
			{23.998,4.47332,-3.84346},
			{23.998,4.51921,-3.84346},
			{23.9629,1.05242,-3.84346},
			{23.9629,1.01531,-3.84346},
			{21.4824,1.00945,-5.90034},
			{21.4824,0.972338,-5.90034},
			{20.1582,2.37175,-5.90034},
			{20.1582,2.33562,-5.90034},
			{11.624,2.80535,-5.90034},
			{11.624,1.9782,-5.90034},
			{10.9893,2.79558,-5.90034},
			{10.9893,1.96941,-5.90034},
			{-2.05859,2.77898,-5.90034},
			{-1.19043,1.14421,-5.90034},
			{-3.68359,2.76921,-5.90034},
			{-4.81445,-1.57161,-5.90034},
			{-10.2002,2.94792,-5.90034},
			{-10.2002,2.12175,-5.90034},
			{-10.835,2.93913,-5.90034},
			{-10.835,2.11296,-5.90034},
			{-15.3457,3.1823,-5.90034},
			{-15.3457,3.09636,-5.90034},
			{-1.21973,-3.43294,-5.90034},
			{-4.80371,-3.92708,-5.90034},
			{-4.58105,-4.75325,-5.90034},
			{-11.7432,-2.74934,-5.90034},
			{-11.7432,-3.57649,-5.90034},
			{-12.3779,-2.75911,-5.90034},
			{-12.3779,-3.58528,-5.90034},
			{-10.7041,6.59831,-5.90034},
			{-10.5195,6.59831,-5.90034},
			{-15.0986,11.6852,-5.90034},
			{-15.0986,11.7594,-5.90034},
			{-23.8135,11.8981,-5.90034},
			{-21.0225,3.47331,-5.90034},
			{-21.0225,3.38835,-5.90034},
			{-21.1035,3.43815,-5.90034},
			{-21.2148,7.95866,-5.90034},
			{-21.1094,-0.485673,-5.90034},
			{-0.676758,6.41179,-5.90034},
			{11.1777,6.92546,-5.90034},
			{-10.8613,-5.15364,-5.90034},
			{-10.9111,-5.15364,-5.90034},
			{-10.8984,-10.1204,-5.90034},
			{3.50195,-4.53645,-5.90034},
			{3.98926,-4.55305,-5.90034},
			{3.74316,-5.74934,-5.90034},
			{3.86816,-5.7513,-5.90034},
			{3.88184,-9.59798,-5.90034},
			{3.51758,-3.23762,-5.90034},
			{4.00488,-3.25423,-5.90034},
			{15.4443,-4.53645,-5.90034},
			{15.9316,-4.55305,-5.90034},
			{15.6855,-5.69563,-5.90034},
			{15.8105,-5.69758,-5.90034},
			{15.46,-3.23762,-5.90034},
			{15.9473,-3.25422,-5.90034},
			{19.416,-4.52961,-5.90034},
			{19.416,-4.29719,-5.90034},
			{22.6895,-4.41633,-5.90034},
			{15.6855,-8.50032,-5.90034},
			{15.8105,-8.50227,-5.90034},
			{19.6396,-13.5101,-5.90034},
			{19.6396,-13.596,-5.90034},
			{24.251,-13.8031,-5.90034},
			{-15.3857,-0.876298,-5.90034},
			{-15.3672,-1.06087,-5.90034},
			{-17.667,-0.876298,-5.90034},
			{-17.6484,-1.06087,-5.90034},
			{-17.8623,-1.06087,-5.90034},
			{-23.2314,-6.92903,-5.90034},
			{21.1738,4.52214,-2.24277},
			{21.1738,4.56804,-2.24277},
			{21.1172,4.56804,-2.24277},
			{21.0283,11.9225,-2.24277},
			{20.9707,11.9225,-2.24277},
			{20.9717,11.9782,-2.24277},
			{18.1035,12.0075,-2.24277},
			{18.1045,12.0632,-2.24277},
			{16.6064,6.65105,-2.24277},
			{16.333,15.4997,-2.24277},
			{-12.4443,15.4596,-2.24277},
			{-12.6064,7.05241,-2.24277},
			{-15.4014,10.1628,-2.24277},
			{-15.3828,9.16081,-2.24277},
			{-20.5957,10.112,-2.24277},
			{-20.9111,9.13542,-2.24277},
			{-21.0654,9.13542,-2.24277},
			{-24.5293,11.2428,-2.24277},
			{-24.6582,11.2428,-2.24277},
			{-25.3008,15.6139,-2.24277},
			{-21.0986,3.66081,-2.24277},
			{-21.2529,3.66081,-2.24277},
			{-21.0781,-0.897783,-2.24277},
			{-21.2324,-0.897783,-2.24277},
			{-18.1973,-9.85872,-2.24277},
			{-18.3516,-9.85872,-2.24277},
			{-18.1973,-10.0452,-2.24277},
			{-21.542,-11.1263,-2.24277},
			{-15.4678,-9.85872,-2.24277},
			{-15.4678,-10.0452,-2.24277},
			{-14.4248,-7.57552,-2.24277},
			{-14.4248,-7.76204,-2.24277},
			{-6.06055,-7.94759,-2.24277},
			{-6.06055,-8.13411,-2.24277},
			{-5.2666,-9.90852,-2.24277},
			{-5.2666,-10.095,-2.24277},
			{-3.08301,-9.90852,-2.24277},
			{-3.08301,-10.095,-2.24277},
			{-2.06543,-7.82356,-2.24277},
			{-2.06543,-8.01009,-2.24277},
			{6.57227,-7.94758,-2.24277},
			{6.57227,-8.13411,-2.24277},
			{7.49023,-9.85872,-2.24277},
			{7.49023,-10.0452,-2.24277},
			{15.6367,-10.2542,-2.24277}
		};
	};
	
	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	};
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	};
    class Land_Studstage3: Industrial {
        lootPos[]=
        {
            {-2.00391, -3.69531, 0.0121841},
            {4.56641, 6.44434, 0.0121841},
            {6.125, -1.08496, 0.0121841},
            {-8.17578, 5.98242, 0.0121822}
        };
    };
    class Land_Studstage2: Industrial {
        lootPos[]=
        {
            {-2.00391, -3.69531, 0.0121841},
            {4.56641, 6.44434, 0.0121841},
            {6.125, -1.08496, 0.0121841},
            {-8.17578, 5.98242, 0.0121822}
        };
    };
    class Land_Studstage1: Industrial {
        lootPos[]=
        {
            {-2.00391, -3.69531, 0.0121841},
            {4.56641, 6.44434, 0.0121841},
            {6.125, -1.08496, 0.0121841},
            {-8.17578, 5.98242, 0.0121822}
        };
    };
    class Land_brickstage1: Industrial {
        lootPos[]=
        {
            {-2.00391, -3.69531, 0.0121841},
            {4.56641, 6.44434, 0.0121841},
            {6.125, -1.08496, 0.0121841},
            {-8.17578, 5.98242, 0.0121822}
        };
    };
    class Land_HouseA: Residential {
        lootPos[]=
        {
            {-1.07422, 6.57031, 0.0370274},
            {-5.22656, 6.45605, -0.00293541},
            {5.77344, 4.05078, 0.0470598},
            {-4.64453, -2.4375, -0.00293517}
        };
    };
    class Land_HouseA1: Residential {
        lootPos[]=
        {
            {-1.07422, 6.57031, 0.0370274},
            {-5.22656, 6.45605, -0.00293541},
            {5.77344, 4.05078, 0.0470598},
            {-4.64453, -2.4375, -0.00293517}
        };
    };
    class Land_HouseB: Residential {
        lootPos[]=
        {
            {-1.07422, 6.57031, 0.0370274},
            {-5.22656, 6.45605, -0.00293541},
            {5.77344, 4.05078, 0.0470598},
            {-4.64453, -2.4375, -0.00293517}
        };
    };
    class Land_HouseB1: Residential {
        lootPos[]=
        {
            {-1.07422, 6.57031, 0.0370274},
            {-5.22656, 6.45605, -0.00293541},
            {5.77344, 4.05078, 0.0470598},
            {-4.64453, -2.4375, -0.00293517}
        };
    };
    class Land_HouseC_R: Residential {
        lootPos[]=
        {
            {-1.07422, 6.57031, 0.0370274},
            {-5.22656, 6.45605, -0.00293541},
            {5.77344, 4.05078, 0.0470598},
            {-4.64453, -2.4375, -0.00293517}
        };
    };
    class Land_HouseDoubleAL: Residential {
        lootPos[]=
        {
           {1.43262, 7.52734, 0.0121839},
           {-9.38184, 12.9414, 0.0121832},
           {7.90234, 2.5, 3.1467},
           {-9.7666, 1.40234, 3.1467},
           {0.898438, 8.16016, 3.15887}, 
           {0.384766, -2.29688, 3.15887},
           {6.56934, -1.88672, 0.0121837},
           {5.69434, -4.41797, 3.15887},
           {-8.11426, -5.24609, 3.15887}
        };
    };
    class Land_HouseDoubleAL2: Residential {
        lootPos[]=
        {
           {1.43262, 7.52734, 0.0121839},
           {-9.38184, 12.9414, 0.0121832},
           {7.90234, 2.5, 3.1467},
           {-9.7666, 1.40234, 3.1467},
           {0.898438, 8.16016, 3.15887}, 
           {0.384766, -2.29688, 3.15887},
           {6.56934, -1.88672, 0.0121837},
           {5.69434, -4.41797, 3.15887},
           {-8.11426, -5.24609, 3.15887}
        };
    };
    
    class Land_HouseA1_l: Residential {
        lootPos[]=
        {
            {2.875, 6.4668, -0.00293517},
            {-4.27344, 9.09766, -0.00293493},
            {6.99219, 7.24121, -0.00293565},
            {-4.10156, 3.82129, -0.00293541},
            {6.73828, 3.04883, -0.00293517},
            {6.14063, -2.1416, -0.00293517}
        };
    };
    class Land_HouseB1_l: Residential {
        lootPos[]=
        {
            {2.875, 6.4668, -0.00293517},
            {-4.27344, 9.09766, -0.00293493},
            {6.99219, 7.24121, -0.00293565},
            {-4.10156, 3.82129, -0.00293541},
            {6.73828, 3.04883, -0.00293517},
            {6.14063, -2.1416, -0.00293517}
        };
    };
    class Land_HouseC1_L: Residential {
        lootPos[]=
        {
            {2.875, 6.4668, -0.00293517},
            {-4.27344, 9.09766, -0.00293493},
            {6.99219, 7.24121, -0.00293565},
            {-4.10156, 3.82129, -0.00293541},
            {6.73828, 3.04883, -0.00293517},
            {6.14063, -2.1416, -0.00293517}
        };
    };
    class Land_PostB: Residential {
        lootPos[]=
        {
            {-2.99707, 3.61011, -2.4465},
            {3.05469, -1.87817, -2.4465},
            {6.90967, -0.933838, -2.4465},
            {-4.76123, -1.34888, -2.4465},
            {-5.93701, 2.82153, -2.4465}
        };
    };
    class Land_Centrelink: Residential {
        lootPos[]=
        {
            {-1.59546, 2.45605, 1.1111},
            {-0.411377, -6.19873, 1.1111},
            {2.87671, 7.68018, 3.7867},
            {-3.15967, 5.96484, 1.1111},
            {-0.770508, -2.53418, 3.78669}

        };
    };
        class Land_CommonwealthBank: Residential {
        lootPos[]=
        {
            {-5.51953, 8.70459, 5.24337},
            {4.2417, -2.73755, 3.78669},
            {5.22729, 7.4541, 1.1111},
            {0.0705566, 2.72974, 1.1111},
            {-2.63599, 6.08911, 1.1111},
            {-1.74268, -4.32983, 3.78669},
            {-2.16699, -1.71704, 3.78669},
            {1.04736, -4.54272, 3.78669},
            {0.61084, -1.17041, 3.78669},
            {-4.46265, 2.83936, 1.1111},
            {3.08032, 8.04883, 3.78671}

        };
    };
    class Land_Pub_A: Residential {
        lootPos[]=
        {
            {7.42334, -4.23633, -1.16323},
            {1.42432, 3.50928, -1.16323},
            {8.40918, 3.93872, -1.16323},
            {-2.24512, 3.36694, -1.16323},
            {7.2915, 0.661621, -1.16323}

        };
    };
    class Land_A_Office02C: Residential {
        lootPos[]=
        {
            {-7.83252, 2.47485, -8.71377},
            {-1.05029, -1.50708, -8.71377},
            {4.48877, 0.452393, -8.71377},
            {-8.08887, -5.63403, -8.67375}

        };
    };
    class Land_Pub_C: Supermarket {
        lootPos[]=
        {
            {-0.629395, -5.69849, -3.11664},
            {-2.4082, -7.698, 0.289064},
            {-1.46729, 0.146973, -3.11664},
            {-2.00488, 0.827881, 0.289064},
            {2.89258, -2.68335, -3.11664},
            {6.91602, 1.66455, 0.289065},
            {6.53271, -6.76123, -3.11664},
            {5.27295, 0.0561523, -3.11664},
            {8.98779, -5.80884, 0.289066}

        };
    };

    class Land_PoliceStation: Military {
        lootPos[]=
        {
            {20.1182, 7.61865, 4.2139},
            {9.02515, 19.1914, 4.2139},
            {15.2244, 19.1284, 4.2139},
            {12.3042, 3.90674, 4.2139},
            {12.1431, 10.9102, 0.316525},
            {8.26245, 6.2666, 4.2139},
            {18.1616, 21.4863, 4.21391},
            {-1.46362, 7.75488, 4.21391}

        };
    };
    
    class Land_Budova4_in: Military {
        lootPos[]=
        {
            {-12.6113, 3.95508, -4.37356},
            {-9.68311, 4.33594, -4.37356},
            {4.86768, 0.685059, -4.37356}

        };
    };
    
    class Land_E76_shop_single1: Supermarket {
        lootPos[]=
        {
            {-12.6113, 3.95508, -4.37356},
            {-9.68311, 4.33594, -4.37356},
            {4.86768, 0.685059, -4.37356}

        };
    };
    class plp_bo_BeachBar: Residential {
        lootPos[]=
        {
            {1.49072, 1.55737, -2.20654},
            {-2.27783, -0.414063, -2.24491}

        };
    };
    class Land_HeliPad: Military {
        lootPos[]=
        {
            {2.92432, -10.4036, 5.34369}

        };
    };
    class Land_MainSection: Military {
        lootPos[]=
        {
            {-6.43945, 23.7134, 0.45569},
            {-6.70044, 20.8008, 0.45569},
            {-6.84082, 9.88184, 0.455689},
            {-6.73877, 32.1978, 0.455691},
            {-6.47681, 26.7271, 0.45569},
            {-6.22388, 15.2583, 0.45569},
            {-6.41797, 12.2832, 0.45569},
            {-6.53467, 34.9741, 0.0965161},
            {-6.57031, 18.2065, 0.45569},
            {-6.52173, 29.5073, 0.45569},
            {-6.58472, 34.9482, 0.0965161},
            {-14.4185, -11.4888, 0.455687},
            {-13.0564, 1.56348, 0.455687},
            {-9.44507, -15.1445, 0.455688},
            {-3.58374, -9.87988, 0.455688},
            {-6.51538, 4.23242, 0.455689},
            {-6.61548, 6.62305, 0.455689},
            {5.26099, 23.9858, 0.455693},
            {5.3335, 29.3906, 0.455692},
            {4.79248, 9.73145, 0.455693},
            {5.69214, 26.5537, 0.455692},
            {5.02539, 21.0166, 3.69099},
            {2.05493, -13.6802, 0.455689},
            {8.7832, -6.05957, 0.455688},
            {9.17456, -1.47412, 0.455688},
            {2.06299, -10.2217, 0.455689},
            {9.18481, -9.16797, 0.455689},
            {1.97607, -6.39209, 0.455688},
            {8.84985, -12.0986, 0.455689}

        };
    };
    
    class Land_Gaol_Main: Military {
        lootPos[]=
        {
            {2.30176, -8.0979, 0.00930595},
            {4.18018, 12.4878, 0.00930691},
            {8.81787, 12.2253, 0.00930691},
            {13.1846, 12.5542, 0.00930738},
            {18.2632, 4.98462, 0.00930595},
            {-0.347656, -1.62256, 0.00930738},
            {3.70557, -1.28882, 0.00930691},
            {20.4668, 18.2722, 0.00930643},
            {7.90967, -1.34033, 0.00930643},
            {19.9814, -1.4519, 0.00930595},
            {-0.63623, 12.176, 0.00930786}

        };
    };
    class Land_IGA_GeneralStore: Supermarket {
        lootPos[]=
        {
         {12.3682, 1.13672, -1.20155},
         {8.03711, 1.75, -1.20155},
         {10.1826, -6.79102, -1.20155},
         {-6.63672, -1.55078, -1.20155},
         {-1.62891, 1.125, -1.20155},
         {-0.858398, -7.4043, -1.20155}
    
        };
    };
        
    class Land_Dum_istan3_hromada2: Residential {
        lootPos[]=
        {
            {-6.81836, 3.52832, -1.28517},
            {4.45703, -3.16504, 2.08801}
            
        };
    };
    
    class Land_Army_hut3_long_int: Military {
        lootPos[]=
        {
            {-1.95313, -0.387207, -1.27391},
            {-2.32422, -4.27686, -1.27391},
            {-0.203125, 3.12744, -1.27391},
            {0.191406, -0.150879, -1.27391},
            {0.101563, 3.11475, -1.27391},
            {-0.253906, -0.320801, -1.27391},
            {-1.80859, -4.61768, -1.27391}
        };
    };
    
    class Land_Army_hut2: Military {
        lootPos[]=
        {
            {1.10254, -5.79688, -1.33056}
                    
        };
    };
    
    class Land_Army_hut2_int: Military {
        lootPos[]=
        {
            {1.83594, 0.570801, -0.948327}
                
        };
    };
    
    class Land_Hangar_2: Industrial {
		lootPos[] =
		{
			{-9.43433,-9.9375,-2.56808},
			{-12.0405,-1.09375,-2.56808},
			{-9.19922,8.89258,-2.56808},
			{10.0747,9.74902,-2.56808},
			{12.1582,0.0683594,-2.56808},
			{9.32495,-8.72559,-2.56808},
			{-0.0822754,9.40723,-2.56808},
			{0.12207,-1.1582,-2.56808}
		};
    };
	
	class Land_Ind_TankBig: Industrial {
		lootPos[] =
		{
			{-0.792969,-0.00390625,5.59137},
			{6.25195,0.0410156,5.59137},
			{3.76807,4.42529,5.59137},
			{-0.75,6.68066,5.59137},
			{-5.29443,4.27051,5.59137},
			{-7.7041,-0.50293,5.59137},
			{-4.88525,-5.00488,5.59137},
			{-0.248047,-6.45947,5.59137}
		};
	};
   
	class Land_A_TVTower_Base: Military {
		lootPos[] =
		{
			{3.86426,-0.35791,-21.9272},
			{-2.45972,1.99072,-21.9272},
			{-2.45703,2.0127,-2.09717},
			{3.81372,-5.63281,-2.09717},
			{3.81372,-5.63281,-2.09717},
			{3.48755,4.96484,-2.09717},
			{-6.78394,4.96484,-2.09717},
			{-7.11084,-5.63281,-2.09717},
			{-1.37329,-7.31934,-2.09717},
			{-8.91162,-0.17041,-2.09717},
			{5.6145,-0.17041,-2.09717},
			{-1.71851,-3.85059,-2.09717},
			{-1.64868,7.09277,-2.09717}
		};
	};
	
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] =
		{
			{0.00634766,-8.95752,-6.38199},
			{-0.603271,-7.86377,-6.29099},
			{0.114746,-7.23193,-6.07704},
			{0.161621,7.84326,-6.29099},
			{0.000488281,8.93408,-6.39446},
			{0.114502,7.16992,-6.07704}
		};
	};
	
	class Land_A_Office01_EP1: Residential {
		lootPos[] =
		{
			{-14.4587,5.64355,-1.82635},
			{-9.9458,-3.55566,-1.82693},
			{-0.203369,-5.9502,-4.15381},
			{-13.6958,0.418945,-4.15381},
			{11.3042,0.206055,-4.15381},
			{8.78564,0.123047,-1.655},
			{1.30444,0.456055,-1.655},
			{-4.9458,4.04395,-4.15381}
		};
	};
	
    class Land_Hospital_F: Hospital {
        lootPos[]=
        {
            {-14.3789, 2.79297, -7.79302},
            {-15.4893, 2.79102, -15.5714},
            {-6.54297, 0.402344, -3.87912},
            {21.541, -26.3672, -2.43298},
            {-33.9658, -14.8711, -7.805},
            {14.1699, -18.9395, 5.3685},
            {-16.2432, -7.25586, -7.79302},
            {-33.4375, -18.501, -4.21097},
            {-34.5908, -14.2891, -11.7058},
            {-34.1279, -13.332, -15.602},
            {14.6152, -19.4063, 1.46776},
            {-6.28906, -5.63672, -15.5714},
            {7.50586, -13.6221, -2.43474},
            {11.582, -21.002, 9.29181},
            {-1.00684, -3.13867, -3.87894},
            {3.32813, 0.134766, -0.0178204},
            {-1.13086, -0.853516, -7.79302} 
        };
    };
    
    
    class Land_E76_shop_multi1: Supermarket {
        lootPos[]=
        {
            {-0.392578, -15.8818, -4.37356},
            {-5.78711, -2.94043, -4.37356},
            {-16.2109, -4.76758, -0.77356}
        };
    };
    
    class Land_Hut_old02: Industrial {
		lootPos[] =
		{
			{-6.96338,-7.99658,-2.85449},
			{-5.55371,-1.90649,-2.7971},
			{-8.6001,0.975342,-2.85438},
			{-5.396,3.49634,-2.80347},
			{-7.49365,8.12231,-2.8743},
			{-3.88281,8.75562,-2.81911},
			{2.34326,8.4624,-2.85449},
			{2.15283,4.26489,-2.93246},
			{-3.95117,2.81445,-2.85449},
			{-2.5249,0.866211,-2.7971},
			{-3.7168,-2.05225,-2.85449},
			{-4.07813,-4.57788,-2.94451},
			{2.12744,-8.4458,-2.80886},
			{1.81396,-1.64941,-2.94451},
			{4.64063,-7.36206,-2.83168},
			{6.25928,-3.15332,-2.84309},
			{4.08203,4.06274,-2.84879},
			{4.27637,8.68677,-2.85164}
		};
    };
    
    class Land_Panelak2: Residential {
        lootPos[]=
        {
            {6.64453, -4.0127, 5.43665},
            {-0.404297, -1.57813, 0.0714283},
            {0.525391, 2.02734, 4.05244},
            {3.01172, 3.03418, 5.43665},
            {6.41406, 0.236328, 5.43665},
            {0.433594, 2.36914, -1.37137},
            {2.82617, 0.199219, 5.43665},
            {-0.460938, -1.49121, 2.71097},
            {-2.80664, -2.30566, 8.32585},
            {-0.587891, -1.37012, 5.43665},
            {0.0859375, 2.7832, 1.32865},
            {2.73633, -4.75977, 5.43665},
            {3.67578, 0.0527344, 8.32585}
        };
    };
        
    class Land_Tovarna2: Industrial {
        lootPos[]=
		{
			{-4.99365,4.80225,-5.56046},
			{-11.5762,7.40234,-5.5647},
			{-6.68701,1.72803,-5.66724},
			{-9.61523,-5.50684,-5.57248},
			{-0.0756836,7.38037,-5.55386},
			{5.52246,-7.35352,-4.55048},
			{8.88428,0.782227,-4.57359},
			{4.31299,5.40332,-4.57968},
			{4.31299,5.40332,-4.57968},
			{2.4292,-8.96094,3.42286},
			{-13.2759,-9.03174,3.42286},
			{-13.2124,0.319336,3.42286},
			{-6.7312,-4.04492,6.67075},
			{-10.8652,-7.85547,6.67926},
			{-11.5938,8.62061,6.68006},
			{-0.144531,-7.68652,6.67959},
			{1.93018,8.28906,6.68006},
			{-0.00390625,4.08887,6.68006},
			{-2.64355,0.340332,3.42286},
			{-3.99731,2.69092,3.14828},
			{-6.89478,1.72363,1.49971},
			{-6.69019,3.13867,1.64068},
			{-6.68823,3,-2.22489},
			{-12.0649,1.72266,-2.1895},
			{-4.08203,3.01416,-3.90881},
			{-4.45996,1.72754,-0.36343},
			{-6.69019,3.13867,1.64068},
			{-4.01538,8.86572,1.65243},
			{-3.8584,9.07178,-2.22489},
			{-10.6418,8.01221,-2.21781},
			{-9.57251,6.72314,1.65243},
			{2.30664,-0.805176,0.42286},
			{2.57007,8.81689,0.42286},
			{-13.0864,0.388672,0.42286},
			{-6.3335,-1.18213,0.146688},
			{-0.541504,-8.96582,0.42286},
			{-13.2759,-9.03174,0.42286},
			{-0.81543,0.90332,-5.58799}
		};
    };
    
	class Land_HouseV2_02_Interier_dam: Residential {
		lootPos[] =
		{
			{0.0249023,-1.68872,-5.6291},
			{0.0454102,4.25122,-5.6291},
			{-8.7207,0.141113,-5.6291},
			{-8.65234,5.44507,-5.6291},
			{-7.17529,6.68018,-5.6291},
			{8.83984,-0.000732422,-5.6291},
			{8.7124,2.8811,-5.69736},
			{7.6665,6.74658,-5.6291}
		};
	};

    class Land_Ind_Vysypka: Industrial {
		lootPos[] =
		{
			{-4.64868,-26.7578,-4.80757},
			{-6.72827,-11.9331,-4.69644},
			{-6.55078,2.64063,-4.69644},
			{-5.82715,20.2603,-4.69644},
			{1.91333,25.6436,-5.54245},
			{5.96313,17.7686,-4.69644},
			{5.76074,8.96338,-4.69644},
			{9.8269,2.59912,-4.69644},
			{5.99976,-4.73145,-4.69645},
			{9.53101,-11.7813,-4.69644},
			{6.58545,-19.2427,-4.69644}
		};
    };
        
    class Land_Vysilac_budova: Residential {
        lootPos[]=
        {
            {-6.58008, -10.2363, -3.09003},
            {-7.29395, -3.95117, -6.59002},
            {-2.31543, 7.19336, 3.90998},
            {-1.95703, -2.91797, 3.90998},
            {4.69629, 2.51563, -3.09003},
            {4.13184, 1.73633, 0.409983},
            {6.28613, -10.5137, -6.59002},
            {-6.5459, -11.459, 0.409984},
            {-1.5166, -2.15039, -6.59002},
            {5.74316, 12.0957, -6.59002}
        };
    };  
                
    class Land_Dum_istan3_pumpa: Residential {
        lootPos[]=
        {
            {1.88086, -0.22168, 1.47485},
            {-2.69531, 0.339844, 1.47485},
            {1.92773, -3.29004, 1.47485}
        };
    };  
        
    class Land_Garaz: Industrial {
		lootPos[] =
		{
			{4.51025,1.8606,-1.22306},
			{2.15527,-2.05835,-1.22306},
			{-0.419434,1.76025,-1.22306},
			{-2.83887,-2.05835,-1.22306},
			{-4.86426,1.62622,-1.22306}
		};
    };  

    class Land_IGA_GeneralStore2: Supermarket {
        lootPos[]=
        {
            {9.79297, 5.18945, -1.20155},
            {-4.5, 1.62305, -1.20155},
            {0.523438, 5, -1.20155},
            {10.7578, -3.29883, -1.20155},
            {1.95703, -3.18164, -1.20155}
        };
    };
    
    class Land_House_C_10_EP1: Industrial {
        lootPos[]=
        {
             {0.464844, 1.48047, 2.47196},
            {0.230469, 1.91797, -4.18068},
            {-0.458496, -4.05078, 2.47196},
            {-1.17578, -6.59766, -0.869757},
            {-2.6626, -2.33594, -4.19119},
            {-1.39941, -7.86719, -4.19764},
            {-0.730957, 2.57813, -0.868896},
            {-0.178711, 6.5625, -4.16918}
        };
    };
        
    class Land_Ind_Workshop01_02: Industrial {
		lootPos[] =
		{
			{-1.03369,0.828125,-1.38969},
			{0.956299,0.637695,-1.38969},
			{-1.65283,-2.70947,-1.47099},
			{-0.345215,-3.32324,-1.47099},
			{1.49597,3.14746,-1.47099}
		};
    };

    class Land_Hut01: Supermarket {
        lootPos[]=
        {
            {3.66797, -0.0117188, -0.44834},
            {0.347656, 0.148438, -0.44834}

        };
    };

    class Land_Barn_Metal: Industrial {
		lootPos[] =
		{
			{-7.58203,-2.63525,-5.24356},
			{-8.67871,-24.8198,-5.24356},
			{0.765625,-24.2241,-5.24356},
			{10.3105,-24.8315,-5.24356},
			{9.41406,-5.81006,-5.24356},
			{10.2676,22.4839,-5.24356},
			{-8.67871,-24.8198,-5.24356},
			{-9.2168,16.9512,5.65643},
			{-9.53516,-3.17432,5.65643},
			{10.6406,-3.18311,5.65643},
			{0.598633,-25.1963,5.65643},
			{10.9229,-26.7412,5.65643}
		};
    };
	class Land_Telek1: Residential {
		lootPos[] =
		{
			{-1.43262,1.5791,-7.30679},
			{-1.43652,-1.62012,-7.30679},
			{0.810547,0.015625,-7.30679}
		};
	};
    class Land_Panelak: Residential {
		lootPos[] =
		{
			{-0.698242,-1.96289,0.410725},
			{-3.16113,-6.11621,0.410725},
			{-6.62207,-6.16113,0.410725},
			{-6.85449,0.320313,0.410725},
			{-3.06348,3.99219,0.410725},
			{-6.3916,4.00049,0.410725},
			{0.706055,4.15039,1.81577},
			{0.0537109,-2.85498,3.10946},
			{3.02734,-6.14746,3.10946},
			{6.77637,-6.16016,3.10946},
			{7.00781,0.320313,3.10946},
			{6.5459,4.00098,3.10946},
			{3.21582,3.9917,3.10946},
			{0.0498047,-3.25635,5.57822},
			{-6.7373,-6.13184,5.57822},
			{-6.91992,4.1084,5.57822},
			{6.85938,3.95557,5.57822},
			{7.04004,-6.28369,5.57822}
		};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Castles & Lighthouses & Life Guard Towers
    ///////////////////////////////////////////////////////////////////////////
    class Land_LifeguardTower_01_F: Residential {
        lootPos[] = {{-0.498047, -0.222656, 1.13312}};
    };

    class Land_LightHouse_F: Residential {
        lootPos[] = {{-5.74805, 11.0859, -3.75002}, {0.789063, -2.94336, -11.0953}, {1.07813, -2.83008, 5.39755}};
    };

    class Land_Lighthouse_small_F: Residential {
        lootPos[] = {{-0.369141, 1.18555, -3.39546}, {4.32617, -0.462891, -3.39546}};
    };

    class Land_Castle_01_tower_F: Residential {
        lootPos[] = {{-1.66602, 0.603516, 7.94255}, {-1.99023, -1.70508, -1.0866}, {-2.14453, 2.73633, -3.95897}, {0.164063, 1.33203, -9.47995}, {1.14844, -1.18359, 7.94255}, {2.06641, 2.66992, -6.67494}, {2.15039, -1.89063, 1.70487}, {2.27344, 2.70703, 4.42336}};
    };
	
    class Land_A_Castle_Bergfrit: Residential {
		lootPos[] =
		{
			{3.48877,5.48535,16.961},
			{3.29004,-4.7832,16.961}
		};
	};
	class Land_Bunker_01_big_F: Military {
		lootPos[] =
		{
			{-3.37402,1.19922,0.213226},
			{-4.84473,-2.46094,0.218231},
			{-3.27344,-6.70264,0.221069},
			{-1.62695,-6.70313,0.221069},
			{1.21387,-6.59473,0.221069},
			{2.86035,-6.59473,0.221069},
			{4.52051,-2.22314,0.0444336}
		};
	};
	class Land_Bunker_01_tall_F: Military {
		lootPos[] =
		{
			{-2.21484,-0.0947266,-3.32404},
			{-0.714844,-0.174805,1.51242},
			{-2.47461,-2.27539,1.60239},
			{0.0634766,-2.61328,1.55411},
			{2.60742,-2.35938,1.51242},
			{2.92578,0.829102,1.51242}
		};
	};
	class Land_Bunker_01_HQ_F: Military {
		lootPos[] =
		{
			{4.60938,-0.148438,-0.912231},
			{-1.21387,-2.30566,-0.912231},
			{0.820313,2.3623,-0.912231},
			{-4.66113,-0.160156,-0.912231}
		};
	};
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] =
		{
			{0.527344,-1.58643,1.06903},
			{-0.110352,1.60547,1.21814},
			{8.87402,1.01123,7.32544},
			{7.95703,-1.60547,-3.32468},
			{9.25,-0.0874023,1.21603},
			{6.80859,2.59619,1.216}
		};
	};
	class Land_A_Castle_Wall1_20: Residential {
		lootPos[] =
		{
			{-3.64551,0.330078,6.88202},
			{4.99414,0.275391,7.08325}
		};
	};
	class Land_A_Castle_Wall1_20_Turn: Residential {
		lootPos[] =
		{
			{5.8584,1.56055,7.02917},
			{-3.58887,0.5,6.77603}
		};
	};
    class Land_Misc_Cargo1Bo_EP1: Residential {
		lootPos[] =
		{
			{-0.468262,-2.05566,-1.02869},
			{-0.26709,0.524902,-1.02869},
			{0.46875,-1.65137,-1.02869},
			{0.50708,2.09521,-1.02869}
		};
	};
	class Land_A_Castle_Wall1_Corner_2: Residential {
		lootPos[] =
		{
			{-1.17871,1.17871,7.23862}
		};
	};
	class Land_Barn_01_grey_F: Residential {
		lootPos[] =
		{
			{7.25488,-3.56494,-0.696274},
			{7.43164,3.59424,-0.696274},
			{4.83984,-3.96094,-0.696274},
			{4.85352,0.0522461,-0.696274},
			{-0.625,3.47412,-0.696274},
			{-1.26953,-3.50391,-0.696274},
			{-4.28613,-3.44922,-0.696274},
			{-3.0332,3.47363,-0.696274},
			{-7.34766,-2.39307,-0.715973},
			{-7.375,0.693359,-0.734268},
			{4.99512,1.85889,-0.696274}
		};
	};
	class Land_Ind_Pec_01: Residential {
		lootPos[] =
		{
			{-6.47949,-14.1802,-17.2516},
			{6.74951,-14.1885,-17.2516},
			{-3.79395,-1.62402,-17.2606},
			{5.41895,-1.08057,-17.2606},
			{9.83887,-7.71436,-17.2606},
			{9.50635,-9.36914,-3.71305},
			{-7.40869,-13.373,-3.71305},
			{-2.27905,-1.1333,1.32775},
			{0.0805664,-7.84814,1.32775},
			{6.20898,-1.21973,6.31018},
			{6.22119,-8.14697,14.786},
			{6.0022,-1.38086,14.7328},
			{-6.63037,9.91504,-22.3788}
		};
	};

    class Land_TentHangar_V1_F: Military {
        lootPos[] = {{-8.1582, -2.20703, -4.08853}, {-8.1582, 6.85547, -4.08853}, {-8.52734, -7.57227, -4.08853}, {7.76953, -7.64453, -4.08853}, {8.16016, 1.89453, -4.08853}, {8.57617, 7.48438, -4.08853}};
    };

    class Land_Hangar_F: Military {
        lootPos[] = {{-11.6641, 20.9063, -5.38129}, {-12.1133, 9.19336, -5.38129}, {-12.1543, -3.90625, -5.38129}, {-12.1816, -16.8906, -5.38129}, {1.75, 20.9688, -5.38129}, {11.3711, -19.2734, -5.38129}, {12.0469, -5.7168, -5.38129}, {12.7305, 6.83203, -5.38129}, {13.7285, 18.1602, -5.38129}};
    };

    class Land_Airport_Tower_F: Military {
        lootPos[] = {{-0.363281, 6.25586, -10.4415}, {-0.636719, -2.08203, -1.4408}, {-0.638672, 2.21875, -4.44063}, {-0.705078, 1.94336, -7.44128}, {-0.751953, 5.2793, 1.55464}, {-1.10742, -4.67578, 2.25613}};
    };

    class Land_Cargo_House_V1_F: Military {
        lootPos[] = {{-1.38281, 3.12109, 0.040287}, {1.24805, 2.54102, 0.0402873}};
    };

    class Land_Cargo_House_V3_F: Military {
        lootPos[] = {{-2.0918, 1.58984, -0.0957484}, {1.11914, 3.17969, 0.0402873}};
    };

    class Land_Cargo_House_V2_F: Military {
        lootPos[] = {{-2.0918, 1.58984, -0.0957484}, {1.11914, 3.17969, 0.0402873}};
    };
	
    class Land_Cargo_HQ_V1_F: Military {
        lootPos[] = {{-0.294922, -3.42188, -3.27229}, {-1.46484, 3.26172, -3.27229}, {-2.02734, -2.62891, -0.747443}, {4.24609, 1.51758, -0.747443}, {4.98633, 3.64844, -3.27229}};
    };

    class Land_Cargo_HQ_V2_F: Military {
        lootPos[] = {{-1.25586, 1.48828, -0.747442}, {-1.50391, -2.52148, -3.27229}, {-1.50391, 2.67773, -3.27229}, {-1.9043, -4.61133, -0.747442}, {5.35156, 1.64648, -0.747442}, {5.5332, 3.30859, -3.27229}};
    };

    class Land_Cargo_HQ_V3_F: Military {
        lootPos[] = {{-1.56641, -2.93164, -0.747444}, {-1.81641, -4.90234, -3.27229}, {-1.89648, 0.654297, -3.27229}, {4.65234, 2.41602, -3.27229}, {5.24805, 1.60742, -0.747444}};
    };

    class Land_u_Barracks_V2_F: Military {
        // There are broken?
        //lootPos[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}};
        lootPos[] = {{9.75244, -1.66211, 1.43508}, {9.70215, -1.77148, -1.89791}, {-5.31592, -2.94531, -1.89791}, {-16.0903, 1.21094, -1.8979}, {6.95557, 4.13867, -1.89791}, {-14.6865, -2.08008, -1.89791}, {-3.89746, 3.95898, -1.89791}, {0.0639648, -2.16406, 1.43507}, {2.74951, 4.44336, 1.43507}, {2.84521, 4.22461, -1.89791}, {-12.3584, 4.30469, 1.43508}, {-12.1733, 4.46875, -1.89791}, {-16.123, 1.125, 1.43507}, {0.137695, -1.90625, -1.89791}, {-14.585, -1.94336, 1.43508}, {-5.88818, -3.99609, 1.43507}, {-3.96143, 4.37109, 1.43508}, {6.89014, 4.32227, 1.43507}};
    };

    class Land_i_Barracks_V2_F: Military {
        lootPos[] = {{-0.505859, 3.2168, 0.605521}, {-0.601563, 3.07617, 3.9395}, {-11.0234, -2.65625, 0.60552}, {-11.1328, -3.58398, 3.9395}, {-12.377, 0.271484, 3.9395}, {-2.39453, -3.92773, 0.605342}, {-5.09766, -4.89844, 3.93943}, {-8.69922, 3.24414, 3.9395}, {-9.12695, 3.73047, 0.60552}, {10.3711, 3.51367, 0.605521}, {10.6484, 2.85156, 3.9395}, {13.0684, -3.30469, 0.605521}, {13.1934, -3.42383, 3.9395}, {3.28711, -3.98633, 0.605521}, {3.4707, -3.55469, 3.9395}, {6.22852, 3.50391, 3.9395}, {6.39258, 3.05664, 0.605521}};
    };

    class Land_i_Barracks_V1_F: Military {
        lootPos[] = {{-0.464844, 3.49219, 0.605521}, {-0.476563, 3.95703, 3.9395}, {-10.4844, -3.32422, 3.9395}, {-11.1055, -2.92188, 0.605521}, {-12.3066, 0.222656, 0.605521}, {-2.29688, -4.23828, 0.605283}, {-3.89648, -4.80078, 3.93923}, {-8.66992, 3.86328, 0.605521}, {-9.03516, 3.31055, 3.9395}, {10.3301, 2.77734, 0.605521}, {10.4023, 3.18945, 3.9395}, {13.0352, -3.23438, 3.9395}, {13.1738, -3.31055, 0.605521}, {3.57227, -3.49414, 0.605522}, {3.61133, -2.98047, 3.9395}, {6.38281, 3.41992, 0.60552}, {6.4082, 2.87695, 3.9395}};
    };

    class Land_Cargo_Patrol_V1_F: Military {
		lootPos[] =
		{
			{2.12109,0.769531,-2.535},
			{-2.34473,0.823242,-0.464996}
		};
    };

    class Land_Cargo_Patrol_V2_F : Military {
        lootPos[] = {{-1.01953, -1.0918, -0.55952}, {1.82031, -0.695313, -0.55952}};
    };

    class Land_Cargo_Tower_V1_F : Military {
        lootPos[] = {{-3.54785, -3.01758, 2.47987},{-3.15625, -0.837891, 5.00472},{-2.0498, -3.29883, -0.120125},{4.55957, 4.39258, -0.120125},{-4.42383, 2.45117, -0.120125},{-2.87598, 2.20898, -4.2958},{-2.88281, 4.14258, 5.00472},{0.235352, -1.19727, 5.07987},{3.58105, 4.11719, 2.47988},{1.27441, 3.17773, -8.24333},{2.50488, 0.0625, 5.00472}};
    };

    class Land_Cargo_Tower_V1_No1_F: Military {
        lootPos[] = {{-2.4668, -4.10156, 5.00471}, {-2.7168, 1.0625, -0.120123}, {-2.83984, -2.95313, 2.47987}, {-3.06641, -2.66992, -0.120123}, {-3.12109, 2.42773, -4.2958}, {-3.16211, 4.51563, 5.00471}, {1.26367, 2.49609, -8.24333}, {2.25195, 4.30664, -0.120123}, {3.34766, 3.33203, 2.47987}, {3.66797, 1.8457, 5.00471}};
    };

    class Land_Cargo_Tower_V1_No2_F : Military {
        lootPos[] = {{-2.71289, 3.0957, -0.120123}, {-2.83203, 5.06445, 5.00472}, {-3.48633, 2.28906, -4.2958}, {-3.64844, -2.87891, 2.47988}, {-3.77344, -3.32617, 5.00472}, {-3.80664, -1.75977, -0.120123}, {0.0625, -0.287109, 5.07988}, {1.58984, -2.11523, -0.120123}, {2.13672, 2.20703, -8.24332}, {3.57422, 4.22461, 2.47988}, {3.75, 1.31055, 5.00472}, {4.98633, 3.90625, -0.120123}};
    };

    class Land_Cargo_Tower_V1_No3_F : Military {
        lootPos[] = {{-0.214844, -0.460938, 5.07988}, {-2.33203, -2.96094, -0.120119}, {-2.89648, -4.0625, 5.00472}, {-3.08008, -2.8125, 2.47988}, {-3.28711, 2.60352, -4.2958}, {-3.61328, 4.44141, 5.00472}, {-4.01758, 1.86133, -0.120119}, {1.54688, 2.61133, -8.24332}, {3.52734, 3.8418, 2.47988}, {3.5332, -0.386719, 5.00472}, {4.88477, 4.18945, -0.120119}};
    };

    class Land_Cargo_Tower_V1_No4_F : Military {
        lootPos[] = {{-2.68555, -3.07031, -0.120119}, {-2.93359, -4.27148, 5.00472}, {-3.22461, 4.84375, 5.00472}, {-3.6543, 1.57227, -4.2958}, {-3.70508, -3.0332, 2.47988}, {-4.26367, 0.980469, -0.120119}, {2.1543, 2.08789, -8.24332}, {3.46289, 2.25781, 2.47988}, {3.62305, 2.16797, 5.00472}, {5.10156, 4.20898, -0.120119}};
    };

    class Land_Cargo_Tower_V1_No5_F: Military {
        lootPos[] = {{-2.25781, -2.77344, -0.120119}, {-2.375, -4.45508, 5.00472}, {-2.41602, 5.18164, 5.00472}, {-2.94922, 2.4082, -4.2958}, {-3.89648, -2.7832, 2.47988}, {-4.03906, 1.43945, -0.120119}, {0.0410156, -0.8125, 5.07988}, {1.62305, 2.55664, -8.24332}, {2.97461, -0.335938, 5.00472}, {3.90039, 3.68555, 2.47988}, {4.80859, 3.57422, -0.120117}};
    };

    class Land_Cargo_Tower_V1_No6_F: Military {
        lootPos[] = {{-1.6875, -2.5918, -0.120119}, {-3.16992, -3.74219, 5.00472}, {-3.41797, 1.87305, -0.120119}, {-3.49805, 2.06836, -4.2958}, {-3.81055, 4.59766, 5.00472}, {-3.92969, -2.12109, 2.47988}, {1.92578, 2.27344, -8.24332}, {3.50195, 2.76563, 2.47988}, {3.64258, 0.0078125, 5.00472}, {5.19141, 4.45117, -0.120119}};
    };

    class Land_Cargo_Tower_V1_No7_F: Military {
        lootPos[] = {{-2.59766, -3.14063, -0.120119}, {-2.7832, 1.94531, -4.2958}, {-2.83203, 1.58594, -0.120119}, {-3.20508, 4.62891, 5.00472}, {-3.29883, -2.90234, 5.00472}, {-3.87891, -3.11914, 2.47988}, {0.228516, -1.05273, 5.07988}, {1.65234, 2.58594, -8.24332}, {3.40039, 3.05859, 2.47988}, {4.18164, 0.246094, 5.00472}, {4.42578, 3.99805, -0.120119}};
    };

    class Land_Cargo_Tower_V2_F : Military {
        lootPos[] = {{4.29492, 3.70508, -0.120117}, {-2.5293, -3.10742, 2.47988}, {-2.6543, 2.01172, -4.2958}, {-2.66797, -3.4707, 5.00472}, {-2.67773, 4.97461, 5.00472}, {-3.06836, 1.80273, -0.120117}, {-3.25586, -3.56445, -0.120117}, {0.611328, 0.0214844, 5.07988}, {2.46094, 1.92383, -8.24332}, {2.61328, -0.296875, 2.47988}, {3.07422, 4.14063, 2.47988}, {3.50195, 1.22656, 5.00472}};
    };

    class Land_Cargo_Tower_V3_F: Military {
        lootPos[] = {{-1.59375, -2.7168, -0.120119}, {-2.40039, 2.39648, -4.2958}, {-3.24023, -3.17773, 5.00472}, {-3.51367, 4.57617, 5.00472}, {-3.70703, -3.60547, 2.47988}, {-4.54883, 2.47266, -0.120119}, {0.142578, -0.179688, 5.07988}, {2.2793, 2.25391, -8.24332}, {3.87109, 3.3418, 2.47988}, {4.22656, 0.390625, 5.00472}, {5.05469, 4.16406, -0.120119}};
    };

    class Land_MilOffices_V1_F: Military {
        lootPos[] = {{-11.6309, -5.04492, -2.86675}, {-15.1172, 9.07617, -2.86675}, {-15.123, 2.19336, -2.86675}, {-15.5938, -4.07227, -2.86675}, {-3.46484, -3.22266, -2.86675}, {-4.10352, 9.33398, -2.86675}, {-7.09766, -2.95898, -2.86675}, {-8.6582, 9.02344, -2.86675}, {0.794922, -3.08594, -2.86675}, {1.45703, 8.60156, -2.86675}, {13.9258, 0.492188, -2.86675}, {15.3613, 8.10742, -2.86675}, {8.54883, 8.01563, -2.86675}, {8.61133, -4.3125, -2.86675}, {8.68359, -1.73438, -2.86675}};
    };

    class Land_Radar_F: Military {
        lootPos[] = {{-10.1797, -9.80859, -6.00412}, {-9.61719, 10.4219, -6.00412}, {11.6211, 1.06641, -6.00412}, {2.81445, 12.2578, -7.78305}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Medical
    ///////////////////////////////////////////////////////////////////////////
    //"Land_Hospital_main_F",
    //"Land_Hospital_side1_F",
    //"Land_Hospital_side2_F",
    class Land_Medevac_house_V1_F: Hospital {
        lootPos[] = {{-1.25, 1.01367, -0.105749}, {1.38281, 2.82227, 0.0302868}};
    };

    class Land_Medevac_HQ_V1_F: Hospital {
        lootPos[] = {{-0.896484, 2.24219, -3.26622}, {-1.45898, -3.75391, -3.26622}, {-1.54297, 1.05469, -0.741375}, {5.17578, 2.66992, -3.26622}, {5.6875, 1.63477, -0.741374}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Garages / Vehicle
    ///////////////////////////////////////////////////////////////////////////

    class Land_A_FuelStation_Shed: Industrial {
		lootPos[] =
		{
			{3.8313,-0.0136719,-3.10919},
			{-3.52417,-0.0131836,-3.10919}
		};
    };

    class Land_i_Garage_V1_F: Industrial {
        lootPos[] = {{-0.925781, 2.05469, -0.0974805}, {-1.52539, -1.99805, -0.0974805}, {3.80273, -0.939453, -0.0974805}};
    };

    class Land_i_Garage_V2_F: Industrial {
        lootPos[] = {{-0.00585938, -1.24609, -0.0974801}, {-2.16016, 1.54492, -0.0974798}, {1.60547, 2.11719, -0.0974803}, {3.2832, -1.51953, -0.0974796}};
    };

    class Land_CarService_F: Industrial {
        lootPos[] = {{-0.964844, 1.77148, -1.25606}, {-3.15625, 7.39844, -1.25606}, {-4.54688, 4, -1.25606}, {0.492188, 2.8457, -1.25606}, {3.50781, -0.113281, -1.25606}, {3.74414, 6.12891, -1.25606}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Civillian Lower Class
    ///////////////////////////////////////////////////////////////////////////
    // TODO: "Land_u_Addon_02_V1_F",
    // TODO: "Land_i_Addon_02_V1_F",
    // TODO: "Land_i_Addon_03mid_V1_F",

    class Land_Chapel_Small_V1_F: Residential {
        lootPos[] = {{0.482422, 0.65625, -0.867858}, {3.08984, -1.2832, -0.867858}};
    };

    class Land_Chapel_Small_V2_F : Residential {
        lootPos[] = {{0.556641, -0.966797, -0.867857}, {3.54297, 0.486328, -0.867857}};
    };

    class Land_Chapel_V1_F: Residential {
        lootPos[] = {{-3.22852, -3.4043, -2.80848}, {-3.65625, 2.8418, -2.80848}, {-6.47266, -2.20703, -2.80848}, {3.98438, 2.72852, -2.80848}, {4.73242, -2.59375, -2.80848}, {9.35938, -0.285156, -2.60848}};
    };

    class Land_Chapel_V2_F: Residential {
        lootPos[] = {{-2.36523, 2.46289, -2.80848}, {-3.06445, -2, -2.80848}, {-6.61328, -1.54688, -2.80848}, {4.75781, 3.67383, -2.80848}, {4.82813, -2.96484, -2.80848}, {9.03711, 0.316406, -2.60848}};
    };

    class Land_Church_01_V1_F: Residential {
		lootPos[] =
		{
			{-6.96582,0.512695,-4.10318},
			{-6.97363,-2.22168,-4.16782}
		};
	};
    class Land_i_Addon_03_V1_F: Residential {
        lootPos[] = {{-2.98828, -0.244141, -0.0501008}, {3.53711, -0.578125, -0.0501013}};
    };
    class Land_i_Addon_04_V1_F: Residential {
        lootPos[] = {{-1.25, 0.0175781, 0.0796976}};
    };
    class Land_u_Addon_01_V1_F: Residential {
        lootPos[] = {{1.69727, 3.04102, 0.0627024}, {4.28125, 1.1543, 0.0627022}};
    };
    class Land_i_Windmill01_F : Residential {
        lootPos[] = {{-0.585938, 0.908203, -3.53162}};
    };
    class Land_Windmill01_F : Residential {
        lootPos[] = {{-0.935547, 0.259766, -2.2985}, {-1.65039, 0.365234, 0.947132}};
    };

	
	class Land_Rail_House_01: Residential {
		lootPos[] =
		{
			{-4.22266,3.12158,-1.19292},
			{0.308594,3.30225,-1.19292},
			{4.29834,2.93311,-1.19292}
		};
	};
    class Land_cargo_house_slum_F : Residential {
        lootPos[] = {{-3.04688, -0.306641, -0.36025}};
    };

    class Land_i_Stone_HouseBig_V1_F: Residential {
        lootPos[] = {{-0.777344, 2.19922, 1.21893}, {-1.33789, 0.355469, -1.65434}, {1.58594, -0.576172, 1.21893}, {3.7793, 1.48828, -1.64097}};
    };

    class Land_i_Stone_HouseBig_V2_F: Residential {
        lootPos[] = {{-0.207031, 2.62305, 1.21893}, {-1.26953, 0.136719, -1.65416}, {2.55078, -0.556641, 1.21893}, {4.26367, 1.48828, -1.63971}};
    };

    class Land_i_Stone_HouseBig_V3_F: Residential {
        lootPos[] = {{-0.484375, 2.57617, 1.21893}, {-0.759766, 0.404297, -1.65283}, {2.29102, -1.02539, 1.21893}, {4.02734, 1.1543, -1.64032}};
    };

    class Land_i_Stone_HouseSmall_V1_F: Residential {
        lootPos[] = {{-3.47656, 2.25195, -0.627007}, {-6.96094, 3.02539, -0.619827}, {3.27148, 2.02734, -0.611488}, {6.61914, 2.50977, -0.596566}};
    };

    class Land_i_Stone_HouseSmall_V2_F: Residential {
        lootPos[] = {{-2.41992, 1.76758, -0.632064}, {-7.00391, 1.83594, -0.633547}, {3.77148, 2.05664, -0.609262}, {7.33008, 2.02539, -0.593399}};
    };

    class Land_i_Stone_HouseSmall_V3_F: Residential {
        lootPos[] = {{-2.68945, 2.05664, -0.628867}, {-7.74023, 3.45313, -0.615288}, {3.60938, 1.61328, -0.609982}, {6.83984, 3.07227, -0.595582}};
    };

    class Land_i_Stone_Shed_V1_F: Residential {
        lootPos[] = {{-2.63867, 1.96484, -0.100502}, {1.19141, 2.16992, -0.100502}};
    };

    class Land_i_Stone_Shed_V2_F: Residential {
        lootPos[] = {{-2.12305, 1.86914, -0.100502}, {1.78125, 1.625, -0.100502}};
    };

    class Land_i_Stone_Shed_V3_F: Residential {
        lootPos[] = {{-2.3125, 2.05469, -0.100502}, {1.79297, 1.93359, -0.100502}};
    };

    class Land_u_House_Big_01_V1_F: Residential {
        lootPos[] = {{-1.89648, 6.0332, 0.855065}, {-2.35742, 5.4082, -2.56494}, {-2.89648, -3.33203, 0.855065}, {-3.0957, -0.896484, -2.65494}, {1.25, -1.31445, -2.56494}, {2.0293, -0.521484, 0.855065}, {2.36523, 5.47461, -2.56493}, {2.95117, 5.49609, 0.855065}, {2.99023, -5.02734, 0.855065}, {3.58789, -4.98828, -2.56494}};
    };

    class Land_u_House_Big_02_V1_F: Residential {
        lootPos[] = {{-2.43164, 2.83008, 0.965823}, {-2.70703, -2.07422, 0.965824}, {-2.88281, 1.88086, -2.54418}, {0.871094, -1.66016, -2.54418}, {2.41602, 3.00977, 0.965824}, {3.66992, -5.79883, -2.10418}, {3.9082, 3.56055, -2.54418}};
    };

    class Land_u_House_Small_01_V1_F: Residential {
        lootPos[] = {{-1.18359, 3.63281, -0.904629}, {-1.7793, -2.59961, -0.903945}, {3.25195, 3.44531, -0.904572}};
    };

    class Land_u_House_Small_02_V1_F: Residential {
        lootPos[] = {{-0.916016, -2.17969, -0.71971}, {-1.49609, 0.962891, -0.714579}, {3.83203, 1.15234, -0.713537}, {5.80469, -1.7207, -0.710968}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Civillian Upper Class
    ///////////////////////////////////////////////////////////////////////////

    class Land_i_House_Big_01_V1_F: Residential {
        lootPos[] = {{-2.21484, 5.46875, -2.56493}, {-3.24023, -1.5918, -2.65493}, {0.558594, -0.640625, 0.855072}, {1.24023, -1.98828, -2.56493}, {1.66602, -5.2832, 0.855072}, {2.19531, 5.19922, -2.56493}, {2.4375, 5.01172, 0.855076}, {2.87305, -5.01758, -2.56493}};
    };

    class Land_i_House_Big_01_V2_F: Residential {
        lootPos[] = {{-2.05078, 5.41016, 0.855071}, {-2.11133, 5.51758, -2.56493}, {-3.19531, -1.45117, -2.65493}, {0.328125, 0.283203, -2.56493}, {0.759766, -1.29688, 0.855071}, {1.27539, -5.21484, 0.855071}, {2.25195, -4.56445, -2.56493}, {3.68359, 5.18359, 0.855071}};
    };

    class Land_i_House_Big_01_V3_F: Residential {
        lootPos[] = {{-2.78125, 5.69336, -2.56493}, {-2.7832, 5.31055, 0.855072}, {-2.78906, 0.654297, 0.855072}, {-3.03906, -1.11133, -2.65493}, {0.675781, -1.29883, -2.56493}, {1.61133, -0.865234, 0.855072}, {2.51758, 5.85938, 0.855072}, {2.65625, -4.94531, -2.56493}, {2.99414, -5.15625, 0.855073}, {3.16211, 5.16406, -2.56493}};
    };

    class Land_i_House_Big_02_V1_F: Residential {
        lootPos[] = {{-1.69141, -2.51172, 0.784063}, {-2.58789, 3.63672, 0.784063}, {-2.86914, 2.97266, -2.62327}, {1.15234, -1.65625, -2.62327}, {2.55273, 1.625, 0.784063}, {3.08203, 2.11914, -2.62327}, {3.33594, -5.625, -2.28594}};
    };

    class Land_i_House_Big_02_V2_F: Residential {
        lootPos[] = {{-2.08789, -2.46484, 0.784063}, {-2.54688, 2.53906, -2.62327}, {-3.01758, 3.12109, 0.784063}, {1.11328, -1.46289, -2.62327}, {2.68945, 2.03711, 0.784063}, {3.02734, 2.27344, -2.62327}, {3.26367, -5.55273, -2.28594}};
    };

    class Land_i_House_Big_02_V3_F: Residential {
        lootPos[] = {{-2.50391, -2.10742, -2.62327}, {-3.00781, 3.68164, 0.784063}, {-3.0957, 2.57227, -2.62327}, {-3.31055, -2.88867, 0.784063}, {1.26953, -1.73438, -2.62327}, {2.40234, 2.26953, -2.62327}, {2.89844, 2.11719, 0.784064}, {3.26758, -5.52734, -2.28594}};
    };

    class Land_i_House_Small_01_V1_F: Residential {
        lootPos[] = {{-1.2207, 3.05078, -1.0419}, {-2.74414, -0.560547, -1.04199}, {3.06641, -1.90234, -1.0404}, {3.35547, 2.94336, -1.04187}};
    };

    class Land_i_House_Small_01_V2_F: Residential {
        lootPos[] = {{-2.53711, -1.80664, -1.0418}, {-3.90625, 3.26367, -1.04239}, {3.31836, -1.31641, -1.04058}, {3.38672, 3.78906, -1.04213}};
    };

    class Land_i_House_Small_01_V3_F: Residential {
        lootPos[] = {{-0.738281, 3.17578, -1.04194}, {-2.46094, -2.16992, -1.04174}, {-2.68359, -1.76563, -1.04187}, {-2.76563, 3.31641, -1.04232}, {3.07422, -1.27539, -1.04059}, {3.08398, 3.04883, -1.0419}, {3.41406, 3.10547, -1.04192}, {3.61719, -0.394531, -1.04086}};
    };

    class Land_i_House_Small_02_V2_F: Residential {
        lootPos[] = {{-1.29688, 1.06641, -0.704727}, {-1.56836, -1.83789, -0.710279}, {2.85352, -1.52148, -0.704572}, {2.88086, 1.76367, -0.702332}, {5.21289, 0.935547, -0.701534}};
    };

    class Land_i_House_Small_02_V3_F: Residential {
        lootPos[] = {{-1.35352, 0.873047, -0.705387}, {-1.5, -2.00781, -0.710184}, {3.49219, -1.16602, -0.703744}, {5.61328, 1.51367, -0.70101}};
    };

    class Land_i_House_Small_03_V1_F: Residential {
        lootPos[] = {{-3.89648, -0.134766, -0.371629}, {0.419922, 2.68555, -0.371629}, {3.59961, 2.0918, -0.371629}, {3.70703, -4.19727, -0.371629}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Shops
    ///////////////////////////////////////////////////////////////////////////
    class Land_i_Shop_01_V1_F: Supermarket {
        lootPos[] = {{-0.863281, 6.10938, -2.76158}, {-1.2168, 0.232422, -2.76158}, {-1.2832, -0.884766, 1.10984}, {-2.28516, 6.1875, 1.10975}};
    };

    class Land_i_Shop_01_V2_F : Supermarket {
        lootPos[] = {{-1.17969, 5.32813, -2.76158}, {-18.127, 16.7285, -2.74088}, {-2.39258, 5.51563, 1.10978}, {-2.53906, 0.253906, -2.76158}, {-2.70703, -1.4707, 1.10992}, {-24.2051, 3.65039, 1.25308}, {1.15625, 1.20313, 1.10906}};
    };

    class Land_i_Shop_01_V3_F : Supermarket {
        lootPos[] = {{-1.5918, 5.35156, -2.76158}, {-2.39258, -0.544922, -2.76158}, {-2.73242, -1.03906, 1.10991}, {-2.98242, 5.80664, 1.10999}, {1.66016, 1.70508, 1.10901}};
    };

    class Land_i_Shop_02_V1_F : Supermarket {
        lootPos[] = {{-0.824219, 1.10742, -2.67036}, {-4.04883, -3.18555, 1.2386}, {-4.43359, -1.98242, -2.69136}, {0.78125, -2.35547, -2.66928}, {2.27734, 1.0957, 1.2386}};
    };

    class Land_i_Shop_02_V2_F : Supermarket {
        lootPos[] = {{-0.171875, -1.43359, -2.66855}, {-2.57422, -4.19336, 1.23859}, {-4.51758, 2.74023, -2.66855}, {1.61523, 0.28125, 1.23859}};
    };

    class Land_i_Shop_02_V3_F : Supermarket {
        lootPos[] = {{-1.01953, 0.71875, -2.66924}, {-2.86719, -3.83594, 1.23859}, {-4.25195, 3.58789, -2.66855}, {1.56641, 0.509766, 1.23859}};
    };

    class Land_u_Shop_01_V1_F : Supermarket {
        lootPos[] = {{-1.14258, 1.23438, -2.88084}, {-2.32422, 3.14648, 0.9905}, {-3.31836, 5.81836, 0.990853}, {0.808594, -0.544922, 0.990474}, {2.58789, 5.81641, -2.88084}};
    };

    class Land_u_Shop_02_V1_F : Supermarket {
        lootPos[] = {{-3.46484, -1.625, 1.23859}, {-3.9082, 3.0957, -2.66855}, {0.751953, -3.26563, -2.66855}, {1.71484, 0.486328, 1.23859}};
    };

    class Land_Kiosk_blueking_F : Supermarket {
        lootPos[] = {{-1.62109, 0.341797, -1.76588}, {1.36328, -0.908203, -1.76588}};
    };

    class Land_Kiosk_gyros_F : Supermarket {
        lootPos[] = {{-1.20898, -1.07813, -1.97606}, {1.26758, -0.128906, -1.97606}};
    };

    class Land_Kiosk_redburger_F: Supermarket {
        lootPos[] = {{-1.07617, -0.335938, -2.87051}, {1.42188, -0.373047, -2.87051}};
    };

    ///////////////////////////////////////////////////////////////////////////
    // Industrial
    ///////////////////////////////////////////////////////////////////////////


    class Land_WIP_F: Industrial {
		lootPos[] =
		{
			{26.001,0.822754,0.480316},
			{13.0654,11.0171,0.819},
			{2.2998,9.0105,0.819},
			{-0.509766,-8.23926,0.819},
			{-4.92285,-10.5313,0.819},
			{-4.43848,-7.08154,0.819},
			{-7.85156,-9.12891,0.819},
			{-8.70801,-16.6416,0.451202},
			{-17.7734,-4.75146,0.819},
			{-15.3018,-10.9063,0.819},
			{-13.9551,4.58643,0.819},
			{-18.2842,4.61621,0.819},
			{-17.9766,9.96045,0.819},
			{-14.6748,11,0.819},
			{-11.7236,10.2629,0.819},
			{-14.1807,-18.0942,4.54947},
			{-14.418,-13.667,4.54947},
			{-7.35938,-13.1628,4.54947},
			{-7.94043,-9.63086,4.54947},
			{20.2764,-13.3125,4.54947},
			{20.123,-9.55933,4.54947},
			{20.8672,0.978516,4.54947},
			{21.542,9.34326,4.54947},
			{20.8721,11.2903,4.54947},
			{-4.77734,10.5742,4.54947},
			{-8.02637,10.8882,4.54947},
			{-14.1494,10.5278,4.54947},
			{-17.7529,7.05371,4.54947},
			{-14.1533,7.05347,4.54947},
			{-14.0791,-1.77124,4.54947},
			{-17.1738,-1.48364,4.54947},
			{-17.8086,1.17847,4.54947},
			{-13.9619,-18.8596,8.36212},
			{-14.8838,-13.8481,8.36212},
			{-16.877,-8.02686,8.36212},
			{-16.8779,-2.79663,8.36212},
			{-16.8809,3.65869,8.36212},
			{-16.4268,9.0061,8.36212},
			{-9.83301,9.68262,8.36212},
			{-3.83789,9.68359,8.36212},
			{2.21973,9.68457,8.36212},
			{8.55176,9.68506,8.36212},
			{14.0332,8.68018,8.36212},
			{-7.25781,-14.1411,8.36212},
			{-3.83496,-9.43506,8.36212},
			{8.5498,-9.43555,8.36212},
			{19.9336,-7.91724,8.36212},
			{20.3594,-4.2002,8.36212},
			{24.5332,1.13232,8.36212},
			{28.5879,-4.74023,8.36212},
			{-13.7139,-18.6267,12.3716},
			{-17.417,-8.56152,12.3716},
			{-8.32617,-14.9478,12.3716},
			{-3.83496,-10.0576,12.3716},
			{15.6445,-9.86743,12.3716},
			{9.75391,3.66162,12.3716},
			{8.55176,9.68506,12.3716},
			{-3.83789,10.4023,12.3716},
			{-17.4082,10.4592,12.3716},
			{-10.8164,-2.79688,12.3716},
			{-4.30566,-5.69116,12.3716}
		};
	};

    class Land_dp_smallTank_F: Industrial {
        lootPos[] = {{-0.0898438, -1.58203, 5.32797}};
    };

    class Land_dp_bigTank_F: Industrial {
        lootPos[] = {{-1.54102, -1.93359, 3.59794}, {-5.79883, -0.496094, 3.59794}, {5.9707, -1.84375, 3.59794}};
    };

    class Land_u_Shed_Ind_F: Industrial {
        lootPos[] = {{-2.41211, 4.91602, -1.40862}, {-6.54688, -0.166016, -1.40862}, {10.6914, 2.14648, -1.40862}};
    };

    class Land_Metal_Shed_F: Industrial {
        lootPos[] = {{-3.34375, -1.80273, -1.343}, {3.52539, -2.15625, -1.343}};
    };

    class Land_i_Shed_Ind_F : Industrial {
		lootPos[] =
		{
			{-7.70996,0.239014,-1.36279},
			{-7.8125,4.19043,-1.36279},
			{1.01465,2.74023,-1.36279},
			{-3.50879,-0.180908,-1.36279},
			{-6.17773,6.41528,-1.36279},
			{5.35352,4.77393,-1.36279},
			{4.82227,-0.0332031,-1.36279},
			{10.459,1.2876,-1.36279},
			{14.2324,2.59473,-1.36279},
			{14.5918,-0.997559,-1.36279}
		};
	};

    class Land_Research_house_V1_F: Industrial {
        lootPos[] = {{-1.28516, 2.89258, 0.0302877}, {1.12305, 2.04492, -0.0384929}};
    };

    class Land_Research_HQ_F: Industrial {
        lootPos[] = {{-1.03125, 2.60547, -3.26622}, {-2.25195, -2.75586, -0.741376}, {-2.28711, -3.94141, -3.26622}, {4.69336, 4.01172, -3.26622}, {6.06445, 3.50391, -0.741376}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Factories
    ///////////////////////////////////////////////////////////////////////////
    class Land_Factory_Main_F : Industrial {
        lootPos[] = {{-8.51953,13.5698,-6.45422}, {-8.75,10.9609,-6.41479}};
    };
    
    class Land_dp_smallFactory_F: Industrial {
        lootPos[] = {{-1.97266, 3.14844, 2.62608}, {-6.49609, -4.92773, 2.82442}, {5.32422, -3.69531, 2.95848}, {9.49805, -4.71094, 1.21193}, {9.95898, 1.41211, 1.21193}};
    };
    
    class Land_dp_mainFactory_F: Industrial {
        lootPos[] = {{-12.8477, -4.8457, -4.45162}, {-15.4961, 6.70703, -4.45162}, {-6.36133, -2.13477, 1.18268}, {-6.91211, -15.3555, 1.18268}, {0.736328, 8.16406, 1.18268}, {1.25391, -10.5801, 1.18268}, {12.8926, 7.0332, -5.51301}, {13.0332, -3.95117, -4.22302}, {13.1719, 4.60742, -4.22302}, {13.2676, 0.710938, -4.22302}, {14.793, -16.8613, -4.08302}, {18.1406, -9.24023, -4.08302}, {19.0566, 5.17969, -7.61482}, {19.0996, -5.68555, -5.51301}, {19.3535, 2.14844, -5.51301}, {3.43555, -2.94141, 1.18268}, {8.82617, -7.33008, -0.280016}, {8.92773, -13.9453, -0.280016}, {9.13281, 8.58203, -0.280016}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Ghost Hotel
    ///////////////////////////////////////////////////////////////////////////
    
    class Land_GH_House_1_F: Industrial {
        lootPos[] = {{-3.49902, -6.07056, 1.39883},{-3.23633, 0.0153809, 1.39883},{3.36963, 0.337891, 1.39883},{3.39404, -5.21753, 1.39883},{-3.65332, -3.97876, -2.10117},{-3.35889, 0.632324, -2.10117},{3.23438, -5.31934, -2.10117}};
    };
        
    class Land_GH_House_ruins_F: Industrial {
        lootPos[] = {{3.16553, -1.15942, 5.97215},{-3.26416, -0.868408, 5.97215}};
    };
    
    class Land_GH_MainBuilding_entry_F: Industrial {
        lootPos[] = {{-3.65039, -17.2097, -0.152101},{-0.499023, -14.7449, -0.152101},{4.09717, -17.7261, -0.152101}};
    };
    
    class Land_GH_MainBuilding_left_F: Industrial {
        lootPos[] = {{-6.44043, 2.63159, -1.05388},{-6.40381, -2.12085, -1.05388},{6.74365, -5.78149, -1.05388},{-0.207031, -7.60864, -1.05388},{2.12793, -10.2429, -1.05388},{5.5249, -15.4812, -1.05388},{-0.98291, -18.1379, -1.05387},{-2.06543, 5.00342, -1.05388},{4.94092, 11.8662, -1.05389},{-1.63135, -1.71094, -1.05388},{9.74365, 1.61304, -1.05389},{4.88525, 6.50024, -1.05389},{14.9434, 3.5686, -1.05389},{13.2563, 8.73413, -1.0539},{17.2432, -4.43799, 3.39144},{13.584, 4.49951, 3.39144},{15.5112, -1.00366, 3.39144},{9.44727, 2.41968, 3.39144},{2.64893, 5.43433, 3.39144},{-0.672363, -6.15454, 3.39144},{1.25537, 0.418213, 3.39144},{-5.28076, -6.47534, 3.39144},{-6.63867, -1.47412, 3.39144},{-7.39063, 4.22949, 3.39144}};
    };
    
    class Land_GH_MainBuilding_middle_F: Industrial {
        lootPos[] = {{-0.408203, 2.26978, 0.538373},{-12.1367, 1.58447, 0.538378},{-2.14014, -7.85303, 1.25473},{-14.9414, -4.22363, 0.538417},{-16.2109, -8.05908, 0.538444},{-4.00293, -17.3718, 0.538503},{11.3765, -5.7373, 0.538428},{15.5952, -9.00879, 0.53845},{14.1016, -3.40771, 0.538412},{0.957031, 11.2915, 2.76766},{9.70215, 6.27051, 4.98464},{13.7354, -1.34595, 4.98465},{2.89844, -14.8083, 4.98466},{-9.37158, -11.5811, 4.98465},{-14.1709, 1.90674, 4.98465},{-10.71, 6.09961, 4.98464}};
    };
    
    class Land_GH_MainBuilding_right_F: Industrial {
        lootPos[] = {{11.9268, -18.7073, 3.82813},{2.43213, -14.093, 3.81848},{6.94629, 2.26904, -1.05388},{7.02637, -1.66724, -1.05387},{-1.81201, -9.91284, -1.05388},{-0.240723, -7.5647, -1.05388},{-5.69873, -6.15967, -1.05388},{3.89648, -11.2732, -1.05387},{1.15527, 3.63159, -1.05388},{2.70215, 9.94263, -1.05389},{-10.3442, 0.716309, -1.05389},{-4.8833, 5.8147, -1.05389},{-7.16406, 1.28369, -1.05389},{-14.3013, 3.41919, -1.05389},{-12.9961, 8.2854, -1.0539},{-11.1431, 13.0371, -1.0539},{-15.7705, -0.219971, -1.05389},{-16.3779, -4.63135, 3.39144},{-14.043, 3.26343, 3.39144},{-6.1499, 6.17603, 3.39144},{-7.31689, 1.0271, 3.39144},{-0.897461, -4.72583, 3.39144},{-1.25635, 1.18457, 3.39144},{1.7832, -4.39404, 3.39144},{7.21973, 3.79077, 3.39144},{5.69287, -1.56128, 3.39144},{5.80078, -6.55884, 3.39144}};
    };
    class land_1: Industrial {
        lootPos[] = {{14.0977, 9.27832, -5.30631},{-6.3584, 8.4375, -5.30632},{-14.2788, 8.0957, -5.30632}};
    };

    class land_2: Industrial {
        lootPos[] = {{-8.04541, 6.65527, 4.21223},{-10.0181, -6.0498, 4.38565},{-2.16016, -6.75195, 3.90532},{11.9395, -2.30762, 4.40326}};
    };

    class Land_A_Crane_02a: Industrial {
		lootPos[] =
		{
			{5.35303,-0.51709,-4.81112},
			{3.83813,-0.0771484,1.43854},
			{0.598877,0.922852,3.20121},
			{-1.14673,1.63037,3.20121},
			{-2.70923,0.634277,3.20121},
			{-2.16724,-1.29346,3.20121},
			{-0.208496,-1.51123,3.20121},
			{0.994385,-0.378906,3.20121}
		};
    };

    class Land_A_Crane_02b: Industrial {
		lootPos[] =
		{
			{-7.49902,1.80615,-7.74835},
			{-9.79932,1.84961,-7.7469},
			{-7.43213,-0.281494,-7.74835},
			{-9.68164,-1.79736,-7.7469},
			{-4.93896,-1.8125,-7.7469},
			{-8.04834,0.00756836,-4.92017},
			{-8.45654,-0.325439,-1.94357},
			{-9.7251,-0.189941,1.0045}
		};
    };

    class Land_A_CraneCon: Industrial {
		lootPos[] =
		{
			{-9.01904,-0.00244141,-16.8252},
			{-10.3091,-0.0444336,5.76295},
			{-8.71021,1.604,5.76295},
			{-7.1936,-1.45044,5.76295}
		};
    };
	
	class Land_Leseni4x: Industrial {
		lootPos[] =
		{
			{-3.35986,0.214111,-1.49523},
			{1.66162,0.243164,0.698521},
			{1.45166,0.343262,0.698521},
			{0.476074,0.359375,2.85931},
			{-1.5083,0.413086,2.86076},
			{-2.58643,-0.417969,5.08223},
			{-0.920898,0.0410156,5.08223},
			{1.39209,-0.0297852,5.08223}
		};
	};
	
	class Land_Ind_Expedice_3: Industrial {
		lootPos[] =
		{
			{-6.55225,-17.3921,-4.8703},
			{-3.17871,-9.41382,-0.721518},
			{-3.08789,-17.6509,2.99378},
			{-0.141602,-7.78271,2.99378},
			{2.67383,-7.8457,2.99378},
			{-0.112305,4.4043,2.99378},
			{3.05469,4.49609,2.99378},
			{0.0654297,18.8696,2.99378},
			{2.72607,18.894,2.99378},
			{-3.28516,10.125,-0.378529},
			{-5.43848,17.4556,-4.8703},
			{-0.304199,-6.91772,-4.8703},
			{-7.27051,-6.5249,-4.8703},
			{-3.22949,-17.6475,-4.8703},
			{-7.08203,17.7246,-4.8703}
		};
	};

    class Land_A_Office02: Supermarket {
        lootPos[] = {{-0.581543, -5.67871, -8.15104},{5.14258, -5.7793, -8.15111},{2.02979, -4.74805, -8.15053},{-21.2427, 2.1748, 5.38394},{-11.4209, 0.0673828, 5.38394},{-1.84033, 2.02246, 5.38394},{9.21729, 3.43066, 5.38395},{18.8926, 6.28613, 5.38394},{20.4136, -1.30469, 5.38394},{6.00049, -2.12695, 5.38394},{-17.3633, 1.19434, 8.71684},{-19.123, 3.86719, 8.71684}};
    };

    class land_AII_last_floor: Military {
        lootPos[] = {{-1.42236, 5.96289, 4.6129},{-4.45508, 3.43555, 5.46183},{-9.89795, 16.1748, 4.61091},{-14.2314, 22.249, 4.61073},{-23.418, -7.18457, 5.45109},{-10.5127, -16.2051, 5.44856},{4.02783, -21.3271, 5.51657},{5.60254, -11.5703, 6.08711},{-10.6987, 10.3369, 5.43586}};
    };

    class land_AII_middle_floor: Military {
        lootPos[] = {{-13.688, 8.02148, 0.513981},{-10.0068, 5.15332, 0.51099},{-13.0356, -0.71875, 0.520344},{-8.25098, 2.8584, 0.513554},{-4.39795, 2.17383, 0.513092},{-6.1333, 8.2168, 0.513794},{-7.30713, 5.61621, 0.520306}};
    };

    class land_AII_upper_part: Military {
        lootPos[] = {{-0.750488, -3.58496, -2.31057},{-1.50635, -1.92773, -2.32196},{-3.05322, 2.05176, -2.32196},{0.378418, 3.15332, -2.58292}};
    };

	class Land_GuardShed: Military {
		lootPos[] =
		{
			{0.0292969,-0.970459,-0.40976}
		};
	};

    class land_b_small1: Industrial {
        lootPos[] = {{-2.86816, -0.407227, -1.50034},{-0.739258, -4.81543, -1.50034},{-0.48291, -1.04102, -1.50034}};
    };

    class Land_Barn_W_01: Residential {
		lootPos[] =
		{
			{0.319336,22.0996,-3.16415},
			{1.87988,18.332,-2.6152},
			{-5.38672,9.02148,-2.61856},
			{-6.12598,-9.67871,-2.61856},
			{6.37988,9.5127,-2.61856},
			{5.81055,-9.92676,-2.61856},
			{-1.06641,-18.0547,-2.6152},
			{-6.21777,-14.6699,-2.61856},
			{6.47168,14.5049,-2.61856},
			{8.03125,14.6973,-3.16415},
			{-7.77637,-14.8623,-3.16415},
			{0.378906,-22.2646,-3.16415}
		};
    };
	
	class Land_Wall_CBrk_5_D: Residential {
		lootPos[] =
		{
			{0.0078125,-0.753662,-0.651459},
			{0.0078125,0.815186,-0.651459}
		};
	};
	
    class Land_Barn_W_02: Residential {
		lootPos[] =
		{
			{-4.34155,4.77441,-2.29897},
			{-5.82886,-2.2832,-2.29897},
			{2.92017,-3.7334,-2.29897},
			{-1.72485,-0.125977,-2.29897}
		};
    };

    class Land_bouda2_vnitrek: Residential {
        lootPos[] = {{-0.369141, -2.53906, -0.72002},{-3.2168, 1.58691, -0.72002},{0.382324, 0.46875, -0.72002}};
    };

    class land_bud2: Residential {
        lootPos[] = {{-2.3623, -1.00586, -1.79023},{1.80273, -0.383789, -1.78249}};
    };

    class Land_budova4_winter: Military {
        lootPos[] = {{-8.83984, 2.3584, -1.09823},{5.0708, -1.40625, -1.09823},{6.57959, -0.0283203, -0.934856},{1.56201, -2.17383, -1.09823},{2.6377, -0.046875, -1.09823},{-1.71045, -1.25293, -1.09823},{-0.383789, -0.00976563, -1.09823},{-4.86865, -1.00879, -1.09823},{-9.05322, -2.32129, -1.09823},{-8.2124, -0.428711, -1.09823}};
    };

    class land_bunka: Supermarket {
        lootPos[] = {{2.44971, 1.91992, -1.51244},{-1.84717, 2.53125, -1.51244},{0.172363, 2.63086, -1.51244}};
    };

    class land_cast1: Industrial {
        lootPos[] = {{-4.93311, -10.6875, -4.38392},{-3.57178, 5.57813, -4.38391},{1.57617, 6.61328, -4.38392},{-3.64893, 10.7246, -4.38392},{-0.235352, 16.6797, -4.38392},{-4.97949, 17.1348, -4.38392},{1.07129, -0.219727, -1.06585}};
    };

    class land_cast2: Industrial {
        lootPos[] = {{1.37793, 13.9932, -4.38393},{-3.45752, 9.15234, -4.38393},{-1.4082, 1.34863, -4.38393},{-4.85156, -8.19824, -4.38392},{1.20654, -10.6094, -4.35677}};
    };

    class land_chat_tr: Residential {
        lootPos[] = {{-2.32764, -2.27051, -2.43594},{-2.16992, 2.02734, -2.44564},{1.8208, 1.6084, -2.43839},{1.31689, -2.08301, -2.42417}};
    };

    class land_dlouhy1: Residential {
        lootPos[] = {{5.70068, -2.35059, -9.5115},{5.49121, 3.41992, -9.51136},{0.822266, -2.20508, -9.50821},{-1.96729, -5.15625, -9.61368},{-6.39014, -0.860352, -9.50334},{-13.3608, -5.13965, -9.63223},{-15.8569, 0.00292969, -9.49695},{-15.5884, 2.50098, -9.49713},{-3.16211, 2.76758, -9.50551},{-16.2661, 5.7041, -9.49667},{-13.0146, 11.2822, -9.64676},{-11.2837, 9.32715, -9.50003},{-6.62061, 8.62012, -9.50318},{-2.92334, 11.3408, -9.6426},{-6.5415, 6.89844, -9.50323},{-1.61914, 8.95215, -9.50656},{-3.27881, 5.42578, -9.50544},{7.02686, 9.4043, -4.98993},{3.95801, 9.46191, -4.98993},{4.04297, -1.94531, -4.98993},{4.23047, -3.57031, -4.98993},{7.09863, -3.58887, -4.98993},{-2.54053, -2.91406, -4.9898},{-1.96533, -5.15332, -4.99091},{-2.11963, -0.246094, -4.98847},{-9.86523, -1.53223, -4.98911},{-13.3618, -5.04688, -4.99086},{-16.5234, -3.20801, -4.98994},{-15.563, 0.476563, -4.98811},{-15.835, 2.96875, -4.98687},{-8.98828, 2.89844, -4.9869},{-16.7842, 8.56934, -4.98408},{-21.0645, 9.25879, -5.083},{-21.124, -2.26172, -9.49339},{-13.2056, 11.2344, -4.98275},{-11.3857, 9.54883, -4.98359},{-11.3604, 6.49414, -4.98511},{-6.69189, 6.5332, -4.98509},{-3.00049, 11.5479, -4.98259},{-1.6626, 9.27246, -4.98373},{-3.08301, 4.99023, -4.98586},{-3.1626, 2.7666, -4.98697},{11.1074, -1.90234, -4.98936},{13.8535, 2.19141, -4.98732},{16.3271, -2.69238, -4.98975},{24.4204, -2.52832, -4.98967},{26.0439, -5.43164, -4.99111},{28.8101, -0.598633, -4.9887},{18.2666, -0.443359, -4.98863},{11.2856, 2.38184, -4.98722},{11.2876, 6.40527, -4.98521},{11.2593, 9.49609, -4.98367},{14.6904, 9.21094, -4.98382},{15.7583, 11.3447, -4.98275},{19.2959, 9.25195, -4.9838},{19.1582, 6.39746, -4.98522},{19.207, 2.26758, -4.98728},{14.8828, 6.12207, -4.98535},{26.2935, 2.10645, -4.98736},{22.2964, 1.99121, -4.98742},{22.1465, 5.72754, -4.98555},{22.1973, 9.5625, -4.98368},{26.4482, 9.35254, -4.98378},{26.3408, 11.5605, -4.98265},{29.5107, 9.34082, -4.98375}};
    };

    class land_dlouhy2: Residential {
        lootPos[] = {{-0.71875, 5.58789, -9.31654},{1.06543, 0.354492, -9.32137},{-0.845215, -4.54883, -9.31622}};
    };

    class land_domek_podhradi_1: Residential {
        lootPos[] = {{-5.3335, 3.54102, -2.75047},{-5.79199, -3.52637, -2.75047},{3.40527, -3.37891, -2.75047},{0.533203, -0.389648, -2.73914},{4.92871, 2.75391, -2.73911},{0.484375, 3.87695, -2.73909}};
    };

    class land_dr_1: Residential {
        lootPos[] = {{0.147461, -0.493164, -1.07508},{-0.343262, 1.92383, -1.08438},{-2.8457, 1.74316, -1.08788},{-2.74463, -0.714844, -1.08217}};
    };

    class land_dr_2: Residential {
        lootPos[] = {{-2.56934, 1.46094, -0.997974},{-0.309082, 1.42676, -0.994301},{4.38867, 1.53711, -0.98571},{3.71338, -1.39453, -0.973618},{-0.55957, -2.23242, -0.978878}};
    };

    class Land_dulni_bs: Residential {
        lootPos[] = {{1.97559, 2.6582, -1.75205},{2.45703, -1.08691, -1.75204},{0.107422, -2.83008, -1.75204}};
    };

    class Land_dum_ras: Residential {
        lootPos[] = {{2.5542, 3.49805, -2.66958},{-0.300781, 0.151367, -2.66957},{-0.5625, -2.03125, -2.66957},{-0.710938, -2.58398, 0.272606},{1.75391, 3.47266, 0.272602},{-0.166504, 1.93457, 0.272606}};
    };

    class Land_dum_zboreny: Residential {
        lootPos[] = {{-2.14941, -4.11914, -2.37675},{1.11865, -0.722656, -2.37675},{6.43115, -3.39746, -2.37675},{-5.66455, 4.21875, 1.40812},{-2.62988, -3.42188, 1.40902},{1.98584, -0.769531, 1.39545},{-5.13135, -3.81738, 1.41562}};
    };

    class Land_dum_zboreny_total: Residential {
        lootPos[] = {{-4.48975, -2.46582, -2.23949},{-4.82227, 2.27539, -2.31548},{4.70947, 2.34668, -2.33912}};
    };

    class land_f_b1: Industrial {
        lootPos[] = {{-4.71436, -0.746094, -2.21533},{-4.91309, -5.07813, -2.21533},{-2.38477, -3.29785, -2.21533}};
    };

    class land_f_b2: Industrial {
        lootPos[] = {{-6.93359, 0.602539, -4.96382},{-4.69922, -2.65625, -4.96382},{-1.76318, 3.53906, -4.97872},{0.286133, -0.306641, -4.21184},{2.08838, -3.16602, -4.21183}};
    };

    class Land_Fuel_tank_stairs: Industrial {
        lootPos[] = {{2.56934, -0.169922, 0.806641}};
    };

    class land_fuelstation_w: Industrial {
        lootPos[] = {{-0.119141, 1.2666, -2.28589},{4.01611, -3.81641, -2.25437}};
    };

    class land_garaze: Industrial {
        lootPos[] = {{-3.1582, -3.11328, -1.56419},{2.4375, -3.86035, -2.11892},{0.065918, -6.53613, -1.67742},{5.46143, -6.25977, -2.119},{4.94287, 0.117188, -2.11902},{3.23438, 5.73242, -2.119},{0.188477, 3.70508, -1.88765}};
    };

    class land_hala1: Industrial {
        lootPos[] = {{-0.166504, -5.2832, -4.00997},{-0.201172, -0.611328, -4.00996},{0.69873, 4.97949, -4.00997},{5.45996, -3.13867, -3.98352},{-5.16455, 1.19238, -3.98352}};
    };

    class land_hlaska: Military {
        lootPos[] = {{-0.668945, 0.740234, 3.77092}};
    };

    class Land_Hlidac_budka: Military {
		lootPos[] =
		{
			{-1.41309,0.753418,-0.828705},
			{-2.69434,0.435059,-0.828705},
			{-2.77051,2.17847,-0.828705},
			{-1.26855,2.23462,-0.828705},
			{2.21484,0.791504,-0.828705}
		};
    };

    class land_hotel_p1: Supermarket {
        lootPos[] = {{-11.0967, -3.02246, -4.65403},{-4.54248, -0.703125, -4.65404},{-10.0791, 3.53125, -4.65403},{-1.21143, -1.64648, -4.65403},{13.8491, 8.28711, -1.13431},{13.6074, 0.416016, -1.12066},{13.8945, -7.89648, -1.13431}};
    };

    class land_hotel_p2: Supermarket {
        lootPos[] = {{7.14795, -1.11133, -7.29951},{4.04053, 2.56152, -7.29951},{-0.273926, -0.673828, -7.29951},{-2.74609, 2.04883, -7.29951},{-6.66553, -10.8359, -0.670689},{-3.03906, -25.0195, 1.31509},{-8.25732, 14.0684, -0.188686},{-3.71631, 23.1865, 1.03674},{1.09277, -19.2598, 6.06893},{6.76172, -14.2334, 6.06892},{4.73926, -6.79785, 6.06892},{8.39941, 6.44238, 6.06893},{0.0703125, 6.85352, 6.06892},{-2.85303, 18.458, 6.06893},{6.24023, 17.0322, 6.06893},{1.46582, -0.719727, 6.06893},{4.34424, -2.07324, 6.06893}};
    };

    class Land_HouseV2_01B: Residential {
		lootPos[] =
		{
			{-3.57666,-2.16943,-4.8586}
		};
    };

    class Land_HouseV2_04_interier: Residential {
        lootPos[] = {{0.289551, 1.33691, -2.89027},{7.24072, -1.63477, -5.74182},{7.44287, 5.53125, -5.73914},{2.66113, 6.87988, -5.73851},{3.3125, 3.62793, -5.73954},{-1.89795, 2.81641, -5.7398},{-5.06152, 6.37695, -5.73866}};
    };

    class Land_HouseV2_05: Residential {
		lootPos[] =
		{
			{-2.95435,-0.43457,-2.16473},
			{-4.81543,-0.382813,-2.79944}
		};
    };

    class Land_HouseV_1I1: Residential {
		lootPos[] =
		{
			{0.0537109,-2.24512,-2.70215}
		};
    };
    class Land_HouseV_1I4: Residential {
		lootPos[] =
		{
			{4.07129,1.78223,-2.82831},
			{-0.347656,1.81885,-2.82831},
			{-1.93604,-4.43359,-2.82831},
			{1.00977,-1.51465,-2.82831},
			{1.01904,-3.86914,-2.82831},
			{-3.20264,-1.46387,-2.82831},
			{-4.17676,-3.19092,-2.82831}
		};
	};
    class Land_Ind_SawMillPen: Industrial {
		lootPos[] =
		{
			{0.0703125,-9.62207,-2.84998},
			{0.0703125,-0.419922,-2.84998},
			{0.0703125,9.38525,-2.84998},
			{-2.75,4.93506,-2.84998},
			{2.43652,4.93506,-2.84998},
			{-2.15918,-4.60059,-2.84998},
			{2.52539,-4.91309,-2.84998}
		};
	};
    class Land_Ind_Workshop01_03: Industrial {
		lootPos[] =
		{
			{-1.81445,-1.88477,-1.31012},
			{0.148926,0.611328,-1.31012},
			{-1.93018,-4.69434,-1.39143},
			{-0.622559,-5.30762,-1.39143},
			{1.19287,3.04297,-1.31889}
		};
	};
    class Land_HouseV_1L2: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_1L1: Residential {
		lootPos[] =
		{
			{-0.101074,6.00732,-0.992706},
			{-3.09131,5.92383,-2.88571},
			{1.3501,5.88281,-0.985657}
		};
	};
    class Land_HouseV_1t: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_2I: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_2L: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_2t1: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_2t2: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_3I1: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_3I2: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_3I3: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
    class Land_HouseV_3I4: Residential {
        lootPos[] = {{-0.486816, 4.16699, -2.7365},{-2.24951, -0.986328, -2.76074},{-3.91016, -4.00195, -2.76509},{0.0488281, -4.36719, -2.76856}};
    };
	class Land_Podesta_1_stairs4: Residential {
		lootPos[] =
		{
			{-0.0244141,-0.000488281,0.202728}
		};
	};
	class Land_Tovarna1: Residential {
		lootPos[] =
		{
			{-1.58008,-8.16504,-5.68835},
			{-7.32129,-7.7207,-5.68835},
			{-8.3877,-3.58691,-5.68835},
			{-6.13184,0.00195313,-5.68835},
			{2.88477,0.282227,-5.68835},
			{3.55469,-7.22754,-5.68835},
			{-10.0498,1.52637,-5.68835},
			{-9.42871,5.50879,-5.68835},
			{-3.55664,5.71875,-5.68835},
			{1.7373,5.45313,-5.68835},
			{-9.13574,-3.4502,-2.64395},
			{-9.28418,-7.93555,-0.196442},
			{-11.5918,1.27539,-0.196442},
			{-0.15918,-7.87207,-0.196442},
			{-2.13477,3.23047,-0.196442},
			{-2.10059,5.12207,-0.196442},
			{5.29395,2.46094,-0.196442},
			{-9.44434,-0.355469,2.28043},
			{-4.30664,-1.57715,2.28043},
			{-4.02832,3.33789,2.28043},
			{-9.55273,-7.86719,2.28043},
			{2.35938,-7.13672,2.28043},
			{3.22266,-2.16602,2.28043},
			{-1.06934,-1.7627,4.90259},
			{1.06348,-2.81055,4.90259},
			{3.52148,-7.96875,4.90259},
			{-11.2725,-7.90039,4.90259},
			{-11.415,3.3125,4.90259},
			{3.68652,2.26172,5.16104},
			{12.5059,-2.39844,-1.28879}
		};
	};
	class Land_Farm_Cowshed_b_dam: Industrial {
		lootPos[] =
		{
			{-1.0957,1.23438,-2.91138}
		};
	};

	class Land_Farm_Cowshed_c_dam: Industrial {
		lootPos[] =
		{
			{0.994141,1.24268,-2.83521},
			{-2.73535,2.32373,-2.83521}
		};
	};
	class Land_HouseV2_04_interier_dam: Residential {
		lootPos[] =
		{
			{6.6875,-6.69189,-5.63889},
			{7.50195,0.541504,-5.63901},
			{7.49805,5.22119,-5.63898},
			{-0.078125,1.44531,-2.67761},
			{-3.91504,7.104,-5.63763},
			{-5.99512,4.94922,-5.63763},
			{5.31348,8.29541,-5.61899},
			{5.85059,-8.64795,-6.367}
		};
	};
	class Land_chz_sj_pristav_02: Residential {
		lootPos[] =
		{
			{-6.96094,-13.7754,6.8654},
			{-6.96191,-5.78564,6.8654},
			{-6.96191,2.4541,6.8654},
			{-6.96094,13.1416,6.8654}
		};
	};

	class Land_Dam_ConcP_20: Industrial {
		lootPos[] =
		{
			{0.0585938,5.34668,9.17001},
			{0.059082,9.66406,9.17001},
			{0.0581055,1.36035,9.17001}
		};
	};


	class Land_Dam_Conc_20: Residential {
		lootPos[] =
		{
			{0.104492,5.31934,9.18037},
			{0.10498,8.76367,9.18037},
			{0.104492,1.33398,9.18037}
		};
	};
	class Land_Farm_Cowshed_a_dam: Industrial {
		lootPos[] =
		{
			{2.05469,-5.1875,-2.21228},
			{5.13574,-6.80469,-2.21228},
			{9.5874,-5.57422,-2.21228},
			{-2.15234,-6.80908,-2.21228},
			{-2.17383,0.03125,-2.20184},
			{3.93604,-1.13916,-2.21228},
			{2.68701,0.766113,-2.21228},
			{8.83984,3.31641,-2.21228},
			{-11.2764,0.20166,-2.21228},
			{5.37695,6.80225,-2.21228}
		};
	};
	class Land_Sara_stodola2: Residential {
		lootPos[] =
		{
			{2.00781,-3.36621,-1.60712},
			{4.81201,-2.02051,-1.60712},
			{5.53223,-0.149414,-1.60712},
			{5.2998,3.06445,-1.60712},
			{1.4375,3.4209,-1.60712},
			{-1.52246,2.68066,-1.60712},
			{-1.28369,-1.77734,-1.60712},
			{2.25342,0.196289,-1.60712}
		};
	};
	class Land_hopper_old_PMC: Residential {
		lootPos[] =
		{
			{1.06543,0.0078125,-6.4332},
			{0.162354,0.0146484,7.16032},
			{-1.24854,1.42188,7.16032},
			{-1.28491,-1.46094,7.16032},
			{-2.6958,-0.0527344,7.16032}
		};
	};
	class Land_chz_vesnice_dum12: Residential {
		lootPos[] =
		{
			{-0.513672,4.93604,-3.52067},
			{-1.72266,7.37842,-3.52067},
			{-5.4082,4.86938,-3.52067},
			{-0.131836,0.381104,-3.52067},
			{-1.27148,-6.31006,-3.52067},
			{-4.9502,-5.57983,-3.52067},
			{-6.27051,-2.03931,-3.52067}
		};
	};
	class Land_chz_janov_boudicka: Residential {
		lootPos[] =
		{
			{3.20044,-3.95605,-14.8585},
			{3.2002,3.01465,-14.8585},
			{4.27295,0.305664,-13.8232},
			{-0.885986,0.34375,-10.297},
			{4.18042,-0.268555,-6.9649},
			{-0.885986,0.34375,-3.50338},
			{3.25952,3.58398,0.883167},
			{5.28027,3.88379,0.883167},
			{-1.8186,3.7207,0.883167},
			{-2.08423,-4.44141,0.883167},
			{3.92822,-3.63574,0.883167}
		};
	};
	class Land_Church_05R: Residential {
		lootPos[] =
		{
			{-9.3584,0.625977,-7.74826},
			{-4.73096,0.0449219,-7.74826},
			{3.13623,0.62793,-7.74826},
			{3.44238,-3.18652,-7.74826},
			{1.67725,5.6123,-7.74826},
			{9.02832,3.7666,-7.74826},
			{16.2998,4.60742,-7.74826},
			{15.543,0.787598,-7.74826},
			{7.79053,-0.14209,-7.74826},
			{16.8979,-3.62793,-7.74826},
			{7.58496,-6.17139,-7.74826},
			{1.17041,-7.25684,-7.74826}
		};
	};
	class Land_Pier_F: Residential {
		lootPos[] =
		{
			{-19.3682,2.03613,4.68246},
			{1.48926,-8.18848,4.68246},
			{20.4141,-3.06348,4.68246},
			{4.64941,-2.18945,4.68246},
			{-8.92773,1.93262,4.68246},
			{-4.14551,-2.6084,4.68246},
			{-12.2139,-7.5166,4.68246},
			{4.64941,-2.18945,4.68246},
			{11.7373,2.32813,4.68246},
			{15.1982,-6.74707,4.68246},
			{-12.3984,2.67188,4.68246},
			{0.805664,1.31055,4.68246},
			{12.7207,-1.13574,4.68246},
			{-16.9941,-3.17383,4.68246},
			{4.09961,2.90918,4.76648}
		};
	};
    class Land_tent2_west: Military {
		lootPos[] =
		{
			{0.384766,-2.05322,-1.65578},
			{-3.06445,1.93311,-1.65578},
			{3.13184,1.48389,-1.65578},
			{0.141602,1.07471,-1.65578},
			{-2.9082,-2.11377,-1.65578},
			{3.06787,-1.71777,-1.65578},
			{-0.165039,3.50586,-1.65578},
			{0.459473,-3.82422,-1.65578}
		};
    };
    class Land_tent_west: Military {
		lootPos[] =
		{
			{0.384766,-2.05322,-1.65578},
			{-3.06445,1.93311,-1.65578},
			{3.13184,1.48389,-1.65578},
			{0.141602,1.07471,-1.65578},
			{-2.9082,-2.11377,-1.65578},
			{3.06787,-1.71777,-1.65578},
			{-0.165039,3.50586,-1.65578},
			{0.459473,-3.82422,-1.65578}
		};
    };
	class Land_tent_east: Hospital {
		lootPos[] =
		{
			{0.384766,-2.05322,-1.65578},
			{-3.06445,1.93311,-1.65578},
			{3.13184,1.48389,-1.65578},
			{0.141602,1.07471,-1.65578},
			{-2.9082,-2.11377,-1.65578},
			{3.06787,-1.71777,-1.65578},
			{-0.165039,3.50586,-1.65578},
			{0.459473,-3.82422,-1.65578}
		};
	};
	
	class Land_HouseBlock_A3: Residential {
		lootPos[] =
		{
			{-0.012207,-2.86438,-5.14316},
			{-0.305664,2.52637,-5.14316}
		};
	};
	
	class Land_Wall_CGry_5_D: Residential {
		lootPos[] =
		{
			{0.00830078,-0.753418,-1.21838},
			{0.00830078,0.815186,-1.21838}
		};
	};
	
	class Land_Brana02nodoor: Residential {
		lootPos[] =
		{
			{-0.145508,-0.0371094,-1.41495}
		};
	};
	
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] =
		{
			{-3.328,-0.783691,-8.74411}
		};
	};
	
    class Land_hut06: Residential {
		lootPos[] =
		{
			{0.750244,-1.45605,-1.43002},
			{-0.628662,2.5293,-1.43002},
			{-0.801758,-0.577148,-1.43002}
		};
    };
	
	class Land_water_tank: Residential {
		lootPos[] =
		{
			{0.64502,1.09985,-4.9548},
			{-1.48193,0.383423,2.02274},
			{1.49023,0.373413,2.02274},
			{1.66162,-2.75269,2.02274},
			{-1.55127,-2.70642,2.02274}
		};
	};
	
	class Land_Ind_SiloVelke_01: Industrial {
		lootPos[] =
		{
			{3.6665,-7.38599,-5.23516},
			{3.74902,9.33203,-5.23516},
			{3.6665,-7.38599,12.187},
			{3.74902,9.33203,12.187},
			{0.208496,-7.30298,22.1482},
			{-12.5083,-7.8689,22.1513},
			{-12.4414,9.46265,22.1482},
			{0.29834,9.54492,22.1513}
		};
	};
	
    class Land_Zastavka_sever: Residential {
		lootPos[] =
		{
			{-3.49414,-0.559082,-0.484021},
			{3.43115,1.15137,-0.484021},
			{0.0825195,0.518066,-0.484021}
		};
    };
	
	class Land_A_Pub_01: Residential {
		lootPos[] =
		{
			{-1.36084,-6.59985,-5.56171},
			{-6.14453,-6.68115,-5.56171},
			{-7.08154,0.945435,-5.56171},
			{-2.5,-3.53784,-5.56171},
			{-1.57178,-0.382446,-5.56171},
			{-3.23682,0.178589,-5.56171},
			{1.39209,0.617798,-5.56171},
			{2.02783,-0.68103,-5.56171},
			{0.928223,-3.2876,-5.56171},
			{4.03369,-1.91931,-5.56171},
			{6.0293,-5.7124,-5.56171},
			{6.55078,3.89111,-5.56171},
			{2.10938,4.16309,-5.56171},
			{-0.345215,4.60596,-1.50165},
			{4.0625,5.54102,-1.50165},
			{3.79053,5.71472,-1.50165},
			{7.07422,1.11792,-1.50165},
			{6.82471,-3.16211,-1.50165},
			{5.9292,-5.47937,-1.50165},
			{3.60889,-6.79919,-1.50165},
			{1.34863,-6.6532,-1.50165},
			{-1.86719,-6.71667,-1.50165},
			{-0.87207,0.459717,-1.50165},
			{-4.48779,1.20874,-1.50165},
			{-7.26758,1.28857,-1.50165},
			{-7.12109,-6.83081,-1.50165},
			{-4.89063,-6.85083,-1.50165}
		};
	};
	
    class Land_HouseV2_03B: Residential {
		lootPos[] =
		{
			{-7.64648,3.13159,-5.40079},
			{-0.0859375,-8.85278,-5.30792},
			{7.4248,1.38281,-5.39017}
		};
    };

    class Land_hut_old01: Residential {
        lootPos[] = {{-2.82275, 2.26172, -3.0186},{2.39307, -7.42383, -2.96946},{-4.6665, -1.7959, -3.01507},{1.85352, 4.6543, -3.01839},{-6.62744, 6.87695, -3.02645},{-7.50293, -7.14453, -3.01511},{-3.08691, -2.10938, -3.01197}};
    };

    class Land_Ind_Expedice_1: Industrial {
		lootPos[] =
		{
			{2.65552,16.5337,-12.9662},
			{-1.44629,16.5332,-12.9662},
			{0.784668,9.36914,-12.9662},
			{1.0293,4.10596,-12.9662},
			{3.89575,19.1631,-3.4041},
			{-3.04004,18.9956,-3.4041},
			{3.62305,16.0518,-3.4041},
			{-0.3396,16.0913,9.76394},
			{-0.236328,0.730469,9.76394},
			{-0.339355,-0.166992,-3.41217},
			{3.76611,-1.75537,-3.38331},
			{-13.4497,-1.44482,-3.41217},
			{-13.4651,-20.3071,-3.41217},
			{3.60864,-20.7207,-3.41217},
			{9.30688,-18.1914,-5.70696},
			{7.55713,-12.1685,-5.70696},
			{3.77734,2.68604,-5.37701},
			{-2.37134,19.0908,-5.37701},
			{3.88037,18.4468,-5.37501}
		};
	};

    class Land_Ind_IlluminantTower: Military {
		lootPos[] =
		{
			{0.00146484,-0.494141,10.4485}
		};
    };

    class Land_Ind_MalyKomin: Industrial {
		lootPos[] =
		{
			{0.976929,1.45801,-17.2313},
			{1.08215,1.75635,-7.33039},
			{-0.758545,1.27881,-7.3304},
			{-0.904907,-0.836914,-7.3304},
			{0.992188,-1.60547,-7.3304},
			{2.32007,0.0146484,-7.3304}
		};
    };

    class Land_Ind_Pec_03a: Industrial {
        lootPos[] = {{11.75, 14.8037, 5.76025},{8.36865, 4.24121, 5.76025},{11.6655, -8.36719, 5.76025},{6.96191, -15.7451, 5.76025},{-1.96777, -22.3271, 5.76025},{-4.75537, -5.51563, 5.76025},{-1.86182, 2.5752, 5.76025},{-4.34082, 13.0742, 5.76025},{3.19287, 20.251, 4.02583},{-1.06396, 24.501, 4.02583}};
    };

    class Land_Ind_Pec_03b: Industrial {
        lootPos[] = {{2.96289, 25.8848, 4.02583},{-1.07227, 21.6309, 4.02583},{-4.0791, 14.9619, 5.76025},{-0.356934, 4.58594, 5.76025},{-4.32617, -9.64941, 5.76025},{-0.961914, -16.7637, 5.76025},{3.42822, -24.7012, 5.76025},{10.2559, -19.7666, 5.76025},{7.74023, -10.6123, 5.76025},{10.7046, -1.34668, 5.76025},{10.647, 11.499, 5.76025}};
    };

    class Land_Ind_Quarry: Industrial {
		lootPos[] =
		{
			{-6.79053,10.4771,-7.31974},
			{-7.35303,2.31421,-7.31974},
			{-7.12354,-5.61963,-7.31974},
			{-0.629395,-11.0007,-7.31974},
			{-0.629395,-15.6675,-7.31974},
			{7.47656,-5.36914,-7.31974},
			{6.98242,1.79419,-7.31974},
			{7.39404,10.2751,-7.31974},
			{3.98926,17.2271,-7.31974},
			{2.8042,17.209,5.52294},
			{-4.51904,17.0283,5.52294},
			{-4.75977,11.9983,5.52294},
			{-4.4082,4.96436,5.52294},
			{-4.65674,-1.81982,5.52294},
			{-4.32666,-7.97998,5.52294}
		};
	};
	class Land_A_BuildingWIP: Industrial {
		lootPos[] =
		{
			{19.4966,1.86523,-6.37723},
			{6.56104,12.0591,-6.03853},
			{-4.20459,10.0525,-6.03853},
			{-7.01416,-7.19678,-6.03853},
			{-11.4268,-9.48901,-6.03853},
			{-10.9424,-6.04004,-6.03853},
			{-14.3564,-8.08667,-6.03853},
			{-15.2114,-15.5996,-6.40635},
			{-24.2778,-3.70898,-6.03853},
			{-21.8047,-9.86426,-6.03853},
			{-20.4595,5.62866,-6.03853},
			{-24.7876,5.65869,-6.03853},
			{-24.48,11.002,-6.03853},
			{-21.1787,12.042,-6.03853},
			{-18.229,11.3049,-6.03853},
			{-20.6851,-17.0527,-2.30806},
			{-20.9214,-12.625,-2.30806},
			{-13.8633,-12.1208,-2.30806},
			{-14.4443,-8.58911,-2.30806},
			{13.7725,-12.2705,-2.30806},
			{13.6191,-8.51709,-2.30806},
			{14.3628,2.02075,-2.30806},
			{15.0376,10.3853,-2.30806},
			{14.3682,12.3328,-2.30806},
			{-11.2813,11.616,-2.30806},
			{-14.5298,11.9304,-2.30806},
			{-20.6538,11.5703,-2.30806},
			{-24.2559,8.09546,-2.30806},
			{-20.6567,8.0957,-2.30806},
			{-20.584,-0.729004,-2.30806},
			{-23.6782,-0.441406,-2.30806},
			{-24.3135,2.2207,-2.30806},
			{-20.4653,-17.8176,1.50458},
			{-21.3877,-12.8057,1.50458},
			{-23.3804,-6.98511,1.50458},
			{-23.3813,-1.75464,1.50458},
			{-23.3853,4.70142,1.50458},
			{-22.9302,10.0479,1.50458},
			{-16.3374,10.7253,1.50458},
			{-10.3418,10.7258,1.50458},
			{-4.28467,10.7268,1.50458},
			{2.04834,10.7275,1.50458},
			{7.5293,9.72241,1.50458},
			{-13.7612,-13.0986,1.50458},
			{-10.3394,-8.39282,1.50458},
			{2.04541,-8.39331,1.50458},
			{13.4287,-6.87476,1.50458},
			{13.855,-3.1582,1.50458},
			{18.0298,2.17432,1.50458},
			{22.0835,-3.69775,1.50458},
			{-20.2173,-17.5847,5.51406},
			{-23.9214,-7.51953,5.51406},
			{-14.8306,-13.905,5.51406},
			{-10.3394,-9.01611,5.51406},
			{9.1416,-8.8252,5.51406},
			{3.24902,4.7041,5.51406},
			{2.04834,10.7275,5.51406},
			{-10.3418,11.4446,5.51406},
			{-23.9131,11.5017,5.51406},
			{-17.3203,-1.75464,5.51406},
			{-10.8091,-4.64893,5.51406}
		};
	};
	class Land_Sara_stodola: Industrial {
		lootPos[] =
		{
			{0.153809,-2.30713,-1.72751},
			{4.04346,-1.05957,-1.72751},
			{4.61719,-0.202637,-1.72751},
			{2.72266,3.62158,-1.72751},
			{-1.05322,4.56494,-1.72751},
			{-5.4585,3.64063,-1.72751},
			{-1.05322,4.56494,-1.72751},
			{0.0444336,0.931641,-1.70023},
			{4.68506,3.35791,-1.72751}
		};
	};
    class Land_Ind_SawMill: Industrial {
		lootPos[] =
		{
			{-4.62598,10.0659,-5.76776},
			{-4.34863,-2.4917,-5.76776},
			{3.33594,-11.4116,-5.76776},
			{10.5234,-4.86133,-5.76776},
			{10.5508,-1.44971,-5.76776},
			{10.8203,5.65381,-5.76776}
		};
    };
    class Land_Ind_Stack_Big: Industrial {
		lootPos[] =
		{
			{0.526855,-0.603027,-28.268},
			{-2.94336,-1.99561,-23.0886},
			{0.680176,-1.99561,-23.0886},
			{-1.22168,0.756836,-23.0886},
			{-2.34814,5.86865,-6.0216},
			{-1.2041,1.84229,10.8525},
			{-1.22021,5.78857,10.7725},
			{0.407227,-0.603027,-23.0886}
		};
	};
    class Land_Ind_Workshop01_04: Industrial {
		lootPos[] =
		{
			{-1.13684,2.4209,-1.49765},
			{-1.74182,5.8335,-1.49765},
			{-0.294434,-5.85352,-1.52376},
			{-1.65833,-1.69629,-1.49765},
			{1.24646,-1.88281,-1.49765},
			{1.13464,1.87842,-1.49765}
		};
    };
    class land_jzd_4silka: Industrial {
        lootPos[] = {{-3.3916, 0.258789, -1.17006}};
    };
    class land_jzd_bezstrechy: Residential {
        lootPos[] = {{7.93115, 2.51367, -5.22504},{6.21924, -3.71387, -5.22504},{-0.757813, -3.27246, -5.22504},{-10.3262, -1.87891, -5.22504},{-5.85791, 2.8252, -5.22504},{1.70557, 2.6582, -5.22504},{0.855957, 2.20313, -0.404762}};
    };
    class land_jzd_kr1: Industrial {
        lootPos[] = {{-4.60498, -16.6143, -6.34966},{-0.616211, -11.9746, -6.26657},{2.00879, 0.411133, -6.26657},{-2.75879, 7.97363, -6.34966},{3.2373, 12.166, -6.34966},{2.22852, 3.82227, -6.26657},{4.25293, -7.25391, -6.34966},{-3.63916, 12.5576, -2.14675},{3.32227, 7.34863, -2.14675},{-3.50049, -1.67871, -2.14676},{0.86377, -8.74902, -2.14675},{-1.79688, -15.4854, -2.14675},{4.17969, -16.0742, -2.14675},{1.33887, -6.41699, 1.31637}};
    };
    class land_jzd_kr2: Industrial {
        lootPos[] = {{4.33154, 23.5986, -2.38598},{-7.01855, 22.6494, -6.3362},{3.06006, 15.4053, -2.34158},{-3.38916, 8.94141, -2.07983},{5.90381, 10.1426, -2.07984},{-0.131836, 3.41992, -2.07984},{-2.67334, -4.22363, -2.07983},{7.01074, -4.36426, -2.07984},{2.15918, -9.3125, -2.07983},{6.0249, -15.4023, -2.07984},{2.06885, -12.9785, -2.07984},{-2.85889, -15.7559, -2.07984},{2.05176, -18.6699, -2.07983},{2.04688, -24.3594, -0.117252},{-7.77246, 20.3125, -6.33621},{4.08887, 20.2959, -6.33621},{1.78662, 12.8369, -6.3362},{1.87793, 9.47168, -6.19965},{1.9082, 5.69531, -6.19965},{1.83447, -3.8584, -6.19965},{1.72021, -9.01953, -6.19965},{1.78711, -13.3994, -6.19965},{2.20703, -16.7363, -6.19965},{2.53027, -23.6309, -6.233},{-2.64941, 8.58203, -6.2563},{-2.64307, -12.1484, -6.2563},{6.21387, -3.83008, -6.2563}};
    };
    class land_jzd_silo_tes: Industrial {
        lootPos[] = {{-2.88379, -1.75977, -16.0503},{17.8921, -6.25586, -15.9365},{24.4775, -0.426758, -15.9552},{18.7129, 5.69043, -16.0179}};
    };

    class land_jzd_stodola1: Residential {
        lootPos[] = {{0.400879, -13.5039, -2.0262},{-3.86035, -9.13281, -2.0262},{-0.871582, -1.84473, -2.0262},{-3.12207, 6.1543, -2.0262},{1.37891, 14.0986, -2.0262}};
    };

    class land_jzd_stodola2: Residential {
        lootPos[] = {{6.86377, -5.91699, -2.0262},{3.77734, -12.7139, -2.0262},{-0.95459, -1.85254, -2.0262},{-5.56543, 3.05859, -2.0262},{7.41016, 5.45703, -2.0262},{2.16113, 7.55273, -2.0262},{3.38037, 12.7236, -2.0262},{7.05078, 14.0605, -2.0262},{1.06689, 1.17383, 1.31123}};
    };

    class land_jzd_vodojem: Industrial {
        lootPos[] = {{-0.27002, 0.380859, -6.83972}};
    };

    class Land_KBud: Residential {
        lootPos[] = {{0.0415039, -0.40625, -1.04616}};
    };

    class Land_komin: Industrial {
		lootPos[] =
		{
			{0.000244141,-1.16699,-15.8128},
			{0.0126953,-0.753906,13.0612},
			{1.81152,1.08301,13.0612},
			{0.020752,2.97656,13.0612},
			{-1.89063,1.19336,13.0612}
		};
    };

    class land_kontejner_des: Industrial {
        lootPos[] = {{-0.90625, -0.110352, -0.604759}};
    };

    class land_kostelik_final_2122: Residential {
        lootPos[] = {{-0.694336, 3.57324, -5.57918},{1.99854, 3.09668, -5.57919},{4.07324, -0.552734, -5.57918},{-0.619141, -6.96094, -5.57918},{2.00195, -6.27051, -5.57918},{-2.23291, -2.90137, -5.57918},{2.39404, 8.44238, -5.55285},{-1.03955, 8.20215, -5.01875},{1.06689, 7.79492, 1.55624},{-0.308594, 7.52832, 1.55565},{0.831543, -1.79492, -5.57918}};
    };

    class Land_kulna: Residential {
		lootPos[] =
		{
			{0.0371094,0.853516,-0.864868}
		};
    };

    class land_lodenice: Residential {
        lootPos[] = {{-3.89795, 1.52051, -2.83267},{-1.83301, -5.40625, -2.01773},{-4.23145, -12.6211, -1.10887},{-0.587891, -12.7275, -1.0997}};
    };

    class land_marsh1: Residential {
        lootPos[] = {{4.64844, 3.49316, -3.95897},{1.33008, 4.81934, -3.95897},{3.98535, 6.78223, -3.95897},{2.28564, -0.0136719, -3.95897},{3.98193, -3.84277, -3.95897},{0.0605469, -5.29004, -3.95897},{-0.55127, 0.425781, -3.95897},{-2.35938, 4.36133, -3.99553}};
    };

    class land_marsh2: Residential {
        lootPos[] = {{-6.88477, -1.49512, -0.265942},{0.22998, 9.88281, -0.541714},{2.99219, 10.4424, -0.73275},{5.43848, 9.24902, -0.941872}};
    };

    class Land_Mil_Barracks_i: Military {
		lootPos[] =
		{
			{8.7417,2.00195,-1.06253},
			{5.35254,2.65771,-0.688858},
			{5.36133,-2.30298,-0.728409},
			{1.98633,2.31909,-0.688858},
			{1.26172,-2.45459,-0.728409},
			{-0.637695,-2.36035,-0.728409},
			{-3.83008,-2.31787,-0.728409},
			{-7.72852,2.51831,-0.688858},
			{-8.2915,-2.33789,-0.728409}
		};
	};
	
	class Land_chz_skladoleju_06_06: Military {
		lootPos[] =
		{
			{8.7417,2.00195,-1.06253},
			{5.35254,2.65771,-0.688858},
			{5.36133,-2.30298,-0.728409},
			{1.98633,2.31909,-0.688858},
			{1.26172,-2.45459,-0.728409},
			{-0.637695,-2.36035,-0.728409},
			{-3.83008,-2.31787,-0.728409},
			{-7.72852,2.51831,-0.688858},
			{-8.2915,-2.33789,-0.728409}
		};
	};
	
	class Land_SCF_01_heap_bagasse_F: Military {
		lootPos[] =
		{
			{-0.459473,-12.5005,2.54596},
			{-1.64355,-6.93848,4.04475},
			{-0.0322266,5.96313,3.27547},
			{-1.93994,11.2454,3.27547},
			{-6.24805,14.2625,1.46838},
			{-4.76172,5.89087,1.46838},
			{-5.23633,12.1072,1.4577},
			{-4.89453,-15.3645,0.00459528},
			{-6.07031,-9.89258,1.43359},
			{-6.12598,-2.29248,1.57562},
			{6.24707,14.2625,1.46838},
			{4.76123,5.89111,1.46838},
			{5.23584,12.1072,1.4577},
			{4.89355,-15.364,0.0045948},
			{6.06982,-9.89233,1.43359},
			{5.16504,-2.22095,1.56493}
		};
	};

    class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] =
		{
			{-0.468262,-2.05542,-1.02869},
			{-0.267578,0.524902,-1.02869},
			{0.46875,-1.65088,-1.02869},
			{0.506836,2.09521,-1.02869}
		};
    };
	
	class Land_Misc_Cargo1Ao_EP1: Industrial {
		lootPos[] =
		{
			{-0.468994,-2.05615,-1.02869},
			{-0.267334,0.524414,-1.02869},
			{0.468506,-1.65137,-1.02869},
			{0.50708,2.0957,-1.02869}
		};
	};

    class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] =
		{
			{-0.46875,-2.05566,-1.02869},
			{-0.267578,0.524414,-1.02869},
			{0.469238,-1.65137,-1.02869},
			{0.506836,2.0957,-1.02869}
		};
    };

    class Land_Misc_deerstand: Military {
		lootPos[] =
		{
			{-0.895996,-0.567383,1.12958},
			{0.895996,-0.596191,1.12958},
			{0.03125,-1.17871,1.12958},
			{0.325195,0.190918,1.12958}
		};
    };

    class Land_Misc_PowerStation: Industrial {
		lootPos[] =
		{
			{4.29175,7.61084,-1.11942},
			{4.57813,-5.1499,-1.11945},
			{4.60889,0.723145,-1.11942}
		};   
	};

    class land_molovabud1: Industrial {
        lootPos[] = {{-9.02637, -1.52637, 1.41187},{-8.70215, 6.33398, 1.41187},{-3.35205, 1.04004, 1.41187},{1.27637, 5.45605, 1.41425},{-1.12793, 0.734375, 5.07722}};
    };

    class Land_Nasypka: Industrial {
		lootPos[] =
		{
			{1.06641,0.00805664,-6.4332},
			{0.162109,0.0134277,7.16031},
			{-1.24805,1.42188,7.16031},
			{-1.28418,-1.46143,7.16031},
			{-2.69531,-0.0529785,7.16031}
		};
    };
    class land_trubice: Industrial {
        lootPos[] = {{-3.31152, 2.16504, 2.59439},{1.09229, 2.82227, 2.59438},{5.39551, 0.498047, 2.59438}};
    };

    class Land_vez: Military {
		lootPos[] =
		{
			{-0.58252,1.65405,1.35687},
			{0.117188,0.839355,1.39404},
			{-0.0488281,1.9325,1.3551}
		};
    };

    class land_vstup: Industrial {
        lootPos[] = {{-12.4053, -2.3916, -4.57601},{-5.09863, -0.53418, -4.56671},{2.9541, -2.67383, -4.53907},{7.39893, -1.62695, -4.52592}};
    };

    class Land_vys_budova_p2: Residential {
        lootPos[] = {{-6.41992, 3.33789, -0.702797},{-2.60352, -2.88379, -0.702797},{-6.21973, -3.98438, -0.702797},{-0.716309, -2.80957, 0.694061}};
    };

    class Land_Vysilac_FM: Military {
		lootPos[] =
		{
			{1.44678,-2.16394,-5.77229},
			{1.43994,-1.56201,8.39033},
			{0.367188,-0.843384,8.39033},
			{1.39502,0.239014,8.39033},
			{2.521,-0.848999,8.39033}
		};
	};

    class land_vysoky2: Residential {
        lootPos[] = {{1.23291, 0.397461, -15.4928},{3.23291, -2.34375, -15.5683},{6.66016, 4.94141, -15.6088},{6.50146, -5.2373, -15.6088},{3.46826, -13.1758, -15.5678},{9.36914, -10.8037, -15.5851}};
    };

    class land_x_nadrz: Industrial {
        lootPos[] = {{-0.677734, 2.68262, 1.44318}};
    };

    class land_x_skladiste_low_te: Industrial {
        lootPos[] = {{-13.2363, -9.30371, -2.8418},{-14.231, 3.10449, -2.84105},{-2.57813, 8.91992, -1.61393},{0.682617, 6.83594, -2.84118},{13.1919, 6.2959, 0.106834},{9.46045, -1.61426, -2.58824},{10.0454, -6.80762, -2.58824},{1.45361, -5.36816, -2.58824},{-6.55615, -9.5127, -2.84166},{-15.5264, -11.1084, 4.04656},{4.94336, -12.0215, 4.04781},{16.9888, -3.24316, 4.04781},{16.814, 10.458, 4.04665},{10.6865, 6.64941, 6.17473}};
    };

    class land_x_vetraci_komin: Industrial {
        lootPos[] = {{3.07617, -0.651367, 14.9767},{-0.126953, -0.155273, 14.9466}};
    };

    class land_x_vez_te: Residential {
        lootPos[] = {{1.37744, -0.333008, -4.60751},{-0.855469, 2.38574, -4.58929},{0.958984, 2.96875, -4.58572},{1.19434, -0.387695, -0.273819},{0.800781, 2.80176, -0.272766},{-2.59912, 2.79102, -0.272377},{-2.41211, 0.592773, -0.273094},{-4.83057, -3.3623, -0.274063}};
    };

    class land_zd_1: Residential {
        lootPos[] = {{-1.92969, 3.09961, -3.67255},{2.68896, 3.86426, -3.67256},{2.27881, -1.89551, -3.67255},{-0.723145, -2.45215, -3.67255},{-4.57813, -1.90918, -4.04225}};
    };

    class land_zd_2: Residential {
        lootPos[] = {{-2.1416, -0.546875, -1.82467},{-0.318848, 2.48145, -1.82467},{1.85205, 1.12793, -1.82467}};
    };

    class Land_HouseV2_03: Residential {
		lootPos[] =
		{
			{10.0872,-8.61133,-5.42407},
			{17.5278,1.25879,-5.42404},
			{0.702148,7.87109,-5.80005},
			{-17.5911,0.749023,-5.6423},
			{-14.04,-8.40625,-5.51904}
		};
	};

    class land_seb_nasypka: Industrial {
        lootPos[] = {{2.58789, -3.42188, -4.24763},{4.24707, 9.42383, -6.46843},{7.66113, 8.33203, -6.49762},{8.46094, 3.88672, -6.50448},{10.937, 0.0751953, -6.52561},{5.90869, -2.25098, -6.90967},{8.9917, -9.40332, -0.134293},{8.97705, -3.41602, -0.134289},{6.27197, -2.44629, 1.30363},{6.06689, 4.19922, 1.30363},{4.11523, 8.49805, 1.30363},{7.87158, 6.61621, 1.30363},{5.11279, 4.30566, 3.86848},{7.66943, 1.15723, 3.12964},{5.90625, 9.59668, 3.27484},{2.71143, -6.04297, -0.134289}};
    };

    class land_seb_near_fac: Industrial {
        lootPos[] = {{-23.6338, -19.4893, -2.74704},{-23.417, -23.2939, -5.23791}};
    };

    class land_seb_residental: Residential {
        lootPos[] = {{4.65283, 6.66699, -3.97305},{-5.93555, 9.76367, -3.71556},{-0.84375, 2.00195, -3.69101},{-6.8833, -8.72266, -3.65704},{-6.19385, -0.334961, -3.6836},{-0.363281, 4.80273, -3.69986},{-2.65723, 7.20898, 0.527275},{-6.62402, 5.46777, 0.535892},{-2.62891, 2.04199, 0.552792},{-1.87891, -2.06543, 0.573109},{-6.69287, -3.84863, 0.581905},{-1.95313, -7.14258, 0.448582},{-6.7876, -7.85156, 0.403408}};
    };

    class land_seb_rozvodna: Industrial {
        lootPos[] = {{-0.746582, 3.18555, 0.582798}};
    };

    class land_seb_vod_vez: Industrial {
        lootPos[] = {{0.291992, 0.31543, 15.0059},{2.41504, -0.685547, 15.0589}};
    };

    class land_senik: Residential {
        lootPos[] = {{-1.24219, -0.173828, -4.08134},{-0.446777, 2.09375, -4.07665},{0.0864258, -3.96973, -4.08918},{-3.14014, -7.28711, -4.09602},{-7.97656, -3.49707, -4.0882},{-17.2642, -3.91504, -4.08906},{-17.3037, 0.610352, -4.07971},{-13.439, 4.39355, -4.07189},{-7.9624, -0.228516, -4.08143},{-4.69238, 3.64551, -4.07343}};
    };

    class Land_Shed_Ind02: Industrial {
		lootPos[] =
		{
			{2.46521,-10.9692,-4.86697},
			{0.776978,-7.72168,-4.62823},
			{4.46582,-3.45557,-4.62823},
			{0.217285,-9.19043,-1.15224},
			{4.69104,-9.0791,-1.15224},
			{4.8103,-6.20752,-1.15224},
			{4.78186,-2.26563,-1.15224},
			{4.77881,2.79199,-1.15224},
			{4.79346,6.38818,-1.15224},
			{4.74512,9.59131,-1.15224},
			{-0.714233,9.68994,-1.15224},
			{-3.94678,9.82959,-1.15224},
			{-0.577759,11.3516,-1.15224},
			{-0.9104,12.3818,-1.15224},
			{-3.98047,6.5415,-1.15224},
			{-3.98047,2.75488,-1.15224},
			{-3.99854,-2.55273,-1.15224},
			{-3.92505,-8.30078,-1.15224},
			{-2.45557,11.5684,-4.86697},
			{4.16699,6.49707,-4.62823},
			{-1.67346,8.2666,-4.62823},
			{-4.677,-8.69141,-4.03056},
			{-1.14246,-0.813965,-4.62823},
			{-4.56104,-5.61914,-3.96748},
			{-4.81165,-2.02441,-3.9265},
			{-4.66785,2.21533,-3.98836},
			{-4.703,6.5415,-3.89417},
			{-4.7384,9.93555,-3.98848}
		};
	};
	
	class Land_Trafostanica_velka: Industrial {
		lootPos[] =
		{
			{5.39551,3.98633,-2.60738},
			{4.32275,-3.5083,-2.60738},
			{-6.34033,-3.70142,-2.60738},
			{-6.06885,4.25635,-2.60738},
			{4.0918,3.93701,-2.60738},
			{3.76172,-3.37451,-2.60738},
			{-3.63281,-3.1792,-2.60738},
			{-2.68311,3.66455,-2.60738}
		};
	};
    class Land_Shed_W01: Residential {
        lootPos[] = {{-1.46973, -0.0566406, -1.40097}};
    };

    class land_sklad2: Residential {
        lootPos[] = {{-3.17139, -2.12988, -2.38225},{2.39063, -3.15625, -2.38225},{3.30371, 1.88281, -2.38225},{-2.32568, 3.64844, -2.38225}};
    };

    class land_st_vez: Military {
        lootPos[] = {{0.0141602, -4.40625, -3.31476},{-5.08496, -2.78223, -3.31476},{-4.76514, 2.26953, -3.31476},{-0.228516, 3.75, -3.31476},{-1.03857, -2.08105, 6.40833},{-4.41309, 0.394531, 6.40833},{-1.98145, 2.73926, 6.40833}};
    };

    class Land_stodola_old_open: Residential {
		lootPos[] =
		{
			{6.3418,-0.0565186,-4.80161},
			{-4.604,-0.273193,-4.80161},
			{-2.55176,-0.128784,-4.80161},
			{4.10645,-0.0565186,-4.80161},
			{-2.66211,3.03638,-4.80161},
			{3.75635,3.63892,-0.701202},
			{4.19727,4.9812,-0.701202},
			{-0.00488281,5.43225,-0.701202},
			{-1.47412,5.46716,-0.701202},
			{-1.9834,9.47156,-0.701202},
			{1.1333,11.1434,-0.701202},
			{4.58594,10.8453,-0.701202},
			{-0.168457,9.73621,3.24771},
			{0.912598,11.0786,3.24771},
			{4.09229,-3.0824,-4.80161},
			{-1.95361,-3.53406,-0.64006},
			{-2.55225,-5.29126,-0.64006},
			{1.52979,-5.38757,-0.64006},
			{1.6084,-9.75488,3.27953},
			{0.831543,-11.264,3.27953},
			{-3.22217,-9.54871,-0.64006},
			{-1.58447,-11.0828,-0.64006},
			{3.96484,-10.9203,-0.64006}
		};
	};
	class Land_Stan_east: Residential {
		lootPos[] =
		{
			{0.015625,-3.37427,-1.07194},
			{-1.93115,-2.56543,-1.07194},
			{-1.96094,2.13647,-1.07193},
			{1.8125,2.10645,-1.07195},
			{1.81299,-2.56567,-1.07195}
		};
	};
    class Land_stodola_open: Residential {
    		lootPos[] =
		{
			{1.86279,-2.51685,-3.67737},
			{1.875,1.45569,-3.67737},
			{1.85596,5.81055,-3.67233},
			{-4.01367,6.0343,-3.67233},
			{1.90967,-5.99841,-3.67233}
		};
    };
	class Land_Mil_House_EP1: Residential {
		lootPos[] =
		{
			{-0.900879,3.15234,-4.83632},
			{-5.77295,4.61328,-4.83632},
			{-9.38525,4.61328,-4.83632},
			{-11.6362,4.61328,-4.83632},
			{-10.9629,2.66406,-4.83632},
			{-14.4512,2.53516,-4.83632},
			{-10.2197,-1.30469,-4.83632},
			{-9.97461,-6.87109,-4.83632},
			{-7.68701,-6.87109,-4.83632},
			{-7.93213,-1.30469,-4.83632},
			{-0.869629,-4.12891,-2.95436},
			{-0.861816,1.6543,-0.626572},
			{-2.28223,4.72266,-0.626572},
			{-5.77295,4.61328,-0.561539},
			{-9.38525,4.61328,-0.561539},
			{-11.6362,4.61328,-0.561539},
			{-14.4512,2.53516,-0.561539},
			{-10.2197,-1.30469,-0.561539},
			{-9.97461,-6.87109,-0.561539},
			{-7.68701,-6.87109,-0.561539},
			{-7.93213,-1.30469,-0.561539},
			{2.94824,1.58008,-4.83632},
			{2.94727,-2.00977,-4.83632},
			{2.80713,-7.33008,-4.83632},
			{7.68115,-2.00977,-4.83632},
			{7.68164,-7.33008,-4.83632},
			{11.6626,-2.00977,-4.83632},
			{15.0625,-2.00977,-4.83632},
			{7.68115,1.58008,-4.83632},
			{9.26514,3.54883,-4.83632},
			{5.604,3.39258,-4.83632}
		};
	};
    class land_syp_r: Residential {
        lootPos[] = {{-0.782715, 0.944336, -6.54317},{1.80078, -0.692383, -6.53119}};
    };
	class Land_Mil_ControlTower_EP1: Residential {
		lootPos[] =
		{
			{-3.19922,4.23535,-10.0416},
			{1.91211,6.2666,-8.95723},
			{10.3281,4.98633,-7.23546},
			{3.73633,5.81152,-4.94534},
			{-0.697266,4.49707,-5.02556},
			{5.85156,3.47803,-0.828827},
			{2.48047,-1.0835,-0.845169},
			{4.06641,0.534668,-0.83699},
			{6.04883,0.92041,-0.845169},
			{-0.193359,0.53125,-0.845169},
			{-0.355469,6.01123,-0.84108},
			{-0.0976563,-3.99609,-0.83699},
			{9.9043,-4.10449,-0.845169},
			{1.49609,2.51123,2.72499},
			{7.31641,3.646,2.72499},
			{7.46094,-1.47754,2.72499},
			{1.86328,-1.4043,2.72499},
			{7.41016,-4.26563,-8.97812},
			{2.5918,-4.21729,-8.97812},
			{0.333984,-1.4707,-8.97812},
			{-3.43164,-3.98145,-8.97813},
			{-3.43164,0.401855,-8.97813},
			{-8.31055,0.473145,-8.97813},
			{-8.33594,-3.62793,-8.97813},
			{7.41016,-4.26563,-5.03358},
			{2.5918,-4.21729,-5.03358}
		};
	};
    class Land_Nav_Boathouse: Residential {
		lootPos[] =
		{
			{1.58594,9.50684,3.74122},
			{-5.2749,9.50684,3.74122},
			{5.32227,-1.97266,3.74121},
			{1.56934,7.46094,3.74122},
			{-5.16309,0.720703,3.74122},
			{-5.82422,6.96387,3.74122},
			{7.66602,3.99414,3.74122},
			{7.37012,8.46875,3.74122},
			{-7.72021,5.2832,3.74122},
			{-7.71973,0.739258,3.74122},
			{7.66602,-2.4707,3.74121}
		};
	};
	class Land_FireEscape_01_short_F: Residential {
		lootPos[] =
		{
			{-1.26514,-2.61035,-1.13054},
			{-1.23242,1.27148,0.630768},
			{-1.26514,-2.61035,2.3633},
			{-1.23242,1.27148,4.13419},
			{-1.26514,-2.61035,5.94354},
			{0.15625,-2.18848,5.94354}
		};
	};
    class Land_Nav_Boathouse_PierL: Residential {
        lootPos[] = {{4.73975, 0.168945, 5.88749},{-1.41748, -0.195313, 5.88749}};
    };
	class land_nav_pier_m_1: Residential {
		lootPos[] =
		{
			{-19.0161,-2.57495,23.2803},
			{-0.0161133,-2.57495,23.2803},
			{19.5449,-2.57495,23.2803},
			{10.7637,-0.108154,23.2803},
			{19.5444,2.18018,23.2803},
			{10.7539,2.18005,23.2803},
			{-0.0161133,2.17993,23.2803},
			{-8.85107,2.1803,23.2803},
			{-19.0161,2.18018,23.2803},
			{-8.85107,-2.5752,23.2803},
			{10.7534,-2.57507,23.2803},
			{-8.8418,-0.108154,23.2803},
			{-0.00634766,-0.108154,23.2803}
		};
	};
	class Land_PierWooden_01_16m_F: Residential {
		lootPos[] =
		{
			{0.606445,-1.13892,19.5459},
			{-1.16455,2.53613,19.5459},
			{0.882813,6.15039,19.5459},
			{-0.808594,-4.92017,19.5459}
		};
	};
    class Land_Nav_Boathouse_PierR: Residential {
        lootPos[] = {{-4.71875, -2.78027, 5.87571},{-0.0219727, -2.75391, 5.87571}};
    };

    class Land_NAV_Lighthouse: Residential {
		lootPos[] =
		{
			{0.0197754,-0.243164,-6.77612},
			{0.875244,-0.179688,2.50888},
			{-0.00952148,-2.10986,2.50888},
			{2.09009,-0.00976563,2.50888},
			{-0.00976563,2.08984,2.50888},
			{-2.10962,-0.0102539,2.50888}
		};
	};

    class land_nav_pier_c: Industrial {
        lootPos[] = {{-8.15576, -16.2305, 23.0037},{-7.75244, -1.47949, 23.0037},{-7.90234, 15.5029, 23.0037},{-7.47852, 8.41309, 23.0037},{-8.00391, -9.05273, 23.0037}};
    };

    class land_nav_pier_c2: Industrial {
		lootPos[] =
		{
			{18.4973,-8.46191,24.14},
			{-0.212402,-8.46191,24.14},
			{-17.1355,-8.46191,24.14},
			{-20.0635,0.0107422,24.14},
			{-17.1355,7.99023,24.14},
			{-0.212158,7.99121,24.14},
			{18.4973,7.99121,24.14},
			{-0.186768,0,24.14}
		};
	};

    class land_nav_pier_c2_end: Industrial {
		lootPos[] =
		{
			{8.47363,2.90796,24.14},
			{9.13965,-0.688232,24.14},
			{8.47363,-4.49585,24.14},
			{0.0546875,-4.49585,24.14},
			{-7.56055,-4.49585,24.14},
			{-8.86035,-0.688232,24.14},
			{-7.56055,2.90796,24.14},
			{0.0664063,-0.688232,24.14}
		};
	};
    class land_nav_pier_c_90: Industrial {
        lootPos[] = 
		{
			{-7.7085, -8.63867, 24.0014},
			{-7.34619, -3.86133, 24.0014},
			{-7.38965, 1.01465, 24.0014},
			{-7.5083, 6.71191, 24.0014},
			{0.339355, 7.0293, 24.0014},
			{6.40283, 7.0957, 24.0014}
		};
    };
	class land_nav_pier_c_t20: Industrial {
		lootPos[] =
		{
			{-5.82715,8.3125,24.14},
			{-6.5459,-8.2832,24.14}
		};
	};
    class land_nav_pier_c_big: Industrial {
		lootPos[] =
		{
			{15.2881,9.26514,23.2817},
			{-0.743652,9.94727,23.2817},
			{-15.2451,9.64307,23.2817},
			{-15.4326,-3.91553,23.2817},
			{-14.5894,-19.2881,23.2817},
			{2.36182,-20.7209,23.2817},
			{15.4741,-20.7161,23.2817},
			{16.1968,-4.73047,23.2817},
			{0.517578,-4.32837,23.2817}
		};
	};
    class Land_nav_pier_m_2: Residential {
		lootPos[] =
		{
			{-19.0161,-2.57617,23.734},
			{-0.0170898,-2.57617,23.734},
			{19.5449,-2.57617,23.734},
			{10.7627,-0.109375,23.734},
			{19.5444,2.17969,23.734},
			{10.7534,2.17969,23.734},
			{-0.0166016,2.17969,23.734},
			{-8.85205,2.17969,23.734},
			{-19.0156,2.17969,23.734},
			{-8.85156,-2.57422,23.734},
			{10.7539,-2.57617,23.734},
			{-8.8418,-0.109375,23.734},
			{-0.00634766,-0.109375,23.734}
		};
	};
    class land_nav_pier_m_end: Residential {		
		lootPos[] =
		{
			{-1.63086,-0.0998535,23.734},
			{2.03662,6.10034,23.734},
			{-5.56006,6.08398,23.734},
			{-5.49854,-0.414551,23.734},
			{-5.76855,-6.16797,23.734},
			{2.34619,-6.04297,23.734}
		};
	};
	class Land_Com_tower_ep1: Residential {
		lootPos[] =
		{
			{-1.43359,1.57886,-7.30679},
			{-1.43701,-1.62061,-7.30679},
			{0.810547,0.0153809,-7.30679}
		};
	};
    class Land_ns_jbad_A_GeneralStore_01: Residential {
        lootPos[] = {{-1.95898, 3.79395, -1.20155},{0.864746, 3.93359, -1.20155},{3.40576, 3.81543, -1.20155},{5.2002, 3.82813, -1.20155},{10.1587, 3.05371, -1.20155},{10.1592, 0.866211, -1.20154},{5.89063, 0.604492, -1.20155},{3.96387, 0.604492, -1.20155},{1.83594, 0.631836, -1.20155},{-0.505371, 0.662109, -1.20155},{5.79248, -4.14746, -1.20155},{12.71, -3.49316, -1.20155},{2.54541, -6.17969, -1.20155},{-1.36865, -5.91016, -1.20155},{-5.46875, -5.92871, -1.20154},{-9.01465, -6.27441, -1.20155},{0.26123, -7.33691, -1.20155},{12.2588, -7.87207, -1.20155},{-9.2002, -3.20605, -1.20155},{0.37207, -1.16309, -1.20155}};
    };

    class Land_ns_Jbad_A_Stationhouse: Military {
        lootPos[] = {{-6.93945, -7.13867, -9.46536},{-12.9404, 0.662109, -9.46536},{-6.33008, 1.7041, -9.46536},{-5.67383, -1.94531, -9.46537},{-7.77002, -4.62207, -9.46536},{-6.93506, 4.94922, -9.46536},{-5.90967, 7.74707, -9.46536},{-11.2642, 8.73242, -9.46536},{-12.208, 5.63574, -9.46536},{-14.3066, 6.98828, -9.46536},{-16.7954, 2.97461, -9.46536},{-17.332, -5.8457, -9.46536},{-14.6265, -5.30664, -9.46536},{-2.13672, -3.03613, -9.46536},{-2.03516, 2.78516, -9.46536},{-1.91406, 7.15527, -9.46536},{-8.48096, -6.48535, -6.77364},{-15.7749, -7.71777, -6.77364},{-17.375, -3.10254, -6.77364},{-17.0884, 6.61523, -6.77364},{-12.9873, 6.54883, -6.77364},{-9.61328, 6.80469, -6.77364},{-5.8584, 6.69141, -6.77364},{-2.31299, 6.87305, -6.77364},{-1.86133, -3.58105, -6.77364},{-7.43652, -3.58691, -6.77364},{-14.3545, -7.84277, -3.6493},{-16.6865, -7.78711, -3.6493},{-16.7388, 7.72949, -3.6493},{-13.9004, 7.69336, -3.6493},{-9.65723, 8.08789, -3.6493},{-6.38184, 7.78809, -3.6493},{-3.146, 8.21387, -3.6493},{-9.59473, -3.41113, -3.6493},{-6.93213, -3.34473, -3.6493},{-16.2041, 0.322266, -3.6493},{1.34912, -2.77832, -4.50294},{4.82324, -0.526367, -4.50294},{2.17676, -7.55664, -4.50269},{12.9829, -7.05371, -4.50269},{-9.396, -6.19141, -0.502689},{-15.7285, -6.89355, -0.502689},{-16.8872, 1.82227, -0.502689},{-11.0439, 2.58887, -0.502689},{-4.49365, 2.33301, -0.502686},{-1.93701, -7.98535, 8.49731},{-3.91748, -7.66309, 8.49731}};
    };

    class Land_ns_jbad_hangar_2: Industrial {
        lootPos[] = {{12.8218, -8.23438, -2.56319},{13.3193, -2.53516, -2.56318},{13.2275, 3.03223, -2.56319},{13.4185, 9.16797, -2.56319},{1.84619, 4.42578, -2.56319},{0.273438, -1.96875, -2.56319},{0.223633, -7.3418, -2.56319},{-12.1475, -4.97363, -2.56319},{-12.7822, 0.652344, -2.56319},{-12.5186, 5.44141, -2.56319},{0.0429688, 9.13281, -2.56319}};
    };

    class Land_ns_Jbad_Ind_Garage01: Industrial {
        lootPos[] = {{-1.56641, 2.76855, -0.70237},{-1.72363, -1.36328, -0.71067},{0.694824, 0.235352, -0.710865}};
    };

    class Land_ns_Jbad_Ind_PowerStation: Industrial {
        lootPos[] = {{3.79004, 7.35742, -0.0734406},{3.93555, 2.98242, -0.0776749},{3.91504, -1.97852, -0.0574455}};
    };

    class Land_ns_Jbad_Mil_Barracks: Military {
        lootPos[] = {{6.04395, -3.20898, -1.9798},{2.90332, -3.1416, -1.9798},{-0.803223, -2.35547, -1.9798},{-4.16357, -2.34473, -1.9798},{-7.53955, -2.92383, -1.9798},{-7.5293, 3.27734, -1.9798},{-4.19482, 3.24609, -1.9798},{-0.518066, 3.81543, -1.9798},{2.29834, 3.09668, -1.9798},{5.45459, 3.01172, -1.9798},{-5.80371, 0.0537109, -1.9798}};
    };

    class Land_ns_Jbad_Mil_ControlTower: Military {
        lootPos[] = {{8.93896, -2.4834, -9.58517},{3.74316, -2.73535, -9.58517},{4.68555, 1.06152, -9.58517},{9.20117, 5.04199, -9.62869},{4.0332, 4.7168, -5.4637},{3.02783, -0.135742, -1.0687},{6.95605, -1.1377, -1.0687},{6.04004, 2.51367, -1.0687},{3.03564, 1.75488, -1.0687},{0.952148, 5.11426, -9.6287},{-9.42725, -0.114258, -9.58517},{0.900391, 2.07813, -9.60597},{8.31592, 0.0869141, -9.58517},{0.416504, -3.0166, -1.05692},{6.09424, -3.65527, -1.05692},{9.68945, 0.405273, -1.05692},{6.51074, 5.625, -1.05692},{6.03662, 3.22949, 2.80917},{3.48291, -0.34375, 2.87234}};
    };

    class Land_ns_Jbad_Mil_Guardhouse: Residential {
        lootPos[] = {{-2.66943, 3.2793, -1.66939},{4.04395, 3.66309, -1.66939},{2.69775, 0.196289, -1.66939},{-1.37598, 3.42188, -1.66939}};
    };

    class Land_ns_Jbad_Mil_Guardhouse_winter: Residential {
        lootPos[] = {{-3.30664, 2.98242, -1.66938},{3.49316, 3.70313, -1.66939},{-0.645996, 3.14551, -1.66939},{3.88818, 0.946289, -1.66939},{-0.267578, -0.269531, -1.66939}};
    };

    class Land_ns_Jbad_Mil_House: Military {
        lootPos[] = {{-1.65674, -5.99219, -5.01462},{8.46973, 4.03516, -5.01462},{7.90967, -5.97266, -5.01463},{5.9165, -7.05273, -5.01463},{2.89111, -6.42676, -5.01462},{1.23682, -5.16504, -5.01462},{1.60205, -2.2207, -5.01462},{1.66943, 3.78125, -5.01463},{13.2617, -0.860352, -5.01462},{13.748, -2.25781, -5.01462},{5.44238, -2.89844, -5.01462},{-1.61182, 3.02344, -0.672493},{-13.0781, 1.9209, -0.696548},{-12.4023, -1.39258, -0.696548},{-13.8862, -4.80859, -0.696548},{-5.20605, -5.17773, -0.696548},{-5.49072, -2.76758, -0.696552},{-5.40479, 0.0078125, -0.696552},{-6.08154, 4.5918, -0.696545},{-4.62744, 0.244141, -5.01463},{-4.49658, -2.52246, -5.01463},{-4.56055, -4.71387, -5.01462},{-4.76465, -7.3584, -5.01462},{-13.5967, -7.61621, -5.01462},{-13.7686, -4.79199, -5.01462},{-13.9316, -1.64355, -5.01462},{-14.3921, 1.50488, -5.01462},{-5.47559, 4.78711, -5.01462},{-8.73828, -3.43945, -5.01462}};
    };

    class land_p1_v1: Residential {
        lootPos[] = {{-9.48145, 0.251953, 15.7814},{0.390625, 1.25781, 15.7191},{15.5005, 1.01953, 15.7191},{21.3237, 1.90137, 15.7191},{8.04443, 0.874023, 15.7191}};
    };

    class land_p1_v2: Residential {
        lootPos[] = {{13.4614, -0.0595703, 15.8593},{1.31055, 0.222656, 15.8421},{-9.30908, 0.395508, 15.8421},{-22.5, 0.293945, 15.8421}};
    };
	
	class Land_Farm_Cowshed_b: Residential {
		lootPos[] =
		{
			{-1.09521,1.16846,-2.87256}
		};
	};
	
	class Land_Farm_Cowshed_c: Residential {
		lootPos[] =
		{
			{0.980957,1.2251,-2.86583},
			{-2.74854,2.30664,-2.86583}
		};
	};
	
	class Land_Farm_Cowshed_a: Residential {
		lootPos[] =
		{
			{2.92285,-5.12354,-2.83606},
			{6.00391,-6.74097,-2.83606},
			{10.4556,-5.51074,-2.83606},
			{-1.2832,-6.74561,-2.83606},
			{-1.30518,0.0952148,-2.82561},
			{4.80469,-1.07568,-2.83606},
			{3.55518,0.829834,-2.83606},
			{9.7085,3.38062,-2.83606},
			{-10.4087,0.265381,-2.83606},
			{6.24561,6.8667,-2.83606}
		};
	};

    class land_panelova2: Industrial {
        lootPos[] = {{-6.35107, 0.430664, 0.5737},{-6.94727, 4.40137, 0.573704},{-3.82031, 6.3252, 0.573708},{8.93311, 7.03906, 5.67995},{9.54736, 0.0117188, 5.67995},{9.4751, -6.79688, 5.67995},{4.10596, -8.95605, 5.67995},{0.784668, 0.615234, 5.67995}};
    };

	class Land_HouseV2_01A: Residential {
		lootPos[] =
		{
			{-3.67969,-3.2146,-5.53058},
			{-0.657227,-3.26904,-5.53058},
			{-2.12402,-2.58838,-5.53058}
		};
	};

	
    class land_panelova3: Residential {
        lootPos[] = {{-2.02393, -4.05664, -2.99467},{1.93408, 2.16602, -3.00268},{5.26465, 1.64941, 0.0510063},{5.92432, -2.23242, 0.0510063},{1.86133, -4.71875, 0.0510063},{0.651855, 0.65918, 0.0510063}};
    };

    class land_part1: Industrial {
        lootPos[] = {{4.9751, 1.4082, -9.1134},{-2.62598, 6.85938, -9.1134},{-3.95654, 0.295898, -9.1134},{0.0849609, 1.74512, -8.23541},{2.55811, -3.95996, -8.23301},{0.67627, -6.23047, -9.26768},{1.84277, 3.89648, -4.40201},{0.464355, 1.73926, -4.402},{-3.25732, 3.24512, -4.402},{4.19775, 6.86621, 1.93876},{4.68311, 1.04492, 1.93857},{1.90576, -2.84375, 1.93798},{-3.38428, -3.04883, 1.93808},{-4.19727, 5.19922, 1.93821},{4.229, 6.31934, 6.62016},{-0.125977, 6.64355, 6.59703},{5.11279, -1.55957, 6.60015},{-0.223145, -1.92969, 6.57503}};
    };

    class land_part2: Industrial {
        lootPos[] = {{-2.98682, 4.24805, -9.86775},{-2.99121, -4.69824, -9.86775},{1.0835, -4.15332, -9.86775},{0.568848, 1.96582, -9.86775},{4.81738, 0.119141, -9.86775},{-4.07275, -0.433594, -9.86775}};
    };

    class land_part3: Industrial {
        lootPos[] = {{4.30029, 3.23242, -9.7823},{-3.11182, -2.9668, -9.7823},{-0.620117, -6.25684, -9.7823},{-2.61475, 3.61328, -9.12671},{4.63379, -3.71582, -9.27485}};
    };

    class land_plynom: Residential {
        lootPos[] = {{-0.615723, -0.589844, -12.5784},{0.469727, -1.18164, -2.60305},{-1.83984, -0.77832, -2.60305},{0.26123, 0.941406, -2.60305}};
    };

    class land_pozorovatelna: Military {
        lootPos[] = {{-2.54639, 2.11426, -2.49767},{0.805176, 2.80859, -2.49767},{3.35986, 0.398438, -2.49767},{1.35449, -3.07129, -2.49767},{-1.16162, -2.39453, 7.54509},{-1.94922, 1.42578, 7.54509},{1.96289, 1.92969, 7.54508},{1.56543, -1.3291, 7.54509}};
    };

    class land_provoz1: Residential {
        lootPos[] = {{4.17432, 3.20996, -2.30756},{0.660156, 3.69727, -2.30756},{-2.80078, 3.64648, -2.30756},{-1.63428, 1.08496, -2.30756},{-3.64258, -3.09863, -2.30756},{2.36084, -3.6875, -2.30756},{1.75781, -1.48926, -2.30756},{-3.27539, -0.850586, -2.30756}};
    };

    class land_provoz2: Residential {
        lootPos[] = {{-2.72998, -1.48828, -2.51849},{-6.00488, 2.05078, -2.51849},{-1.47021, 2.41113, -2.51849},{3.66016, 2.57715, -2.51849},{6.47559, -1.25293, -2.51849},{1.4043, -0.520508, -2.51849}};
    };

    class Land_psi_bouda: Residential {
        lootPos[] = {{1.50391, -0.165039, -0.510769}};
    };

    class Land_Rail_Semafor: Industrial {
        lootPos[] = {{-1.13672, -2.11914, -3.09424}};
    };
	class Land_rails_bridge_40: Industrial {
		lootPos[] =
		{
			{2.36523,-14.9512,4.13691},
			{2.6582,-7.56055,4.13691},
			{-2.33105,-14.8613,4.13691},
			{-2.71436,-7.6499,4.13691},
			{0.108398,1.1792,4.13691},
			{2.45459,1.13428,4.13691},
			{2.87183,8.46143,4.13691},
			{-2.24097,1.22363,4.13691},
			{-2.50073,8.37158,4.13691},
			{2.67944,17.1743,4.13691},
			{-2.01636,17.2642,4.13691}
		};
	};
	class land_nav_pier_M_fuel: Residential {
		lootPos[] =
		{
			{-19.0161,-10.3496,22.6143},
			{-0.0166016,-10.3496,22.6143},
			{19.5444,-10.3496,22.6143},
			{10.7632,-7.88293,22.6143},
			{19.5444,-5.59448,22.6143},
			{10.7529,-5.59448,22.6143},
			{-0.0170898,-5.59448,22.6143},
			{-8.85205,-5.5946,22.6143},
			{-19.0161,-5.59448,22.6143},
			{-8.85205,-10.3496,22.6143},
			{10.7529,-10.3496,22.6143},
			{-8.84229,-7.88281,22.6143},
			{-0.00683594,-7.88281,22.6143}
		};
	};
    class Land_Rail_Zavora: Industrial {
        lootPos[] = {{0.853516, 1.24902, -3.00996}};
    };

    class Land_repair_center: Industrial {
		lootPos[] =
		{
			{-2.61426,3.46484,-1.40686},
			{-2.41406,-0.515137,-1.40686},
			{0.511719,-3.66602,-2.30753},
			{2.25293,-3.54492,-2.30753}
		};
	};

    class land_rozvodna: Industrial {
        lootPos[] = {{-7.11914, -1.02344, -4.70046},{-7.13574, -1.50488, -0.369423},{-6.91504, -4.40332, -4.69898}};
    };

    class Land_ruin_01: Residential {
		lootPos[] =
		{
			{-0.64917,0.0234375,-1.50447},
			{-5.12305,3.2627,-1.50447},
			{-3.70703,-3.26172,-1.50447},
			{-0.177734,-3.52637,-1.50447},
			{3.40576,0.0234375,-1.50447},
			{-5.26416,-1.23145,-1.50447},
			{1.1377,-2.49609,-1.50447},
			{2.34644,1.83984,-1.50447},
			{-3.27881,3.60254,-1.50447},
			{-5.3811,1.54492,-1.50447}
		};
	};
	

    class Land_Strazni_vez: Military {
		lootPos[] =
		{
			{1.80322,-1.27319,-0.584995},
			{1.90723,1.23779,1.33129},
			{0.65332,1.19336,1.42085},
			{-0.824707,1.56641,1.42085},
			{-2.22852,0.0881348,1.42085},
			{-0.705078,-1.52417,1.42085},
			{0.563477,-0.0012207,1.42085}
		};
	};


    class Land_sara_domek_ruina: Residential {
        lootPos[] = {{3.23682, -3.85547, -1.6696},{-2.26611, -3.51855, -1.69232},{5.66895, 1.35547, -1.68663}};
    };

    class land_seb_bouda1: Hospital {
        lootPos[] = {{-1.98633, 1.73242, -3.28989},{-2.11279, -0.297852, -3.28989},{2.53271, 1.93262, -3.28989},{2.67822, 2.23145, -1.23185},{-3.06787, 0.942383, 0.572216},{2.46191, -2.31348, 1.13067},{-0.516602, 2.16602, 0.571716}};
    };

    class land_seb_bouda3: Residential {
        lootPos[] = {{-3.16992, -3.75879, -1.72879},{-3.06592, -0.341797, -1.72878},{-3.12793, 3.84668, -1.72879},{0.696777, 4.05957, -1.72852},{2.52881, 1.74023, -1.72871},{2.53076, -2.77637, -1.72871}};
    };

    class Land_seb_bouda_plech: Industrial {
        lootPos[] = {{0.272949, 1.15723, -1.14411},{0.612793, -1.32129, -1.13259}};
    };

    class land_seb_main_fac: Industrial {
        lootPos[] = {{20.2397, -6.28809, -6.0019},{20.1323, -0.277344, -6.0019},{14.7222, -0.286133, -6.00189},{8.71826, -3.16699, -6.0019},{2.87354, -6.94336, -6.0019},{3.64453, 15.7803, 8.63872},{8.84375, 11.8525, 8.63873},{20.7271, 13.3164, 8.63872},{22.0767, 5.18555, 8.63872},{12.668, 4.78711, 8.63873},{3.85889, 3.99121, 8.63872},{9.89307, 16.2549, 4.16873},{14.1387, 17.6328, 4.16873},{20.1953, 21.2832, 4.16873},{-2.13281, 4.35645, 4.16873},{-7.08203, 3.02637, 4.16873},{-5.4502, 11.6123, 4.16873},{-26.3335, -2.50879, 5.78507},{-21.8853, -21.4766, 6.62068},{-11.1016, -7.77637, 5.5584}};
    };

    class land_seb_mine_main_opt: Industrial {
        lootPos[] = {{0.200195, -2.64844, -5.11368},{-0.065918, 1.44141, -5.09117},{-6.45654, 5.61523, -4.79106},{-2.86084, 2.72559, -0.995052},{-0.0131836, 4.7207, -0.991344},{-3.49854, 5.5791, -0.989746},{-0.959961, 5.41699, -5.06926},{6.56592, 1.58105, -4.79755},{4.11816, 3.27734, 5.05729},{-4.6626, 3.16699, 7.8684},{-5.74951, -2.37109, 7.86839},{-0.536133, -3.12012, 7.8684}};
    };

    class land_seb_mine_maringotka: Industrial {
        lootPos[] = {{0.23291, 0.0742188, -0.612675},{-0.94043, -1.0166, -0.612675},{-1.80273, 1.60645, -1.80481}};
    };

    class land_seb_mine_near: Industrial {
        lootPos[] = {{12.7983, -7.2373, -11.7431},{11.0381, -5.07715, -8.8979},{5.08057, -7.26758, -8.8979},{8.21387, -7.15723, -8.8979},{12.3599, 5.94336, -11.8273},{1.08984, 5.6748, -11.8485}};
    };

    class land_seb_mine_near_bordel: Industrial {
        lootPos[] = {{-2.35742, 1.12402, -1.5913},{2.18848, 1.50977, -1.58464}};
    };

    class land_seb_nadrze: Industrial {
        lootPos[] = {{-1.71924, 7.23828, -1.99941},{0.884766, 7.42383, -1.99976},{1.90088, 2.84473, -1.98533},{2.104, -2.93262, -1.96194},{-1.94531, -7.37988, -1.96484}};
    };

    class Land_vys_budova_p1: Military {
        lootPos[] = {{4.67285, -9.89844, -2.95578},{2.59277, -11.4277, -2.9579},{1.34326, -4.62988, -2.95771},{-1.03125, -10.8135, -2.96087},{0.00537109, 3.47266, -2.96087},{3.87695, -1.25293, -2.96087},{2.09131, 9.34766, -2.96236},{0.953125, 6.55859, -2.96087},{-5.84521, 9.24023, -2.96087},{-5.76367, 2.80469, -2.96087},{-6.62109, -2.30859, -2.97414},{-2.52734, -6.43262, -2.96087},{-5.80176, -11.4531, -2.96087},{-3.37793, -3.25098, -2.96087},{-1.10059, 4.71582, -0.407818},{-1.08496, -1.66895, -0.407818},{-0.66748, 4.49902, 2.12336},{1.89697, -1.58594, 2.12336},{0.874512, -0.941406, 5.54735},{-3.29443, -1.69629, 5.59869},{2.32715, -8.84766, 5.59121},{3.23828, 1.57617, 5.59121},{-0.154297, 8.67871, 5.59121},{-5.93896, 2.6543, 5.59121},{-6.43848, -11.2549, 5.59121},{-2.58008, 3.24707, 5.59869}};
    };
    class land_Mi8_Crashed: Residential {
        lootPos[] = {{1.96582, -5.91016, -1.93351},{2.27588, -3.44238, -1.94127},{-0.348633, -4.37793, -1.73772},{-2.43164, -3.96484, -1.96016}};
    };
    //Tanoa
    
    ///////////////////////////////////////////////////////////////////////////
    // Tourist - Churches, Temples
    ///////////////////////////////////////////////////////////////////////////
    class Land_Temple_Native_01_F: Residential {
        lootPos[] = {{2.86328, 3.62207, -5.94443},{-2.13916, 3.75977, -5.94443},{0.0214844, 2.21387, -5.94443}};
    };
    class Land_BasaltWall_01_gate_F: Residential {
        lootPos[] = {{0.0439453, 0.864258, -0.817093}};
    };
    class Land_Cathedral_01_F: Residential {
        lootPos[] = {{7.21387, -13.8271, -8.8191},{0.727295, -13.9795, -7.82105},{-7.71265, -13.25, -8.8191},{-12.6165, -13.6201, -10.1715},{-8.31592, -5.81348, -9.39412},{8.65625, -5.93066, -9.39412},{12.52, -14.5186, -10.1715}};
    };
    class Land_Church_01_F: Residential {
        lootPos[] = {{7.84204, 8.19629, -9.98111},{7.97876, 4.67188, -9.98111},{8.10913, 0.875977, -9.98111},{-7.82324, -0.583984, -9.98111},{-7.87085, 2.66602, -9.98111},{-7.93921, 6.75977, -9.98111}};
    };
    class Land_Church_02_F: Residential {
        lootPos[] = {{-1.57104, -16.291, -3.31618},{2.27466, -17.1553, -3.31618}};
    };
    class Land_Church_03_F: Residential {
		lootPos[] =
		{
			{6.90479,-0.100586,-14.342},
			{1.23096,6.15576,-14.342},
			{2.24414,-6.71094,-14.342},
			{-7.88843,-4.61475,-14.342},
			{-2.25,-7.22314,-14.342},
			{10.4438,-0.133301,-13.2479},
			{-6.93213,4.14111,-14.342},
			{-2.16113,8.11963,-14.342}
		};
    };
    class Land_Hotel_02_F: Residential {
        lootPos[] = {{-1.92993, -8.71289, -3.41328},{-1.68457, -5.88867, -3.41328},{-2.05542, -3.74316, -3.41328},{-0.919678, 2.72461, -3.41328},{-1.44141, 6.75586, -3.41328},{-2.28882, 10.0713, -3.41328},{-1.7937, 14.9482, -3.41328},{-0.670898, -1.53125, -3.41328},{3.26514, -1.31543, -3.41328},{7.61841, -0.356445, -3.41328},{5.31714, -0.30957, -3.41328},{7.62646, -1.7334, -3.41328},{2.55078, 1.68457, -3.41328},{-8.28198, 0.0371094, 0.0829258},{-5.4873, 0.396484, 0.0830498},{-8.25562, 1.77246, 0.0829353},{-6.80396, 2.12402, 0.0829277},{-2.97876, -1.2832, 0.0829277},{-0.0288086, -0.879883, 0.0829277},{2.29663, -0.895508, 0.201029},{-3.04395, 3.02441, 0.0829277},{0.036377, 2.55762, 0.0829277},{2.36206, 2.54102, 0.201008},{4.4043, 0.210938, 0.201008},{4.35107, 1.84961, 0.20101},{-6.39966, 1.38574, -3.41328},{-8.302, -0.541016, -3.41328},{-3.31665, -0.0693359, -3.41328},{6.95557, 1.69141, -3.41328},{0.772217, 0.842773, 0.0829296},{7.59888, 3.51172, -3.41328}};
    };
    class Land_Mausoleum_01_F: Residential {
        lootPos[] = {{-0.353271, -0.273438, -1.9543},{0.789551, 1.28613, -1.9543}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Military
    ///////////////////////////////////////////////////////////////////////////
    class Land_Airport_01_controlTower_F: Military {
        lootPos[] = {{-1.33838, -2.1748, 4.21085},{2.74023, -2.18848, 4.21085},{3.20215, 3.36816, 4.21085},{0.688477, -0.482422, 7.91645},{-1.7041, 2.05859, 7.91645},{0.241699, 1.05566, 4.65807}};
    };
    class Land_Airport_01_terminal_F: Military {
        lootPos[] = {{0.827881, -1.37305, -4.16959},{-7.77563, 6.21191, -4.02355},{-5.3645, 7.58496, -4.02355},{9.20093, 8.3584, -4.05115},{6.49023, 6.29004, -4.05115},{-2.06299, -3.88965, -4.16956},{8.37256, -9.38281, -3.60985},{5.72144, -7.32324, -4.05115},{-12.0342, 0.892578, -4.02597},{-15.1523, 2.55957, -4.02597}};
    };
    class Land_Airport_02_controlTower_F: Military {
        lootPos[] = {{-0.812744, 0.282227, -10.661},{0.941406, -2.72852, -7.56659},{1.30371, -2.91895, -4.33187},{0.729492, -2.33203, -1.09817},{-3.49194, 1.33203, 2.13546},{-3.42407, 8.52734, 2.13546},{3.66113, 7.77637, 2.13546},{3.46069, 1.49121, 2.13546},{-1.35278, 5.05273, 2.13546},{1.03467, 4.76367, 2.13546}};
    };
    class Land_Airport_02_terminal_F: Military {
		lootPos[] =
		{
			{-20.5234,-10.0713,-1.20306},
			{-3.74609,-6.38184,-1.20306},
			{9.94824,-6.34277,-1.20306},
			{10.6787,-4.19434,-1.20306},
			{10.6123,4.53613,-1.20306},
			{4.4292,4.58691,-1.20306},
			{21.9424,10.9521,-1.20306},
			{22.6465,-10.2969,-1.20306},
			{3.53906,10.3936,-1.20306},
			{-1.00098,10.4902,-1.20306}
		};
	};
    class Land_Zastavka_jih: Military {
		lootPos[] =
		{
			{-1.46436,-0.89502,-0.975677},
			{1.85205,0.814941,-0.975677},
			{0.171875,0.182129,-0.975677}
		};
	};
    class Land_Barracks_01_camo_F: Military {
        lootPos[] = {{-2.03223, -4.17578, 0.518449},{-12.3308, 3.25293, 0.518449},{-8.06128, -2.79688, 0.518449},{-13.0491, -3.41699, 0.518449},{-5.89697, 2.90039, 0.518449},{-0.161133, 3.46387, 0.518449},{6.76074, -3.37207, 0.518448},{3.97217, -3.37793, 0.518448},{3.79028, 3.08203, 0.518449},{13.0432, 2.82031, 0.518449},{10.2876, -2.74316, 0.518448},{-2.78931, -5.56543, 3.85143},{-12.4595, 3.32813, 3.85143},{-9.40015, -2.75, 3.85143},{-3.89746, 2.83496, 3.85143},{6.83984, -3.45605, 3.85143},{3.69678, 3.21973, 3.85143},{13.5459, 3.05859, 3.85143},{10.2222, -2.88086, 3.85143},{15.8203, 4.68457, 3.85143},{5.03662, 5.58203, 3.85143},{-11.1951, 5.7002, 3.85143}};
    };
    class Land_Barracks_01_grey_F: Military {
        lootPos[] = {{-4.93823, -3.14258, 0.579082},{-7.1687, -0.0634766, 0.579084},{0.246094, 3.5625, 0.579081},{15.8589, 3.48145, 3.82728},{4.1709, 3.31836, 3.91306},{-4.14941, 2.08008, 0.579082},{-5.45679, 4.16797, 0.579081},{3.21436, 3.62891, 0.579081},{6.79688, 3.63184, 0.579083},{13.6021, 3.58887, 0.579082},{2.74634, -3.52246, 0.579081},{6.47388, -3.57324, 0.579081},{13.2324, -3.56543, 0.579082},{10.2068, -3.60938, 0.579092},{0.724121, -1.92578, 2.14746},{-11.688, -3.53027, 0.579081},{-8.72437, -3.49414, 0.579082},{-5.19409, -1.15625, 3.91299},{-2.52246, 4.02246, 3.91306},{-11.7957, 3.63379, 3.91306},{-8.79614, 3.57129, 3.91306},{0.246094, 3.5625, 3.91306},{-4.85718, 1.84082, 3.91306},{6.79688, 3.63184, 3.91306},{13.0173, 3.62207, 3.91306},{2.74634, -3.52246, 3.91306},{6.47388, -3.57324, 3.91306},{13.2324, -3.56543, 3.91306},{10.2068, -3.60938, 3.91306},{-11.688, -3.53027, 3.91306},{-8.72437, -3.49414, 3.91306},{-2.67603, -5.52637, 3.9129},{-5.47803, -5.47754, 3.91306},{-12.571, 5.66699, 3.82743},{1.52539, 5.85156, 3.82743},{13.0151, 5.56738, 3.82743},{8.60815, 5.64941, 3.82743},{-8.0498, -2.96875, 7.73989},{-7.94238, 4.33301, 7.53899},{-10.9417, 4.27246, 7.54615},{-11.0132, -2.84766, 7.75703},{-3.51318, -3.02734, 7.73164},{0.239258, 2.94727, 7.69844},{5.69629, -3.12012, 7.7184},{6.52026, 3.02539, 7.68936},{13.1848, -3.37891, 7.68175},{12.9956, 3.25977, 7.66242},{-9.55566, 3.30469, 0.579081},{-11.7957, 3.63379, 0.579083}};
    };
    class Land_Cargo_House_V4_F: Military {
        lootPos[] = {{-1.54419, 0.999023, -0.272255},{-1.50879, 3.05518, -0.136219},{1.49829, 3.27637, -0.136219}};
    };
    class Land_Cargo_HQ_V4_F: Military {
        lootPos[] = {{-2.38062, 2.84961, -3.28473},{3.62866, 5.22852, -3.16431},{6.25708, 3.00537, -3.28473},{4.15381, -4.32813, -3.28473},{-1.63599, 2.06934, -0.759884},{5.61597, 1.51514, -0.759884},{-1.58765, -3.61523, -0.759884}};
    };
    class Land_Cargo_Patrol_V4_F: Military {
        lootPos[] = {{1.19702, -1.0708, -0.55952},{-1.55225, -1.25684, -0.55952}};
    };
    class Land_Cargo_Tower_V4_F: Military {
        lootPos[] = {{1.24365, 2.92432, -8.27076},{-3.12207, -3.45801, -0.132563},{-4.18994, 2.93652, -0.132563},{4.13135, 4.40283, 2.46744},{-1.19702, -2.97461, 2.46744},{-4.38403, -5.64014, 2.58785},{-3.04907, 5.84717, 2.58785},{4.70801, -0.943848, 4.99228},{3.79785, 2.89355, 4.99228},{-2.58374, 4.81885, 4.99228},{-3.46924, -4.14063, 4.99228},{0.449951, 1.61523, 4.99228}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Medical
    ///////////////////////////////////////////////////////////////////////////
    
    
    ///////////////////////////////////////////////////////////////////////////
    // VehicleService - Garages
    ///////////////////////////////////////////////////////////////////////////
    class Land_FuelStation_01_workshop_F: Industrial {
        lootPos[] = {{1.55859, 0.491211, -2.38167},{5.323, -0.123047, -2.38166},{3.38965, -3.31152, -2.38166},{-4.86279, 3.44043, -2.38166},{-0.757568, 2.62012, -2.38166},{-1.45166, -1.37207, -2.38166},{-0.297607, -4.38965, -2.38166},{-3.42407, -2.7959, -2.38166},{-4.43384, -1.31934, -2.38166}};
    };
    class Land_FuelStation_02_workshop_F: Industrial {
		lootPos[] =
		{
			{4.50488,-1.33301,-0.776825},
			{0.564453,0.919922,-0.776245},
			{0.594727,3.3291,-0.776245},
			{3.4502,9.71094,-0.877014},
			{-4.6748,0.34668,-0.777496},
			{-2.87695,-1.77051,-0.775513},
			{-1.09473,-1.32275,-0.775238}
		};
	};
    class Land_Warehouse_03_F: Industrial {
        lootPos[] = {{-8.48145, -3.27783, -2.37297},{-8.30518, 2.33496, -2.37297},{4.01001, -0.54541, -2.37297},{0.600586, -3.29736, -2.37297},{-2.61084, 2.81201, -2.37297},{6.88647, 4.00146, 0.128591},{6.11084, 0.941895, 0.134463},{7.76172, -1.81592, 0.139763}};
    };
    class Land_GarageShelter_01_F: Industrial {
        lootPos[] = {{2.66284, 0.1875, -1.26478},{-1.15308, -2.07129, -1.26478},{-3.00488, 2.24219, -1.26478}};
    };
    
    
    ///////////////////////////////////////////////////////////////////////////
    // Civillian Lower Class
    ///////////////////////////////////////////////////////////////////////////
    class Land_Addon_01_F: Residential {
        lootPos[] = {{-0.0771484, -3.42969, -1.18165},{-0.0510254, 3.45508, -1.18165}};
    };
    class Land_Addon_04_F: Residential {
        lootPos[] = {{5.11499, 3.44434, 0.313654},{5.3064, -1.28711, 0.313654},{1.43872, 4.01563, 0.313654},{-3.60425, 4.06055, 0.313654},{-5.37915, -1.30859, 0.315462},{-5.4126, -7.74414, 0.315462},{2.18799, -4.7334, 0.295511},{-2.14502, 0.327148, 0.313654},{-2.03418, -6.08789, 0.295511},{-1.64429, -3.04492, 0.295511}};
    };
    class Land_Shed_01_F: Residential {
        lootPos[] = {{-1.63525, 0.723633, -0.930923},{0.366943, 0.666992, -0.930905},{1.9231, 0.618164, -0.930935}};
    };

    class Land_House_Native_02_F: Residential {
        lootPos[] = {{1.4668, 1.57227, -2.37363},{2.01392, -1.94727, -2.37363},{-3.0769, -2.16211, -2.37363},{-3.13428, 1.90625, -2.37363}};
    };
    class Land_House_Small_01_F: Residential {
        lootPos[] = {{-5.15918, 3.30469, -0.725801},{-2.37891, -3.66211, -0.725801},{-0.370605, 3.30078, -0.725801},{-5.71069, -1.92188, -0.725801},{-4.61841, -3.47949, -0.725801},{5.7312, 1.41113, -0.725801},{5.73682, 2.94531, -0.725801},{5.73633, -1.61523, -0.725798},{5.72656, -3.4043, -0.7258},{-0.0686035, 0.75293, -0.725799},{1.62427, 3.29199, -0.725801},{2.38892, 0.566406, -0.725801},{2.44507, -3.60059, -0.725801}};
    };
    class Land_House_Small_02_F: Residential {
        lootPos[] = {{0.186768, -3.98535, -0.74064},{-1.48145, -5.63574, -0.74064},{-3.90405, 2.8916, -0.740633},{0.19165, 1.88086, -0.740639},{-1.82813, -2.85156, -0.740639},{-3.19019, -1.54199, -0.74064},{-3.32153, -5.41504, -0.74064},{-3.89648, 5.4873, -0.740639},{-1.49097, 5.86426, -0.740638}};
    };
    class Land_House_Small_03_F: Residential {
        lootPos[] = {{-5.6853, 3.47363, -1.34902},{-4.21582, -1.17969, -1.32402},{-0.532227, 3.87305, -1.32402},{1.27075, -0.573242, -1.32402}};
    };
    class Land_House_Small_04_F: Residential {
        lootPos[] = {{2.62964, -1.5332, -0.817202},{-1.37061, -3.31543, -0.817202},{-0.413574, 3.04102, -0.817202},{1.30786, -7.03906, -0.87291},{-3.44702, 3.64258, -0.872911}};
    };
    class Land_House_Small_05_F: Residential {
        lootPos[] = {{-1.38037, 4.41016, -1.08628},{-0.400635, -0.0605469, -1.08628},{-0.890625, -3.07324, -1.08628}};
    };
    class Land_House_Small_06_F: Residential {
        lootPos[] = {{-3.41675, -3.75879, -1.00433},{-3.06567, 0.991211, -1.00433},{0.966064, -2.96387, -1.00433},{-3.22119, 3.95996, -1.00503}};
    };
    class Land_House_Native_01_F: Residential {
        lootPos[] = {{-2.04907, -1.64746, -3.13483},{-1.43799, 1.98047, -3.13483},{2.88135, 1.87695, -3.13483},{3.05176, -1.48438, -3.13483}};
    };
    class Land_PierWooden_01_hut_F: Residential {
        lootPos[] = {{1.13232, -0.893555, 18.7197}};
    };
    class Land_PierWooden_01_ladder_F: Residential {
        lootPos[] = {{0.233887, -0.708008, 19.827}};
    };
    class Land_PierWooden_01_dock_F: Residential {
        lootPos[] = {{-4.53687, 0.679688, 17.8678},{-0.218018, -5.85645, 17.8678},{4.63672, 3.60156, 17.8678}};
    };
    class Land_PierWooden_01_platform_F: Residential {
        lootPos[] = {{-1.22583, 1.11523, 19.5247},{1.12427, 1.14551, 19.5247}};
    };
    class Land_Slum_01_F: Residential {
        lootPos[] = {{3.35571, 2.1416, 0.643513},{2.30029, -0.546875, 0.643514},{1.05811, -1.90234, 0.643514},{-0.150146, 2.13574, 0.643545},{-2.06763, 1.97656, 0.617534},{4.91821, 1.76465, 0.643515},{4.86938, -1.81445, 0.643514},{-0.591309, -0.00878906, 0.643521}};
    };
    class Land_Slum_02_F: Residential {
        lootPos[] = {{1.80273, -0.624023, 0.158215},{-0.717529, -2.38379, 0.158216},{2.12402, 3.88965, 0.158215},{2.09155, -3.78711, 0.158216},{1.72144, -1.96387, 0.158216},{-2.06787, 4.17871, 0.158215}};
    };
    class Land_Slum_03_F: Residential {
        lootPos[] = {{-2.12012, 7.30469, -0.674455},{-2.55933, 2.12598, -0.674454},{2.83594, 6.05469, -0.651794},{3.9458, 0.943359, -0.651794},{0.0112305, -1.2207, -0.651794},{1.64575, -3.14648, -0.651794}};
    };
    class Land_WaterTower_01_F: Residential {
        lootPos[] = {{-0.452148, 0.015625, 3.74843}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Civillian Upper Class
    ///////////////////////////////////////////////////////////////////////////
    class Land_Hotel_01_F: Residential {
        lootPos[] = {{-8.20288, 7.83105, -1.58711},{-2.1604, 7.38281, -1.58712},{3.8728, 7.81836, -1.58711},{6.44751, 4.7998, -1.58711},{6.44751, -1.2334, -1.58711},{-2.1604, -5.81641, -1.58711},{3.8728, -5.81641, -1.58711},{-7.53955, -4.56445, -1.58711},{-7.63403, 0.913086, 1.66289},{6.14624, 7.49121, 4.4886},{6.01196, 0.84668, 4.48859},{0.8479, -5.81641, 4.48865},{6.1189, -5.98535, 4.48865},{-7.40649, -5.82227, 4.4886},{-6.28833, 7.66504, 4.48861},{3.34326, 6.52637, 7.75042},{5.21191, 1.56738, 7.59465},{3.34326, -5, 7.7508},{-6.60034, -5.00488, 7.60001},{-6.61377, -0.413086, 7.5989},{-6.64063, 6.62695, 7.5967},{-2.01831, 6.44531, 7.97652},{-4.02124, 3.88086, -5.31221},{1.14209, 5.27441, -5.31221},{-0.478271, -1.46094, -5.31221},{2.69238, 0.512695, -5.31221}};
    };
    class Land_House_Big_02_F: Residential {
        lootPos[] = {{7.26123, -6.65332, -1.4679},{8.78711, -3.17871, -1.46789},{7.34692, 0.493164, -1.46789},{-5.19165, -0.584961, -1.4679},{-7.11353, 3.46484, -1.4679},{-9.80347, 2.98047, -1.46789},{-3.50171, 6.34277, -1.46789},{4.75928, 3.41895, -1.4679},{0.365479, 1.74121, -1.4679},{0.321533, 8.83398, -1.46789},{-3.83179, 8.92773, -1.46789},{2.44434, 6.33105, -1.46789},{6.07397, 5.41016, -1.46789},{4.53271, 8.58008, -1.46789}};
    };
    class Land_House_Big_03_F: Residential {
        lootPos[] = {{10.6619, 5.75977, -3.22996},{9.25781, 3.40625, -2.99144},{1.88281, 0.274414, -3.19996},{7.68018, 0.445313, -0.115536},{5.85278, -2.44727, -0.115538},{5.896, 2.80762, -0.115538},{10.7966, 5.81641, -0.136646},{10.7966, -5.22168, -0.136646},{-12.5356, 6.02734, -0.136646},{-13.6335, -5.51855, -0.145912},{4.46899, 3.20898, -3.19996},{9.25879, 3.4082, -3.19996},{-7.49341, -4.64551, -0.136646},{3.17041, 4.95996, -0.136646},{-7.65063, 5.22656, -0.136646},{3.40796, -4.60645, -0.136648},{7.61133, -2.03027, -0.115538},{7.59229, 2.57031, -0.115536},{9.81934, 1.22559, -3.19996},{10.2896, 0.297852, -0.136644},{6.10205, 5.60742, -3.22997},{8.23096, -2.7334, -3.19996}};
    };
    class Land_House_Big_01_F: Residential {
        lootPos[] = {{0.581055, 1.07715, -1.03786},{3.76978, 1.45898, -1.03786},{7.10107, 3.50879, -1.03786},{5.354, -0.949219, -1.03786},{7.10107, 0.709961, -1.03786},{2.60303, 5.45996, -1.03786},{1.08838, -1.04297, -1.03786},{-6.92017, -2.47754, -1.03786},{3.1604, 3.23047, -1.03786},{-1.71655, -3.68359, -1.03786},{1.73779, -2.62012, -1.03786},{7.14502, -3.83887, -1.03786},{3.41797, -3.76563, -1.03786}};
    };
    class Land_House_Big_04_F: Residential {
        lootPos[] = {{-1.37891, -3.32227, -2.97358},{-3.73853, -4.79199, -2.97358},{-5.98267, -3.32715, -2.97359},{4.17285, -4.86523, -2.97358},{4.1709, -1.88672, -2.97358},{10.072, -7.38672, 0.253304},{1.69922, -7.38672, 0.253298},{-6.56543, -7.38672, 0.253365},{-2.49268, 6.82422, 0.269667},{-8.40747, -3.21582, 0.252121},{-7.91455, 5.04785, 0.255436},{4.07715, 6.31934, 0.263828},{-0.817871, 1.19824, 0.276417},{-5.89087, 2.65234, 0.276417},{-3.69604, 4.36133, 0.276417},{2.28882, 4.45898, 0.276417},{2.63916, 1.19238, 0.276417},{4.17358, 3.16309, 0.276417},{-8.5835, -2.4043, -2.97532},{-8.77393, -7.35254, -2.97424},{-8.0625, 1.89063, -2.97626},{-8.55005, 6.73438, -2.97482},{1.52148, -6.74219, -2.97358},{0.0705566, 6.78711, -2.97553}};
    };
    class Land_House_Big_05_F: Residential {
        lootPos[] = {{-2.42017, -4.77539, -1.51147},{4.53735, -5.0459, -1.11731},{-8.91455, -4.73145, -1.51147},{-9.14844, 5.57715, -1.51147},{-2.42065, 5.48828, -1.51147},{4.50073, 5.00781, -1.11731}};
    };
    class Land_School_01_F: Residential {
        lootPos[] = {{-12.2412, -1.23535, -1.27842},{-12.1011, 2.86914, -1.27842},{-6.37842, -1.32617, -1.27842},{-2.88672, -1.31543, -1.27842},{0.71582, 0.556641, -1.27842},{11.927, 2.93066, -1.27842},{7.01636, -0.12793, -1.27842},{13.5767, -1.79297, -1.27842}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Shops
    ///////////////////////////////////////////////////////////////////////////
    class Land_FuelStation_01_shop_F: Supermarket {
        lootPos[] = {{-3.47095, -2.32715, -2.01301},{1.49292, -2.76465, -2.01301},{-3.97681, 4.03711, -2.01301},{0.912842, 2.21191, -2.01301}};
    };
	class Land_Fuelstation: Supermarket {
		lootPos[] =
		{
			{4.0376,-3.77637,-2.0106}
		};
	};
    class Land_GuardHouse_01_F: Supermarket {
        lootPos[] = {{-0.890381, 2.22461, -1.03759},{2.25879, 1.90527, -1.03759},{1.18262, -3.99707, -1.04188},{4.2688, -4.30566, -1.04188},{-1.89941, -0.541016, -1.04188},{-1.66211, -4.21094, -1.04188}};
    };
    class Land_Shop_City_01_F: Supermarket {
        lootPos[] = {{2.4292, 3.38574, -4.955},{1.2439, -0.536621, -4.94684},{5.92114, 2.45996, -4.94911}};
    };
    class Land_Shop_City_02_F: Supermarket {
        lootPos[] = {{2.87964, -6.96094, -4.33675},{3.52344, -3.69141, -4.3368},{7.54688, -3.29297, -4.33673},{-2.46313, -5.58398, -4.33675},{-0.394531, -7.3291, -4.33675},{-9.93286, -6.42188, -4.33675},{-8.23169, -3.64941, -4.33675}};
    };
    class Land_Shop_City_03_F: Supermarket {
        lootPos[] = {{5.67749, -2.68164, -4.96615},{3.79248, 8.09082, -4.96667},{1.88354, -3.96289, -4.96746}};
    };
    class Land_Shop_City_04_F: Supermarket {
        lootPos[] = {{1.2771, 10.0566, 4.17043},{7.14185, 9.99414, 4.17043},{4.28784, 9.86816, 4.17043},{6.50317, 1.44434, 4.17043},{1.27368, 1.37695, 4.17043},{7.23999, 5.65234, 4.17043},{7.2915, 7.69629, 4.17043},{1.28784, 3.91992, 4.17043},{-0.504395, 10.0264, 6.97933},{-6.20288, 9.97656, 6.97932},{-5.91138, 1.75684, 6.97932},{-6.104, 7.68848, 6.97932},{-0.501709, 3.88867, 6.97932},{-5.6123, -0.362305, 6.97932},{-5.93213, -4.22363, 6.97932},{-5.87793, -9.48828, 6.97932},{-3.51074, -9.6748, 6.97932},{1.36377, -1.84863, 6.97932},{-2.06396, -0.0917969, 6.97932},{7.09326, -4.71387, 6.97932},{4.16943, -5.02539, 6.97932},{7.18335, -0.458008, 6.97932},{1.20508, -9.41602, 6.97932},{7.18774, -9.19141, 6.97932},{7.20654, -10.5918, 3.60047},{1.93359, -10.7646, 3.60047},{-1.50293, -10.3926, 3.60047},{-6.23047, -10.5918, 3.60047}};
    };
    class Land_Shop_City_05_F: Supermarket {
        lootPos[] = {{-0.283447, 2.6084, 4.08708},{-5.32642, -12.6162, 7.18407},{5.06274, -10.9531, 7.15172},{0.605469, -4.85449, 7.03372},{0.268311, -1.22461, 6.96352},{7.7915, -6.00879, 7.05611},{9.13062, 2.4502, 4.08708},{4.25415, 5.82715, 4.08708},{-2.11279, 9.05762, 4.08708},{6.97266, 13.6572, 4.08708},{0.479492, 13.2539, 4.08708},{-6.08496, 13.8789, 4.08708},{-8.25366, 10.1318, 4.08708},{-8.55688, -12.0498, 7.17308},{0.14209, -11.0918, -7.28322}};
    };
    class Land_Shop_City_06_F: Supermarket {
        lootPos[] = {{-6.04688, 0.503906, -4.06816},{-3.99438, 7.72363, -4.06839},{-5.10303, -5.04199, -4.06798}};
    };
    class Land_Shop_City_07_F: Supermarket {
        lootPos[] = {{1.10278, 2.13574, 0.00890541},{1.35547, 6.91504, 0.00893593},{-0.679443, 0.248047, 3.60637},{-1.02441, 4.30469, 3.60637},{2.6582, -3.65723, 3.60637},{-0.708984, -6.85547, 3.60637},{-4.04346, -2.99414, 3.60637},{-4.01318, 4.39941, 3.60637},{-3.63501, 7.54883, 3.60637}};
    };
    class Land_Shop_Town_01_F: Supermarket {
        lootPos[] = {{-3.92822, -2.74707, -3.27012},{-3.80103, 0.883789, -3.27011},{-2.52832, -3.63965, -3.27011},{-3.80493, -6.10156, -3.27011},{-0.918213, -5.84473, -3.27011},{4.22827, -6.09766, -3.27011},{-2.00391, 3.82813, -3.27011},{-3.91284, 4.55273, -3.27012},{-1.0105, 0.652344, -3.27011},{0.751221, -2.10352, -3.27011},{2.72095, -3.8457, -3.27011},{3.85083, -2.64551, -3.27011}};
    };
    class Land_Shop_Town_02_F: Supermarket {
        lootPos[] = {{2.99487, -4.95605, -2.14528},{-2.94238, -5.14746, -2.14139}};
    };
    class Land_Shop_Town_03_F: Supermarket {
        lootPos[] = {{-5.88965, -3.25684, -3.12664},{-5.90576, -0.0273438, -3.12665},{5.32275, -1.48535, -3.12776},{0.748779, -1.30957, -3.12776},{0.994385, -4.28027, -3.12776}};
    };
    class Land_Shop_Town_04_F: Supermarket {
        lootPos[] = {{-2.41553, -6.52832, -2.43639},{2.42578, -6.81152, -2.43639}};
    };
    class Land_Shop_Town_05_F: Supermarket {
        lootPos[] = {{-7.17432, -6.53418, -2.72663},{7.25415, -6.73242, -2.72663},{1.95654, -6.69824, -2.72662},{-1.74683, -6.51855, -2.72663}};
    };
    class Land_Supermarket_01_F: Supermarket {
        lootPos[] = {{4.35083, -2.46777, -1.50003},{-0.334473, -6.50879, -1.50003},{-0.251221, -0.452148, -1.50003},{-4.82568, 1.79492, -1.50003},{-4.38794, -5.06836, -1.50003},{7.19556, -1.90137, -1.50003},{1.91138, 1.69434, -1.50003},{-2.32007, -8.67676, -1.50003}};
    };
    class Land_Warehouse_02_F: Supermarket {
        lootPos[] = {{20.1353, 11.1074, 4.53597},{20.1353, -9.1582, 4.53597},{19.5979, -1.66113, 4.53613},{19.5979, 3.98535, 4.53613},{-5.52881, 5.00781, 4.63205},{-7.08691, -8.17188, 4.54425},{-20.0464, 11.1074, 4.54819},{-20.0464, -9.1582, 4.54819},{-19.5269, -1.65527, 4.54803},{-19.5269, 3.99121, 4.54803},{3.19653, 5.10254, 4.6321},{1.84839, -1.40625, 4.54153},{11.4192, 5.10254, 4.63212},{7.40503, -7.6543, 4.53984},{11.2095, -12.8008, -3.94501},{5.47998, -12.2197, -3.94501},{-0.130127, -12.8135, -3.94501},{-3.7085, -12.4531, -3.94501}};
    };
    
    ///////////////////////////////////////////////////////////////////////////
    // Industrial
    ///////////////////////////////////////////////////////////////////////////
    class Land_Airport_02_hangar_left_F: Industrial {
		lootPos[] =
		{
			{-12.3733,-24.8784,-1.75419},
			{-6.86108,-17.3872,-0.47513},
			{-6.86108,-8.01172,-0.47513},
			{-6.86108,1.17773,-0.47513},
			{-12.3733,-12.9478,-1.7542},
			{-12.3704,-3.65479,-1.75567},
			{-12.3669,5.63818,-1.75715},
			{-12.3733,-22.3442,-1.7542},
			{-1.77466,-10.1885,3.0453},
			{-5.4458,-14.8999,2.02425},
			{-5.44556,-4.75732,2.02425},
			{-5.4458,5.18506,2.02425},
			{-2.72192,19.0161,2.7838},
			{-4.49194,12.9897,2.28325},
			{3.65991,-8.78027,4.6868},
			{3.65967,6.2749,4.6868},
			{0.950928,-15.1069,3.8843},
			{0.950439,0.0649414,3.8843},
			{0.950439,8.48193,3.8843},
			{2.71265,19.2837,4.4109},
			{6.01294,-22.7671,5.46},
			{9.08252,5.40381,6.2898},
			{6.36499,-4.6958,5.5277},
			{8.13525,19.5527,6.0282},
			{6.36499,13.5264,5.5277},
			{11.4556,-24.5063,7.0557},
			{18.0325,-13.8267,8.94056},
			{18.033,1.3457,8.94056},
			{11.811,-7.0791,7.129},
			{11.8079,9.01904,7.1287},
			{11.8113,-18.5249,7.129},
			{13.5698,19.8208,7.6554},
			{-4.03979,-21.3706,-1.19111},
			{-4.40259,-17.1675,-1.19112},
			{-3.9917,-12.1968,-1.19111},
			{-4.36792,-7.02979,-1.19111},
			{-4.04761,-2.04541,-1.19111},
			{-4.34082,2.90869,-1.19111},
			{-4.04761,7.00635,-1.19111},
			{-4.34058,11.189,-1.19111},
			{-4.04761,16.6338,-1.19111},
			{0.092041,20.0112,-1.19111},
			{5.05347,19.7183,-1.19111},
			{10.5576,20.0112,-1.19111},
			{15.519,19.7183,-1.19111},
			{0.0576172,19.7183,-4.62306},
			{-2.76196,19.9761,-4.62305},
			{5.08765,20.0112,-4.62305},
			{10.5232,19.7183,-4.62306},
			{15.554,20.0112,-4.62305}
		};
	};
    class Land_Airport_02_hangar_right_F: Industrial {
		lootPos[] =
		{
			{4.18896,-25.0645,-1.12016},
			{10.2217,-15.0649,-1.23186},
			{7.01074,-12.7383,-0.492785},
			{9.52661,-10.4272,-1.10353},
			{10.2217,-1.14893,-1.23186},
			{7.01074,5.82666,-0.492785},
			{12.5198,-3.65479,-1.77333},
			{12.5229,-22.3442,-1.77186},
			{4.13525,-17.2266,-1.20877},
			{4.51758,-7.02979,-1.20877},
			{4.19727,2.8667,-1.20877},
			{4.49072,11.1885,-1.20877},
			{0.0917969,19.7183,-1.20877},
			{-10.4084,20.0112,-1.20877},
			{-16.5256,19.7183,-1.20877},
			{-4.75684,19.9194,-4.64071},
			{-8.47168,19.7183,-4.64071},
			{-15.4038,20.0112,-4.64071},
			{7.30688,-12.2847,-4.80357},
			{1.92456,-10.188,3.02765},
			{5.59546,-14.9009,2.0066},
			{5.59521,-4.75732,2.0066},
			{5.59521,5.18457,2.0066},
			{2.87158,19.0161,2.76614},
			{4.64111,12.9897,2.26559},
			{-3.50977,-8.78076,4.66915},
			{-3.50977,6.2749,4.66915},
			{-0.800781,-15.1069,3.86665},
			{-0.801025,0.0654297,3.86665},
			{-0.80127,8.48193,3.86665},
			{-2.56372,19.2837,4.39325},
			{-5.86328,-22.7666,5.44234},
			{-8.93311,5.40381,6.27214},
			{-6.21558,-4.6958,5.51005},
			{-7.9856,19.5527,6.01055},
			{-6.21582,13.5264,5.51005},
			{-11.3054,-24.5073,7.03805},
			{-17.8433,-13.8267,8.95821},
			{-17.8433,1.34521,8.95821},
			{-11.6611,-7.0791,7.11135},
			{-11.6582,9.01904,7.11105},
			{-11.6621,-18.5249,7.11135},
			{-13.4202,19.8208,7.63774},
			{-10.562,19.0181,-4.64071},
			{-14.7771,18.7485,-1.20808},
			{-15.3645,18.73,-1.20877},
			{-12.4375,18.4927,-3.55455}
		};
	};
	class Land_Misc_Cargo1Eo_EP1: Industrial {
		lootPos[] =
		{
			{-0.468506,-2.05566,-1.02869},
			{-0.267334,0.524414,-1.02869},
			{0.46875,-1.65137,-1.02869},
			{0.507324,2.09521,-1.02869}
		};
	};
    class Land_ContainerCrane_01_F: Industrial {
        lootPos[] = {{21.9863, 10.7412, -29.7253},{16.7583, 6.07129, 1.22021},{9.33081, 3.04004, 1.2331},{-3.68262, 6.24805, 1.23471},{-12.2251, 7.34277, 1.23625},{-14.718, -1.59375, 1.23302},{-8.86938, -8.3252, 1.23632},{8.94922, -4.05078, 1.2331},{18.71, -3.98828, 1.23309}};
    };
	class Land_Misc_CargoMarket1a_EP1: Industrial {
		lootPos[] =
		{
			{-0.597656,-2.05591,-1.02869},
			{-0.396484,0.524414,-1.02869},
			{0.339844,-1.65112,-1.02869},
			{0.37793,2.09521,-1.02869}
		};
	};
    class Land_Crane_F: Industrial {
		lootPos[] =
		{
			{-9.01953,-0.00317383,-16.8252},
			{-10.3096,-0.0446777,5.76294},
			{-8.71094,1.60376,5.76294},
			{-7.19434,-1.45093,5.76294}
		};
    };
	class Land_FuelStation_Shed_PMC: Industrial {
		lootPos[] =
		{
			{3.83154,-0.0126953,-2.97089},
			{-3.52393,-0.0126953,-2.97086}
		};
	};
    class Land_DryDock_01_end_F: Industrial {
        lootPos[] = {{16.4692, 7.59668, 5.13889},{20.4192, -3.24316, 5.13889},{16.4756, -9.06152, 5.2074},{20.5193, -12.4082, 5.13889},{13.2393, 7.88184, -5.54043},{7.13916, 14.9219, -5.54043},{2.26929, -11.4385, -5.54043},{-16.304, 7.58594, 5.13889},{-20.1809, -3.24316, 5.13889},{-19.8108, -7.58203, 5.13889},{-16.3308, -11.7334, 5.17903},{-13.0007, 7.88184, -5.54043},{-1.50073, -2.81836, -5.54043},{-6.90088, 14.9219, -5.54043},{7.03149, -17.3389, -5.54042},{-6.79297, -17.3389, -5.54043}};
    };
    class Land_DryDock_01_middle_F: Industrial {
        lootPos[] = {{14.4111, -8.98047, -5.51673},{13.1912, 7.58008, -5.51673},{5.41113, 7.47949, -5.51673},{8.42114, -5.08984, -5.51673},{3.25098, -9.7998, -5.51673},{-13.5889, 8.37988, -5.51673},{-4.98901, 7.43945, -5.51673},{-19.3076, 8.96875, 5.10521},{-17.541, 0.825195, 5.10521},{-11.0889, -8.13965, -5.51673},{17.5417, -9.99805, 5.10564},{17.5461, 0.888672, 5.10564}};
    };
    class Land_GantryCrane_01_F: Industrial {
        lootPos[] = {{-2.271, 1.99902, 8.67491},{-2.19482, -2.53613, 8.67491}};
    };
    class Land_HaulTruck_01_abandoned_F: Industrial {
        lootPos[] = {{-0.733643, -4.39258, 1.27749},{1.72559, -4.19336, 1.27749}};
    };
    class Land_MiningShovel_01_abandoned_F: Industrial {
        lootPos[] = {{5.90039, -8.41406, -0.680836},{5.30249, 0.911133, -0.750746},{1.73145, -7.10645, 4.10613},{-0.78125, -7.8584, 3.78039},{-2.5144, -11.2598, -0.662592}};
    };
    class Land_MobileCrane_01_F: Industrial {
        lootPos[] = {{6.61865, 5.51465, -19.4957},{12.4185, 5.52832, -19.4957},{6.77734, 2.48828, -19.1123},{6.82275, 0.642578, -19.1123},{6.76855, -2.50488, -19.1123},{6.61865, -5.69727, -19.4957},{12.4185, -5.68359, -19.4957},{8.16138, -2.75, -14.0492},{14.1155, -2.79102, -14.0492},{13.1208, 2.95801, -14.0492},{8.25806, 2.69824, -14.0492},{9.73926, -3.37109, -8.33325},{7.85254, -3.33691, -8.33325}};
    };
    class Land_MobileCrane_01_hook_F: Industrial {
        lootPos[] = {{6.61841, 5.51465, -19.4957},{12.4185, 5.52832, -19.4957},{6.77734, 2.48828, -19.1123},{6.82275, 0.642578, -19.1123},{6.76855, -2.50488, -19.1123},{6.61865, -5.69727, -19.4957},{12.4185, -5.68359, -19.4957},{8.16138, -2.75, -14.0492},{14.1155, -2.79102, -14.0492},{13.1208, 2.95801, -14.0492},{8.25806, 2.69824, -14.0492},{9.73926, -3.37109, -8.33325},{7.85254, -3.33691, -8.33325}};
    };
    class Land_ReservoirTower_F: Industrial {
        lootPos[] = {{-1.8457, 1.83105, -1.8427},{1.28613, -3.4502, -1.82695}};
    };
    class Land_SCF_01_chimney_F: Industrial {
        lootPos[] = {{-2.90894, -3.98145, -8.22002},{-5.19727, 0.483398, -8.22001},{-2.74243, 3.57422, -8.22002},{1.39404, -2.61523, -8.22002},{-2.94604, -3.01563, 24.2917},{-4.51831, 0.609375, 24.2917},{-2.34399, 2.65234, 24.2917},{1.09497, 2.86914, 24.5735},{0.949951, -1.91992, 24.2917}};
    };
    class Land_SCF_01_clarifier_F: Industrial {
        lootPos[] = {{6.31934, 1.11719, -5.07754},{6.35181, -5.78027, -2.05335},{5.80225, 1.04688, 0.371124},{4.8501, 1.52344, 0.371122},{4.57251, -5.60938, -2.05335},{1.25488, -3.93555, 0.371124},{1.25488, 5.8916, 0.371126},{-4.4187, -3.93555, 0.371172},{-4.4187, 5.8916, 0.371126},{-7.25879, 0.977539, 0.371134},{-5.23145, 3.17676, 7.60777},{-5.40259, -1.02637, 7.59169},{-1.8186, -3.29688, 7.60185},{1.91064, -1.34082, 7.60829},{2.08765, 2.9043, 7.62741},{-1.5791, 4.27539, 7.77099}};
    };
    class Land_SCF_01_condenser_F: Industrial {
		lootPos[] =
		{
			{-7.50781,12.5205,-1.47711},
			{-4.23633,12.1655,-1.47711},
			{-7.50879,8.15137,-1.47711},
			{-4.43945,8.15186,-1.47711},
			{-5.77246,6.48535,-1.47711},
			{-6.00977,10.853,-1.47711},
			{-5.71289,9.77881,-1.47711},
			{4.50977,3.24365,2.04553},
			{2.7334,0.23291,2.04553},
			{6.18262,0.470703,2.04553},
			{4.46777,-1.23633,2.04553}
		};
	};
	class Land_bouda_plech_open: Residential {
		lootPos[] =
		{
			{0.495117,-0.873047,-1.03046},
			{0.499023,0.712402,-1.03046}
		};
	};
	class Land_IndPipe1_stair_EP1: Industrial {
		lootPos[] =
		{
			{-0.186523,-0.251465,1.24194}
		};
	};
    class Land_SCF_01_crystallizer_F: Industrial {
        lootPos[] = {{2.20264, 7.78516, -5.9044},{8.84692, 7.78027, -2.77431},{2.27319, 7.78516, -0.472961},{8.79834, 7.79199, 2.56268},{2.07471, 6.86914, 4.95764},{-0.962646, 5.40723, 4.97862},{-4.38184, 5.43555, 4.9786},{-7.49756, 5.44922, 4.9786},{-0.962402, -1.41113, 4.98178},{-7.49756, -1.36914, 4.98496},{-9.3103, 3.76563, 4.98026},{-9.31396, -0.415039, 4.98437},{-4.08789, -0.424805, 4.9833},{4.40259, 5.44922, 4.97856},{4.40283, -1.36914, 4.97918},{5.99756, 3.74316, 4.97839},{5.98828, -0.450195, 4.97857},{1.42236, 3.75684, 4.9802},{-0.962646, 5.40723, -0.465189},{-7.49756, 5.44922, -0.465189},{-9.37109, 3.75684, -0.465189},{-9.36157, 1.57715, -0.465191},{-4.04639, 3.75684, -0.465189},{1.28687, 0.494141, -0.465189},{5.12744, 3.75684, -0.465189},{1.25757, 1.57129, -0.465189},{5.62524, 5.44922, -0.465189},{5.62524, 0.507813, -0.465189},{8.48071, 3.75684, -0.465189},{8.5022, 1.57129, -0.465189}};
    };
    class Land_SCF_01_crystallizerTowers_F: Industrial {
		lootPos[] =
		{
			{4.65723,-3.77962,12.2539},
			{8.5918,-2.25526,12.2539},
			{9.23828,1.91454,12.2549},
			{5.95215,4.55998,12.2549},
			{2.0166,3.03562,12.2539},
			{1.84473,-1.03812,12.2539},
			{-5.63672,-3.77963,12.2539},
			{-1.70313,-2.25526,12.2539},
			{-1.05566,1.91454,12.2539},
			{-4.34375,4.55998,12.2539},
			{-8.27734,3.03562,12.2539},
			{-8.45117,-1.03812,12.2539},
			{0.294922,0.265823,12.2549},
			{-3.51074,-3.72081,-6.95313},
			{-0.375977,-3.6667,-6.95215},
			{1.18555,-2.45473,-6.95215},
			{-2.71484,-2.45919,-6.95117},
			{3,-3.6914,-6.95117},
			{5.03125,-3.57131,-6.95117}
		};
	};
	class Land_Budova5: Industrial {
		lootPos[] =
		{
			{-2.29932,1.80176,-1.61368},
			{-2.39648,3.70215,-1.61366},
			{-2.43896,-0.616211,-1.61366}
		};
	};

	class Land_fortified_nest_big: Industrial {
		lootPos[] =
		{
			{-0.664063,3.20703,-0.655762},
			{-3.44629,0.796875,-0.655762},
			{-3.53711,3.10742,-0.655762},
			{-3.69629,-2.60742,-0.65564},
			{-2.08984,-0.0390625,-0.655762},
			{-3.58887,-3.9375,-0.655762},
			{-0.755859,-4.19531,-0.65564},
			{0.743164,-4.22656,-0.65564},
			{3.49512,-4.22266,-0.655518},
			{1.1377,0.777344,-0.65564},
			{3.61133,-2.12891,-0.655762},
			{3.32813,0.732422,-0.655762},
			{3.62988,2.73438,-0.65564}
		};
	};
    class Land_SCF_01_diffuser_F: Industrial {
        lootPos[] = {{-8.25195, 23.5225, -2.37402},{-1.9043, 23.3721, -2.37402},{2.28149, 23.7813, -2.37402},{6.88208, 23.6113, -2.37402},{6.71021, 9.92188, -2.37402},{6.87622, 18.3623, -2.37402},{6.83472, 1.33789, -2.37402},{6.87622, -7.25293, -2.37402},{6.34106, -23.2354, 2.33232},{3.65186, -21.8379, 2.33232},{0.114014, -23.5957, 2.35555},{-7.36475, -23.2051, 2.33232},{-4.10059, -21.793, 2.33232},{-5.35229, -12.7754, 4.52572},{1.0542, -14.4561, 4.52572},{4.99634, -17.8154, 4.52572},{3.01147, -18.8594, 4.52572},{2.86426, -12.6387, 4.52572}};
    };
    class Land_SCF_01_feeder_F: Industrial {
        lootPos[] = {{4.86865, 12.1465, -3.33626},{0.436523, 17.4316, -3.33626},{-4.55176, 14.5176, -3.33626}};
    };
    class Land_SCF_01_generalBuilding_F: Industrial {
        lootPos[] = {{14.334, -0.46582, -4.87007},{14.334, 2.69629, -4.87006},{14.0728, 4.17676, -4.87005},{1.07861, -24.2744, -0.354742},{-4.60767, -24.2568, -0.354109},{-1.45044, -14.6309, -4.84514},{0.82959, -21.9668, -4.84514},{-5.23193, -15.5225, -4.84514},{-5.23193, -20.3779, -4.84514},{0.897949, -16.6621, -4.84514},{-3.10083, -18.3438, -4.84514},{-7.53979, -8.16211, -0.35066},{-5.82178, -5.48535, 7.53344},{-5.82837, 7.19727, 7.57747},{-5.91724, 15.1963, 7.53357},{-6.04443, -11.5645, 7.44203},{1.63818, 17.5078, 11.2323},{1.83838, -11.5645, 11.3045},{-2.40601, 12.165, 9.25619},{1.10352, 2.26465, 10.804},{-4.48413, 1.98926, 8.16404},{1.06665, 20.3691, 10.9818},{-4.50415, 20.6543, 8.2311},{12.0906, -3.14453, 7.41085},{11.71, 2.01367, 7.5915},{12.0908, 7.18945, 7.41079},{11.71, 12.3467, 7.5915},{12.0938, 17.5186, 7.41184},{4.2146, -3.13965, 11.2645},{4.19458, 2.02051, 11.2351},{4.22046, 10.0293, 11.2857},{4.23657, 15.1973, 11.3193},{4.85327, 20.3662, 11.0314},{10.4482, 20.6523, 8.25541},{4.86206, -8.07227, 10.9426},{10.4482, -8.36719, 8.19658},{5.14331, -11.7627, 10.8526},{10.4604, -11.9209, 8.23243},{2.42944, -22.4482, 3.94098},{4.13257, -17.0049, -0.361994}};
    };
    class Land_SCF_01_storageBin_big_F: Industrial {
        lootPos[] = {{1.37769, 13.627, 7.90879},{9.89014, 6.30371, 8.00624},{10.1826, -6.13867, 8.00229},{-5.81763, -10.5547, 7.99491},{-11.9951, 1.1416, 7.99358},{-5.48584, 11.04, 7.98675}};
    };
    class Land_SCF_01_storageBin_medium_F: Industrial {
        lootPos[] = {{-6.86719, 2.24902, 6.72745},{0.320068, 7.36816, 6.72422},{6.81982, 2.11621, 6.73727},{-2.69751, -6.45508, 6.73897},{2.38794, -6.66699, 6.73858}};
    };
    class Land_SCF_01_storageBin_small_F: Industrial {
		lootPos[] =
		{
			{-3.11377,2.35913,7.40467},
			{0.0136719,4.5874,7.40467},
			{2.84375,2.30151,7.40165},
			{-1.29883,-1.42969,7.40467},
			{0.915527,-1.52124,7.40467}
		};
	};
	class Land_IndPipe1_stair: Industrial {
		lootPos[] =
		{
			{-0.186035,-0.251465,1.24193}
		};
	};
    class Land_SCF_01_warehouse_F: Industrial {
        lootPos[] = {{2.38428, 10.7109, 3.95826},{-4.36938, 17.123, 2.78613},{11.988, 15.9063, 3.34447},{9.17725, 5.1377, 4.36988},{9.10986, -5.03711, 4.3945},{0.108398, -5.5459, 3.1112}};
    };
    class Land_SCF_01_washer_F: Industrial {
        lootPos[] = {{-4.57568, 8.00684, -1.80085},{3.07935, 9.40527, -1.80085},{6.34424, 6.25488, -1.80085},{5.36182, 2.12109, -1.74189},{6.32837, -1.6582, -1.80085},{5.3855, -5.95801, -1.69704},{-1.10571, 7.36523, -1.80085},{-5.48535, 5.35352, -1.80085},{-6.25439, 2.28418, -1.80086},{-5.21948, -1.6582, -1.80085},{-6.37622, -5.96875, -1.80085},{-5.26172, -11.3262, -1.73402},{-0.0224609, 1.28223, 2.17754},{-4.55737, 1.30859, 2.1776},{-6.23975, 6.87695, 2.1776},{6.92871, 4.69336, 2.1776}};
    };
    class Land_SM_01_reservoirTower_F: Industrial {
        lootPos[] = {{-2.59717, 0.891602, -1.99113},{1.46973, -3.23242, -1.98599},{0.704834, 2.8623, -2.00094}};
    };
    class Land_SM_01_shed_F: Industrial {
        lootPos[] = {{-7.63892, 0.208984, -1.59421},{-7.74121, 4.16016, -1.59421},{1.08545, 2.70996, -1.59421},{-3.43799, -0.211914, -1.59421},{-6.10669, 6.38477, -1.59421},{5.42358, 4.74316, -1.59421},{4.89355, -0.0634766, -1.59421},{10.5295, 1.25781, -1.59421},{14.3044, 2.56445, -1.59421},{14.6626, -1.02832, -1.59421}};
    };
    class Land_SM_01_shed_unfinished_F: Industrial {
        lootPos[] = {{-7.58374, 0.210938, -1.64209},{-7.68628, 4.16211, -1.64209},{1.14063, 2.71191, -1.64209},{-3.38281, -0.208984, -1.64209},{-6.05151, 6.3877, -1.64209},{5.47876, 4.74512, -1.64209},{4.94849, -0.0615234, -1.64209},{10.5845, 1.25977, -1.64209},{14.3594, 2.56738, -1.64209},{14.7175, -1.02539, -1.64209}};
    };
    class Land_StorageTank_01_large_F: Industrial {
        lootPos[] = {{-5.26636, -8.7168, 0.685705},{7.5376, -8.96484, 0.685705},{9.66333, -14.584, 1.25553},{-9.50464, -14.8418, 1.24478},{-17.2966, 3.29102, 1.2443},{-3.35693, 17.2061, 1.25514},{2.25879, 9.52734, 0.685705}};
    };
    class Land_StorageTank_01_small_F: Industrial {
        lootPos[] = {{-0.796387, 0.594727, 4.88818},{-6.31348, 3.91211, 3.66358},{2.63135, 7.28418, 3.60974},{7.54492, -2.71191, 3.30923},{-3.45142, -8.1748, 2.89969}};
    };
    class Land_SY_01_conveyor_end_F: Industrial {
        lootPos[] = {{-0.00488281, 2.75, 5.24897},{-1.54126, -0.825195, 5.24897}};
    };
    class Land_SY_01_crusher_F: Industrial {
        lootPos[] = {{8.23657, 6.33301, -1.09768},{7.81909, 16.5752, -1.08356},{-2.04224, 16.8691, -1.09297},{-7.8064, 8.47754, -1.08161},{2.10229, 14.3193, 11.3212},{6.33032, 4.37402, 11.7734},{-3.43262, 3.04688, 11.8368},{-7.92847, 9.2002, 11.5554},{0.595947, 8.41211, 11.5916}};
    };
    class Land_SY_01_reclaimer_F: Industrial {
        lootPos[] = {{-14.1489, 2.63379, -2.28311},{-14.2458, 5.48145, -2.28683},{-13.6816, 1.11719, -2.28615},{-11.7661, -0.139648, -2.28826},{-14.9082, 1.87012, -1.96475}};
    };
    class Land_SY_01_shiploader_arm_F: Industrial {
        lootPos[] = {{-4.59619, 2.30664, 0.389979},{10.1455, 2.12012, 0.389979},{14.0559, -2.29004, 0.389979},{-0.133545, -2.05566, 0.389979}};
    };
    class Land_SY_01_shiploader_F: Industrial {
        lootPos[] = {{20.2991, 5.68164, -2.65544},{21.0994, 3.10059, 4.28977},{6.71289, 1.40137, 3.15136},{-3.97119, 1.40234, 3.09128},{-14.6008, 1.36523, 3.04038},{-21.2002, 0.898438, 5.34398},{6.71411, -2.24316, 3.08376},{-3.96802, -2.23438, 3.02955},{-14.6001, -2.16406, 3.02285},{-20.8071, -1.34668, 5.3525}};
    };
    class Land_TTowerBig_1_F: Industrial {
        lootPos[] = {{1.86597, -0.705078, 2.92152},{0.969727, 1.45703, 2.93679},{-1.77271, 1.64063, 2.94032},{-0.356689, -2.06641, 2.9476}};
    };
    class Land_Walkover_01_F: Industrial {
        lootPos[] = {{0.026123, 0.611328, 1.36034}};
    };
    class Land_DPP_01_mainFactory_F: Industrial {
        lootPos[] = {{-21.6887, 4.69238, -8.67055},{-21.6733, -14.5742, -8.68732},{-19.5613, -8.34766, -4.42347},{0.0639648, -5.23926, 1.12253},{0.453125, -14.0039, 1.12253},{-7.25708, -15.957, 1.12253},{-8.34741, -9.97949, 1.12253},{-7.28394, 3.64258, 1.12253},{3.70215, 9.25879, 1.12253},{7.29419, 5.17871, -0.317474},{8.38037, -7.69629, -0.317478},{8.1936, -14.2451, -0.317478},{12.5447, -1.97852, -4.25747},{13.1741, 1.39941, -4.25747},{12.9707, 4.99414, -4.25747},{17.3352, -1.26465, -5.51371},{16.3391, -11.3018, -4.07347},{16.1682, -7.34863, -4.07347},{14.2576, -17.1299, -4.07347},{20.6343, -4.13281, -7.43347},{18.5691, 5.11328, -7.64927}};
    };
    class Land_DPP_01_smallFactory_F: Industrial {
        lootPos[] = {{9.78833, -1.48145, 1.69896},{-1.29395, 3.17383, 3.0918},{-8.48071, -4.74707, 3.28734},{2.12598, -5.53613, 3.2094},{6.54004, 0.380859, 3.26465}};
    };
    class Land_SCF_01_boilerBuilding_F: Industrial {
        lootPos[] = {{19.9551, 13.1162, -13.218},{21.5356, 1.60742, -13.218},{11.6555, 4.40039, -13.218},{13.1863, 12.2744, -13.218},{18.5403, 11.7012, -8.65283},{21.9075, 0.967773, -8.67283},{12.26, -8.82227, -5.55016},{8.29736, -21.2119, 0.826183},{4.57446, -14.8301, 1.65308},{5.99463, -12.5732, 1.36908},{5.23267, -5.7373, 1.49743},{4.57446, -4.2998, 1.63667},{5.99414, -2.46094, 1.34452},{10.4329, -0.328125, 0.421211},{21.0168, 9.04688, -16.6483},{-4.15381, -14.8213, 1.55791},{-4.17993, -13.3525, 1.56871},{-5.60059, -12.583, 1.30381},{-9.26074, -0.237305, 0.512077},{-4.14819, -4.30078, 1.61219},{-5.60522, -2.44141, 1.27797},{-4.01392, 9.2998, 7.56076},{4.7417, 1.46777, 7.63056},{-3.20605, 3.65332, 7.73126},{3.93311, 6.58203, 7.81587},{9.89307, 10.834, 0.533249},{4.55322, 15.792, 1.64978},{6.08081, 15.3867, 1.32867},{4.28442, 16.8301, 1.70323},{8.29419, 20.9619, 0.847332},{-9.09326, 10.5137, 0.533012},{-5.5918, 15.3896, 1.23261},{-3.76025, 16.832, 1.60073},{-4.81055, 18.3252, 1.37109},{-12.2722, 20.1699, -4.55378},{-17.0876, -14.2314, -3.77558},{-17.0906, -10.9219, -3.76845},{-10.5383, -17.9766, -5.09464},{-12.7368, -2.11035, -4.39582},{-13.4448, 7.83496, -4.15535},{-10.5427, -21.3369, -5.09303},{-1.83618, 23.6367, -13.188}};
    };
    class Land_ds_HouseV_2t1: Residential {
		lootPos[] =
		{
			{3.14258,-6.18213,0.319382},
			{-0.241211,-3.28955,0.347168},
			{1.32568,-1.69775,0.347168},
			{-3.70605,-1.65405,0.347168},
			{-5.19092,-3.2251,0.347168},
			{-5.396,0.401855,0.347168},
			{-0.0366211,0.714355,0.347168},
			{0.978516,3.43823,0.347168},
			{3.14111,2.42432,0.347168},
			{3.84814,3.29004,0.347168},
			{3.771,-0.0141602,0.347168},
			{8.02051,1.92529,0.347168},
			{7.53076,-0.462646,0.347168},
			{7.10596,-4.76953,0.319382},
			{-3.29199,2.5166,0.347168},
			{-3.90527,5.85962,0.319382}
		};
    };
    class Land_fortified_nest_small: Industrial {
		lootPos[] =
		{
			{-0.0742188,1.1748,-0.879944},
			{-0.857666,-1.17578,-0.879944},
			{0.878662,-1.15234,-0.879944}
		};
    };
    class Land_ds_HouseV_1t: Residential {
		lootPos[] =
		{
			{7.08203,-6.5957,0.186676},
			{7.28027,-3.63867,0.481659},
			{3.47363,-3.19678,0.481598},
			{3.48535,-8.55176,0.481598},
			{1.49023,-8.37646,0.481598},
			{-0.583984,-8.21777,0.481598},
			{-1.22461,-6.91113,0.481598},
			{-2.30957,-2.87256,0.481598},
			{-2.47754,-0.871094,0.481598},
			{-2.66016,0.765137,0.481598},
			{9.4668,1.12646,0.481598},
			{9.46875,-2.18164,0.481598},
			{3.02148,-1.09229,3.44293},
			{10.6953,-0.546875,3.44293},
			{2.30664,-9.0791,3.44293},
			{-3.0625,-0.388184,3.44293},
			{-0.874023,4.38818,0.186676}
		};
    };

    class Land_ds_HouseV_1L2: Residential {
		lootPos[] =
		{
			{-3.58301,-7.06055,-0.124207},
			{0.821289,-7.64941,2.0372},
			{2.46484,-0.253906,2.45474},
			{1.05762,-2.79688,2.45474},
			{3.43555,-2.79688,2.45474},
			{3.43555,-0.25293,2.45474},
			{-3.5459,-0.625,2.45474},
			{-3.5459,-3.02148,2.45474},
			{1.05762,-2.79688,2.45474},
			{-3.1084,0.935547,0.464355}
		};
    };
    class Land_ds_HouseV_2t2: Residential {
		lootPos[] =
		{
			{6.01953,1.42969,0.899536},
			{2.07861,-5.28491,0.905273},
			{-1.88232,-5.24658,0.905273},
			{4.06104,3.38477,3.74158},
			{6.21582,1.80908,3.73853},
			{5.8916,-1.57568,3.75159},
			{0.879883,-3.89136,3.75159},
			{-2.37939,3.23291,3.74908},
			{-5.8833,2.61108,3.74756},
			{-5.77783,-1.5918,3.75034},
			{-6.09082,-0.0163574,0.86911},
			{-6.09082,-0.0163574,0.86911},
			{-6.09082,-0.0163574,0.86911},
			{-6.09082,-0.0163574,0.86911}
		};
    };
	class Land_ds_HouseV_3I1: Residential {
		lootPos[] =
		{
			{-5.8501,-4.51318,0.0848236},
			{-6.48096,-0.137207,0.798981},
			{-3.27832,1.86816,0.798981},
			{-0.00927734,1.82495,0.798981},
			{-0.314453,-3.04639,0.798981},
			{-1.97656,-2.89258,0.798981},
			{2.11572,1.50977,0.798981},
			{4.79443,2.37988,0.798981},
			{4.86279,-4.07007,0.0848236}
		};
	};
	
	class Land_Shed_wooden: Residential {
		lootPos[] =
		{
			{0.0012207,1.17725,-1.25528},
			{2.31812,-0.163086,-1.25528}
		};
	};
	
	
    class Land_ds_HouseV_3I3: Residential {
		lootPos[] =
		{
			{5.38672,-0.626953,0.615601},
			{2.1084,-1.12109,0.615601},
			{-0.678711,0.494141,0.615601},
			{-1.50391,-1.12793,0.615601},
			{-3.18066,-1.125,0.615601},
			{-3.57617,0.292969,0.615601}
		};
    };
    class Land_ds_HouseV_3I4: Residential {
		lootPos[] =
		{
			{6.7467,3.66357,0.319275},
			{2.58936,3.87939,0.61618},
			{4.56738,-0.751465,0.61618},
			{4.60364,-3.0708,0.61618},
			{2.16992,-3.15723,0.61618},
			{-0.0257568,-0.341797,0.61618},
			{-1.01489,-2.91016,0.61618},
			{-2.02759,-2.85693,0.61618},
			{-0.487183,4.24854,0.61618},
			{-2.38318,4.2793,0.61618},
			{-5.25989,0.0576172,0.61618},
			{-4.72327,-2.45947,0.61618},
			{-5.22375,-2.50684,0.61618},
			{-4.69324,6.61035,0.319275}
		};
    };

    class Land_ds_HouseV_3I2: Residential {
		lootPos[] =
		{
			{6.94434,2.49316,0.318787},
			{5.03223,-0.223145,0.615723},
			{4.18848,-3.54199,0.615723},
			{-0.228516,1.20605,0.615723},
			{-0.558594,3.48779,0.615723},
			{-2.28613,3.69531,0.615723},
			{-1.31738,-3.7998,0.615723},
			{-3.74316,-2.24854,0.615723},
			{-3.89551,-0.454102,0.615723}
		};
    };

    class Land_ds_HouseV_2L: Residential {
        lootPos[] =
        {
			{6.14502,2.10425,0.319092},
			{1.3042,1.64771,0.346863},
			{1.46826,4.7981,0.346863},
			{-2.73682,4.78638,0.346863},
			{-3.99609,4.60571,0.346863},
			{-4.44922,2.94312,0.346863},
			{-2.35254,1.19458,0.346863},
			{-0.975098,-1.44263,0.346863},
			{-1.57617,-4.18164,0.346863},
			{2.03027,-3.9812,0.346863},
			{-5.20605,-3.83081,0.319092},
			{-3.87549,-1.11011,1.82372},
			{-0.931152,-0.383057,3.39618},
			{2.02246,-1.32788,3.39615},
			{2.06592,-3.64282,3.39615},
			{1.53613,-3.85669,3.39615},
			{-2.82422,-3.69092,3.39615},
			{1.77539,1.5564,3.39615},
			{-3.01123,1.89209,3.39615},
			{-3.12646,4.88452,3.39615},
			{-0.291504,4.37964,3.39615},
			{1.56152,4.79956,3.39615}
        };
    };

    class Land_ds_HouseV_2I: Residential {
		lootPos[] =
		{
			{-7.97656,-1.35754,0.0839844},
			{-1.97021,-0.680176,0.378906},
			{1.36523,-1.3197,0.378906},
			{-0.760742,2.67505,0.378906},
			{-5.28271,2.60168,0.378906},
			{-0.680176,7.25281,0.378906},
			{-2.98047,7.44714,0.378906},
			{-5.10645,7.10107,0.378906},
			{-2.00146,6.06775,0.378906},
			{2.09424,1.84863,0.378906},
			{4.25586,4.69824,0.378906},
			{3.92236,7.20605,0.378906},
			{1.77588,7.0907,0.378906},
			{-4.95898,-11.2177,0.0839844},
			{-5.53564,-7.57739,0.378906},
			{-1.41943,-6.28357,0.378906},
			{-2.83008,-8.46777,0.378906},
			{-0.501465,-8.50012,0.378906},
			{-5.3291,-4.55261,0.378906},
			{-5.69336,-3.3468,0.378906},
			{4.31396,-5.14734,0.378906},
			{1.5835,-8.755,0.378906},
			{3.71533,-8.71301,0.378906},
			{4.2583,-7.49023,0.378906},
			{3.49072,-1.64478,0.378906}
		};
    };
	
	class Land_i_House_Small_02_V1_F: Residential {
		lootPos[] =
		{
			{-2.84375,1.14648,-0.671051},
			{-1.33887,2.35156,-0.671051},
			{4.5791,1.97998,-0.671051},
			{4.62109,-2.38477,-0.671051},
			{1.8916,-2.45508,-0.671051}
		};
	};
	
	class Land_Vez_Silo: Residential {
		lootPos[] =
		{
			{-0.935303,-2.64551,-20.4236}
		};
	};
	
	class Land_A_Castle_Gate: Military {
		lootPos[] =
		{
			{-1.17139,-0.540527,-2.9877},
			{1.05078,6.56641,-2.9877}
		};
	};

	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] =
		{
			{-7.99951,6.20361,-1.09781},
			{0.0253906,4.5249,-1.09781},
			{-6.72461,8.22803,-1.09781},
			{10.4883,8.34912,-1.09781},
			{5.20801,1.14502,-1.09781},
			{-7.8833,1.25537,-1.09781},
			{13.9436,-3.6333,-1.09781},
			{11.8882,-1.23291,-1.09781},
			{7.38672,-6.21582,-1.09781},
			{2.4248,-3.88818,-1.09781},
			{-3.18262,-3.49658,-1.09781},
			{-4.38965,-6.41602,-1.09781},
			{-8.15479,-2.24854,-1.09781}
		};
	};
	class Land_A_GeneralStore_01a_dam: Supermarket {
		lootPos[] =
		{
			{-7.58398,6.4248,-1.09781},
			{0.440918,4.74683,-1.09781},
			{-6.30908,8.4502,-1.09781},
			{10.9038,8.57129,-1.09781},
			{5.62402,1.36694,-1.09781},
			{-7.46777,1.47705,-1.09781},
			{14.3594,-3.41162,-1.09781},
			{12.3037,-1.01074,-1.09781},
			{7.80225,-5.99414,-1.09781},
			{2.84082,-3.6665,-1.09781},
			{-2.76709,-3.2749,-1.09781},
			{-3.97412,-6.19458,-1.09781},
			{-7.73877,-2.0271,-1.09781}
		};
	};	
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] =
		{
			{-13.313,3.21191,-1.07579},
			{-9.16455,2.51563,-1.07579},
			{-1.13965,0.836914,-1.07579},
			{-7.88989,4.54053,-1.07579},
			{9.323,4.66113,-1.07579},
			{4.04346,-3.07959,-1.07579},
			{-9.04834,-2.96973,-1.07579},
			{4.16992,-6.53662,-1.07579},
			{12.7793,-7.32178,-1.07579},
			{10.7236,-4.9209,-1.07579},
			{6.22168,-9.90381,-1.07579},
			{3.23779,-8.68604,-1.07579},
			{-1.67651,-6.94922,-1.07579},
			{-5.55469,-10.1045,-1.07579},
			{-9.31934,-5.93701,-1.07579},
			{-11.938,6.28027,-1.07579},
			{-1.71826,6.65039,-1.07579},
			{-6.14673,11.1812,-1.07579},
			{7.99219,6.62549,-1.07579},
			{0.681152,-9.77295,-1.07579},
			{-11.7942,-10.0894,-1.07579}
		};
	};
	
    class Land_Panelak3_Grey: Military {
        lootPos[] =
        {
            {0.121094,4.39551,-10.364},
            {-3.02856,-4.05762,-6.24835},
            {-5.88464,0.545898,-6.20294},
            {5.51123,0.619141,-5.89331},
            {0.591309,-1.32129,-3.50571},
            {4.41284,4.27051,-0.608612},
            {5.84375,0.135742,-0.568451},
            {6.22205,-3.06836,-0.540863},
            {-2.68774,-0.242188,-0.641296},
            {-3.81531,4.0918,-0.576355},
            {-6.41309,0.693359,-0.506866},
            {-6.17041,-4.09668,-0.58374},
            {-0.0826416,4.00977,0.843262},
            {0.0749512,-3.07031,1.98602},
            {-1.33655,-4.00586,2.04718},
            {-2.94214,-4.01855,1.94901},
            {-2.40674,1.60547,2.21674},
            {-4.40015,4.15918,2.03067},
            {-6.71851,-0.297852,2.42917},
            {4.03882,4.36328,2.15149},
            {5.81665,0.251953,2.06577},
            {0.124512,3.51367,3.35651},
            {-0.0249023,-0.618164,4.64233},
            {-3.07629,-4.21875,4.76779},
            {-5.99805,-3.45898,4.81018},
            {-5.82141,0.447266,4.89902},
            {-5.15015,4.56445,5.13193},
            {0.0710449,-0.889648,7.57236},
            {5.82837,0.53418,7.53827},
            {-3.00891,-3.9707,7.5072},
            {-6.59509,-0.103516,7.39853},
            {0.115479,3.7832,8.76788},
            {0.223022,-0.953125,10.0753},
            {2.65479,1.92871,10.1559},
            {5.81213,4.66406,9.96869},
            {6.06799,-0.879883,10.0355},
            {6.11353,-5.68262,10.0952},
            {0.150879,3.7793,11.6076},
            {0.155762,-3.11328,12.6574},
            {-2.80859,-4.11621,12.9182},
            {-2.64844,2.20313,12.8992},
            {-6.6626,-1.22266,12.9004},
            {-6.4967,4.41797,13.0518},
            {2.85913,4.35156,13.0539},
            {5.72217,-0.705078,12.8843},
            {3.16357,-4.2334,12.8664}
        };
    };
	
	class Land_rail_station_big: Residential {
		lootPos[] =
		{
			{7.33398,-5.59888,-4.98088},
			{8.4873,-0.50708,-4.98088},
			{0.0322266,-5.552,-4.98088},
			{-8.9375,-5.31812,-4.98088},
			{-3.54492,-5.04028,-4.98088},
			{-2.68848,-2.43701,-4.98088},
			{-0.769531,-2.41821,-4.98088},
			{-1.91357,1.08765,-4.98088},
			{1.53076,1.89429,-4.98088},
			{-4.92383,4.18335,-4.98088}
		};
	};

	class Land_Dum_mesto_in: Military {
        lootPos[] =
        {
            {-3.86279,-2.37793,-3.75575},
            {-3.76807,1.64258,-4.22675},
            {-5.85205,-0.496094,-4.24234},
            {2.66162,-3.13184,-3.00342},
            {2.67871,-1.88184,-3.00601},
            {0.138184,-2.59473,-4.22633},
            {4.92676,5.28613,-4.14938},
            {5.00684,0.908203,-4.17239},
            {4.9624,-2.54785,-4.03165},
            {1.31934,5.12207,-2.6832},
            {6.02441,-2.72363,0.101135},
            {5.94287,5.11133,0.101135},
            {1.29834,1.60938,-0.270172},
            {-5.35303,-1.88672,-0.637115},
            {-5.95068,0.941406,0.099884},
            {-1.47607,5.19629,-1.17291},
            {-4.95313,4.17285,-1.1899},
            {-6.01465,-4.14551,-1.13889},
            {-1.83496,-4.19141,-1.01096},
            {0.807617,-2.17773,-1.11514},
            {4.77881,0.914063,-1.18991}
        };
    };
    
    class Land_Sara_domek_zluty: Military {
 		lootPos[] =
		{
			{3.08911,-0.210938,-1.84984},
			{6.5415,-0.444336,-1.84984},
			{3.24512,2.79346,-1.84984},
			{6.89307,2.96875,-1.84984},
			{0.0402832,-0.206055,-1.84984},
			{-3.09424,-0.269531,-1.84984},
			{-2.95776,-3.94336,-1.84984},
			{-3.31714,1.13623,-1.84984},
			{-7.15161,3.02734,-1.84984},
			{-6.82007,-3.96289,-1.84984}
		};
    };
    
	
    class Land_Sara_Domek_sedy: Military {
		lootPos[] =
		{
			{1.79443,1.07422,-2.03969},
			{5.00977,0.00976563,-2.03969},
			{4.96191,3.17969,-2.03969},
			{0.587891,3.59375,-2.03967},
			{-0.917969,3.25195,-2.03967},
			{-4.69482,3.24902,-2.03966},
			{-5.24902,0.0712891,-2.03967},
			{-1.40332,-0.46875,-2.03967},
			{-3.05811,3.2832,-2.03969},
			{2.49805,3.08496,-2.03967}
		};
    };
	
	class Land_Ind_Garage01: Military {
		lootPos[] =
		{
			{1.93506,-0.549805,-1.04396},
			{0.902832,1.31812,-1.04396}
		};
	};
	
	class Land_Ind_Coltan_Main_EP1: Industrial {
		lootPos[] =
		{
			{-2.68945,4.52808,-6.24057},
			{-9.62744,11.1138,-6.19201},
			{-8.62695,14.1536,-6.20201},
			{6.15527,16.6716,-2.8521},
			{6.15527,16.6716,1.0279},
			{6.15527,16.6716,4.96789},
			{-5.66309,8.28296,-6.16077},
			{-3.87939,6.18848,-6.24057}
		};
	};
	
	// Extra By Nutz
	
	class Land_Hotel: Residential {
		lootPos[] =
		{
			{3.29053,17,-7.61796},
			{0.527832,10.5562,-7.61796},
			{-2.93408,9.12354,-6.66087},
			{4.81738,-5.48535,-7.61796},
			{-11.895,5.78369,-4.06087},
			{-20.646,-16.8467,-4.03563},
			{-8.91699,-17.2563,-4.06087},
			{-4.79834,20.7266,-4.03563},
			{18.0649,17.0718,-4.06087},
			{17.3311,-5.67822,-4.06087},
			{3.73828,-17.9722,-4.06087},
			{17.2979,-17.6553,-4.06087},
			{-12.8091,3.37061,-0.560873},
			{-15.7695,-10.8887,-0.560873},
			{-20.5488,-8.47217,-0.535633},
			{-3.53027,12.8057,-0.560873},
			{13.2886,-19.2861,6.43913},
			{6.22656,8.76025,6.43913},
			{10.6743,1.54834,6.44001},
			{-6.14404,0.285645,6.43913},
			{3.36914,5.854,6.43913},
			{6.91357,6.02441,6.43913},
			{3.75391,5.6665,2.93879},
			{-5.22168,-12.291,2.93913}
		};
	};

	class Land_GH_House_2_F: Residential {
		lootPos[] =
		{
			{3.80029,-0.669922,-0.136174},
			{3.78027,-2.32031,-0.136174},
			{-3.97412,-0.730469,-0.136174},
			{-3.61768,0.852539,-0.136174},
			{-3.75586,-6.4082,-0.136174},
			{-0.0566406,2.67969,-0.136174},
			{4.19678,-7.07373,-0.136174}
		};
	};

	class Land_GH_Gazebo_F: Residential {
		lootPos[] =
		{
			{6.18408,0.541016,-1.67364},
			{2.271,2.30176,-1.67364},
			{-6.32227,-1.33105,-1.67364},
			{-4.8335,3.03906,-1.67364}
		};
	};

	class Land_Garaz_s_tankem: Military {
		lootPos[] =
		{
			{3.54492,3.70166,-2.09883},
			{6.82129,4.2915,-2.49144},
			{5.18799,4.44434,-2.49144},
			{2.70898,2.00244,-2.49144},
			{7.06104,1.58643,-2.39144},
			{3.12939,4.03809,-1.47625},
			{-6.97021,1.47217,-1.96001},
			{-6.38623,0.875,-1.47625},
			{-2.74707,4.12988,-2.39144},
			{-6.72363,4.29346,-2.39144},
			{-4.56689,-1.25781,3.46878},
			{7.55664,5.41357,3.46878},
			{3.31543,0.73584,3.46878}
		};
	};
	
	class Land_Ammostore2: Military {
		lootPos[] =
		{
			{2.29736,3.4707,-2.3044},
			{0.591797,5.271,-2.30444},
			{-1.52002,4.61914,-1.94028},
			{-0.808594,5.24023,-2.12363},
			{2.021,5.2251,-2.02363},
			{-0.60791,-1.03809,3.46049},
			{3.25342,5.2666,3.46049}
		};
	};
		
	class Land_A_Office01: Industrial {
		lootPos[] =
		{
			{-14.7246,6.61841,-1.94695},
			{-10.2109,-2.58081,-1.94753},
			{-0.374023,-4.98096,-4.27441},
			{-13.9609,1.3938,-4.27441},
			{11.0381,1.18188,-4.27441},
			{8.52148,1.09741,-1.77561},
			{1.03906,1.43188,-1.77561},
			{-5.21094,5.0188,-4.27441},
			{-1.24316,4.60815,6.27106},
			{4.51758,-4.60815,6.27106}
		};
	};
	class Land_Molo_drevo_bs: Military {
		lootPos[] =
		{
			{-11.8984,-0.4021,2.61541},
			{-5.71777,0.108154,2.61541},
			{0.335938,-0.274414,2.61541},
			{6.00586,0.171631,2.61541},
			{11.5518,-0.083252,2.61541}
		};
	};
	class Land_Molo_drevo_end: Military {
		lootPos[] =
		{
			{-2.13281,-0.178711,2.56327},
			{-2.0957,2.12915,2.56327},
			{-2.11719,-2.35205,2.56327}
		};
	};
	class Land_Mil_Guardhouse: Military {
		lootPos[] =
		{
			{-2.44434,3.33032,-1.59004},
			{-0.606445,2.78613,-1.59004},
			{1.20801,3.27734,-1.59004},
			{0.165039,0.249756,-1.59004},
			{1.65918,1.32227,-1.59004},
			{2.72461,-2.68408,-1.59004},
			{-0.455078,-3.46045,-1.59004},
			{-2.38428,-2.74854,-1.59004},
			{0.310059,-2.31763,-1.59004},
			{-1.59766,-1.7356,-1.59004}
		};
	};

	class Land_HouseB_Tenement: Residential {
		lootPos[] =
		{
			{9.18506,-7.35498,-20.3748},
			{-8.33569,-7.37695,-20.334},
			{0.525146,-1.07813,-19.7896},
			{14.0762,13.1621,-19.7896},
			{9.85059,-0.956055,-19.7896},
			{8.00415,14.0527,-19.7896},
			{-3.62451,-1.01611,-19.8991},
			{14.7207,3.79883,-19.7896}
		};
	};

	class Land_A_FuelStation_Build: Industrial {
		lootPos[] =
		{
			{-1.01221,0.364258,-0.522229},
			{-2.08496,1.23535,-1.00806},
			{-2,0.733887,-1.52798},
			{2.17236,-1.19238,-1.47573},
			{1.79297,0.308472,-1.44669},
			{-1.84912,-0.820923,-1.44669}
		};
	};

	class MASH: Hospital {
		lootPos[] =
		{
			{1.44873,-0.305664,-1.0795},
			{-0.64502,1.36963,-1.0795},
			{-0.341797,-1.38281,-1.0795}
		};
	};

	class Land_i_House_Big_01_b_blue_F: Residential {
		lootPos[] =
		{
			{-3.33838,-0.428711,-2.67147},
			{3.84814,-6.33691,-2.57147},
			{1.83057,-0.136719,-2.57147},
			{-3.02881,2.0498,-2.57147},
			{3.30518,4.1958,-2.57147},
			{-3.28906,3.96338,-2.57147},
			{3.83447,1.92627,-0.788335},
			{2.96777,-4.13281,1.0207},
			{3.10547,-1.74316,1.0207},
			{-2.83936,6.04834,1.0207},
			{2.80859,4.07861,1.0207},
			{0.922852,0.496094,1.0207}
		};
	};
	class Land_Offices_01_V1_F: Industrial {
		lootPos[] =
		{
			{-14.208,9.25635,-6.97605},
			{-15.9648,5.32471,-6.98347},
			{6.6377,7.44189,-6.98347},
			{-0.26123,-6.0957,-6.98347},
			{11.5771,6.78125,-6.98347},
			{9.20459,1.84033,-6.98347},
			{6.66699,2.46436,-3.09355},
			{12.8872,-5.1167,4.89098},
			{-8.14258,-1.104,9.95653},
			{-9.24658,0.782715,9.95653},
			{-11.1719,4.18848,9.95653},
			{-4.31152,-7.75586,9.95653},
			{-15.459,-10.0879,9.95653},
			{-7.63867,-7.75732,9.95653}
		};
	};
	
	class Land_Mil_Barracks: Military {
		lootPos[] =
		{
			{5.9541,3.77832,-1.5},
			{3.00098,3.77734,-1.5},
			{-0.0927734,3.77734,-1.5},
			{-3.83398,3.77832,-1.5},
			{-6.94434,3.77832,-1.5},
			{-6.53418,-3.88037,-1.5},
			{-3.80273,-3.83252,-1.5},
			{-0.0771484,-3.87988,-1.5},
			{3.0166,-3.88037,-1.5},
			{6.36426,-3.88037,-1.5},
			{-5.69727,-0.0078125,-1.5},
			{-1.37207,-0.00830078,-1.5},
			{3.25391,-0.0078125,-1.5}
		};
	};

	class Land_mash_ep1: Military {
		lootPos[] =
		{
			{0.598633,1.7002,-1.12686},
			{1.5498,1.16211,-1.12688},
			{1.56787,-1.87207,-1.12686},
			{-0.448242,-1.86914,-1.12686},
			{-0.318359,1.11719,-1.12688}
		};
	};
		
	class Land_MASH: Military {
		lootPos[] =
		{
			{0.598145,1.69971,-1.12686},
			{1.54932,1.16211,-1.12686},
			{1.56738,-1.87305,-1.12686},
			{-0.448242,-1.86963,-1.12685},
			{-0.319336,1.11719,-1.12686}
		};
	};
	
	class Land_Leseni2x: Military {
		lootPos[] =
		{
			{-3.47363,-0.0859375,0.738312},
			{1.68311,-0.151367,2.78265},
			{1.3374,0.0429688,2.78265}
		};
	};
	
	class Land_Dum_rasovna: Military {
		lootPos[] =
		{
			{-2.53113,-0.195313,-2.57525},
			{-1.14441,1.20264,-2.57525},
			{1.39551,4.10645,-2.57525},
			{3.60681,1.49707,-2.57525},
			{-2.7439,-3.7627,-2.57525},
			{1.22192,-1.8667,-2.57525},
			{2.11426,-4.59961,-2.57525}
		};
	};
	
	class Land_Army_hut3_long: Military {
		lootPos[] =
		{
			{-2.06348,3.93524,-0.99151},
			{-0.688477,5.18329,-1.17535},
			{-2.15674,2.6333,0.0241084},
			{-2.29639,5.18738,0.0244393},
			{-2.27539,0.856628,0.0245218},
			{-2.81689,-0.974854,0.0243649},
			{0.682617,0.934143,-1.17535},
			{1.38379,-2.28894,-1.17535},
			{-3.27441,-4.43079,-1.17535},
			{-0.483398,-3.34167,-0.471574},
			{1.55127,-3.74768,-1.23494}
		};
	};

	class Land_Barrack2: Military {
		lootPos[] =
		{
			{0.0703125,-3.99121,-0.910156},
			{0.0292969,-3.11816,-0.624054},
			{-2.30273,-3.11133,-0.624054},
			{-0.999023,-1.45215,-0.624054},
			{-0.869141,1.68359,-0.624054},
			{-0.80957,5.42383,-0.624054}
		};
	};

	class Land_Airport_01_hangar_F: Industrial {
		lootPos[] =
		{
			{-12.3486,-8.14209,-2.5849},
			{-12.4258,2.1001,-2.5849},
			{-12.7957,12.3481,-2.5849},
			{-3.54199,12.9692,-2.5849},
			{12.6265,14.1763,-2.5849},
			{12.8799,7.44238,-2.5849},
			{12.4395,-5.93701,-2.58489}
		};
	};

	class Land_Mil_House: Military {
		lootPos[] =
		{
			{-0.899414,3.15234,-4.83632},
			{5.60449,3.39307,-4.83632},
			{-5.77246,4.61255,-4.83632},
			{-9.38525,4.61255,-4.83632},
			{-11.6357,4.61279,-4.83632},
			{-10.9614,2.66235,-4.83632},
			{-14.4497,2.53516,-4.83632},
			{-10.2188,-1.30518,-4.83632},
			{-9.97461,-6.87183,-4.83632},
			{-7.68701,-6.87183,-4.83632},
			{-7.93115,-1.30566,-4.83632},
			{-0.868652,-4.12988,-2.95436},
			{-0.861328,1.65381,-0.626572},
			{-2.28174,4.72266,-0.626572},
			{-5.77246,4.61255,-0.561539},
			{-9.38525,4.61255,-0.561539},
			{-11.6357,4.61279,-0.561539},
			{-14.4497,2.53516,-0.561539},
			{-10.2188,-1.30518,-0.561539},
			{-9.97461,-6.87183,-0.561539},
			{-7.68701,-6.87183,-0.561539},
			{-7.93115,-1.30566,-0.561539},
			{2.94824,1.57935,-4.83632},
			{2.94775,-2.01025,-4.83632},
			{2.80713,-7.33057,-4.83632},
			{7.68164,-2.01025,-4.83632},
			{7.68213,-7.33057,-4.83632},
			{11.6636,-2.00977,-4.83632},
			{15.0635,-2.01025,-4.83632},
			{7.68164,1.5791,-4.83632},
			{9.26514,3.54785,-4.83632}
		};
	};
	
	class Land_FireEscape_01_tall_F: Military {
		lootPos[] =
		{
			{-1.39624,3.39746,-2.71655},
			{-1.42871,-0.668945,-0.955239},
			{-1.39624,3.39746,0.777278},
			{-1.42871,-0.668945,2.54817},
			{-1.39624,3.39746,4.35753},
			{-1.42871,-0.668945,6.10642},
			{-0.00793457,-0.24707,6.10642}
		};
	};

	class Land_A_Hospital: Hospital {
		lootPos[] =
		{
			{-16.3115,-2.91504,-7.2041},
			{-12.3291,-3.11377,-7.2041},
			{-6.34497,-4.23584,-7.2041},
			{2.99609,-4.18359,-7.2041},
			{7.76318,-2.83545,-7.2041},
			{11.5181,-3.98486,-7.2041},
			{15.6479,-4.71533,-7.2041}
		};
	};

	class Land_Deutshe_mini: Residential {
		lootPos[] =
		{
			{3.88428,-2.12036,-2.4405},
			{-3.43262,-2.0459,-1.88739},
			{-3.99365,2.44287,-2.22953},
			{3.25903,2.15698,-2.05641},
			{0.767334,2.73584,-1.95188}
		};
	};

	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] =
		{
			{-2.36035,2.37012,-1.3045},
			{-2.58777,4.16797,-1.3056},
			{2.35925,-2.95996,-1.3056},
			{-0.0985107,-2.60205,-1.30797},
			{-2.55701,-2.25,-1.30797}
		};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] =
		{
			{0.807129,1.73438,-1.21863},
			{-0.702637,-0.0839844,-1.21863},
			{1.44385,-2.69531,-1.21863}
		};
	};

	class Land_a_stationhouse: Military {
		lootPos[] =
		{
			{16.8276,-6.06738,-9.31226},
			{18.0308,0.949219,-9.31226},
			{13.0034,-1.52734,-9.31226},
			{8.01172,-6.16797,-9.31226},
			{2.89258,-5.23535,-9.31226},
			{4.76123,2.36523,-9.31226},
			{-2.43115,-8.68945,-4.11218},
			{-2.51758,-8.9668,0.32663},
			{-4.26318,-6.9541,0.32663},
			{-0.959961,-7.00293,0.32663},
			{-2.51758,-8.9668,4.77374},
			{-4.26318,-6.9541,4.77374},
			{-2.41943,-5.04688,4.77374},
			{-0.959961,-7.00293,4.77374},
			{-16.0313,7.4707,-0.0522461},
			{-10.1353,8.47949,-0.0522461},
			{-13.1353,-0.644531,-0.0522461},
			{-16.8262,-7.87793,-0.0522461},
			{-17.0259,-0.71582,-0.0522461},
			{-7.30469,-7.68457,-0.0522766},
			{-1.18945,8.54395,-0.0522461},
			{-2.51953,-3.25,-0.0522766},
			{5.93164,-2.45703,-0.0522766},
			{5.5166,2.95996,-0.0522461},
			{-2.52881,-8.41016,8.89459},
			{-1.19141,-5.25879,8.89459},
			{-11.3784,0.551758,-9.36017},
			{-6.29346,5.56836,-9.37219},
			{-10.6665,4.1582,-9.37219},
			{-6.0293,-2.9082,-9.36017},
			{-2.6582,3.36914,-9.35907},
			{-16.1997,-0.499023,-9.36017},
			{-16.543,7.96094,-9.36017},
			{-14.3716,-6.9375,-9.36017},
			{-7.92627,-6.375,-9.36017},
			{-9.58447,-6.80273,-6.62875},
			{-16.1875,-6.21777,-6.61716},
			{-16.3545,8.94531,-6.61719},
			{-12.6919,8.59277,-6.61716},
			{-9.05225,8.72266,-6.61716},
			{-5.81055,8.61621,-6.61716},
			{-2.08545,8.39355,-6.76636},
			{-10.0234,-6.93945,-3.50021},
			{-16.1875,-6.21777,-3.49435},
			{-16.3545,8.94531,-3.49438},
			{-12.6919,8.59277,-3.49435},
			{-9.05225,8.72266,-3.49435},
			{-5.81055,8.61621,-3.42218},
			{-2.08545,8.39355,-3.57135},
			{1.89111,0.71582,-4.31876},
			{6.07666,1.13965,-4.31876},
			{4.01123,-2.17969,-4.31876},
			{12.6167,-1.20898,-4.31876},
			{11.2837,2.33887,-4.31876},
			{14.4033,2.76758,-4.31876},
			{18.4272,-3.8291,-4.31876},
			{10.188,-6.3291,-4.31876},
			{6.28271,-6.13867,-4.31876},
			{21.3091,-5.89844,-9.44366}
		};
	};

	class Land_Ss_hangar: Military {
		lootPos[] =
		{
			{-9.83301,-15.4053,-5.82538},
			{10.5488,-15.1279,-5.82538},
			{13.0024,-3.95801,-5.82538},
			{-13.3887,-3.72949,-5.82538},
			{13.3203,15.7324,-5.82538},
			{-13.186,15.1982,-5.82538},
			{0.0195313,20.2119,-5.82538},
			{0.497559,7.03027,-5.82538},
			{-0.837402,-4.61426,-5.82538},
			{0.176758,-14.6777,-5.82538}
		};
	};
	
	class Land_Watertower1: Residential {
		lootPos[] =
		{
			{2.78027,-5.57971,5.62714},
			{-1.25879,-6.89795,5.62712},
			{-6.85254,-4.08362,5.62708},
			{-8.1792,-0.0196533,5.62708},
			{-5.32666,5.5791,5.62708},
			{0.885254,6.5791,5.62706},
			{4.36377,4.06592,5.62704}
		};
	};
	
	class Land_A_Stationhouse_ep1: Military {
		lootPos[] =
		{
			{16.8228,-5.72266,-9.31227},
			{18.0259,1.29395,-9.31227},
			{12.999,-1.18311,-9.31227},
			{8.00635,-5.82373,-9.31227},
			{2.8877,-4.89111,-9.31227},
			{4.75635,2.71045,-9.31227},
			{-2.43628,-8.34473,-4.11218},
			{-2.52246,-8.62109,0.326622},
			{-4.26709,-6.60938,0.326622},
			{-0.965332,-6.6582,0.326622},
			{-2.52246,-8.62109,4.77374},
			{-4.26709,-6.60938,4.77374},
			{-2.42358,-4.70215,4.77374},
			{-0.965332,-6.6582,4.77374},
			{-16.0356,7.81543,-0.0522614},
			{-10.1396,8.82324,-0.0522614},
			{-13.1401,-0.300781,-0.0522614},
			{-16.8306,-7.5332,-0.0522614},
			{-17.0313,-0.371094,-0.0522614},
			{-7.30957,-7.33936,-0.0522614},
			{-1.19434,8.88867,-0.0522614},
			{-2.5249,-2.90576,-0.0522614},
			{5.927,-2.1123,-0.0522614},
			{5.51123,3.30469,-0.0522614},
			{-2.53418,-8.06543,8.89459},
			{-1.19629,-4.91406,8.89459},
			{-11.3831,0.895996,-9.36017},
			{-6.29761,5.91309,-9.3722},
			{-10.6714,4.50342,-9.3722},
			{-6.03418,-2.56299,-9.36017},
			{-2.6626,3.71289,-9.35908},
			{-16.2053,-0.153809,-9.36017},
			{-16.5479,8.30518,-9.36017},
			{-14.3762,-6.59375,-9.36017},
			{-7.93115,-6.03125,-9.36017},
			{-9.59009,-6.45801,-6.62877},
			{-16.1924,-5.87207,-6.61717},
			{-16.3594,9.29053,-6.61718},
			{-12.6963,8.9375,-6.61717},
			{-9.05664,9.06738,-6.61717},
			{-5.81567,8.96143,-6.61717},
			{-2.09082,8.73828,-6.76635},
			{-10.0283,-6.5957,-3.5002},
			{-16.1924,-5.87207,-3.49437},
			{-16.3594,9.29053,-3.49438},
			{-12.6963,8.9375,-3.49437},
			{-9.05664,9.06738,-3.49437},
			{-5.81567,8.96143,-3.42217},
			{-2.09082,8.73828,-3.57134},
			{1.88599,1.06055,-4.31874},
			{6.07178,1.48438,-4.31874},
			{4.00635,-1.83496,-4.31874},
			{12.6123,-0.864746,-4.31874},
			{11.2788,2.68359,-4.31874},
			{14.3984,3.11182,-4.31874},
			{18.4224,-3.48438,-4.31874},
			{10.1836,-5.98438,-4.31874},
			{6.27808,-5.79395,-4.31874},
			{21.3042,-5.55371,-9.44365}
		};
	};

	class Land_Mil_ControlTower: Military {
		lootPos[] =
		{
			{-3.19824,4.23535,-10.0416},
			{1.91309,6.26611,-8.95724},
			{10.3291,4.98633,-7.23547},
			{3.73633,5.8125,-4.94534},
			{-0.698242,4.49707,-5.02554},
			{5.85156,3.47754,-0.828827},
			{2.48145,-1.08447,-0.845154},
			{4.06836,0.53418,-0.837006},
			{6.04883,0.920898,-0.845154},
			{-0.193359,0.530273,-0.845154},
			{-0.354492,6.01123,-0.841095},
			{-0.0976563,-3.99609,-0.837006},
			{9.90527,-4.10449,-0.845154},
			{1.49707,2.51074,2.72501},
			{7.31543,3.64551,2.72501},
			{7.46191,-1.47705,2.72501},
			{1.86426,-1.40381,2.72501},
			{7.40918,-4.26563,-8.97812},
			{2.59277,-4.2168,-8.97812},
			{0.334961,-1.47021,-8.97812},
			{-3.43262,-3.98242,-8.97812},
			{-3.43164,0.402344,-8.97812},
			{-8.31152,0.472168,-8.97812},
			{-8.33398,-3.62793,-8.97812},
			{7.40918,-4.26563,-5.03357},
			{2.59277,-4.2168,-5.03357}
		};
	};
	
	class Land_Mil_ControlTower_dam: Military {
		lootPos[] =
		{
			{-3.21729,4.23438,-10.0416},
			{1.89355,6.26611,-8.95724},
			{10.3098,4.98584,-7.23546},
			{3.71729,5.81152,-4.94534},
			{-0.716797,4.49707,-5.02555},
			{5.83203,3.47705,-0.828819},
			{2.4624,-1.08447,-0.845169},
			{4.04956,0.534668,-0.836994},
			{6.03027,0.919922,-0.845165},
			{-0.212402,0.530273,-0.845169},
			{-0.374268,6.01074,-0.841084},
			{-0.116699,-3.99707,-0.83699},
			{9.88623,-4.10449,-0.845165},
			{1.47876,2.51074,2.72499},
			{7.29688,3.64502,2.725},
			{7.44287,-1.47754,2.72499},
			{1.84424,-1.40479,2.72499},
			{7.39014,-4.26709,-8.97813},
			{2.57324,-4.21729,-8.97812},
			{0.315186,-1.47119,-8.97813},
			{-3.45142,-3.98242,-8.97813},
			{-3.45117,0.401367,-8.97813},
			{-8.33008,0.47168,-8.97813},
			{-8.35303,-3.62891,-8.97813},
			{7.39014,-4.26709,-5.03358},
			{2.57373,-4.2168,-5.03358}
		};
	};

	class Land_A_statue02: Residential {
		lootPos[] =
		{
			{-5.09326,-2.69141,-1.7487},
			{-5.15137,-0.28125,-1.7487},
			{-5.02246,2.94043,-1.7487},
			{0.0786133,3.20459,-1.7487},
			{4.50903,3.11279,-1.7487},
			{4.5498,-0.275391,-1.7487},
			{4.66748,-3.11865,-1.7487},
			{0.127441,-3.38916,-1.7487}
		};
	};

	class Land_Trafostanica_mala: Industrial {
		lootPos[] =
		{
			{-3.93457,3.34082,-2.19538},
			{3.62158,2.61035,-2.19104},
			{3.76929,-4.12061,-2.19104},
			{-4.18848,-3.84863,-2.19539},
			{-3.87524,1.49316,-2.19595},
			{3.43628,1.16357,-2.19104},
			{3.28906,-1.00928,-2.19104},
			{-3.5542,-0.0595703,-2.19469}
		};
	};

	class Land_Ind_Mlyn_02: Industrial {
		lootPos[] =
		{
			{-6.11694,7.33545,4.84801},
			{-5.36108,-11.2002,4.84801},
			{-5.62183,-24.7715,4.84801}
		};
	};

	class Land_Ind_Mlyn_01: Industrial {
		lootPos[] =
		{
			{-9.00879,3.06836,-14.5803},
			{-6.83569,8.65039,-5.53597},
			{-8.90479,3.24609,-2.69282},
			{-6.92334,8.51074,0.347515},
			{-3.31152,8.68555,0.347515},
			{-9.0708,3.05859,3.34262},
			{-6.99219,8.47266,6.44075},
			{-3.30957,8.54443,6.44075},
			{-8.98926,8.57324,-5.53597},
			{-9.00293,2.84619,9.37847},
			{-6.56787,2.78809,9.37847}
		};
	};
	class Land_Ind_Mlyn_03: Industrial {
		lootPos[] =
		{
			{7.64087,1.54541,-3.44334},
			{-4.94067,7.79443,-3.44334},
			{-8.62915,-1.84326,-3.44334},
			{-3.27832,-7.77979,-3.44334},
			{-3.35474,-2.20947,-3.44334},
			{8.11328,-7.94873,-3.44334},
			{5.0249,-5.04443,9.58022},
			{-5.72632,-4.98877,9.58022}
		};
	};
	class Land_Ind_Mlyn_04: Industrial {
		lootPos[] =
		{
			{-2.25073,1.4624,4.84712},
			{-2.25049,-7.13135,4.84712},
			{-2.25049,-11.1997,4.84712}
		};
	};




	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	
	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	#include "maps\enoch.hpp"
};
	
