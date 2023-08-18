
void __thiscall
L2CWeaponRefletGigafire::status::Vanish_exec(L2CWeaponRefletGigafire *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,-1);
  FUN_710002f160(aLStack64,this,aLStack80);
  lib::L2CValue::L2CValue(aLStack48,0);
  uVar1 = lib::L2CValue::operator_(aLStack48,aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)((uVar1 & 1) != 0));
  return;
}

