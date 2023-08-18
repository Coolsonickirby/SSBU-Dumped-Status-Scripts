
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamusd::status::SpecialNH_main_loop(L2CFighterSamusd *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xb9cb77d9f);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
      goto LAB_71000223c8;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xf6b2578a8);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
LAB_71000223c8:
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    bVar2 = 1;
  }
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1) == 0) {
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
      lib::L2CValue::operator_(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
        lib::L2CValue::operator_(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator_(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar1 & 1U) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
            lib::L2CValue::operator_(pLVar6,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar1 & 1U) == 0) {
              bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) != 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
                lib::L2CValue::operator_(pLVar6,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
                lib::L2CValue::_L2CValue(aLStack128);
                if ((bVar1 & 1U) != 0) {
                  lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::_L2CValue(aLStack128);
                  if ((uVar7 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
                    lib::L2CValue::L2CValue
                              (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                    iVar4 = lib::L2CValue::as_integer(aLStack112);
                    iVar5 = lib::L2CValue::as_integer(aLStack128);
                    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
                  }
                  else {
                    lib::L2CValue::L2CValue
                              (aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
                    lib::L2CValue::L2CValue
                              (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                    iVar4 = lib::L2CValue::as_integer(aLStack112);
                    iVar5 = lib::L2CValue::as_integer(aLStack128);
                    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
                  }
                  lib::L2CValue::_L2CValue(aLStack128);
                  lib::L2CValue::_L2CValue(aLStack112);
                  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
                  lib::L2CValue::L2CValue(aLStack384,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
                  lib::L2CValue::_L2CValue(aLStack384);
                  pLVar6 = aLStack368;
                  goto LAB_7100022708;
                }
              }
              lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) == 0) goto LAB_7100023248;
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
              iVar4 = lib::L2CValue::as_integer(aLStack128);
              bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                (this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((bVar1 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
                lib::L2CValue::L2CValue
                          (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar4 = lib::L2CValue::as_integer(aLStack112);
                iVar5 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_GUARD);
                lib::L2CValue::L2CValue
                          (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar4 = lib::L2CValue::as_integer(aLStack112);
                iVar5 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
              }
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack400,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
              lib::L2CValue::L2CValue(aLStack416,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
              lib::L2CValue::_L2CValue(aLStack416);
              pLVar6 = aLStack400;
            }
            else {
              lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
              lib::L2CValue::L2CValue(aLStack112,true);
              uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
                lib::L2CValue::L2CValue
                          (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar4 = lib::L2CValue::as_integer(aLStack112);
                iVar5 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP)
                ;
                lib::L2CValue::L2CValue
                          (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar4 = lib::L2CValue::as_integer(aLStack112);
                iVar5 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
              }
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack336,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
              lib::L2CValue::L2CValue(aLStack352,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
              lib::L2CValue::_L2CValue(aLStack352);
              pLVar6 = aLStack336;
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
            iVar4 = lib::L2CValue::as_integer(aLStack144);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar4);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack112,false);
            uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar4 = lib::L2CValue::as_integer(aLStack112);
              iVar5 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar4 = lib::L2CValue::as_integer(aLStack112);
              iVar5 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
            }
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack304,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
            lib::L2CValue::L2CValue(aLStack320,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
            lib::L2CValue::_L2CValue(aLStack320);
            pLVar6 = aLStack304;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F)
            ;
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
          }
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
          lib::L2CValue::L2CValue(aLStack288,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
          lib::L2CValue::_L2CValue(aLStack288);
          pLVar6 = aLStack272;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
        lib::L2CValue::L2CValue(aLStack256,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar6 = aLStack240;
      }
      goto LAB_7100022708;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
        lib::L2CValue::L2CValue(aLStack448,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        pLVar6 = aLStack432;
        goto LAB_7100022708;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      uVar7 = lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL)
            ;
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
          }
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack464,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
          lib::L2CValue::L2CValue(aLStack480,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::_L2CValue(aLStack480);
          pLVar6 = aLStack464;
          goto LAB_7100022708;
        }
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      uVar7 = lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack496,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
        lib::L2CValue::L2CValue(aLStack512,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack512);
        pLVar6 = aLStack496;
        goto LAB_7100022708;
      }
    }
LAB_7100023248:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
LAB_71000233e8:
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,0);
      lib::L2CValue::L2CValue(aLStack144,0);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::operator_(aLStack128,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      FUN_7100005770(aLStack160,this);
      lib::L2CValue::operator_(aLStack144,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::operator_(aLStack128,aLStack144);
      lib::L2CValue::operator_(aLStack112,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176,0x26b38955ef);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192,0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar7 = lib::L2CValue::operator__(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar7 & 1) == 0) goto LAB_7100023554;
      iVar4 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack128);
      FUN_7100005770(aLStack128,this);
      lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_E);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack160,1);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) != 0) goto LAB_71000233e8;
LAB_7100023554:
      iVar4 = 1;
    }
    lib::L2CValue::L2CValue(aLStack528,iVar4);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar7 = lib::L2CValue::operator__(aLStack528,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack528);
    if ((uVar7 & 1) != 0) {
      iVar4 = 0;
      goto LAB_7100022714;
    }
  }
  else {
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf8c9d55af);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xb7b0f5098);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_F);
    lib::L2CValue::L2CValue(aLStack224,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar6 = aLStack208;
LAB_7100022708:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  iVar4 = 1;
LAB_7100022714:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

