
void __thiscall
L2CFighterRockman::status::RockbusterShootWait_end(L2CFighterRockman *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  FUN_710000a880(aLStack80,aLStack96);
  lib::L2CValue::operator_(aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    FUN_710000aa60(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

