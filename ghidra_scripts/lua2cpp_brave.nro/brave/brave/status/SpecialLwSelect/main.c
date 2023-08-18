
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwSelect_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_INPUT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x15cdd06339);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,true);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x11bb8d9726);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,true);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x11bb8d9726);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x15cdd06339);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_HOLD_INT_SELECT_MOTION_AIR);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialLwSelect_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

