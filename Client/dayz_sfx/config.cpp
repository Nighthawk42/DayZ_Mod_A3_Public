////////////////////////////////////////////////////////////////////
//DeRap: dayz_sfx\config.bin
//Produced from mikero's Dos Tools Dll version 7.29
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Thu Jan 16 14:38:15 2020 : 'file' last modified on Thu Aug 09 16:00:20 2012
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class dayz_sfx
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Sound;
	class Sound_Generator1: Sound
	{
		scope = 2;
		sound = "Generator1";
		displayName = "Generator";
	};
};
class CfgSFX
{
	class Generator1
	{
		sounds[] = {"Generator1"};
		name = "Generator1";
		Generator1[] = {"\dayz_sfx\effects\generator1",3.1622777,1,200,1,0,0,0};
		Empty[] = {"",0,0,0,0,0,0,0};
	};
};
class CfgSounds
{
	class breath_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\breath_1",0.1,1,30};
		titles[] = {};
	};
	class heartbeat_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\heartbeat_1",0.8,1,30};
		titles[] = {};
	};
	class gore_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\gore_1",0.1,1,30};
		titles[] = {};
	};
	class gore_2
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\gore_2",0.1,1,30};
		titles[] = {};
	};
	class gore_3
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\gore_3",0.1,1,30};
		titles[] = {};
	};
	class panic_0
	{
		name = "";
		sound[] = {"\dayz_sfx\gore\panic_0.ogg",0.3,1,40};
		titles[] = {};
	};
	class panic_1
	{
		name = "";
		sound[] = {"\dayz_sfx\gore\panic_1.ogg",0.3,1,40};
		titles[] = {};
	};
	class dog_callBack
	{
		name = "";
		sound[] = {"\dayz_sfx\action\dog\dog_callBack",0.5,1,100};
		titles[] = {};
	};
	class dog_slowDown: dog_callBack
	{
		sound[] = {"\dayz_sfx\action\dog\dog_slowDown",0.5,1,100};
	};
	class dog_waitForMe: dog_callBack
	{
		sound[] = {"\dayz_sfx\action\dog\dog_waitForMe",0.5,1,100};
	};
	class dog_speedUp: dog_callBack
	{
		sound[] = {"\dayz_sfx\action\dog\dog_speedUp",0.5,1,100};
	};
	class z_dog_bark_0
	{
		name = "";
		sound[] = {"\dayz_sfx\action\dog\dog_bark0",0.5,1,100};
		titles[] = {};
	};
	class z_dog_bark_1: z_dog_bark_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_bark1",0.5,1,100};
	};
	class z_dog_bark_2: z_dog_bark_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_bark2",0.5,1,100};
	};
	class z_dog_bark_3: z_dog_bark_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_bark3",0.5,1,100};
	};
	class z_dog_bark_4: z_dog_bark_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_bark4",0.5,1,100};
	};
	class z_dog_growl_0
	{
		name = "";
		sound[] = {"\dayz_sfx\action\dog\dog_growl_0",0.5,1,12};
		titles[] = {};
	};
	class z_dog_growl_1: z_dog_growl_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_growl_1",0.5,1,12};
	};
	class z_dog_growl_2: z_dog_growl_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_growl_2",0.5,1,12};
	};
	class z_dog_growl_3: z_dog_growl_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_growl_3",0.5,1,12};
	};
	class z_dog_qq_0
	{
		name = "";
		sound[] = {"\dayz_sfx\action\dog\dog_qq_0",0.5,1,25};
		titles[] = {};
	};
	class z_dog_qq_1: z_dog_growl_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_qq_1",0.5,1,25};
	};
	class z_dog_qq_2: z_dog_growl_0
	{
		sound[] = {"\dayz_sfx\action\dog\dog_qq_2",0.5,1,25};
	};
	class z_refuel_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_refuel_0.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_repair_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_repair_0.ogg",0.2,1,30};
		titles[] = {};
	};
	class z_tentunpack_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_tentunpack_0.ogg",0.2,1,50};
		titles[] = {};
	};
	class z_tentpack_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_tentpack_0.ogg",0.1,1,30};
		titles[] = {};
	};
	class z_drink_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_drink_0.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_soda_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_soda_0.ogg",0.3,1,30};
		titles[] = {};
	};
	class z_cough_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\cough_0.ogg",0.5,1,40};
		titles[] = {};
	};
	class z_cough_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\cough_1.ogg",0.4,1,40};
		titles[] = {};
	};
	class z_cough_2
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\cough_2.ogg",0.3,1,40};
		titles[] = {};
	};
	class z_bandage_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\bandage_0.ogg",0.3,1,40};
		titles[] = {};
	};
	class z_gut_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_gut_0.ogg",0.1,1,30};
		titles[] = {};
	};
	class z_cook_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_cook_0.ogg",0.2,1,30};
		titles[] = {};
	};
	class z_cook_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_cook_1.ogg",0.2,1,30};
		titles[] = {};
	};
	class z_cook_2
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_cook_2.ogg",0.2,1,30};
		titles[] = {};
	};
	class z_eat_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_eat_0.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_eat_1
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_eat_1.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_eat_2
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_eat_2.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_eat_3
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_eat_3.ogg",0.1,1,20};
		titles[] = {};
	};
	class z_fillwater_0
	{
		name = "";
		sound[] = {"\dayz_sfx\effects\action_fillwater_0.ogg",0.1,1,10};
		titles[] = {};
	};
	class z_idle_0
	{
		name = "";
		sound[] = {"\dayz_sfx\zombie\idle_0.ogg",0.3,1,40};
		titles[] = {0,""};
	};
	class z_idle_1: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_1.ogg",0.3,1,40};
	};
	class z_idle_2: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_2.ogg",0.3,1,40};
	};
	class z_idle_3: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_3.ogg",0.3,1,40};
	};
	class z_idle_4: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_4.ogg",0.3,1,40};
	};
	class z_idle_5: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_5.ogg",0.3,1,40};
	};
	class z_idle_6: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_6.ogg",0.3,1,40};
	};
	class z_idle_7: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_7.ogg",0.3,1,40};
	};
	class z_idle_8: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_8.ogg",0.3,1,40};
	};
	class z_idle_9: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_9.ogg",0.3,1,40};
	};
	class z_idle_10: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_10.ogg",0.3,1,40};
	};
	class z_idle_11: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_11.ogg",0.3,1,40};
	};
	class z_idle_12: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_12.ogg",0.3,1,40};
	};
	class z_idle_13: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_13.ogg",0.3,1,40};
	};
	class z_idle_14: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_14.ogg",0.3,1,40};
	};
	class z_idle_15: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_15.ogg",0.3,1,40};
	};
	class z_idle_16: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_16.ogg",0.3,1,40};
	};
	class z_idle_17: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_17.ogg",0.3,1,40};
	};
	class z_idle_18: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_18.ogg",0.3,1,40};
	};
	class z_idle_19: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_19.ogg",0.3,1,40};
	};
	class z_idle_20: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_20.ogg",0.3,1,40};
	};
	class z_idle_21: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_21.ogg",0.3,1,40};
	};
	class z_idle_22: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_22.ogg",0.3,1,40};
	};
	class z_idle_23: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_23.ogg",0.3,1,40};
	};
	class z_idle_24: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_24.ogg",0.3,1,40};
	};
	class z_idle_25: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_25.ogg",0.3,1,40};
	};
	class z_idle_26: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_26.ogg",0.3,1,40};
	};
	class z_idle_27: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_27.ogg",0.3,1,40};
	};
	class z_idle_28: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_28.ogg",0.3,1,40};
	};
	class z_idle_29: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_29.ogg",0.3,1,40};
	};
	class z_idle_30: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_30.ogg",0.3,1,40};
	};
	class z_idle_31: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_31.ogg",0.3,1,40};
	};
	class z_idle_32: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_32.ogg",0.3,1,40};
	};
	class z_idle_33: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_33.ogg",0.3,1,40};
	};
	class z_idle_34: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_34.ogg",0.3,1,40};
	};
	class z_idle_35: z_idle_0
	{
		sound[] = {"\dayz_sfx\zombie\idle_35.ogg",0.3,1,40};
	};
	class z_chase_0
	{
		name = "";
		sound[] = {"\dayz_sfx\zombie\chase_0.ogg",0.5,1,80};
		titles[] = {0,""};
	};
	class z_chase_1: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_1.ogg",0.5,1,80};
	};
	class z_chase_2: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_2.ogg",0.5,1,80};
	};
	class z_chase_3: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_3.ogg",0.5,1,80};
	};
	class z_chase_4: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_4.ogg",0.5,1,80};
	};
	class z_chase_5: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_5.ogg",0.5,1,80};
	};
	class z_chase_6: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_6.ogg",0.5,1,80};
	};
	class z_chase_7: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_7.ogg",0.5,1,80};
	};
	class z_chase_8: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_8.ogg",0.5,1,80};
	};
	class z_chase_9: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_9.ogg",0.5,1,80};
	};
	class z_chase_10: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_10.ogg",0.5,1,80};
	};
	class z_chase_11: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_11.ogg",0.5,1,80};
	};
	class z_chase_12: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_12.ogg",0.5,1,80};
	};
	class z_chase_13: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_13.ogg",0.5,1,80};
	};
	class z_chase_14: z_chase_0
	{
		sound[] = {"\dayz_sfx\zombie\chase_14.ogg",0.5,1,80};
	};
	class z_spotted_0
	{
		name = "";
		sound[] = {"\dayz_sfx\zombie\spotted_0.ogg",0.8,1,80};
		titles[] = {0,""};
	};
	class z_spotted_1: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_1.ogg",0.8,1,80};
	};
	class z_spotted_2: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_2.ogg",0.8,1,80};
	};
	class z_spotted_3: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_3.ogg",0.8,1,80};
	};
	class z_spotted_4: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_4.ogg",0.8,1,80};
	};
	class z_spotted_5: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_5.ogg",0.8,1,80};
	};
	class z_spotted_6: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_6.ogg",0.8,1,80};
	};
	class z_spotted_7: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_7.ogg",0.8,1,80};
	};
	class z_spotted_8: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_8.ogg",0.8,1,80};
	};
	class z_spotted_9: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_9.ogg",0.8,1,80};
	};
	class z_spotted_10: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_10.ogg",0.8,1,80};
	};
	class z_spotted_11: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_11.ogg",0.8,1,80};
	};
	class z_spotted_12: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_12.ogg",0.8,1,80};
	};
	class z_spotted_13: z_spotted_0
	{
		sound[] = {"\dayz_sfx\zombie\spotted_13.ogg",0.8,1,80};
	};
	class z_attack_0
	{
		name = "";
		sound[] = {"\dayz_sfx\zombie\attack_0.ogg",0.5,1,80};
		titles[] = {0,""};
	};
	class z_attack_1: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_1.ogg",0.5,1,80};
	};
	class z_attack_2: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_2.ogg",0.5,1,80};
	};
	class z_attack_3: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_3.ogg",0.5,1,80};
	};
	class z_attack_4: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_4.ogg",0.5,1,80};
	};
	class z_attack_5: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_5.ogg",0.5,1,80};
	};
	class z_attack_6: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_6.ogg",0.5,1,80};
	};
	class z_attack_7: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_7.ogg",0.5,1,80};
	};
	class z_attack_8: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_8.ogg",0.5,1,80};
	};
	class z_attack_9: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_9.ogg",0.5,1,80};
	};
	class z_attack_10: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_10.ogg",0.5,1,80};
	};
	class z_attack_11: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_11.ogg",0.5,1,80};
	};
	class z_attack_12: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_12.ogg",0.5,1,80};
	};
	class z_attack_13: z_attack_0
	{
		sound[] = {"\dayz_sfx\zombie\attack_13.ogg",0.5,1,80};
	};
	class z_hit_0
	{
		name = "";
		sound[] = {"\dayz_sfx\action\z_hit_0.ogg",0.1,1,30};
		titles[] = {0,""};
	};
	class z_hit_1: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_1.ogg",0.1,1,30};
	};
	class z_hit_2: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_2.ogg",0.1,1,30};
	};
	class z_hit_3: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_3.ogg",0.1,1,30};
	};
	class z_hit_4: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_4.ogg",0.1,1,30};
	};
	class z_hit_5: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_5.ogg",0.1,1,30};
	};
	class z_hit_6: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_6.ogg",0.1,1,30};
	};
	class z_hit_7: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_7.ogg",0.1,1,30};
	};
	class z_hit_8: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_8.ogg",0.1,1,30};
	};
	class z_hit_9: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_9.ogg",0.1,1,30};
	};
	class z_hit_10: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_10.ogg",0.1,1,30};
	};
	class z_hit_11: z_hit_0
	{
		sound[] = {"\dayz_sfx\action\z_hit_11.ogg",0.1,1,30};
	};
	class z_fracture_0: gore_1
	{
		sound[] = {"\dayz_sfx\gore\fracture_0",1,1,80};
	};
	class z_fracture_1: gore_1
	{
		sound[] = {"\dayz_sfx\gore\fracture_1",1,1,80};
	};
	class z_scream_0: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_short_0.ogg",0.1,1,80};
	};
	class z_scream_1: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_short_1.ogg",0.1,1,80};
	};
	class z_scream_2: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_short_2.ogg",0.1,1,80};
	};
	class z_scream_3: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_short_3.ogg",0.1,1,80};
	};
	class z_scream_4: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_short_4.ogg",0.1,1,80};
	};
	class z_scream_w_0: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_woman_0.ogg",0.1,1,80};
	};
	class z_scream_w_1: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_woman_1.ogg",0.1,1,80};
	};
	class z_scream_w_2: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_woman_2.ogg",0.1,1,80};
	};
	class z_scream_w_3: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_woman_3.ogg",0.1,1,80};
	};
	class z_scream_w_4: gore_1
	{
		sound[] = {"\dayz_sfx\gore\scream_woman_4.ogg",0.1,1,80};
	};
	class z_panic_0
	{
		name = "";
		sound[] = {"\dayz_sfx\gore\panic_0.ogg",0.1,1,50};
		titles[] = {0,""};
	};
	class z_panic_w_0: z_panic_0
	{
		sound[] = {"\dayz_sfx\gore\panic_w_0.ogg",0.1,1,50};
	};
	class z_panic_w_1: z_panic_0
	{
		sound[] = {"\dayz_sfx\gore\panic_w_1.ogg",0.1,1,50};
	};
	class z_panic_1: z_panic_0
	{
		sound[] = {"\dayz_sfx\gore\panic_1.ogg",0.1,1,50};
	};
	class z_gore_short_loop: gore_1
	{
		sound[] = {"\dayz_sfx\gore\gore_short_loop.ogg",0.1,1,30};
	};
};
class CfgMusic
{
	class PitchWhine
	{
		name = "PitchWhine";
		sound[] = {"\dayz_sfx\effects\pitchWine.ogg",10.0,1.0};
	};
	class dayz_track_death_1
	{
		name = "DayZTrackDeath";
		sound[] = {"\dayz_sfx\tracks\track_death_1.ogg",1.0,1.0};
	};
	class dayz_track_intro_1
	{
		name = "DayZTrackIntro";
		sound[] = {"\dayz_sfx\tracks\track_intro_1.ogg",1.0,1.0};
		duration = "";
	};
	class z_suspense_0
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_0.ogg",1.0,1.0};
		duration = 17;
	};
	class z_suspense_1
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_1.ogg",1.0,1.0};
		duration = 13;
	};
	class z_suspense_2
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_2.ogg",1.0,1.0};
		duration = 14;
	};
	class z_suspense_3
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_3.ogg",1.0,1.0};
		duration = 16;
	};
	class z_suspense_4
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_4.ogg",1.0,1.0};
		duration = 13;
	};
	class z_suspense_5
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_5.ogg",1.0,1.0};
		duration = 15;
	};
	class z_suspense_6
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_6.ogg",1.0,1.0};
		duration = 22;
	};
	class z_suspense_7
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_7.ogg",1.0,1.0};
		duration = 17;
	};
	class z_suspense_8
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_8.ogg",1.0,1.0};
		duration = 24;
	};
	class z_suspense_9
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_9.ogg",1.0,1.0};
		duration = 18;
	};
	class z_suspense_10
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_10.ogg",1.0,1.0};
		duration = 14;
	};
	class z_suspense_11
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_11.ogg",1.0,1.0};
		duration = 15;
	};
	class z_suspense_12
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_12.ogg",1.0,1.0};
		duration = 15;
	};
	class z_suspense_13
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_13.ogg",1.0,1.0};
		duration = 12;
	};
	class z_suspense_14
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_14.ogg",1.0,1.0};
		duration = 6;
	};
	class z_suspense_15
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_15.ogg",1.0,1.0};
		duration = 23;
	};
	class z_suspense_16
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_16.ogg",1.0,1.0};
		duration = 17;
	};
	class z_suspense_17
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_17.ogg",1.0,1.0};
		duration = 28;
	};
	class z_suspense_18
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_18.ogg",1.0,1.0};
		duration = 13;
	};
	class z_suspense_19
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_19.ogg",1.0,1.0};
		duration = 17;
	};
	class z_suspense_20
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_20.ogg",1.0,1.0};
		duration = 65;
	};
	class z_suspense_21
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_21.ogg",1.0,1.0};
		duration = 89;
	};
	class z_suspense_22
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_22.ogg",1.0,1.0};
		duration = 44;
	};
	class z_suspense_23
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_23.ogg",1.0,1.0};
		duration = 59;
	};
	class z_suspense_24
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_24.ogg",1.0,1.0};
		duration = 52;
	};
	class z_suspense_25
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_25.ogg",1.0,1.0};
		duration = 52;
	};
	class z_suspense_26
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_26.ogg",1.0,1.0};
		duration = 158;
	};
	class z_suspense_27
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_27.ogg",1.0,1.0};
		duration = 130;
	};
	class z_suspense_28
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_28.ogg",1.0,1.0};
		duration = 116;
	};
	class z_suspense_29
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_29.ogg",1.0,1.0};
		duration = 129;
	};
	class z_suspense_30
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_30.ogg",1.0,1.0};
		duration = 33;
	};
	class z_suspense_31
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_31.ogg",1.0,1.0};
		duration = 117;
	};
	class z_suspense_32
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_32.ogg",1.0,1.0};
		duration = 29;
	};
	class z_suspense_33
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_33.ogg",1.0,1.0};
		duration = 14;
	};
	class z_suspense_34
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_34.ogg",1.0,1.0};
		duration = 15;
	};
	class z_suspense_35
	{
		name = "";
		sound[] = {"\dayz_sfx\samples\suspense_35.ogg",1.0,1.0};
		duration = 20;
	};
};
