
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyPad::status::Start_main(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  HitStatus HVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor **ppBVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
    GVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  }
  ppBVar6 = &this->moduleAccessor;
  lib::L2CValue::_L2CValue(aLStack96);
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar6);
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::L2CValue(aLStack96,0x47dee83e5);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x47dee83e5);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_OFF);
  HVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::HitModule__set_whole_impl(*ppBVar6,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Start_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

