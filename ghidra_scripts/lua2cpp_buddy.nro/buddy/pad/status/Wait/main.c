
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponBuddyPad::status::Wait_main(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *this_00;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::L2CValue(aLStack80,0x47dee83e5);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar3);
    lib::L2CValue::L2CValue(aLStack80,0x6823cf459);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100034adc;
    lib::L2CValue::L2CValue(aLStack80,0x47dee83e5);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar3,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack80;
  }
  else {
    this_00 = aLStack96;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100034adc:
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Wait_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

