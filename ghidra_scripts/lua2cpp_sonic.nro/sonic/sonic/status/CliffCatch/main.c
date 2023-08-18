
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::CliffCatch_main(L2CFighterSonic *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_CliffCatchSub(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_HI_FALL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_N_FALL);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,CliffCatch_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

