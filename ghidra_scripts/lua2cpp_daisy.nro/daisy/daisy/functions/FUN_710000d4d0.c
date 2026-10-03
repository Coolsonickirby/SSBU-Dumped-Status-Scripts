
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d4d0(L2CFighterCommon *param_1)

{
  int iVar1;
  Hash40 HVar2;
  long lVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackAir_Main_common(param_1);
  lib::L2CValue::~L2CValue(aLStack48);
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,HVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

