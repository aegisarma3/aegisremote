
_player = _this select 0;
_playerInventory = ["","","U_I_G_Story_Protagonist_F",[],"",[],"",[],"",["","","",""],[],"",["","","",""],[],"",["","","",""],[],["ItemMap","ItemCompass","ItemWatch"],"",""];
[_player, _playerInventory, false, true] call ace_common_fnc_setAllGear;
