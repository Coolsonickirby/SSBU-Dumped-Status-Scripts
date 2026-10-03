
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cb10(long param_1)

{
  HitStatus HVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x570211ebd);
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
  HVar2 = lib::L2CValue::as_hash(aLStack48);
  HVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_status_joint_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,HVar1,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

