
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialLw_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  long lVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710001c3d8:
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::_L2CValue(aLStack112);
          goto LAB_710001c420;
        }
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_710001ca18;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710001c420;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710001c420:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack112,HVar7);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar8);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,lVar8);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          fVar10 = (float)lib::L2CValue::as_number(aLStack160);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,lVar8);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack112,HVar7);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_STATUS_WORK_INT_MOT_AIR_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar8);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,lVar8);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          fVar10 = (float)lib::L2CValue::as_number(aLStack160);
          fVar11 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_WORK_INT_MOT_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack112,lVar8);
          HVar7 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar9,HVar7,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar3);
      }
LAB_710001ca18:
      lib::L2CValue::_L2CValue(aLStack112);
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
LAB_710001cb5c:
      iVar3 = 0;
      goto LAB_710001cb64;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_710001cb5c;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    pLVar6 = aLStack128;
LAB_710001cb44:
    lib::L2CValue::_L2CValue(pLVar6);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack144;
      goto LAB_710001cb44;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710001c3d8;
  }
  iVar3 = 1;
LAB_710001cb64:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

