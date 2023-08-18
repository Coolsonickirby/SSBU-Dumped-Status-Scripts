
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialLwEnd_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100013548:
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_7100013608:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          uVar5 = lib::L2CValue::operator__(pLVar6,pLVar7);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) goto LAB_7100013b04;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL_FREE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,HVar8);
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar9);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack176,false);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack160);
          bVar1 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
        goto LAB_7100013afc;
      }
    }
    else {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        uVar5 = lib::L2CValue::operator__(pLVar6,pLVar7);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) goto LAB_7100013608;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack96,HVar8);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar9);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar3);
LAB_7100013afc:
      lib::L2CValue::_L2CValue(aLStack96);
    }
LAB_7100013b04:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_7100013bf8:
      iVar3 = 0;
      goto LAB_7100013c70;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_7100013bf8;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
LAB_7100013c64:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar6 = aLStack112;
      goto LAB_7100013c64;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100013548;
  }
  iVar3 = 1;
LAB_7100013c70:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

