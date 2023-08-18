
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialS3_main(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001e260();
  lib::L2CValue::L2CValue(aLStack64,0xa0a7907e5);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xefa2b6d71);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_DETACH_EFFECT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  FUN_710001e7e0(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,SpecialS3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

