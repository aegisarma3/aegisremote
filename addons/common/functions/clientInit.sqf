/*
O método utilizado aqui é um derivativo do método utilizado pelo time do Exile Mod.
Como se trata de uma trabalho derivativo, sua distribuição não é permitida.*/

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
  //['aegis_preinit', 'aegisremote\addons\common\functions\aegis_preinit.sqf'],
  ['aegis_set_medical_condition', 'aegisremote\addons\common\functions\aegis_set_medical_condition.sqf']
];

call aegis_preinit;

true
