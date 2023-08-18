
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwSelect_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue LVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  FighterBraveSpecialLwCommand FVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Fighter *pFVar10;
  BattleObjectModuleAccessor *pBVar11;
  long lVar12;
  Hash40 HVar13;
  ulong uVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_AUTO_CANCEL);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  ppBVar15 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  iVar5 = SITUATION_KIND_AIR;
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  if ((bVar3 & 1U) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,iVar5);
    uVar9 = lib::L2CValue::operator__(aLStack112,pLVar8);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar1 + -0x80),(L2CValue)((char)LVar1 + 'p'));
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar8 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar1 + '`'),(L2CValue)((char)LVar1 + 'P'));
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar8 = aLStack176;
    }
    goto LAB_710002632c;
  }
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
  lib::L2CValue::operator_(pLVar8,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
    lib::L2CValue::operator_(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar9 = lib::L2CValue::operator__(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_DECIDE);
      iVar5 = lib::L2CValue::as_integer(aLStack224);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar3 & 1U) != 0) goto LAB_7100026350;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_GUARD_CANCEL);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar3 & 1U) != 0) goto LAB_7100026610;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100026610:
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_GUARD_CANCEL);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
          lib::L2CValue::L2CValue(aLStack352,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack352);
          pLVar8 = aLStack336;
          goto LAB_710002632c;
        }
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_AIR);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack368,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
          lib::L2CValue::L2CValue(aLStack384,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack384);
          pLVar8 = aLStack368;
          goto LAB_710002632c;
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_JUMP_CANCEL);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar3 & 1U) != 0) goto LAB_7100026894;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100026894:
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar5);
          lib::L2CValue::L2CValue(aLStack112,iVar5);
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar5 = lib::L2CValue::as_integer(aLStack224);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar5);
          lib::L2CValue::L2CValue(aLStack208,iVar5);
          uVar9 = lib::L2CValue::operator_(aLStack112,aLStack208);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar15,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack432,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
              lib::L2CValue::L2CValue(aLStack448,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
              lib::L2CValue::_L2CValue(aLStack448);
              pLVar8 = aLStack432;
              goto LAB_710002632c;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar15,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            iVar6 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack400,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
            lib::L2CValue::L2CValue(aLStack416,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
            lib::L2CValue::_L2CValue(aLStack416);
            pLVar8 = aLStack400;
LAB_710002632c:
            lib::L2CValue::_L2CValue(pLVar8);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            return;
          }
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_JUMP_CANCEL);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
LAB_7100026c90:
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x11bb8d9726);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION);
            lVar12 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar12,iVar5);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0x12a6a3f625);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack208,1.0);
            lib::L2CValue::L2CValue(aLStack224,false);
            HVar13 = lib::L2CValue::as_hash(aLStack112);
            fVar16 = (float)lib::L2CValue::as_number(aLStack128);
            fVar17 = (float)lib::L2CValue::as_number(aLStack208);
            bVar2 = lib::L2CValue::as_bool(aLStack224);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar15,HVar13,fVar16,fVar17,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack128);
            lVar12 = -0x60;
            goto LAB_7100026e00;
          }
        }
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) goto LAB_7100026c90;
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION_AIR);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        lVar12 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar15,iVar5);
        lib::L2CValue::L2CValue(aLStack112,lVar12);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,1.0);
        lib::L2CValue::L2CValue(aLStack464,true);
        lib::L2CValue::L2CValue(aLStack480,6.0);
        HVar13 = lib::L2CValue::as_hash(aLStack112);
        fVar16 = (float)lib::L2CValue::as_number(aLStack208);
        fVar17 = (float)lib::L2CValue::as_number(aLStack224);
        bVar2 = lib::L2CValue::as_bool(aLStack464);
        fVar18 = (float)lib::L2CValue::as_number(aLStack480);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar15,HVar13,fVar16,fVar17,(bool)(bVar2 & 1),fVar18,false,false);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack112);
        lVar12 = -0x70;
LAB_7100026e00:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar12));
      }
      lib::L2CValue::L2CValue(aLStack496,0x1018dfb2f4);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack496);
      FUN_7100027810(aLStack112,this);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        HVar13 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
        lib::L2CValue::L2CValue(aLStack128,HVar13);
        lib::L2CValue::L2CValue(aLStack112,0x11bb8d9726);
        uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          HVar13 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
          lib::L2CValue::L2CValue(aLStack208,HVar13);
          lib::L2CValue::L2CValue(aLStack112,0x15cdd06339);
          uVar9 = lib::L2CValue::operator__(aLStack208,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) == 0) goto LAB_710002718c;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue
                  (aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_INPUT_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar5);
        lib::L2CValue::L2CValue(aLStack128,iVar5);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION);
          iVar5 = lib::L2CValue::as_integer(aLStack208);
          lVar12 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar15,iVar5);
          lib::L2CValue::L2CValue(aLStack128,lVar12);
          lib::L2CValue::L2CValue(aLStack112,0x11bb8d9726);
          uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack208);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack528,0x12c863b667);
            lib::L2CValue::L2CValue(aLStack544,0x16451de666);
            lib::L2CValue::L2CValue(aLStack560,false);
            lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                      (this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::_L2CValue(aLStack512);
            lib::L2CValue::_L2CValue(aLStack560);
            lib::L2CValue::_L2CValue(aLStack544);
            lib::L2CValue::_L2CValue(aLStack528);
            lib::L2CValue::L2CValue(aLStack112,0x12c863b667);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION);
            lVar12 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar12,iVar5);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,0x16451de666);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION_AIR);
            lVar12 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar12,iVar5);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack208,0x1a4880c9fe);
          uVar9 = lib::L2CValue::as_integer(aLStack128);
          uVar14 = lib::L2CValue::as_integer(aLStack208);
          iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar9,uVar14);
          lib::L2CValue::L2CValue(aLStack112,iVar5);
          lib::L2CValue::L2CValue
                    (aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_INPUT_COUNT);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          iVar6 = lib::L2CValue::as_integer(aLStack224);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar5,iVar6);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack128);
        }
      }
LAB_710002718c:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar9 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x15cdd06339);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack208,1.0);
          lib::L2CValue::L2CValue(aLStack224,true);
          HVar13 = lib::L2CValue::as_hash(aLStack112);
          fVar16 = (float)lib::L2CValue::as_number(aLStack128);
          fVar17 = (float)lib::L2CValue::as_number(aLStack208);
          bVar2 = lib::L2CValue::as_bool(aLStack224);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar15,HVar13,fVar16,fVar17,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0x15cdd06339);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION_AIR);
          lVar12 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar12,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x11bb8d9726);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack208,1.0);
          lib::L2CValue::L2CValue(aLStack224,true);
          HVar13 = lib::L2CValue::as_hash(aLStack112);
          fVar16 = (float)lib::L2CValue::as_number(aLStack128);
          fVar17 = (float)lib::L2CValue::as_number(aLStack208);
          bVar2 = lib::L2CValue::as_bool(aLStack224);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar15,HVar13,fVar16,fVar17,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0x11bb8d9726);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION);
          lVar12 = lib::L2CValue::as_integer(aLStack112);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar15,lVar12,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100026350:
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_DECIDE);
  iVar5 = lib::L2CValue::as_integer(aLStack208);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar5);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar9 & 1) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Brave::special_lw_cursor_decide(pFVar10);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_SELECT_INDEX);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  cVar4 = app::FighterSpecializer_Brave::get_special_lw_command_from_index(pFVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack128,(int)cVar4);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
  FVar7 = lib::L2CValue::as_integer(aLStack128);
  fVar16 = (float)app::FighterSpecializer_Brave::get_special_lw_command_sp_cost(pBVar11,FVar7,true);
  lib::L2CValue::L2CValue(aLStack208,fVar16);
  lib::L2CValue::L2CValue(aLStack240,aLStack208);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_SUCCESS_SP);
  FUN_710001a230(aLStack224,this,aLStack240,aLStack256);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FAILURE);
    lib::L2CValue::L2CValue(aLStack320,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    pLVar8 = aLStack304;
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
    FVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::FighterSpecializer_Brave::special_lw_decide_command(pFVar10,FVar7,iVar5);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START);
    lib::L2CValue::L2CValue(aLStack288,true);
    lua2cpp::L2CFighterBase::change_status(this,LVar1,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar8 = aLStack272;
  }
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

