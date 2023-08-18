
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialLw_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  long lVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710001e9c0:
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710001ee08;
    ppBVar11 = &this->moduleAccessor;
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      uVar6 = lib::L2CValue::operator__(pLVar5,pLVar7);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710001ee08;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_AIR_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,HVar8);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar9);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar9);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar8,fVar13,fVar12,(bool)(bVar1 & 1),0.0,false,false);
      goto LAB_710001ede0;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack96,lVar9);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar11,HVar8,-1.0,1.0,0.0,false,false);
  }
  else {
    ppBVar11 = &this->moduleAccessor;
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      uVar6 = lib::L2CValue::operator__(pLVar5,pLVar7);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_710001e9c0;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,HVar8);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar9);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar9);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar8,fVar13,fVar12,(bool)(bVar1 & 1),0.0,false,false);
LAB_710001ede0:
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar9);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar11,HVar8,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001ee08:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    iVar3 = 0;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack128,0xd87461d6d);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar10 = lib::L2CValue::as_integer(aLStack128);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar10);
    lib::L2CValue::L2CValue(aLStack96,fVar13);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_LW_HOLD);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

