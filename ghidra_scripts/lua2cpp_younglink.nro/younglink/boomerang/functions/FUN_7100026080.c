
void __thiscall FUN_7100026080(L2CWeaponYounglinkBoomerang *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *in_x1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,in_x1);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  if ((bVar1 & 1U) != 0) {
    FUN_7100025ef0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

