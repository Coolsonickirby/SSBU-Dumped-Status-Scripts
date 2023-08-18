
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPit::status::SpecialLwEnd_main(L2CFighterPit *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_FLAG_SHIELD_BREAK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_FLAG_NO_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x100a1e2294);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x148babadd4);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x1ae5354966);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x1e7214b8dd);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x1261db363a);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x16eca5663b);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_FLAG_SHIELD_BREAK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_FLAG_NO_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x10f0111ff7);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x1471a490b7);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x1a19b5a6ab);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x1e8e945710);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
        lVar5 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x129bd40b59);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_GROUND);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x1616aa5b58);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_STATUS_SPECIAL_LW_END_INT_MOTION_AIR);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

