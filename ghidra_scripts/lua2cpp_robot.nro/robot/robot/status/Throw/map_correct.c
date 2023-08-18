
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::Throw_map_correct(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  long lVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar5);
  lib::L2CValue::L2CValue(aLStack80,0x8a0abc72c);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack144;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack160);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) goto LAB_710000fda8;
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar9 = (float)app::lua_bind::MotionModule__prev_frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,51.0);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710000fda8;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,54.0);
      uVar6 = lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710000fda8;
      lib::L2CValue::L2CValue(aLStack80,54.0);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710000fda8;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,54.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x115f021b51);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::LinkModule__send_event_nodes_throw_impl
                (this->moduleAccessor,HVar8,0x7fb997a80,true,0,0,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,55.0);
      uVar6 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710000fda8;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_IGNORE_NORMAL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,55.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,0x115f021b51);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::LinkModule__send_event_nodes_throw_impl
                (this->moduleAccessor,HVar8,0x7fb997a80,true,0,0,0);
    }
    pLVar7 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_710000fda8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

