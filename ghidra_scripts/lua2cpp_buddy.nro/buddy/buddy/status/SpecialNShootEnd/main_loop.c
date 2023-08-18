
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootEnd_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_NONE);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_S);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_HI);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_7100024c4c;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_LW);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_7100024c4c;
    }
    else {
LAB_7100024c4c:
      lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_NONE);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_NONE);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_S);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_SPECIAL_S_LR);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        fVar9 = (float)lib::L2CValue::as_number(aLStack80);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar9);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
        app::lua_bind::ControlModule__reset_turn_lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025264;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_HI);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025264;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_LW);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100025264;
      }
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100024fb0;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100025264;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100024fb0:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100025264;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100025264;
    }
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x13c442747a);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
      goto LAB_7100025250;
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x17b3c83abc);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
LAB_7100025250:
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100025264:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

