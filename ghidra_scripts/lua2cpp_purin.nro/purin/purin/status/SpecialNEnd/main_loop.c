
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNEnd_main_loop(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) goto LAB_7100021d10;
  ppBVar9 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_71000215d8:
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
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
          goto LAB_7100021620;
        }
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
LAB_71000219c0:
        pLVar6 = aLStack112;
        goto LAB_7100021c00;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100021620;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100021620:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar7);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE)
          ;
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack96,fVar10);
          fVar10 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
          goto LAB_71000219b8;
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_GROUND);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar7);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE)
          ;
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
          lib::L2CValue::L2CValue(aLStack96,fVar10);
          fVar10 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
LAB_71000219b8:
          lib::L2CValue::_L2CValue(aLStack96);
          goto LAB_71000219c0;
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_GROUND);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      }
      pLVar6 = aLStack96;
LAB_7100021c00:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_7100021d10;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_7100021d10;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100021d10;
      goto LAB_71000215d8;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar6 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_7100021d10:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

