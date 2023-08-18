
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHiLoop_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710001baec:
      fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,fVar8);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0x1fc3b94fb7);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack96);
      uVar6 = lib::L2CValue::operator_(aLStack64,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,false);
        bVar2 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1))
        ;
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,true);
        bVar2 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1))
        ;
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::as_integer(aLStack64);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar2 & 1))
      ;
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,fVar8);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x1e6c05ac8f);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar6 = lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          FUN_710001c000(this);
          lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack96,0x24a823470a);
          uVar6 = lib::L2CValue::as_integer(aLStack80);
          uVar7 = lib::L2CValue::as_integer(aLStack96);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack64,fVar8);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,fVar8);
          lib::L2CValue::operator_(aLStack64,aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::GroundModule__set_offset_x_impl(this->moduleAccessor,fVar8);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          FUN_710001a8c0(this);
          FUN_710001b250(this);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack64);
          return;
        }
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_HI_BOUND);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_HI_END);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710001baec;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

