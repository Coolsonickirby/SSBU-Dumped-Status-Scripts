
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PitbSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_DIR_S);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x112698d673);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1550c5226c);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x72bb11d73);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_BOW_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xb33a11f9a);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_BOW_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x10c4e96693);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x14455ce9d3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x680485819);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_BOW_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xa270dc6ce);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_N_SHOOT_INT_BOW_MOTION_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,PitbSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

