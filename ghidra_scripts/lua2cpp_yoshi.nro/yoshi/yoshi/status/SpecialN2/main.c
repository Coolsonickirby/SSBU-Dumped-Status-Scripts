
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialN2_main(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xb1709c575);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfe09bc042);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPITED);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100027670(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialN2_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

