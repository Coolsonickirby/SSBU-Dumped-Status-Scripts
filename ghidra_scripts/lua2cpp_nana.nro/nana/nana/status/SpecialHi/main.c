
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNana::status::SpecialHi_main(L2CFighterNana *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  uint uVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  long lVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_CLIFF_HANG_DATA_SPECIAL_HI);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  ppBVar10 = &this->moduleAccessor;
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar10,uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x105c3c1e76);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar5,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x14dd899136);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar5,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710000f1c4;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_710000f6c4;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710000f6c4;
  }
LAB_710000f1c4:
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_AIR_HI_START);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,HVar8);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar5);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar5);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar8,fVar12,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      goto LAB_710000f69c;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar5);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_POPO_SPECIAL_HI_START);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,HVar8);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar5);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar5);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar8,fVar12,fVar11,(bool)(bVar1 & 1),0.0,false,false);
LAB_710000f69c:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar5);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710000f6c4:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0xd07d69a9b);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  uVar9 = lib::L2CValue::as_integer(aLStack160);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar12 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar12,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack96,SpecialHi_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

