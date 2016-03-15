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

/*
    Author - HoverGuy
	© All Fucks Reserved
*/

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
			text = "HG_MC\UI\buy.paa";
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class MyCashBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "HG_MC\UI\mycash.paa";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
		};

		class ExitBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "HG_MC\UI\close.paa";
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
			text = "$STR_HG_DLG_TITLE_LIST";
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
			text = "$STR_HG_DLG_TITLE_TEXT";
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
			text = "$STR_HG_DLG_TITLE_HEADER";
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
			text = "HG_MC\UI\buy.paa";
			x = 0.603124 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class MyCashBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "HG_MC\UI\mycash.paa";
			x = 0.639218 * safezoneW + safezoneX;
			y = 0.00500001 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class ExitBtnPicture: HG_RscPicture
		{
			idc = HG_NO_IDC;
			text = "HG_MC\UI\close.paa";
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
