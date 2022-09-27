////////////////////////////////////////////////////////////////////
//DeRap: dayz_anim\config.bin
//Produced from mikero's Dos Tools Dll version 6.94
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jan 17 15:18:00 2020 : 'file' last modified on Fri Jan 17 15:17:12 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class dayz_anim
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","a3_anims_f"};
		isUpdated = 1;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		zmbStandAttack2bite = "zmbStandAttack2bite";
		zmbStandAttack3 = "zmbStandAttack3";
		zmbStandAttack4 = "zmbStandAttack4";
		zmbKneel_feedA = "zmbKneel_feedA";
		zmbKneel_feedB = "zmbKneel_feedB";
		zmbKneel_feedC = "zmbKneel_feedC";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			zmbStandAttack2bite[] = {"zmbStandAttack2bite","Gesture"};
			zmbStandAttack3[] = {"zmbStandAttack3","Gesture"};
			zmbStandAttack4[] = {"zmbStandAttack4","Gesture"};
			zmbKneel_feedA[] = {"zmbKneel_feedA","Gesture"};
			zmbKneel_feedB[] = {"zmbKneel_feedB","Gesture"};
			zmbKneel_feedC[] = {"zmbKneel_feedC","Gesture"};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class Default;
	class States
	{
		class zmbStandAttack2bite: Default
		{
			file = "\dayz_anim\zmb\zmbStandAttack2bite";
			looped = 0;
			speed = 0.379747;
			mask = "RDT_botharms";
			interpolationSpeed = 20;
			weaponIK = 0;
		};		
		class zmbStandAttack3: zmbStandAttack2bite
		{
			file = "\dayz_anim\zmb\zmbStandAttack3";
			speed = 0.319149;
		};		
		class zmbStandAttack4: zmbStandAttack2bite
		{
			file = "\dayz_anim\zmb\zmbStandAttack4";
			speed = 0.236220;
		};		
		class zmbKneel_feedA: zmbStandAttack2bite
		{
			file = "\dayz_anim\zmb\zmbKneel_feedA";
			speed = 0.091255;
		};	
		class zmbKneel_feedB: zmbStandAttack2bite
		{
			file = "\dayz_anim\zmb\zmbKneel_feedB";
			speed = 0.186047;
		};	
		class zmbKneel_feedC: zmbStandAttack2bite
		{
			file = "\dayz_anim\zmb\zmbKneel_feedC";
			speed = 0.179104;
		};	
		class AmovPercMstpSnonWnonDnon;
		class Cytech_rt_stand_dayz: AmovPercMstpSnonWnonDnon
		{
			weaponLowered = 0;
			disableWeapons = 0;
			enableOptics = 0;
			disableWeaponsLong = 0;
			showHandGun = 0;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			limitGunMovement = 1;
			file = "\dayz_anim\zmb\zmbStandPose";
		};
		class AmovPercMwlkSnonWnonDf;
		class Cytech_rt_walk_dayz: AmovPercMwlkSnonWnonDf
		{
			file = "\dayz_anim\zmb\zombie3_walk";
			weaponLowered = 0;
			disableWeapons = 0;
			enableOptics = 0;
			showHandGun = 0;
			speed = 0.2;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			limitGunMovement = 1;
			disableWeaponsLong = 0;
			soundOverride = "Walk";
		};
	};
	class BlendAnims {
		RDT_botharms[] = {
			"RightShoulder", 1,
			"RightArm", 1,
			"RightArmRoll", 1,
			"RightForeArm", 1,
			"RightForeArmRoll", 1,
			"RightHand", 1,
			"RightHandIndex1", 1,
			"RightHandIndex2", 1,
			"RightHandIndex3", 1,
			"RightHandMiddle1", 1,
			"RightHandMiddle2", 1,
			"RightHandMiddle3", 1,
			"RightHandPinky1", 1,
			"RightHandMiddle2", 1,
			"RightHandMiddle3", 1,
			"RightHandPinky1", 1,
			"RightHandPinky2", 1,
			"RightHandPinky3", 1,
			"RightHandRing", 1,
			"RightHandRing1", 1,
			"RightHandRing2", 1,
			"RightHandRing3", 1,
			"RightHandThumb1", 1,
			"RightHandThumb2", 1,
			"RightHandThumb3", 1,			
			"LeftShoulder", 1,
			"LeftArm", 1,
			"LeftArmRoll", 1,
			"LeftForeArm", 1,
			"LeftForeArmRoll", 1,
			"LeftHand", 1,
			"LeftHandIndex1", 1,
			"LeftHandIndex2", 1,
			"LeftHandIndex3", 1,
			"LeftHandMiddle1", 1,
			"LeftHandMiddle2", 1,
			"LeftHandMiddle3", 1,
			"LeftHandPinky1", 1,
			"LeftHandMiddle2", 1,
			"LeftHandMiddle3", 1,
			"LeftHandPinky1", 1,
			"LeftHandPinky2", 1,
			"LeftHandPinky3", 1,
			"LeftHandRing", 1,
			"LeftHandRing1", 1,
			"LeftHandRing2", 1,
			"LeftHandRing3", 1,
			"LeftHandThumb1", 1,
			"LeftHandThumb2", 1,
			"LeftHandThumb3", 1
		};
	};	
};

