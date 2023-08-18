
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialLwHold_main_loop(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
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
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
LAB_7100014b78:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack336,FIGHTER_STATUS_KIND_ESCAPE_AIR);
            lib::L2CValue::L2CValue(aLStack352,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            goto LAB_7100015684;
          }
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,iVar5);
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar5 = lib::L2CValue::as_integer(aLStack368);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack128,iVar5);
        uVar8 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          bVar4 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack384,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack400,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
              goto LAB_7100015684;
            }
          }
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,iVar5);
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar5 = lib::L2CValue::as_integer(aLStack368);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack128,iVar5);
        uVar8 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack416,FIGHTER_STATUS_KIND_JUMP_AERIAL);
            lib::L2CValue::L2CValue(aLStack432,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue(aLStack416);
            goto LAB_7100015684;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar4 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::L2CValue(aLStack368,_FIGHTER_ROBOT_STATUS_GYRO_WORK_FLOAT_CHARGY_MAX_VALUE);
      iVar5 = lib::L2CValue::as_integer(aLStack368);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      uVar8 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) {
LAB_71000151d4:
        bVar4 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar3 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
            uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar8 & 1) != 0) goto LAB_71000151f4;
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) != 0) {
            lVar2 = -0x60;
            goto LAB_7100015678;
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar8 & 1) != 0) goto LAB_71000151fc;
        }
        else {
LAB_71000151f4:
          lib::L2CValue::_L2CValue(aLStack112);
LAB_71000151fc:
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
            GVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar3 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0x1390059fd6);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack128,1.0);
              lib::L2CValue::L2CValue(aLStack368,false);
              HVar9 = lib::L2CValue::as_hash(aLStack96);
              fVar10 = (float)lib::L2CValue::as_number(aLStack112);
              fVar11 = (float)lib::L2CValue::as_number(aLStack128);
              bVar4 = lib::L2CValue::as_bool(aLStack368);
              app::lua_bind::MotionModule__change_motion_impl
                        (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar4 & 1),0.0,false,false)
              ;
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
              iVar5 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0x1390059fd6);
              HVar9 = lib::L2CValue::as_hash(aLStack96);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar3 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0xf9b9c1202);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack128,1.0);
              lib::L2CValue::L2CValue(aLStack368,false);
              HVar9 = lib::L2CValue::as_hash(aLStack96);
              fVar10 = (float)lib::L2CValue::as_number(aLStack112);
              fVar11 = (float)lib::L2CValue::as_number(aLStack128);
              bVar4 = lib::L2CValue::as_bool(aLStack368);
              app::lua_bind::MotionModule__change_motion_impl
                        (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar4 & 1),0.0,false,false)
              ;
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
              iVar5 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0xf9b9c1202);
              HVar9 = lib::L2CValue::as_hash(aLStack96);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
            }
          }
          lVar2 = -0x50;
LAB_7100015678:
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        }
        FUN_7100013310(this);
        goto LAB_7100015684;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) goto LAB_71000151d4;
        lib::L2CValue::L2CValue(aLStack512,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack528,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack528);
        pLVar7 = aLStack512;
      }
      else {
        lib::L2CValue::L2CValue(aLStack480,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack496,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        pLVar7 = aLStack480;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack464,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack464);
      pLVar7 = aLStack448;
    }
LAB_7100015058:
    lib::L2CValue::_L2CValue(pLVar7);
    iVar5 = 1;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
    lib::L2CValue::operator_(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar3 & 1U) == 0) {
LAB_7100014758:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
LAB_7100014818:
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator_(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue(aLStack224,true);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + '@'),(L2CValue)(cVar1 + '0'));
            lib::L2CValue::_L2CValue(aLStack224);
            pLVar7 = aLStack208;
            goto LAB_7100015058;
          }
        }
        lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack240,FIGHTER_STATUS_KIND_GUARD_ON);
            lib::L2CValue::L2CValue(aLStack256,true);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + ' '),(L2CValue)(cVar1 + '\x10'));
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            goto LAB_7100015684;
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar3 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack288,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            goto LAB_7100015684;
          }
        }
        bVar4 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
              lib::L2CValue::L2CValue(aLStack320,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack304);
              goto LAB_7100015684;
            }
          }
        }
        goto LAB_7100014b78;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) goto LAB_7100014818;
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_ESCAPE_F);
      lib::L2CValue::L2CValue(aLStack192,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar7 = aLStack176;
      goto LAB_7100015058;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) goto LAB_7100014758;
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_KIND_ESCAPE);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_7100015684:
    iVar5 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

