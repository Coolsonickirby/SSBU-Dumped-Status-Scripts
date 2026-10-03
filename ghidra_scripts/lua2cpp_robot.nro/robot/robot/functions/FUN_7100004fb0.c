
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100004fb0(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_SHOOT_AIR);
  bVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

