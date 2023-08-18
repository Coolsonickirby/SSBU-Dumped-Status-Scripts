
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHiTurn_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_710001cbcc;
    }
    iVar3 = 1;
    goto LAB_710001ce64;
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710001cbcc:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack96,0x284f8d34e0);
      uVar4 = lib::L2CValue::as_integer(aLStack64);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack64,aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack64,fVar6);
        uVar4 = lib::L2CValue::operator_(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_2);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          goto LAB_710001ce44;
        }
      }
      else {
        fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack64,fVar6);
        lib::L2CValue::operator_(aLStack80);
        uVar4 = lib::L2CValue::operator_(aLStack64,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_FALL_TYPE_2);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
LAB_710001ce44:
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
      lib::L2CValue::_L2CValue(aLStack80);
    }
    FUN_710001a8c0(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_HI_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 0;
LAB_710001ce64:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

