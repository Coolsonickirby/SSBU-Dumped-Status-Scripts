
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPlizardon::status::SpecialN_main_loop(L2CFighterPlizardon *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  undefined auStack304 [32];
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
  
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack432,0);
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack448,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710000fcc4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100010eb0;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710000fcc4:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack464,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack480,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100010eb0;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack496,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack512,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100010eb0;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_GENE_BREATH);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_GENE_BREATH);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_GENERATE_ARTICLE_BREATH);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_enable_impl(*ppBVar10,iVar4,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack400,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::operator_(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack400);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
LAB_7100010004:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack256,aLStack96);
          goto LAB_710001008c;
        }
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100010004;
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack256,aLStack96);
LAB_710001008c:
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710001016c;
LAB_710001050c:
      lib::L2CValue::L2CValue(aLStack528,0);
    }
    else {
LAB_710001016c:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_START);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_END);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar3 & 1U) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
              lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
              uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
                iVar4 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar4);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue
                          (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
                iVar4 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar4);
              }
              else {
                lib::L2CValue::L2CValue
                          (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
                iVar4 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar4);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue
                          (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
                iVar4 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar4);
              }
              lVar9 = -0x50;
              goto LAB_7100010508;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack96);
            lVar9 = -0x70;
LAB_7100010508:
            lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_MAIN_COUNT)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack160);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue(aLStack144,iVar4);
            lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
            lib::L2CValue::L2CValue(aLStack208,0xa764aafe3);
            uVar6 = lib::L2CValue::as_integer(aLStack192);
            uVar8 = lib::L2CValue::as_integer(aLStack208);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
            lib::L2CValue::L2CValue(aLStack176,iVar4);
            uVar6 = lib::L2CValue::operator_(aLStack176,aLStack144);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_END);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              iVar5 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack528,1);
              goto LAB_7100010518;
            }
          }
        }
        goto LAB_710001050c;
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) goto LAB_710001050c;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack528,1);
    }
LAB_7100010518:
    lib::L2CValue::_L2CValue(aLStack112);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack528);
    lib::L2CValue::_L2CValue(aLStack528);
    if ((bVar3 & 1U) != 0) goto LAB_7100010538;
  }
  else {
LAB_7100010538:
    FUN_710000ecb0(this);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_INSTANCE_WORK_ID_FLOAT_BREATH_SPEED_MUL);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::operator_(aLStack352,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::operator_(aLStack432,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0.3);
    uVar6 = lib::L2CValue::operator_(aLStack96,aLStack352);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
      uVar6 = lib::L2CValue::operator__(aLStack432,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_MAIN_COUNT);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack128,iVar4);
        lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack192,0xe27c3a449);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar8 = lib::L2CValue::as_integer(aLStack192);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack160,iVar4);
        lib::L2CValue::operator_(aLStack128,aLStack160);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_CAMERA_QUAKE_KIND_SMALL_HF);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::CameraModule__req_quake_impl(*ppBVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_FLOAT_GENE_ANGLE);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    pLVar7 = aLStack96;
    lib::L2CValue::operator_((L2CValue *)auStack304,pLVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_abs((L2CAgent *)auStack304,pLVar7);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    uVar6 = lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x12cf45c00f);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack416,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x12a5f5e0fd);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack272,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x145968ecdb);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack384,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::operator_(aLStack384,(L2CValue *)auStack304);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack112);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack544,(L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::operator_(aLStack272);
      lib::L2CValue::L2CValue(aLStack576,aLStack416);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_FLOAT_GENE_ANGLE);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_HEAD_NODE);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar9);
    lib::L2CValue::operator_(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator__(aLStack336,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x1509198eeb);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack224,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack224);
      lib::L2CValue::L2CValue(aLStack96,0.5);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,45.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack224);
      lib::L2CValue::operator_(aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0.5);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,20.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack368,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),aLStack224);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,45.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack320,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_FLOAT_HEAD_NODE_ROTATE_X);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack368,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_FLOAT_HEAD_NODE_ROTATE_Y);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack320,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_FLOAT_HEAD_NODE_ROTATE_Z);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100010eb0:
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

