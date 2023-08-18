
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWiifit::status::SpecialNHold_main_loop(L2CFighterWiifit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue LVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  GroundCorrectKind GVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  ulong uVar11;
  Hash40 HVar12;
  BattleObjectModuleAccessor *pBVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
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
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  ppBVar14 = &this->moduleAccessor;
  fVar15 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack96,fVar15);
  lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar5 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack96,uVar5);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack224,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_LEVEL_RATIO);
  iVar6 = lib::L2CValue::as_integer(aLStack224);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar15);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::operator_(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_FLAG_SUN_BULLET_ABSORBED);
  iVar6 = lib::L2CValue::as_integer(aLStack224);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar6);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar4 & 1U) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar10 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    LVar1 = SUB81(&stack0xfffffffffffffff0,0);
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,LVar1,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lVar2 = -0x100;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar1 + ' '),(L2CValue)((char)LVar1 + '\x10'));
      lib::L2CValue::_L2CValue(aLStack256);
      lVar2 = -0xe0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100019ab0;
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar10 = lib::L2CValue::operator__(aLStack176,aLStack192);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack304,0x1b44a04660);
    uVar10 = lib::L2CValue::as_integer(aLStack224);
    uVar11 = lib::L2CValue::as_integer(aLStack304);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar10,uVar11);
    lib::L2CValue::L2CValue(aLStack96,fVar15);
    fVar15 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar14,fVar15);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,3.0);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar10 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::operator_(aLStack192,aLStack208);
    uVar10 = lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::operator_(aLStack224,aLStack176);
      lib::L2CValue::operator_(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack224);
      fVar15 = (float)lib::L2CValue::as_number(aLStack208);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar14,fVar15);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack320,0x1b44a04660);
  uVar10 = lib::L2CValue::as_integer(aLStack304);
  uVar11 = lib::L2CValue::as_integer(aLStack320);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar10,uVar11);
  lib::L2CValue::L2CValue(aLStack224,fVar15);
  lib::L2CValue::operator_(aLStack208,aLStack224);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::operator_(aLStack192,aLStack128);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_LEVEL_RATIO);
    fVar15 = (float)lib::L2CValue::as_number(aLStack224);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar10 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x11e7858480);
      HVar12 = lib::L2CValue::as_hash(aLStack96);
      iVar6 = app::lua_bind::SoundModule__play_se_impl(*ppBVar14,HVar12,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack336,iVar6);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x11e7858480);
      lib::L2CValue::L2CValue(aLStack224,0x1e);
      HVar12 = lib::L2CValue::as_hash(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::SoundModule__set_play_inhivit_impl(*ppBVar14,HVar12,uVar5);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
      app::FighterUtil::flash_eye_info(pBVar13);
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END);
      lib::L2CValue::L2CValue(aLStack368,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100019ab0;
    }
  }
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar9,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar4 & 1U) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((bVar4 & 1U) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar10 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar10 & 1) == 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
          iVar6 = lib::L2CValue::as_integer(aLStack304);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
            iVar6 = lib::L2CValue::as_integer(aLStack224);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack224);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack608,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack624,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack624);
            lib::L2CValue::_L2CValue(aLStack608);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100019ab0;
          }
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar6 = lib::L2CValue::as_integer(aLStack224);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack96,iVar6);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar6 = lib::L2CValue::as_integer(aLStack320);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack304,iVar6);
          uVar10 = lib::L2CValue::operator_(aLStack96,aLStack304);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar10 & 1) != 0) {
            bVar3 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar14);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar4 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack224,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL)
              ;
              iVar6 = lib::L2CValue::as_integer(aLStack224);
              bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
              bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack224);
              if ((bVar4 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
                lib::L2CValue::L2CValue
                          (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack96);
                iVar7 = lib::L2CValue::as_integer(aLStack224);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL);
                lib::L2CValue::L2CValue
                          (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
                iVar6 = lib::L2CValue::as_integer(aLStack96);
                iVar7 = lib::L2CValue::as_integer(aLStack224);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
              }
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack640,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
              lib::L2CValue::L2CValue(aLStack656,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack656);
              lib::L2CValue::_L2CValue(aLStack640);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              goto LAB_7100019ab0;
            }
          }
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar6 = lib::L2CValue::as_integer(aLStack224);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack96,iVar6);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar6 = lib::L2CValue::as_integer(aLStack320);
          iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack304,iVar6);
          uVar10 = lib::L2CValue::operator_(aLStack96,aLStack304);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
            iVar6 = lib::L2CValue::as_integer(aLStack224);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack224);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            else {
              lib::L2CValue::L2CValue
                        (aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_AIR_JUMP_AERIAL);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack672,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
            lib::L2CValue::L2CValue(aLStack688,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
            lib::L2CValue::_L2CValue(aLStack688);
            lib::L2CValue::_L2CValue(aLStack672);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100019ab0;
          }
        }
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
          iVar6 = lib::L2CValue::as_integer(aLStack304);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar10 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack432,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100019ab0;
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
          iVar6 = lib::L2CValue::as_integer(aLStack304);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar10 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F)
            ;
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack448,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack464,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
          lib::L2CValue::_L2CValue(aLStack464);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100019ab0;
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
          iVar6 = lib::L2CValue::as_integer(aLStack304);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar10 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B)
            ;
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack480,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack496,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack480);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100019ab0;
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar4 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar10 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack512,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack528,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack528);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100019ab0;
        }
        bVar3 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar14);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar9,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((bVar4 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar10 = lib::L2CValue::operator__(aLStack224,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack224);
            if ((uVar10 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
              lib::L2CValue::L2CValue
                        (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
              iVar6 = lib::L2CValue::as_integer(aLStack96);
              iVar7 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
            }
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack544,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
            lib::L2CValue::L2CValue(aLStack560,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::_L2CValue(aLStack560);
            lib::L2CValue::_L2CValue(aLStack544);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_7100019ab0;
          }
        }
        lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
          iVar6 = lib::L2CValue::as_integer(aLStack224);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar14,iVar6);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_SPECIAL_N_CANCEL_TYPE_GROUND_GUARD);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_WIIFIT_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            iVar7 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar6,iVar7);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack576,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack592,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack592);
          lib::L2CValue::_L2CValue(aLStack576);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100019ab0;
        }
      }
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar14);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
      lib::L2CValue::operator_(aLStack224);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar4 & 1U) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar10 = lib::L2CValue::operator__(pLVar9,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar10 & 1) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar10 = lib::L2CValue::operator__(pLVar9,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar8 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::GroundModule__correct_impl(*ppBVar14,GVar8);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar14,iVar6);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xe06860a20);
            HVar12 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar14,HVar12,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack96);
            fVar15 = (float)lib::L2CValue::as_number(aLStack208);
            app::lua_bind::MotionModule__set_rate_impl(*ppBVar14,fVar15);
          }
        }
        else {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar10 = lib::L2CValue::operator__(pLVar9,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
            GVar8 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::GroundModule__correct_impl(*ppBVar14,GVar8);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar14,iVar6);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0x1244d4ffef);
            HVar12 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar14,HVar12,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack96);
            fVar15 = (float)lib::L2CValue::as_number(aLStack208);
            app::lua_bind::MotionModule__set_rate_impl(*ppBVar14,fVar15);
          }
        }
      }
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
      lib::L2CValue::operator_(pLVar9);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar4 & 1U) != 0) {
        FUN_71000191c0(this);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100019ab0;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack400,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_7100019ab0:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

