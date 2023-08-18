
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::SpecialHiRushEnd_main(L2CFighterFalco *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_FALL._4_4_);
    GVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xfb29587f1);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack160,6.0);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),fVar8,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x12cb4acfbc);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CValue::L2CValue(aLStack160,6.0);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),fVar8,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FALCO_FIRE_TRANSITION_TERM_ID_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialHiRushEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

