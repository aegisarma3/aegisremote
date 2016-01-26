private ["_side","_kiaPos"];
_kiaPos = getPos (_this select 0);
_side = side (_this select 1);

format["player: %1",_this select 1] call aegis_log;

// Pega o nome da unidade e seta a variavel
// O handler retorna dois objetos no array
// Voce usa o select pra pegar esses objetos. Ex: select 0 pega a unidade em que o handler foi colocado. select 1 pega a unidade que matou.
// Ver: https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#Killed

unitName = name (_this select 1);
format["name: %1",unitName] call aegis_log;

format["name 0: %1",name (_this select 0)] call aegis_log;


if (_side == WEST || _side == sideEnemy) then {
    civKia = civKia + 1;
    publicvariable "civKia";
    marker = createMarker [format ["m_civKia_%1", civKia], _kiaPos];
    marker setMarkerShape "ICON"; marker setMarkerType "kia"; marker setMarkerColor "ColorRed"; marker setMarkerText format ["Civil Morto #%1 por %2", civKia, unitName];
    publicVariable "marker";

    [["CivilDeath", [format ["%1 matou um civil", unitName], format ["Esta ação terá consequências!<br/>Civis mortos: %1", civKia]]], "BIS_fnc_showNotification", true] call BIS_fnc_MP;
};
