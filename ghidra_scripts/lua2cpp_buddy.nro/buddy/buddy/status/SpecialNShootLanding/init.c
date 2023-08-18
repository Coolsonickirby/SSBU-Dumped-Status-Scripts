
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootLanding_init(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x1a5c0b8105);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1a793b0b2f);
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

