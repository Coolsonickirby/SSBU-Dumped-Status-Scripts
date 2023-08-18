
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMario::status::SpecialLwCharge_main_loop(L2CFighterMario *this,L2CValue *return_value)

{
  long lVar1;
  L2CValue LVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
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
  
  ppBVar12 = &this->moduleAccessor;
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    pLVar11 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_7100005e54;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lVar1 = -0x70;
      goto LAB_7100006380;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) goto LAB_7100005e54;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100005e54:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIO_STATUS_PUMP_CHARGE_FLAG_FIRST);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x1390059fd6);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        fVar14 = (float)lib::L2CValue::as_number(aLStack144);
        bVar3 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar9,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_CHARGE_FLAG_FIRST);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1390059fd6);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar9,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_TRANSITION_TERM_ID_FALL);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_TRANSITION_TERM_ID_WAIT);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar12,iVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIO_STATUS_PUMP_CHARGE_FLAG_FIRST);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xf9b9c1202);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        fVar14 = (float)lib::L2CValue::as_number(aLStack144);
        bVar3 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar9,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_CHARGE_FLAG_FIRST);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xf9b9c1202);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar9,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_TRANSITION_TERM_ID_WAIT);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARIO_STATUS_PUMP_TRANSITION_TERM_ID_FALL);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar12,iVar5);
    }
    lVar1 = -0x60;
LAB_7100006380:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  pLVar11 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x1f);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar8,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  LVar2 = SUB81(&stack0xfffffffffffffff0,0);
  if ((bVar4 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
LAB_7100006a84:
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) goto LAB_7100006410;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x20);
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack480,FIGHTER_STATUS_KIND_ESCAPE_AIR);
            lib::L2CValue::L2CValue(aLStack496,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
            lib::L2CValue::_L2CValue(aLStack496);
            pLVar8 = aLStack480;
            goto LAB_710000640c;
          }
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack144,iVar5);
        uVar7 = lib::L2CValue::operator_(aLStack112,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) {
          bVar3 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar4 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack512,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack528,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
              lib::L2CValue::_L2CValue(aLStack528);
              pLVar8 = aLStack512;
              goto LAB_710000640c;
            }
          }
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack144,iVar5);
        uVar7 = lib::L2CValue::operator_(aLStack112,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack544,FIGHTER_STATUS_KIND_JUMP_AERIAL);
            lib::L2CValue::L2CValue(aLStack560,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::_L2CValue(aLStack560);
            pLVar8 = aLStack544;
            goto LAB_710000640c;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack432,0x17e41b2f1e);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar10 = lib::L2CValue::as_integer(aLStack432);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack144,iVar5);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) goto LAB_7100006410;
      lib::L2CValue::L2CValue(aLStack576,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack592,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack592);
      pLVar8 = aLStack576;
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_KIND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack224,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)((char)LVar2 + '@'),(L2CValue)((char)LVar2 + '0'));
          lib::L2CValue::_L2CValue(aLStack224);
          pLVar8 = aLStack208;
          goto LAB_710000640c;
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_ESCAPE_F);
          lib::L2CValue::L2CValue(aLStack256,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)((char)LVar2 + ' '),(L2CValue)((char)LVar2 + '\x10'));
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar8 = aLStack240;
          goto LAB_710000640c;
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x21);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack272,FIGHTER_STATUS_KIND_ESCAPE_B);
          lib::L2CValue::L2CValue(aLStack288,true);
          lua2cpp::L2CFighterBase::change_status(this,LVar2,(L2CValue)0xe0);
          lib::L2CValue::_L2CValue(aLStack288);
          pLVar8 = aLStack272;
          goto LAB_710000640c;
        }
      }
      lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x20);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack368,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack384,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
            lib::L2CValue::_L2CValue(aLStack384);
            pLVar8 = aLStack368;
            goto LAB_710000640c;
          }
        }
        bVar3 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar11,0x20);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
              lib::L2CValue::L2CValue(aLStack416,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
              lib::L2CValue::_L2CValue(aLStack416);
              pLVar8 = aLStack400;
              goto LAB_710000640c;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack432,0x17e41b2f1e);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        uVar10 = lib::L2CValue::as_integer(aLStack432);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar7,uVar10);
        lib::L2CValue::L2CValue(aLStack144,iVar5);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) == 0) goto LAB_7100006a84;
        lib::L2CValue::L2CValue(aLStack448,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack464,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack464);
        pLVar8 = aLStack448;
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack336,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack352,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack352);
          pLVar8 = aLStack336;
        }
        else {
          lib::L2CValue::L2CValue(aLStack304,FIGHTER_STATUS_KIND_GUARD_ON);
          lib::L2CValue::L2CValue(aLStack320,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack320);
          pLVar8 = aLStack304;
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_SHOOT);
    lib::L2CValue::L2CValue(aLStack192,true);
    lua2cpp::L2CFighterBase::change_status
              (this,(L2CValue)((char)LVar2 + '`'),(L2CValue)((char)LVar2 + 'P'));
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar8 = aLStack176;
  }
LAB_710000640c:
  lib::L2CValue::_L2CValue(pLVar8);
LAB_7100006410:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

