
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::FinalEnd_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  Fighter *pFVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710001abc8:
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710001abc8;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) goto LAB_710001ac44;
  pLVar1 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
LAB_710001aaa0:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001ac44;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710001ac44;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710001aaa0;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xdf3b40b09);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x92ee4d34c);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710001ac44:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_FINAL_WORK_INT_START_SITUATION);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar1 = &this->globalTable;
  if ((bVar3 & 1U) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_FINAL_MODULE_END_EXEC);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::FighterSpecializer_Buddy::call_final_module(pFVar9,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

