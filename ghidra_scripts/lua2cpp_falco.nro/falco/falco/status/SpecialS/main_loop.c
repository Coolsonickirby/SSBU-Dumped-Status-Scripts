
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::SpecialS_main_loop(L2CFighterFalco *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  GroundCorrectKind GVar7;
  uint uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
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
  
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001b254;
  }
  ppBVar12 = &this->moduleAccessor;
  bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xd0);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar9 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar9 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar9 & 1) != 0) goto LAB_7100019e70;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001b254;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100019e70:
  bVar4 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
  lib::L2CValue::operator_(aLStack288,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack288);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    bVar4 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
    lib::L2CValue::operator_(aLStack256,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = &this->globalTable;
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      lib::L2CValue::operator_(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_START);
      uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_RUSH);
        uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
          uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_FORCE_END);
            uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar5,iVar6);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,true);
              lib::L2CValue::operator_(aLStack240,aLStack112);
              goto LAB_710001a4cc;
            }
          }
          else {
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256);
            if ((bVar3 & 1U) != 0) {
              pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
              uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_FALL);
                lib::L2CValue::L2CValue(aLStack400,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
                lib::L2CValue::_L2CValue(aLStack400);
                lib::L2CValue::_L2CValue(aLStack384);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_710001b254;
              }
            }
            pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
              GVar7 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,0x11bf9ca033);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack160,false);
              HVar11 = lib::L2CValue::as_hash(aLStack112);
              fVar13 = (float)lib::L2CValue::as_number(aLStack128);
              fVar14 = (float)lib::L2CValue::as_number(aLStack144);
              bVar4 = lib::L2CValue::as_bool(aLStack160);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar4 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_710001b254;
            }
          }
        }
        else {
          pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if (((uVar9 & 1) != 0) ||
             (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256), (bVar3 & 1U) != 0)) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator_(aLStack240,aLStack112);
            goto LAB_710001a4cc;
          }
        }
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if (((uVar9 & 1) != 0) ||
           (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256), (bVar3 & 1U) != 0)) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator_(aLStack240,aLStack112);
          goto LAB_710001a4cc;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      lib::L2CValue::operator_(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_START);
      uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_RUSH);
        uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
          uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_FORCE_END);
            uVar9 = lib::L2CValue::operator__(aLStack272,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar5,iVar6);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,true);
              lib::L2CValue::operator_(aLStack240,aLStack112);
              goto LAB_710001a4cc;
            }
          }
          else {
            pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar9 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_FALL);
              lib::L2CValue::L2CValue(aLStack336,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_710001b254;
            }
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256);
            if ((bVar3 & 1U) != 0) {
              pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
              uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar9 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_WAIT);
                lib::L2CValue::L2CValue(aLStack368,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
                lib::L2CValue::_L2CValue(aLStack368);
                lib::L2CValue::_L2CValue(aLStack352);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_710001b254;
              }
            }
          }
        }
        else {
          pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if (((uVar9 & 1) != 0) ||
             (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256), (bVar3 & 1U) != 0)) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator_(aLStack240,aLStack112);
            goto LAB_710001a4cc;
          }
        }
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if (((uVar9 & 1) != 0) ||
           (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256), (bVar3 & 1U) != 0)) {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator_(aLStack240,aLStack112);
LAB_710001a4cc:
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
    }
  }
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0);
    bVar4 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar4 & 1));
    lib::L2CValue::operator_(aLStack192);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_RUSH_FORCE_END)
      ;
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar4 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lVar1 = -0x80;
LAB_710001a688:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack224,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_HIT_SHIELD_TO_END);
        iVar5 = lib::L2CValue::as_integer(aLStack224);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar4 & 1));
        lib::L2CValue::operator_(aLStack208);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar3 & 1U) != 0) {
          bVar4 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__inc_int_impl(*ppBVar12,iVar5);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar5);
            lVar1 = -0x60;
            goto LAB_710001a688;
          }
        }
      }
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(pLVar10,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_FALL._4_4_);
      GVar7 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_START);
      uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_RUSH);
        uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        cVar2 = (char)&stack0xfffffffffffffff0;
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
          uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) == 0) goto LAB_710001b238;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1158d0953d);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            fVar13 = (float)lib::L2CValue::as_number(aLStack128);
            fVar14 = (float)lib::L2CValue::as_number(aLStack144);
            bVar4 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar4 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x1158d0953d);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          FUN_7100006a20(this);
          lib::L2CValue::L2CValue(aLStack112,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
          lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar2 + -0x60));
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            fVar13 = (float)lib::L2CValue::as_number(aLStack128);
            fVar14 = (float)lib::L2CValue::as_number(aLStack144);
            bVar4 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar4 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_S);
          uVar8 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar12,uVar8);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_AIR_LASSO_HANG_DATA._4_4_)
          ;
          lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar2 + -0x60));
        }
        goto LAB_710001b230;
      }
      FUN_7100019a40(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,GROUND_CLIFF_CHECK_KIND_NONE);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_START);
      uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_RUSH);
        uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STEP_END);
          uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) == 0) goto LAB_710001b238;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar7 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xdb8bd3614);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            fVar13 = (float)lib::L2CValue::as_number(aLStack128);
            fVar14 = (float)lib::L2CValue::as_number(aLStack144);
            bVar4 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar4 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xdb8bd3614);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_MOTION);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::friction_off(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar7 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_STATUS_WORK_ID_FLOAT_RESERVE_KINETIC_MOTION_SPEED_MUL);
          iVar5 = lib::L2CValue::as_integer(aLStack144);
          fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack128,fVar13);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x976c3b29b);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            fVar13 = (float)lib::L2CValue::as_number(aLStack128);
            fVar14 = (float)lib::L2CValue::as_number(aLStack144);
            bVar4 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar4 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x976c3b29b);
            HVar11 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
          }
        }
LAB_710001b230:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        FUN_71000197e0(this);
      }
    }
LAB_710001b238:
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001b254:
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

