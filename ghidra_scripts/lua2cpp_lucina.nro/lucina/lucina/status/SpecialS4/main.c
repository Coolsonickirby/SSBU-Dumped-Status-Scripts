
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::SpecialS4_main(L2CFighterLucina *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_HI);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc0dd4fd14);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x10b59eca1e);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xdcbee050c);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x112b83a625);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xd558dfd6b);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x11b5e05e42);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialS4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

