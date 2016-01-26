if (!isServer) exitWith {};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);

    missionNamespace setVariable [_function, _code];
}
forEach
[
  ['aegis_civilian_eventhandler', 'aegisremote\addons\common\functions\aegis_player_civkiller.sqf']
];

//call aegis_preinit;

true
