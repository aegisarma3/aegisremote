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

	class HG_MC
	{
		tag = "HG";
		class MC
		{
			file = "aegisremote\addons\common\functions";
			class buyItem {};
			class dialogOnLoadItems {};
			class getConfig {};
			class handleItems {};
			class itemSelectionChanged {};
			class xItemSelectionChanged {};

			class buyVehicle {};
			class dialogOnLoadVehicles {};
			class dialogOnUnloadVehicles {};
			class vehicleRotate {};
			class vehicleSelectionChanged {};
			class xVehicleSelectionChanged {};

			class buyClothing {};
			class clothingSelectionChanged {};
			class dialogOnLoadClothing {};
			class dialogOnUnloadClothing {};
			class fillBox {};
			class gearPreview {};
			class reset {};
			class setCamPos {};
			class xClothingSelectionChanged {};
		};
	};
};



/*
    Defines dialog resources
*/
class HG_ScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class HG_RscText
{
	text = "";
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	type = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = "PuristaMedium";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	colorBackground[] = {0,0,0,0};
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class HG_RscFrame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
};

class HG_RscListBox
{
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	type = 5;
	style = 16;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	period = 1.2;
	colorBackground[] = {0,0,0,0.3};
	maxHistoryDelay = 1.0;
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	rowHeight = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class ListScrollBar: HG_ScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
};

class HG_RscStructuredText
{
	type = 13;
	style = 16;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	shadow = 1;
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		colorLink = "#D09B43";
		//align = "center";
		//valign = "middle";
		shadow = 1;
	};
};

class HG_RscButton
{
	type = 1;
	style = 2;
	text = "";
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	colorBorder[] = {0,0,0,1};
	borderSize = 0.0;
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};

class HG_RscPicture
{
    type = 0;
	style = 48;
	text = "";
	shadow = 0;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	font = "PuristaMedium";
	sizeEx = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class HG_RscXListBox
{
	style = "0x400 + 0x02 +	0x10";
	type = 42;
	shadow = 2;
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	w = 0.14706;
	h = 0.039216;
	colorSelect[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorActive[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class HG_RscButtonInvisible: HG_RscButton
{
	colorBackground[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,0};
	colorText[] = {0,0,0,0};
};

class HG_RscCombo
{
	style = "0x10 + 0x200";
	type = 4;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1.0};
	colorBackground[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.7};
	colorScrollbar[] = {1,0,0,1};
	maxHistoryDelay = 1.0;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	class ComboScrollBar: HG_ScrollBar
	{
		color[] = {1,1,1,1};
	};
};



#define HG_NO_IDC                     -1

#define HG_WEAPONS_SHOP_IDD	    	  5000
#define HG_WEAPONS_ITEM_LIST_IDC	  5001
#define HG_WEAPONS_ITEM_TEXT_IDC	  5002
#define HG_WEAPONS_ITEM_PICTURE_IDC	  5003
#define HG_WEAPONS_ITEM_PRICE_IDC	  5004
#define HG_WEAPONS_ITEM_SWITCH_IDC	  5005
#define HG_WEAPONS_BUY_IDC			  5006
#define HG_WEAPONS_MC_IDC             5007

#define HG_VEHICLES_SHOP_IDD	      6000
#define HG_VEHICLES_SWITCH_IDC		  6001
#define HG_VEHICLES_LIST_IDC          6002
#define HG_VEHICLES_TEXT_IDC	      6003
#define HG_VEHICLES_SP_IDC            6004
#define HG_VEHICLES_BUY_IDC           6005
#define HG_VEHICLES_MC_IDC            6006

#define HG_CLOTHING_SHOP_IDD	    7000
#define HG_CLOTHING_SWITCH_IDC		7001
#define HG_CLOTHING_LIST_IDC        7002
#define HG_CLOTHING_TEXT_IDC	    7003
#define HG_CLOTHING_RESET_IDC       7004
#define HG_CLOTHING_BUY_IDC         7005
#define HG_CLOTHING_MC_IDC          7006

/*
    Weapon shop dialog
*/
class HG_WeaponsShopDialog
{
    idd = HG_WEAPONS_SHOP_IDD;
	enableSimulation = true;
	name = "HG_WeaponsShopDialog";

	class ControlsBackground
	{
		class Background: HG_RscText
		{
			idc = HG_NO_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.345312 * safezoneW + safezoneX;
		    y = 0.324 * safezoneH + safezoneY;
		    w = 0.309375 * safezoneW;
		    h = 0.418 * safezoneH;
		};

		class Header: HG_RscText
		{
			idc = HG_NO_IDC;
			text = "$STR_HG_DLG_TITLE";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class BackgroundFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.345312 * safezoneW + safezoneX;
		    y = 0.324 * safezoneH + safezoneY;
		    w = 0.309375 * safezoneW;
		    h = 0.418 * safezoneH;
		};

		class TextFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.198 * safezoneH;
		};

		class PriceFrame: HG_RscFrame
		{
		    idc = HG_NO_IDC;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class BuyBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\buy.paa";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class MyCashBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\mycash.paa";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ExitBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\close.paa";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};

	class Controls
	{
	    class ItemList: HG_RscListBox
		{
			idc = HG_WEAPONS_ITEM_LIST_IDC;
			style = "0x02 + 16";
			onLBSelChanged = "_this call HG_fnc_itemSelectionChanged";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.33 * safezoneH;
		};

		class ItemText: HG_RscStructuredText
		{
			idc = HG_WEAPONS_ITEM_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.198 * safezoneH;
		};

		class ItemPicture: HG_RscPicture
		{
		    idc = HG_WEAPONS_ITEM_PICTURE_IDC;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class ItemPrice: HG_RscText
		{
		    idc = HG_WEAPONS_ITEM_PRICE_IDC;
			style = "0x02";
			colorBackground[] = {0,0,0,0.5};
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ItemSwitch: HG_RscXListBox
		{
		    idc = HG_WEAPONS_ITEM_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xItemSelectionChanged";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_BUY_IDC;
			tooltip = "$STR_HG_DLG_BUY_W_TOOLTIP";
			onButtonClick = "_this call HG_fnc_buyItem";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_WEAPONS_MC_IDC;
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			onButtonClick = "[0, player, 'saldo'] remoteExecCall ['aegis_transaction',2];['saldo',SALDO] call aegis_notice;";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ExitButton: HG_RscButtonInvisible
		{
			idc = HG_NO_IDC;
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};

/*
    Vehicle shop dialog
*/
class HG_VehiclesShopDialog
{
    idd = HG_VEHICLES_SHOP_IDD;
	enableSimulation = true;
	name = "HG_VehiclesShopDialog";
	onUnload = "_this call HG_fnc_dialogOnUnloadVehicles";

	class ControlsBackground
	{
		class ListBackground: HG_RscText
		{
			idc = HG_NO_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class SpawnPointsBackground: HG_RscText
		{
			idc = HG_NO_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ListHeader: HG_RscText
		{
			idc = HG_NO_IDC;
			style = "0x02";
			text = "$STR_HG_DLG_TITLE_LIST_VEHICLES";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TextHeader: HG_RscText
		{
			idc = HG_NO_IDC;
			style = "0x02";
			text = "$STR_HG_DLG_TITLE_TEXT_VEHICLES";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class SpawnPointsHeader: HG_RscText
		{
			idc = HG_NO_IDC;
			style = "0x02";
			text = "$STR_HG_DLG_TITLE_SPAWN_POINTS";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ActionBarBackground: HG_RscText
		{
			idc = HG_NO_IDC;
			text = "$STR_HG_DLG_TITLE_VEHICLES";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ListBackgroundFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class TextFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class SpawnPointsBackgroundFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class BuyBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\buy.paa";
			x = 0.603124 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class MyCashBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\mycash.paa";
			x = 0.639218 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ExitBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\close.paa";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};

	class Controls
	{
		class VehicleSwitch: HG_RscXListBox
		{
			idc = HG_VEHICLES_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xVehicleSelectionChanged";
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class VehicleList: HG_RscListBox
		{
			idc = HG_VEHICLES_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_vehicleSelectionChanged";
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class VehicleText: HG_RscStructuredText
		{
			idc = HG_VEHICLES_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class SpawnPointsList: HG_RscCombo
		{
			idc = HG_VEHICLES_SP_IDC;
			x = 0.860937 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_VEHICLES_BUY_IDC;
			tooltip = "$STR_HG_DLG_BUY_V_TOOLTIP";
			onButtonClick = "_this call HG_fnc_buyVehicle";
			x = 0.603124 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_VEHICLES_MC_IDC;
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			onButtonClick = "[0, player, 'saldo'] remoteExecCall ['aegis_transaction',2];['saldo',SALDO] call aegis_notice;";
			x = 0.639218 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ExitButton: HG_RscButtonInvisible
		{
			idc = HG_NO_IDC;
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};

/*
    Clothing shop dialog
*/
class HG_ClothingShopDialog
{
    idd = HG_CLOTHING_SHOP_IDD;
	enableSimulation = true;
	name = "HG_ClothingShopDialog";
	onUnload = "_this call HG_fnc_dialogOnUnloadClothing";

	class ControlsBackground
	{
		class ListBackground: HG_RscText
		{
			idc = HG_NO_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class ListHeader: HG_RscText
		{
			idc = HG_NO_IDC;
			style = "0x02";
			text = "$STR_HG_DLG_TITLE_LIST_CLOTHING";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class TextHeader: HG_RscText
		{
			idc = HG_NO_IDC;
			style = "0x02";
			text = "$STR_HG_DLG_TITLE_TEXT_CLOTHING";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ActionBarBackground: HG_RscText
		{
			idc = HG_NO_IDC;
			text = "$STR_HG_DLG_TITLE_CLOTHING";
			colorBackground[] = {0.4,0.4,0.4,1};
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ListBackgroundFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class TextFrame: HG_RscFrame
		{
			idc = HG_NO_IDC;
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class ResetBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\reset.paa";
			x = 0.56703 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class BuyBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\buy.paa";
			x = 0.603124 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class MyCashBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\mycash.paa";
			x = 0.639218 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ExitBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "aegisremote\addons\common\ui\close.paa";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};

	class Controls
	{
		class ClothingSwitch: HG_RscXListBox
		{
			idc = HG_CLOTHING_SWITCH_IDC;
			onLBSelChanged = "_this call HG_fnc_xClothingSelectionChanged";
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ClothingList: HG_RscListBox
		{
			idc = HG_CLOTHING_LIST_IDC;
			style = "0x02 + 16";
			rowHeight = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call HG_fnc_clothingSelectionChanged";
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class ClothingText: HG_RscStructuredText
		{
			idc = HG_CLOTHING_TEXT_IDC;
			colorBackground[] = {0,0,0,0.5};
			x = 0.850625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.242 * safezoneH;
		};

		class ResetButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_RESET_IDC;
			tooltip = "$STR_HG_DLG_RESET_TOOLTIP";
			onButtonClick = "[] call HG_fnc_reset";
			x = 0.56703 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class BuyButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_BUY_IDC;
			tooltip = "$STR_HG_DLG_BUY_C_TOOLTIP";
			onButtonClick = "_this call HG_fnc_buyClothing";
			x = 0.603124 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class MyCashButton: HG_RscButtonInvisible
		{
			idc = HG_CLOTHING_MC_IDC;
			tooltip = "$STR_HG_DLG_MC_TOOLTIP";
			onButtonClick = "[0, player, 'saldo'] remoteExecCall ['aegis_transaction',2];['saldo',SALDO] call aegis_notice;";
			x = 0.639218 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ExitButton: HG_RscButtonInvisible
		{
			idc = HG_NO_IDC;
			tooltip = "$STR_HG_DLG_CLOSE_TOOLTIP";
			onButtonClick = "closeDialog 0";
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};


class CfgClientShop
{
	class HG_VehiclesShopCfg
	{
		/* Used as a param for the call, basically the shop you want to display */
		class HG_DefaultShop
		{
			/* Shop type */
					class Civilian
				{
				/* Shop display name */
						displayName = "$STR_HG_SHOP_CIVILIAN";
				/*
						Shop content
					0 - STRING - Classname
					1 - INTEGER - Price
				*/
					vehicles[] =
					{
							{"C_SUV_01_F",15000}
					};
				/*
						Spawn pos (markers)
					0 - STRING - Marker display name
					1 - STRING - Marker name
				*/
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1","civilian_vehicles_spawn"}
				};
				};

				class Military
				{
						displayName = "$STR_HG_SHOP_MILITARY";
					vehicles[] =
					{
							{"B_MRAP_01_F",45000}
					};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_2","military_vehicles_spawn"}
				};
				};
		};

		/*
		----------
		Here you can setup your own shop following the same format as the one just above
		----------
		*/
	};

	class HG_WeaponsShopCfg
	{
		/* Used as a param for the call, basically the shop you want to display */
		class HG_DefaultShop
		{
			/* Shop type */
					class Weapons
				{
				/* Shop display name */
						displayName = "$STR_HG_SHOP_WEAPONS";
				/*
						Shop content
					0 - STRING - Classname
					1 - INTEGER - Price
				*/
					items[] =
					{
							{"RH_usp",799},
							{"RH_m9",619},
							{"RH_p226",749},
							{"RH_fn57",1199},
							{"RH_g19",899},
							{"SMA_HK416afg",2739},
							{"SMA_HK416vfg",2759},
							{"SMA_HK416GL",3999},
							{"SMA_HK416afgQCB",2899},
							{"SMA_HK416CUSTOMafg",3499},
							{"SMA_HK416CUSTOMCQBafg",3399},
							{"SMA_HK416CUSTOMCQBafgB",3599},
							{"SMA_HK416CUSTOMafgB",3599},
							{"SMA_HK416GLCQB",3599},
							{"SMA_HK416GLCQB_B",3699},
							{"SMA_HK417afg",8199},
							{"SMA_HK417vfg",8199},
							{"SMA_HK417_16in_afg",12999},
							{"SMA_HK417_tanafg",9320},
							{"SMA_HK417_tanvfg",9299},
							{"SMA_HK417_16in_afg_tan",12999},
							{"SMA_SAR21_F",2199},
							{"SMA_SAR21_AFG_F",2250},
							{"SMA_SAR21MMS_F",2420},
							{"SMA_SAR21MMS_AFG_F",2599},
							{"SMA_SKS_F",599},
							{"SMA_SKS_TAN_F",699},
							{"SMA_STG_E4_F",1199},
							{"SMA_STG_E4_BLACK_F",1299},
							{"SMA_STG_E4_OD_F",3399},
							{"SMA_AUG_A3_F",2299},
							{"SMA_AUG_A3_MCAM_F",2299},
							{"SMA_AUG_A3_KRYPT_F",2299},
							{"SMA_AUG_EGLM_Olive",4999},
							{"SMA_AUG_EGLM_tan",4999},
							{"SMA_AUG_EGLM",5199},
							{"SMA_MK16",2699},
							{"SMA_Mk16_black",2599},
							{"SMA_Mk16_EGLM",3399},
							{"SMA_MK16_EGLM_black",3369},
							{"SMA_Mk16_blackQCB",3599},
							{"SMA_Mk16QCB",3589},
							{"SMA_Mk17",4999},
							{"SMA_Mk17_black",4199},
							{"SMA_Mk17_EGLM",6299},
							{"SMA_MK17_EGLM_black",6399},
							{"SMA_Mk17_16_black",12499},
							{"SMA_Mk17_16",12499},
							{"SMA_ACR",1699},
							{"SMA_ACRblk",1699},
							{"SMA_ACRMOE",1799},
							{"SMA_ACRMOE_Blk",1799},
							{"SMA_ACRREM",1608},
							{"SMA_ACRREMblk",1620},
							{"SMA_ACRREMMOE",1680},
							{"SMA_ACRREMMOEblk",1689},
							{"SMA_ACRREMMOECQB",2199},
							{"SMA_ACRREMMOECQBblk",2199},
							{"SMA_ACRREMAFG",1799},
							{"SMA_ACRREMAFGblk",1822},
							{"SMA_ACRREMAFGCQB",1999},
							{"SMA_ACRREMAFGCQBblk",1999},
							{"SMA_ACRREM_N",1499},
							{"SMA_ACRREMblk_N",1499},
							{"SMA_ACRREMMOE_N",1540},
							{"SMA_ACRREMMOEblk_N",1545},
							{"SMA_ACRREMMOECQB_N",1699},
							{"SMA_ACRREMMOECQBblk_N",1699},
							{"SMA_ACRREMAFG_N",1789},
							{"SMA_ACRREMAFGblk_N",1790},
							{"SMA_ACRREMAFGCQB_N",1899},
							{"SMA_ACRREMAFGCQBblk_N",1899},
							{"sma_minimi_mk3_762tlb",6999},
							{"sma_minimi_mk3_762tlb_des",7199},
							{"sma_minimi_mk3_762tlb_wdl",7199},
							{"sma_minimi_mk3_762tsb",5999},
							{"sma_minimi_mk3_762tsb_des",6299},
							{"sma_minimi_mk3_762tsb_wdl",6299},
							{"SMA_L85RIS",2999},
							{"SMA_L85RISNR",3999},
							{"SMA_L85RISafg",3299},
							{"SMA_L85RISafgNR",3399},
							{"SMA_Steyr_AUG_F",2399},
							{"SMA_Steyr_AUG_BLACK_F",2399},
							{"SMA_AAC_MPW_9_Black",1299},
							{"SMA_AAC_MPW_9_Woodland",1299},
							{"SMA_AAC_MPW_9_Desert",1299},
							{"SMA_AAC_MPW_9_Tan",1299},
							{"SMA_AAC_MPW_9_OD",1299},
							{"SMA_AAC_MPW_12_Black",1399},
							{"SMA_AAC_MPW_12_Woodland",1399},
							{"SMA_AAC_MPW_12_Desert",1399},
							{"SMA_AAC_MPW_12_Tan",1399},
							{"SMA_AAC_MPW_12_OD",1399},
							{"SMA_AAC_MPW_16_Black",1599},
							{"SMA_AAC_MPW_16_Woodland",1599},
							{"SMA_AAC_MPW_16_Desert",1599},
							{"SMA_AAC_MPW_16_Tan",1599},
							{"SMA_AAC_MPW_16_OD",1599},
							{"SMA_Tavor_F",1749},
							{"SMA_TavorOD_F",1749},
							{"SMA_TavorBLK_F",1749},
							{"SMA_CTAR_F",1999},
							{"SMA_CTAROD_F",1999},
							{"SMA_CTARBLK_F",1999},
							{"SMA_MK18afg",2899},
							{"SMA_MK18afg_SM",2999},
							{"SMA_MK18afgBLK",2899},
							{"SMA_MK18afgTAN",2899},
							{"SMA_MK18afgTAN_SM",2999},
							{"SMA_MK18afgTANBLK",2899},
							{"SMA_MK18afgTANBLK_SM",2999},
							{"SMA_MK18MOE",2599},
							{"SMA_MK18MOE_SM",2699},
							{"SMA_MK18MOETAN",2599},
							{"SMA_MK18MOETAN_SM",2699},
							{"SMA_MK18MOEBLK",2599},
							{"SMA_MK18MOEBLK_SM",2699},
							{"SMA_MK18MOEBLKTAN",2599},
							{"SMA_MK18MOEBLKTAN_SM",2699},
							{"SMA_MK18_GL",3999},
							{"SMA_MK18_GL_SM",4199},
							{"SMA_MK18TANBLK_GL",3999},
							{"SMA_MK18TANBLK_GL_SM",4199},
							{"SMA_MK18TAN_GL",3999},
							{"SMA_MK18TAN_GL_SM",4199},
							{"SMA_M4_GL",3999},
							{"SMA_M4_GL_SM",4199},
							{"SMA_M4afg",1699},
							{"SMA_M4afg_Tan",1699},
							{"SMA_M4afg_Tan_SM",1699},
							{"SMA_M4afg_OD",1699},
							{"SMA_M4afg_OD_SM",1699},
							{"SMA_M4afg_BLK1",1699},
							{"SMA_M4afg_BLK1_SM",1699},
							{"SMA_M4MOE",1699},
							{"SMA_M4MOE_SM",1799},
							{"SMA_M4MOE_Tan",1699},
							{"SMA_M4MOE_Tan_SM",1799},
							{"SMA_M4MOE_OD",1699},
							{"SMA_M4MOE_OD_SM",1799},
							{"SMA_M4MOE_BLK1",1699},
							{"SMA_M4MOE_BLK1_SM",1799},
							{"SMA_M4afgSTOCK",1599},
							{"SMA_M4CQBR",1899}
					};
				};

				class Items
				{
						displayName = "$STR_HG_SHOP_ITEMS";
					items[] =
					{
							{"ItemWatch",50},
							{"ItemCompass",50},
							{"ACE_microDAGR",250},
							{"ACRE_PRC152",129},
							{"ItemMap",50},
							{"bipod_01_F_snd",79},
							{"bipod_01_F_blk",79},
							{"bipod_01_F_mtp",79},
							{"bipod_02_F_blk",89},
							{"bipod_02_F_tan",89},
							{"bipod_02_F_hex",89},
							{"bipod_03_F_blk",99},
							{"bipod_03_F_oli",99},
							{"SMA_ANPEQ15_TAN",99},
							{"SMA_ANPEQ15_BLK",99},
							{"SMA_ANPEQ15_TOP_TAN_MK18",99},
							{"SMA_ANPEQ15_TOP_BLK_MK18",99},
							{"SMA_ANPEQ15_TOP_TAN_SCAR",99},
							{"SMA_ANPEQ15_TOP_BLK_SCAR",99},
							{"SMA_ANPEQ15_TOP_BLK",99},
							{"SMA_ANPEQ15_TOP_TAN",99},
							{"SMA_Gripod_01",99},
							{"SMA_supp2btanSCAR_556",129},
							{"SMA_supp2bSCAR_556",129},
							{"SMA_spSCARtan_762",129},
							{"SMA_spSCAR_762",129},
							{"SMA_supptan_762",129},
							{"SMA_supp_762",129},
							{"SMA_supp2btan_556",129},
							{"SMA_supp1tan_556",129},
							{"SMA_supp1b_556",129},
							{"SMA_Silencer_556",129},
							{"SMA_supp1BB_556",129},
							{"SMA_supp1BOD_556",129},
							{"SMA_supp1BT_556",129},
							{"SMA_supp1Bwht_556",129},
							{"SMA_supp1TB_556",129},
							{"SMA_supp1TOD_556",129},
							{"SMA_supp1TT_556",129},
							{"SMA_supp1TW_556",129},
							{"SMA_supp2BOD_556",129},
							{"SMA_supp2BT_556",129},
							{"SMA_supp2BW_556",129},
							{"SMA_supp2T_556",129},
							{"SMA_supp2TB_556",129},
							{"SMA_supp2TOD_556",129},
							{"SMA_supp2TWH_556",129},
							{"SMA_supp2smaB_556",129},
							{"SMA_supp2smaT_556",129},
							{"SMA_AAC_762_sdn6",129},
							{"SMA_AAC_762_sdn6_w",129},
							{"SMA_AAC_762_sdn6_d",129},
							{"RH_aacusp",80},
							{"RH_gemtech45",95},
							{"RH_osprey",112},
							{"RH_fhusp",70},
							{"RH_m9qd",78},
							{"RH_gemtech9",68},
							{"RH_suppr9",59},
							{"RH_sfn57",99},
							{"RH_x2",119},
							{"RH_m6x",89},
							{"RH_x300",135}
					};
				};

				class Magazines
				{
						displayName = "$STR_HG_SHOP_MAGAZINES";
					items[] =
					{
						{"RH_12Rnd_45cal_usp",30},
						{"RH_15Rnd_9x19_M9",35},
						{"RH_17Rnd_9x19_g17",34},
						{"RH_15Rnd_9x19_SIG",35},
						{"RH_20Rnd_57x28_FN",45},
						{"SMA_20Rnd_762x51mm_M80A1_EPR",59},
						{"SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",69},
						{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",79},
						{"SMA_20Rnd_762x51mm_Mk319_Mod_0_Ball_Barrier",69},
						{"SMA_20Rnd_762x51mm_Mk319_Mod_0_Ball_Barrier_Tracer",79},
						{"SMA_20Rnd_762x51mm_Mk319_Mod_0_Ball_Barrier_IR",89},
						{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",49},
						{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",59},
						{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR",69},
						{"SMA_30Rnd_762x39_SKS",39},
						{"SMA_30Rnd_762x39_SKS_Red",49},
						{"SMA_30Rnd_556x45_M855A1",49},
						{"SMA_30Rnd_556x45_M855A1_Tracer",59},
						{"SMA_30Rnd_556x45_M855A1_IR",69},
						{"SMA_30Rnd_556x45_Mk318",59},
						{"SMA_30Rnd_556x45_Mk318_Tracer",69},
						{"SMA_30Rnd_556x45_Mk318_IR",79},
						{"SMA_30Rnd_556x45_Mk262",59},
						{"SMA_30Rnd_556x45_Mk262_Tracer",69},
						{"SMA_30Rnd_556x45_Mk262_IR",79},
						{"SMA_30Rnd_68x43_SPC_FMJ",39},
						{"SMA_30Rnd_68x43_SPC_FMJ_Tracer",49},
						{"SMA_30Rnd_68x43_SPC_FMJ_IR",59},
						{"SMA_30Rnd_68x43_OTM_SPC",39},
						{"SMA_30Rnd_68x43_OTM_Tracer",49},
						{"SMA_30Rnd_68x43_OTM_IR",59},
						{"SMA_150Rnd_762_Mk319",119},
						{"SMA_150Rnd_762_Mk319_Tracer",129},
						{"SMA_150Rnd_762_Mk319_Mixed",139}

					};
				};

				class Scopes
				{
						displayName = "$STR_HG_SHOP_SCOPES";
					items[] =
					{
							{"optic_Arco",129},
							{"optic_Hamr",139},
							{"optic_Holosight",89},
							{"optic_SOS",499},
							{"optic_MRCO",219},
							{"optic_DMS",399},
							{"optic_LRPS",899},
							{"optic_AMS",999},
							{"optic_AMS_khk",999},
							{"optic_AMS_snd",999},
							{"optic_KHS_blk",699},
							{"optic_KHS_tan",699},
							{"SMA_eotech",499},
							{"SMA_eotech_T",499},
							{"SMA_eotechG33_3XDOWN",899},
							{"SMA_eotechG33_3XUP",899},
							{"SMA_eotechG33_tan_3XDOWN",899},
							{"SMA_eotechG33_tan_3XUP",899},
							{"SMA_eotech552",599},
							{"SMA_eotech552_kf",599},
							{"SMA_eotech552_kf_wdl",599},
							{"SMA_eotech552_kf_des",599},
							{"SMA_eotech552_3XDOWN",999},
							{"SMA_eotech552_3XDOWN_wdl",999},
							{"SMA_eotech552_3XDOWN_des",999},
							{"SMA_eotech552_3XUP",999},
							{"SMA_eotech552_3XUP_wdl",999},
							{"SMA_eotech552_3XUP_des",999},
							{"SMA_Spitfire_01_sc_black",129},
							{"SMA_Spitfire_01_sc_green",129},
							{"SMA_Spitfire_01_sc_red",129},
							{"SMA_Spitfire_01_sc_closed",129},
							{"SMA_Spitfire_01_black",129},
							{"SMA_Spitfire_01_green",129},
							{"SMA_Spitfire_01_red",129},
							{"sma_spitfire_03_sc_closed",249},
							{"sma_spitfire_03_sc_black",249},
							{"sma_spitfire_03_sc_green",249},
							{"sma_spitfire_03_sc_red",249},
							{"sma_spitfire_03_black",249},
							{"sma_spitfire_03_green",249},
							{"sma_spitfire_03_red",249},
							{"sma_spitfire_03_rds_black",399},
							{"sma_spitfire_03_rds_red",399},
							{"sma_spitfire_03_rds_green",399},
							{"sma_spitfire_03_rds_low_black",399},
							{"sma_spitfire_03_rds_low_red",399},
							{"sma_spitfire_03_rds_low_green",399},
							{"SMA_AIMPOINT",229},
							{"SMA_AIMPOINT_GLARE",239},
							{"SMA_BARSKA",98},
							{"SMA_CMORE",77},
							{"SMA_CMOREGRN",75}
					};
				};
		};

		/*
		----------
		Here you can setup your own shop following the same format as the one just above
		----------
		class HG_CustomShop
		{
			class Food
			{
				displayName = "I love Bacon";
				items[] =
				{
					{"Land_TacticalBacon_F",500000};
				};
			};
		};
		*/
	};

	class HG_ClothingShopCfg
	{
		/* Used as a param for the call, basically the shop you want to display */
		class HG_DefaultShop
		{
			/* Shop type */
			class Facewear
			{

				displayName = "$STR_HG_SHOP_FACEWEAR";

				type = 0;

				content[] =
				{
					{"TRYK_r_cap_tan_Glasses",20},
					{"TRYK_r_cap_blk_Glasses",20},
					{"TRYK_r_cap_od_Glasses",20},
					{"TRYK_H_headsetcap_Glasses",20},
					{"TRYK_H_headsetcap_blk_Glasses",20},
					{"TRYK_H_headsetcap_od_Glasses",20},
					{"TRYK_Beard",20},
					{"TRYK_Beard_BW",20},
					{"TRYK_Beard_BK",20},
					{"TRYK_Beard_Gr",20},
					{"TRYK_Beard2",20},
					{"TRYK_Beard_BW2",20},
					{"TRYK_Beard_BK2",20},
					{"TRYK_Beard_Gr2",20},
					{"TRYK_Beard3",20},
					{"TRYK_Beard_BW3",20},
					{"TRYK_Beard_BK3",20},
					{"TRYK_Beard_Gr3",20},
					{"TRYK_Beard4",20},
					{"TRYK_Beard_BW4",20},
					{"TRYK_Beard_BK4",20},
					{"TRYK_Beard_Gr4",20}
				};
			};

			class Headgear
			{
				displayName = "$STR_HG_SHOP_HEADGEAR";
				type = 0;
				content[] =
				{
					{"TRYK_ESS_CAP_OD",20},
					{"TRYK_ESS_CAP_tan",20},
					{"TRYK_R_CAP_BLK",20},
					{"TRYK_R_CAP_TAN",20},
					{"TRYK_R_CAP_OD_US",20},
					{"TRYK_TAC_EARMUFF_Gs",20},
					{"TRYK_TAC_SET_bn",20},
					{"TRYK_NOMIC_TAC_EARMUFF_Gs",20},
					{"TRYK_TAC_EARMUFF_SHADE_Gs",20},
					{"TRYK_TAC_SET_TAN",20},
					{"TRYK_TAC_SET_OD",20},
					{"TRYK_TAC_SET_WH",20},
					{"TRYK_TAC_SET_MESH",20},
					{"TRYK_TAC_SET_TAN_2",20},
					{"TRYK_TAC_SET_OD_2",20},
					{"TRYK_TAC_SET_WH_2",20},
					{"TRYK_TAC_SET_MESH_2",20},
					{"TRYK_bandana_g",20},
					{"TRYK_H_PASGT_BLK",20},
					{"TRYK_H_PASGT_OD",20},
					{"TRYK_H_PASGT_COYO",20},
					{"TRYK_H_PASGT_TAN",20},
					{"TRYK_H_Helmet_Snow",20},
					{"TRYK_H_WH",20},
					{"TRYK_H_GR",20},
					{"TRYK_H_AOR1",20},
					{"TRYK_H_AOR2",20},
					{"TRYK_H_EARMUFF",20},
					{"TRYK_H_TACEARMUFF_H",20},
					{"TRYK_H_Bandana_H",20},
					{"TRYK_H_Bandana_wig",20},
					{"TRYK_H_Bandana_wig_g",20},
					{"TRYK_H_wig",20},
					{"TRYK_H_headset2",20},
					{"TRYK_H_ghillie_over",20},
					{"TRYK_H_ghillie_top",20},
					{"TRYK_H_ghillie_top_headless",20},
					{"TRYK_H_ghillie_over_green",20},
					{"TRYK_H_ghillie_top_green",20},
					{"TRYK_H_ghillie_top_headless_green",20},
					{"TRYK_H_woolhat",20},
					{"TRYK_H_woolhat_CW",20},
					{"TRYK_H_woolhat_WH",20},
					{"TRYK_H_woolhat_br",20},
					{"TRYK_H_woolhat_cu",20},
					{"TRYK_H_woolhat_tan",20},
					{"TRYK_H_headsetcap",20},
					{"TRYK_H_headsetcap_blk",20},
					{"TRYK_H_headsetcap_od",20},
					{"TRYK_H_pakol",20},
					{"TRYK_H_pakol2",20},
					{"TRYK_H_LHS_HEL_G",20},
					{"TRYK_H_Helmet_Winter",20},
					{"TRYK_H_Helmet_Winter_2",20}
				};
			};

			class Vests
		    {
		        displayName = "$STR_HG_SHOP_VESTS";
				type = 2;
			    content[] =
			    {
			        {"V_aegis_carrier_lite_blk",500},
							{"V_aegis_carrier_lite_tan",500},
							{"V_aegis_carrier_lite_wood",500},
							{"V_aegis_carrier_rig_blk",600},
							{"V_aegis_carrier_rig_tan",600},
							{"V_aegis_carrier_rig_wood",600}
			    };
		    };

			class Uniforms
			{
			  displayName = "$STR_HG_SHOP_UNIFORMS";
				type = 2;
				content[] =
				{
					{"TRYK_HRP_UCP",20},
					{"TRYK_HRP_USMC",20},
					{"TRYK_HRP_khk",20},
					{"TRYK_U_B_OD_OD_CombatUniform",20},
					{"TRYK_U_B_OD_OD_R_CombatUniform",20},
					{"TRYK_U_B_TANTAN_CombatUniform",20},
					{"TRYK_U_B_TANTAN_R_CombatUniform",20},
					{"TRYK_U_B_BLKBLK_CombatUniform",20},
					{"TRYK_U_B_BLKBLK_R_CombatUniform",20},
					{"TRYK_U_B_GRYOCP_CombatUniform",20},
					{"TRYK_U_B_GRYOCP_R_CombatUniformTshirt",20},
					{"TRYK_U_B_TANOCP_CombatUniform",20},
					{"TRYK_U_B_TANOCP_R_CombatUniformTshirt",20},
					{"TRYK_U_B_BLKOCP_CombatUniform",20},
					{"TRYK_U_B_BLKOCP_R_CombatUniformTshirt",20},
					{"TRYK_U_B_BLKTAN_CombatUniform",20},
					{"TRYK_U_B_BLKTANR_CombatUniformTshirt",20},
					{"TRYK_U_B_ODTAN_CombatUniform",20},
					{"TRYK_U_B_ODTANR_CombatUniformTshirt",20},
					{"TRYK_U_B_GRTAN_CombatUniform",20},
					{"TRYK_U_B_GRTANR_CombatUniformTshirt",20},
					{"TRYK_U_B_wood_CombatUniform",20},
					{"TRYK_U_B_woodR_CombatUniformTshirt",20},
					{"TRYK_U_B_wood3c_CombatUniform",20},
					{"TRYK_U_B_wood3c_CombatUniformTshirt",20},
					{"TRYK_U_B_MARPAT_WOOD_CombatUniform",20},
					{"TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt",20},
					{"TRYK_U_B_WOOD_MARPAT_CombatUniform",20},
					{"TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt",20},
					{"TRYK_U_B_woodtan_CombatUniform",20},
					{"TRYK_U_B_woodtanR_CombatUniformTshirt",20},
					{"TRYK_U_B_JSDF_CombatUniform",20},
					{"TRYK_U_B_JSDF_CombatUniformTshirt",20},
					{"TRYK_U_B_3CD_Delta_BDU",20},
					{"TRYK_U_B_3CD_Delta_BDUTshirt",20},
					{"TRYK_U_B_3CD_Ranger_BDU",20},
					{"TRYK_U_B_3CD_Ranger_BDUTshirt",20},
					{"TRYK_U_B_3CD_BLK_BDUTshirt",20},
					{"TRYK_U_B_3CD_BLK_BDUTshirt2",20},
					{"TRYK_U_B_ACU",20},
					{"TRYK_U_B_ACUTshirt",20},
					{"TRYK_U_B_MARPAT_Wood",20},
					{"TRYK_U_B_MARPAT_Wood_Tshirt",20},
					{"TRYK_U_B_MARPAT_Desert",20},
					{"TRYK_U_B_MARPAT_Desert_Tshirt",20},
					{"TRYK_U_B_MARPAT_Desert2",20},
					{"TRYK_U_B_MARPAT_Desert2_Tshirt",20},
					{"TRYK_U_B_3c",20},
					{"TRYK_U_B_3cr",20},
					{"TRYK_U_B_Sage_Tshirt",20},
					{"TRYK_U_B_BLK3CD",20},
					{"TRYK_U_B_BLK3CD_Tshirt",20},
					{"TRYK_U_B_BLK",20},
					{"TRYK_U_B_BLK_Tshirt",20},
					{"TRYK_U_B_BLKTAN",20},
					{"TRYK_U_B_BLKTAN_Tshirt",20},
					{"TRYK_U_B_ODTAN",20},
					{"TRYK_U_B_ODTAN_Tshirt",20},
					{"TRYK_U_B_BLK_OD",20},
					{"TRYK_U_B_BLK_OD_Tshirt",20},
					{"TRYK_U_B_C01_Tsirt",20},
					{"TRYK_U_B_C02_Tsirt",20},
					{"TRYK_U_B_OD_BLK",20},
					{"TRYK_U_B_OD_BLK_2",20},
					{"TRYK_U_B_BLK_TAN_1",20},
					{"TRYK_U_B_BLK_TAN_2",20},
					{"TRYK_U_B_wh_tan_Rollup_CombatUniform",20},
					{"TRYK_U_B_wh_OD_Rollup_CombatUniform",20},
					{"TRYK_U_B_wh_blk_Rollup_CombatUniform",20},
					{"TRYK_U_B_BLK_tan_Rollup_CombatUniform",20},
					{"TRYK_U_B_BLK_OD_Rollup_CombatUniform",20},
					{"TRYK_U_B_NATO_UCP_GRY_CombatUniform",20},
					{"TRYK_U_B_NATO_UCP_GRY_R_CombatUniform",20},
					{"TRYK_U_B_NATO_UCP_CombatUniform",20},
					{"TRYK_U_B_NATO_UCP_R_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_c_BLK_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_BLK_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_BLK_R_CombatUniform",20},
					{"TRYK_U_B_NATO_OCPD_CombatUniform",20},
					{"TRYK_U_B_NATO_OCPD_R_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_CombatUniform",20},
					{"TRYK_U_B_NATO_OCP_R_CombatUniform",20},
					{"TRYK_U_B_AOR1_Rollup_CombatUniform",20},
					{"TRYK_U_B_AOR2_Rollup_CombatUniform",20},
					{"TRYK_U_B_MTP_CombatUniform",20},
					{"TRYK_U_B_MTP_R_CombatUniform",20},
					{"TRYK_U_B_MTP_BLK_CombatUniform",20},
					{"TRYK_U_B_MTP_BLK_R_CombatUniform",20},
					{"TRYK_U_B_Woodland",20},
					{"TRYK_U_B_Woodland_Tshirt",20},
					{"TRYK_U_B_WDL_GRY_CombatUniform",20},
					{"TRYK_U_B_WDL_GRY_R_CombatUniform",20},
					{"TRYK_U_B_ARO1_GR_CombatUniform",20},
					{"TRYK_U_B_ARO1_GR_R_CombatUniform",20},
					{"TRYK_U_B_ARO1_GRY_CombatUniform",20},
					{"TRYK_U_B_ARO1_GRY_R_CombatUniform",20},
					{"TRYK_U_B_ARO1_CombatUniform",20},
					{"TRYK_U_B_ARO1R_CombatUniform",20},
					{"TRYK_U_B_ARO1_BLK_CombatUniform",20},
					{"TRYK_U_B_ARO1_BLK_R_CombatUniform",20},
					{"TRYK_U_B_ARO1_CBR_CombatUniform",20},
					{"TRYK_U_B_ARO1_CBR_R_CombatUniform",20},
					{"TRYK_U_B_ARO2_CombatUniform",20},
					{"TRYK_U_B_ARO2R_CombatUniform",20},
					{"TRYK_U_B_AOR2_BLK_CombatUniform",20},
					{"TRYK_U_B_AOR2_BLK_R_CombatUniform",20},
					{"TRYK_U_B_AOR2_OD_CombatUniform",20},
					{"TRYK_U_B_AOR2_OD_R_CombatUniform",20},
					{"TRYK_U_B_AOR2_GRY_CombatUniform",20},
					{"TRYK_U_B_AOR2_GRY_R_CombatUniform",20},
					{"TRYK_U_B_Snow_CombatUniform",20},
					{"TRYK_U_B_Snowt",20},
					{"TRYK_U_B_Denim_T_WH",20},
					{"TRYK_U_B_Denim_T_BK",20},
					{"TRYK_U_B_BLK_T_WH",20},
					{"TRYK_U_B_BLK_T_BK",20},
					{"TRYK_U_B_RED_T_BR",20},
					{"TRYK_U_B_Denim_T_BG_WH",20},
					{"TRYK_U_B_Denim_T_BG_BK",20},
					{"TRYK_U_B_BLK_T_BG_WH",20},
					{"TRYK_U_B_BLK_T_BG_BK",20},
					{"TRYK_U_B_RED_T_BG_BR",20},
					{"TRYK_U_B_fleece",20},
					{"TRYK_U_B_fleece_UCP",20},
					{"TRYK_U_B_UCP_PCUs",20},
					{"TRYK_U_B_GRY_PCUs",20},
					{"TRYK_U_B_Wood_PCUs",20},
					{"TRYK_U_B_PCUs",20},
					{"TRYK_U_B_UCP_PCUs_R",20},
					{"TRYK_U_B_GRY_PCUs_R",20},
					{"TRYK_U_B_Wood_PCUs_R",20},
					{"TRYK_U_B_PCUs_R",20},
					{"TRYK_U_B_PCUGs",20},
					{"TRYK_U_B_PCUODs",20},
					{"TRYK_U_B_PCUGs_gry",20},
					{"TRYK_U_B_PCUGs_BLK",20},
					{"TRYK_U_B_PCUGs_OD",20},
					{"TRYK_U_B_PCUGs_gry_R",20},
					{"TRYK_U_B_PCUGs_BLK_R",20},
					{"TRYK_U_B_PCUGs_OD_R",20},
					{"TRYK_U_Bts_GRYGRY_PCUs",20},
					{"TRYK_U_Bts_UCP_PCUs",20},
					{"TRYK_U_Bts_Wood_PCUs",20},
					{"TRYK_U_Bts_PCUs",20},
					{"TRYK_U_pad_j",20},
					{"TRYK_U_pad_j_blk",20},
					{"TRYK_U_pad_hood_Cl",20},
					{"TRYK_U_pad_hood_Cl_blk",20},
					{"TRYK_U_pad_hood_tan",20},
					{"TRYK_U_pad_hood_Blk",20},
					{"TRYK_U_pad_hood_CSATBlk",20},
					{"TRYK_U_pad_hood_Blod",20},
					{"TRYK_U_pad_hood_odBK",20},
					{"TRYK_U_pad_hood_BKT2",20},
					{"TRYK_hoodie_Blk",20},
					{"TRYK_hoodie_FR",20},
					{"TRYK_hoodie_Wood",20},
					{"TRYK_hoodie_3c",20},
					{"TRYK_T_camo_tan",20},
					{"TRYK_T_camo_3c",20},
					{"TRYK_T_camo_Wood",20},
					{"TRYK_T_camo_wood_marpat",20},
					{"TRYK_T_camo_Desert_marpat",20},
					{"TRYK_T_camo_3c_BG",20},
					{"TRYK_T_camo_Wood_BG",20},
					{"TRYK_T_camo_wood_marpat_BG",20},
					{"TRYK_T_camo_desert_marpat_BG",20},
					{"TRYK_T_PAD",20},
					{"TRYK_T_OD_PAD",20},
					{"TRYK_T_TAN_PAD",20},
					{"TRYK_T_BLK_PAD",20},
					{"TRYK_T_T2_PAD",20},
					{"TRYK_T_CSAT_PAD",20},
					{"TRYK_U_nohoodPcu_gry",20},
					{"TRYK_U_hood_nc",20},
					{"TRYK_U_hood_mc",20},
					{"TRYK_U_denim_hood_blk",20},
					{"TRYK_U_denim_hood_mc",20},
					{"TRYK_U_denim_hood_3c",20},
					{"TRYK_U_denim_hood_nc",20},
					{"TRYK_U_denim_jersey_blu",20},
					{"TRYK_U_denim_jersey_blk",20},
					{"TRYK_shirts_PAD",20},
					{"TRYK_shirts_OD_PAD",20},
					{"TRYK_shirts_TAN_PAD",20},
					{"TRYK_shirts_BLK_PAD",20},
					{"TRYK_shirts_PAD_BK",20},
					{"TRYK_shirts_OD_PAD_BK",20},
					{"TRYK_shirts_TAN_PAD_BK",20},
					{"TRYK_shirts_BLK_PAD_BK",20},
					{"TRYK_shirts_PAD_BLW",20},
					{"TRYK_shirts_OD_PAD_BLW",20},
					{"TRYK_shirts_TAN_PAD_BLW",20},
					{"TRYK_shirts_BLK_PAD_BLW",20},
					{"TRYK_shirts_PAD_YEL",20},
					{"TRYK_shirts_OD_PAD_YEL",20},
					{"TRYK_shirts_TAN_PAD_YEL",20},
					{"TRYK_shirts_BLK_PAD_YEL",20},
					{"TRYK_shirts_PAD_RED2",20},
					{"TRYK_shirts_OD_PAD_RED2",20},
					{"TRYK_shirts_TAN_PAD_RED2",20},
					{"TRYK_shirts_BLK_PAD_RED2",20},
					{"TRYK_shirts_PAD_BLU3",20},
					{"TRYK_shirts_OD_PAD_BLU3",20},
					{"TRYK_shirts_TAN_PAD_BLU3",20},
					{"TRYK_shirts_BLK_PAD_BLU3",20},
					{"TRYK_shirts_DENIM_R",20},
					{"TRYK_shirts_DENIM_BL",20},
					{"TRYK_shirts_DENIM_BK",20},
					{"TRYK_shirts_DENIM_WH",20},
					{"TRYK_shirts_DENIM_BWH",20},
					{"TRYK_shirts_DENIM_RED2",20},
					{"TRYK_shirts_DENIM_WHB",20},
					{"TRYK_shirts_DENIM_ylb",20},
					{"TRYK_shirts_DENIM_od",20},
					{"TRYK_shirts_DENIM_R_Sleeve",20},
					{"TRYK_shirts_DENIM_BL_Sleeve",20},
					{"TRYK_shirts_DENIM_BK_Sleeve",20},
					{"TRYK_shirts_DENIM_WH_Sleeve",20},
					{"TRYK_shirts_DENIM_BWH_Sleeve",20},
					{"TRYK_shirts_DENIM_RED2_Sleeve",20},
					{"TRYK_shirts_DENIM_WHB_Sleeve",20},
					{"TRYK_shirts_DENIM_ylb_Sleeve",20},
					{"TRYK_shirts_DENIM_od_Sleeve",20},
					{"TRYK_shirts_PAD_BL",20},
					{"TRYK_shirts_OD_PAD_BL",20},
					{"TRYK_shirts_TAN_PAD_BL",20},
					{"TRYK_shirts_BLK_PAD_BL",20},
					{"TRYK_U_taki_wh",20},
					{"TRYK_U_taki_COY",20},
					{"TRYK_U_taki_BL",20},
					{"TRYK_U_taki_BLK",20},
					{"TRYK_U_Bts_PCUGs",20},
					{"TRYK_U_Bts_PCUODs",20},
					{"TRYK_U_taki_G_WH",20},
					{"TRYK_U_taki_G_COY",20},
					{"TRYK_U_taki_G_BL",20},
					{"TRYK_U_taki_G_BLK",20},
					{"TRYK_U_B_PCUHs",20},
					{"TRYK_U_B_PCUGHs",20},
					{"TRYK_U_B_PCUODHs",20},
					{"TRYK_B_USMC_R",20},
					{"TRYK_B_USMC_R_ROLL",20},
					{"TRYK_ZARATAKI",20},
					{"TRYK_ZARATAKI2",20},
					{"TRYK_ZARATAKI3",20},
					{"TRYK_B_TRYK_UCP_T",20},
					{"TRYK_B_TRYK_3C_T",20},
					{"TRYK_B_TRYK_MTP_T",20},
					{"TRYK_B_TRYK_OCP_T",20},
					{"TRYK_B_TRYK_OCP_D_T",20},
					{"TRYK_DMARPAT_T",20},
					{"TRYK_C_AOR2_T",20},
					{"TRYK_U_B_Sage_T",20},
					{"TRYK_U_B_Wood_T",20},
					{"TRYK_U_B_BLTAN_T",20},
					{"TRYK_U_B_BLOD_T",20},
					{"TRYK_OVERALL_flesh",20},
					{"TRYK_OVERALL_nok_flesh",20},
					{"TRYK_OVERALL_SAGE_BLKboots",20},
					{"TRYK_OVERALL_SAGE_BLKboots_nk_blk",20},
					{"TRYK_OVERALL_SAGE_BLKboots_nk",20},
					{"TRYK_OVERALL_SAGE_BLKboots_nk_blk2",20},
					{"TRYK_OVERALL_SAGE",20},
					{"TRYK_SUITS_BLK_F",20},
					{"TRYK_SUITS_BR_F",20},
					{"TRYK_H_ghillie_top_headless3glass",20},
					{"TRYK_shoulder_armor_BK",20},
					{"TRYK_shoulder_armor_OD",20},
					{"TRYK_shoulder_armor_CY",20},
					{"TRYK_H_ghillie_top_headless3",20},
					{"TRYK_U_B_PCUHsW",20},
					{"TRYK_U_B_PCUHsW2",20},
					{"TRYK_U_B_PCUHsW3",20},
					{"TRYK_U_B_PCUHsW3nh",20},
					{"TRYK_U_B_PCUHsW4",20},
					{"TRYK_U_B_PCUHsW5",20},
					{"TRYK_U_B_PCUHsW6",20}
				};
			};

			class Backpacks
			{
				displayName = "$STR_HG_SHOP_BACKPACKS";
				type = 1;
				content[] =
				{
					{"TRYK_B_AssaultPack_UCP",120},
					{"TRYK_B_AssaultPack_Type2camo",120},
					{"TRYK_B_AssaultPack_MARPAT_Desert",120},
					{"TRYK_B_AssaultPack_MARPAT_Wood",120},
					{"TRYK_B_Kitbag_Base",120},
					{"TRYK_B_Kitbag_blk",120},
					{"TRYK_B_Kitbag_aaf",120},
					{"TRYK_B_Carryall_blk",120},
					{"TRYK_B_Carryall_wh",120},
					{"TRYK_B_Carryall_wood",120},
					{"TRYK_B_Carryall_JSDF",120},
					{"TRYK_B_Kitbag_Base_JSDF",120},
					{"TRYK_B_Coyotebackpack",120},
					{"TRYK_B_Coyotebackpack_OD",120},
					{"TRYK_B_Coyotebackpack_BLK",120},
					{"TRYK_B_Coyotebackpack_WH",120},
					{"TRYK_B_Alicepack",120},
					{"TRYK_B_Medbag",120},
					{"TRYK_B_Medbag_OD",120},
					{"TRYK_B_Medbag_BK",120},
					{"TRYK_B_Medbag_ucp",120},
					{"TRYK_B_Belt",120},
					{"TRYK_B_Belt_BLK",120},
					{"TRYK_B_Belt_CYT",120},
					{"TRYK_B_Belt_tan",120},
					{"TRYK_B_Belt_br",120},
					{"TRYK_B_Belt_GR",120},
					{"TRYK_B_Belt_AOR1",120},
					{"TRYK_B_Belt_AOR2",120},
					{"TRYK_B_BAF_BAG_BLK",120},
					{"TRYK_B_BAF_BAG_CYT",120},
					{"TRYK_B_BAF_BAG_OD",120},
					{"TRYK_B_BAF_BAG_rgr",120},
					{"TRYK_B_BAF_BAG_mcamo",120},
					{"TRYK_B_tube_cyt",120},
					{"TRYK_B_tube_od",120},
					{"TRYK_B_tube_blk",120},
					{"TRYK_B_FieldPack_Wood",120},
					{"TRYK_Winter_pack",120}
				};
			};
		};

		/*
		----------
		Here you can setup your own shop following the same format as the one just above
		----------
		*/
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
