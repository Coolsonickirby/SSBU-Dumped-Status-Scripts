
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EdgeSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack128,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack176,aLStack96);
    lib::L2CValue::L2CValue(aLStack192,aLStack128);
    lib::L2CValue::L2CValue(aLStack208,aLStack144);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
              (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,false);
    FUN_7100114cf0(this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_REQUEST_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_REQUEST_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CHARGE_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_SPECIAL_N_NONE);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100117060;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100117060;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100117060;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0x12ad67c2c8);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar5 = lib::L2CValue::operator__(aLStack128,pLVar6);
  if ((uVar5 & 1) == 0) {
LAB_7100116f18:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack272,0x18ecc76f9d);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      uVar5 = lib::L2CValue::operator_(aLStack144,aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_(aLStack96,aLStack144);
      }
      lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar3 = SITUATION_KIND_AIR;
    if ((bVar2 & 1U) == 0) {
LAB_7100116a20:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) goto LAB_7100116f18;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N_JUMP_CANCEL);
        lib::L2CValue::L2CValue(aLStack144,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack144,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
            lib::L2CValue::L2CValue
                      (aLStack256,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack256);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_7100116e84;
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack144,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
            lib::L2CValue::L2CValue
                      (aLStack256,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack256);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_7100116e84;
          }
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack144,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue
                      (aLStack256,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer(aLStack256);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_7100116e84;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack256);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_7100116e84:
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          goto LAB_7100116f18;
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack256,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack144);
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack96,pLVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_GUARD_ON);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack256);
        if ((uVar5 & 1) == 0) goto LAB_7100116a20;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_EDGE_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100117060:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

