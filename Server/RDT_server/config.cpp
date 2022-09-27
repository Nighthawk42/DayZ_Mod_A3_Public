class CfgPatches
{
	class RDT_server
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgDiscordEmbedWebhooks {
    Arma3Server="https://discordapp.com/api/webhooks/639062089301753856/OxEmXokCD1lTOrnIH0XxZcjbeFO-s1O1-FF9m4bN4GwPZn3616l1Q5skoCK5gNDjX8aK";
};


class CfgFunctions
{
	class RDT_server
	{
		class RDT_server_main
		{
			file = "RDT_server\init";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
