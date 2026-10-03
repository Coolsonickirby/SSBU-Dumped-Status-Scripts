
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000422b0(long param_1)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_THROW_POWER_UP_DEFAULT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack48,fVar2);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_power_up_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

