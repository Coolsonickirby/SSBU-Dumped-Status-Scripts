
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiigunnerSpecialN1Cancel_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) == 0) goto LAB_710021e600;
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (this->moduleAccessor,(bool)(bVar1 & 1));
      pLVar7 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_710021e600:
  lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) == 0) goto LAB_710021ea14;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710021eeec;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710021eeec;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,aLStack96);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710021eeec;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) != 0) goto LAB_710021e750;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710021eeec;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710021e750:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710021eeec;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710021eeec;
    }
  }
LAB_710021ea14:
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) goto LAB_710021ebd0;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
      uVar4 = lib::L2CValue::as_integer(pLVar7);
      uVar4 = app::sv_battle_object::kind(uVar4);
      lib::L2CValue::L2CValue(aLStack144,uVar4);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
      bVar1 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0x1a85cad765);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x240e56e9a9);
        lib::L2CValue::operator_(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      HVar9 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,HVar9);
      uVar8 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
        lib::L2CValue::L2CValue(aLStack176,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_710021eeec;
      }
      lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x11676d5b78);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
      lib::L2CValue::L2CValue
                (aLStack176,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar7 = aLStack128;
LAB_710021eedc:
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
LAB_710021ebd0:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x151130af67);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          pLVar7 = aLStack80;
          goto LAB_710021eedc;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710021eeec:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

