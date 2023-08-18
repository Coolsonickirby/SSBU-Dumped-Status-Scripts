
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiigunnerSpecialN1Hold_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
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
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) goto LAB_710021f22c;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
LAB_710021f6a0:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
LAB_710021f940:
        bVar1 = false;
        goto LAB_710021f948;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
        lib::L2CValue::operator_(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_AIR);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_710021f814;
          }
        }
      }
      lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) goto LAB_710021f940;
      lib::L2CValue::L2CValue(aLStack112,0xb99cc3fbc);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JUMP_AERIAL_TYPE_NORMAL);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FLY);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator_(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) goto LAB_710021f3b4;
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      else {
LAB_710021f3b4:
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator_(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_710021f814;
          }
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator_(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_710021f814;
          }
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_710021f814;
          }
        }
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_710021f6a0;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIGUNNER_STATUS_GUNNER_CHARGE_WORK_INT_CANCEL_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
LAB_710021f814:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar1 = true;
LAB_710021f948:
      lib::L2CValue::L2CValue(aLStack144,bVar1);
    }
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_CANCEL);
      lib::L2CValue::L2CValue(aLStack224,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
LAB_710021fff8:
      iVar3 = 0;
      goto LAB_710021f26c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_710021faa0;
      lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xfd502ea5a);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
LAB_710021fb9c:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
LAB_710021faa0:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x13de9b678e);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
          goto LAB_710021fb9c;
        }
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
LAB_710021fe4c:
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      FUN_710021dd60(aLStack128,this);
      lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::operator_(aLStack80,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,0x322bb60c04);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160,0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) goto LAB_710021ffbc;
      iVar3 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_710021dd60(aLStack80,this);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER | _FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
        lib::L2CValue::operator_(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_FIRE);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack128,1);
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_CANCEL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack128,1);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) goto LAB_710021fe4c;
LAB_710021ffbc:
      iVar3 = 1;
    }
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar7 & 1) != 0) goto LAB_710021fff8;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710021f22c:
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_FIRE);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  iVar3 = 1;
LAB_710021f26c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

