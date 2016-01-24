class CfgPatches
{
	class aegis_client
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_main","CBA_XEH"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgFunctions
{
	class aegis
	{
		class init
		{
			class clientInit {
				file = "aegisremote\addons\common\functions\clientInit.sqf";
				preInit = 1;
			};
			class playerInit {
				file = "aegisremote\addons\common\functions\playerInit.sqf";
				postInit = 1;
			};
		};
	};
};
