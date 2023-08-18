
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71001a6740();
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xd20cd6527);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x11c0a0c60e);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__set_no_cliff_stop_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

