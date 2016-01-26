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
			class serverInit {
				file = "aegisremote\addons\common\functions\serverInit.sqf";
				preInit = 1;
			};
			class serverPostInit {
				file = "aegisremote\addons\common\functions\serverPostInit.sqf";
				postInit = 1;
			};
		};
	};
};



class cfgNotifications {
  class CivilDeath {
  title = "%1";
  iconPicture = "aegisremote\addons\common\ui\kia_ca.paa";
  description = "%2";
  duration = 10;
  };

	class Transaction {
  title = "%1";
  iconPicture = "aegisremote\addons\common\ui\pagamento.paa";
  description = "%2";
  duration = 10;
  };

	class CheckBalance {
  title = "%1";
  iconPicture = "aegisremote\addons\common\ui\consulta.paa";
  description = "%2";
  duration = 10;
  };
};


class CfgSounds
{
	sounds[] = {};
	class alert
	{
		name = "alert";
		sound[] = {"aegisremote\addons\common\sounds\alert.ogg", 1, 1};
		titles[] = {};
	};
	class cash
	{
		name = "cash";
		sound[] = {"aegisremote\addons\common\sounds\cash.ogg", 1, 1};
		titles[] = {};
	};
};
