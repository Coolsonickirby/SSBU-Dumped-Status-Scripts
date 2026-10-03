
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001a87e0(long param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLOAT_POWER_MIN);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLOAT_POWER_MAX);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLOAT_POWER_CHARGE_RATE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator-(aLStack80,aLStack64);
  lib::L2CValue::operator*(aLStack144,aLStack96);
  lib::L2CValue::operator+(aLStack64,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::AttackModule__set_power_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,fVar3,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

