
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWolf::status::SpecialS_main_loop(L2CFighterWolf *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
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
  Hash40MapEntry **local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,false);
  lib::L2CValue::L2CValue(aLStack288,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100022c38;
  }
  ppBVar10 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xd0);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) goto LAB_71000211b0;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100022c38;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_71000211b0:
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::operator_(aLStack256);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
      lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_START);
      uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_RUSH);
        uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
          uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_FORCE_END);
            uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              iVar5 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
              goto LAB_7100021884;
            }
          }
          else {
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
            if ((bVar2 & 1U) != 0) {
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
              uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              if ((uVar7 & 1) != 0) {
                FUN_71000232b0(aLStack128,this);
                lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
                uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
                lib::L2CValue::_L2CValue((L2CValue *)&local_70);
                lib::L2CValue::_L2CValue(aLStack128);
                if ((uVar7 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_FALL);
                  lib::L2CValue::L2CValue(aLStack400,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
                  lib::L2CValue::_L2CValue(aLStack400);
                  lib::L2CValue::_L2CValue(aLStack384);
                }
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_7100022c38;
              }
            }
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
              GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              FUN_71000232b0(aLStack128,this);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
              uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_70,0x11bf9ca033);
                lib::L2CValue::L2CValue(aLStack128,0.0);
                lib::L2CValue::L2CValue(aLStack144,1.0);
                lib::L2CValue::L2CValue(aLStack160,false);
                HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
                fVar12 = (float)lib::L2CValue::as_number(aLStack128);
                fVar11 = (float)lib::L2CValue::as_number(aLStack144);
                bVar3 = lib::L2CValue::as_bool(aLStack160);
                app::lua_bind::MotionModule__change_motion_impl
                          (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar3 & 1),0.0,false,false);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              }
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100022c38;
            }
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if (((uVar7 & 1) != 0) ||
             (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272), (bVar2 & 1U) != 0)) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
            goto LAB_7100021884;
          }
        }
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if (((uVar7 & 1) != 0) ||
           (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272), (bVar2 & 1U) != 0)) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
          goto LAB_7100021884;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
      lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_START);
      uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_RUSH);
        uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
          uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_FORCE_END);
            uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              iVar5 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
              goto LAB_7100021884;
            }
          }
          else {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
            uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar7 & 1) != 0) {
              FUN_71000232b0(aLStack128,this);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
              uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_FALL);
                lib::L2CValue::L2CValue(aLStack336,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
                lib::L2CValue::_L2CValue(aLStack336);
                lib::L2CValue::_L2CValue(aLStack320);
              }
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_7100022c38;
            }
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
            if ((bVar2 & 1U) != 0) {
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
              uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_WAIT);
                lib::L2CValue::L2CValue(aLStack368,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
                lib::L2CValue::_L2CValue(aLStack368);
                lib::L2CValue::_L2CValue(aLStack352);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_7100022c38;
              }
            }
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if (((uVar7 & 1) != 0) ||
             (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272), (bVar2 & 1U) != 0)) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
            goto LAB_7100021884;
          }
        }
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if (((uVar7 & 1) != 0) ||
           (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272), (bVar2 & 1U) != 0)) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
LAB_7100021884:
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        }
      }
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0);
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack192);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_RUSH_FORCE_END);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack128);
        lVar14 = -0x80;
LAB_7100021a40:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack224,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_HIT_SHIELD_TO_END);
        iVar4 = lib::L2CValue::as_integer(aLStack224);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack208);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
            lVar14 = -0x60;
            goto LAB_7100021a40;
          }
        }
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_TYPE_FALL._4_4_);
      GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_START);
      uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_RUSH);
        uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
          uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_AIR_STOP);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1158d0953d);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack160,false);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              fVar12 = (float)lib::L2CValue::as_number(aLStack128);
              fVar11 = (float)lib::L2CValue::as_number(aLStack144);
              bVar3 = lib::L2CValue::as_bool(aLStack160);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar3 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1158d0953d);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            }
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            FUN_710000db80(this);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KIND_WOLF);
            uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack128,false);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CLIFF_CHECK_KIND_NONE);
              lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar1 + -0x60));
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue(aLStack128,true);
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
            uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_70,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
              lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar1 + -0x60));
              goto LAB_71000226d0;
            }
          }
        }
        else {
          FUN_71000234b0(aLStack128,this);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd2b3a620b);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack160,false);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              fVar12 = (float)lib::L2CValue::as_number(aLStack128);
              fVar11 = (float)lib::L2CValue::as_number(aLStack144);
              bVar3 = lib::L2CValue::as_bool(aLStack160);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar3 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd2b3a620b);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            }
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_S);
            uVar13 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar10,uVar13);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,FIGHTER_INSTANCE_WORK_ID_INT_AIR_LASSO_HANG_DATA._4_4_)
            ;
            lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar1 + -0x60));
            goto LAB_71000226d0;
          }
        }
      }
      else {
        FUN_7100020c50(this);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,GROUND_CLIFF_CHECK_KIND_NONE);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)(cVar1 + '@'));
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_START);
      uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_RUSH);
        uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
          uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdb8bd3614);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack160,false);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              fVar12 = (float)lib::L2CValue::as_number(aLStack128);
              fVar11 = (float)lib::L2CValue::as_number(aLStack144);
              bVar3 = lib::L2CValue::as_bool(aLStack160);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar3 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdb8bd3614);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            }
            goto LAB_71000226d0;
          }
        }
        else {
          FUN_71000234b0(aLStack128,this);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_TYPE_MOTION);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_MOTION);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
            app::sv_kinetic_energy::friction_off(this->luaStateAgent);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0x976c3b29b);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack160,false);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              fVar12 = (float)lib::L2CValue::as_number(aLStack128);
              fVar11 = (float)lib::L2CValue::as_number(aLStack144);
              bVar3 = lib::L2CValue::as_bool(aLStack160);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar10,HVar9,fVar12,fVar11,(bool)(bVar3 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0x976c3b29b);
              HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
            }
LAB_71000226d0:
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          }
        }
      }
      else {
        FUN_71000209f0(this);
      }
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_START);
  uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_RUSH);
    uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLOAT_RUSH_DEGREE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::operator_(aLStack128);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      uVar7 = lib::L2CValue::as_number(aLStack144);
      lVar14 = lib::L2CValue::as_number(aLStack160);
      uVar13 = lib::L2CValue::as_number(aLStack176);
      local_70 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar14 << 0x20);
      uStack104 = (ulong)uVar13;
      app::lua_bind::PostureModule__set_rot_impl(*ppBVar10,(Vector3f *)&local_70,0);
      goto LAB_7100022c0c;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STEP_END);
    uVar7 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_REVERT_ANGLE_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_INT_REVERT_ANGLE_FRAME);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack128,aLStack144);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
        uVar7 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLOAT_RUSH_DEGREE)
          ;
          iVar4 = lib::L2CValue::as_integer(aLStack176);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::operator_(aLStack128,aLStack144);
          lib::L2CValue::operator_((L2CValue *)&local_70,aLStack208);
          lib::L2CValue::operator_((L2CValue *)&local_70,aLStack192);
          lib::L2CValue::operator_(aLStack160,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        }
      }
      lib::L2CValue::operator_(aLStack160);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar7 = lib::L2CValue::as_number(aLStack176);
      lVar14 = lib::L2CValue::as_number(aLStack192);
      uVar13 = lib::L2CValue::as_number(aLStack208);
      local_70 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar14 << 0x20);
      uStack104 = (ulong)uVar13;
      app::lua_bind::PostureModule__set_rot_impl(*ppBVar10,(Vector3f *)&local_70,0);
      lVar14 = -0xc0;
      goto LAB_7100022c00;
    }
  }
  else {
    fVar12 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLOAT_MIN_STICK);
    pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,(int)pLVar8);
    lib::L2CValue::L2CValue(aLStack144,fVar12);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
    uVar7 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLOAT_MAX_RUSH_DEGREE);
      pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,(int)pLVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
      lib::L2CValue::operator_(aLStack224,aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
      lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::operator_(aLStack208,aLStack416);
      lib::L2CValue::operator_(aLStack192,aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::operator_(aLStack176,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_FOX_ILLUSION_STATUS_WORK_ID_FLOAT_RUSH_DEGREE);
      fVar12 = (float)lib::L2CValue::as_number(aLStack192);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar12,iVar4);
      lVar14 = -0x60;
LAB_7100022c00:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
      lib::L2CValue::_L2CValue(aLStack192);
LAB_7100022c0c:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100022c38:
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

