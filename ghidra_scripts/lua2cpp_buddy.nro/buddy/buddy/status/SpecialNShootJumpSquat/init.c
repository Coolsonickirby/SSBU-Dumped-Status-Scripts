
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootJumpSquat_init(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1a5c0b8105);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  FUN_7100007610(this,aLStack64,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

