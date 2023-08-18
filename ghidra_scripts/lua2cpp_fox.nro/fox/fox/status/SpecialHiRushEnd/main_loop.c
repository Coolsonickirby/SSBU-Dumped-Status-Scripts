
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFox::status::SpecialHiRushEnd_main_loop(L2CFighterFox *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001b31c;
  }
  ppBVar10 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710001a988;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001b31c;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001a988:
  bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_WOLF_KICK);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    pLVar1 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
LAB_710001add8:
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_TRANSITION_TERM_ID_WAIT);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x12cb4acfbc);
          HVar9 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_REVERT_DEGREE);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
            lib::L2CValue::L2CValue(aLStack144,0x1031fe8fee);
            uVar6 = lib::L2CValue::as_integer(aLStack96);
            uVar7 = lib::L2CValue::as_integer(aLStack144);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
            lib::L2CValue::L2CValue(aLStack128,iVar4);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack176,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_DIR);
            iVar4 = lib::L2CValue::as_integer(aLStack176);
            fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
            lib::L2CValue::L2CValue(aLStack96,fVar11);
            lib::L2CValue::operator_(aLStack96,aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::operator_(aLStack144,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_REVERT_DEGREE);
            fVar11 = (float)lib::L2CValue::as_number(aLStack176);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_WOLF_KICK);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack144);
            pLVar8 = aLStack128;
            goto LAB_710001b0e8;
          }
        }
      }
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710001add8;
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_FALL._4_4_);
      GVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_TRANSITION_TERM_ID_WAIT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xfb29587f1);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
      pLVar8 = aLStack96;
LAB_710001b0e8:
      lib::L2CValue::_L2CValue(pLVar8);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_REVERT_DEGREE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack144,0x1031fe8fee);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_DIR);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_REVERT_DEGREE);
      fVar11 = (float)lib::L2CValue::as_number(aLStack176);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    pLVar1 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710001b31c;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if (((uVar6 & 1) != 0) &&
       (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112), (bVar2 & 1U) != 0)) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001b31c;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710001b31c;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if (((uVar6 & 1) != 0) &&
       (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112), (bVar2 & 1U) != 0)) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001b31c;
    }
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::operator_(pLVar8);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    FUN_710001b5e0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001b31c:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

