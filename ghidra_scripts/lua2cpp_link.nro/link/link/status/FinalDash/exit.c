
void __thiscall L2CFighterLink::status::FinalDash_exit(L2CFighterLink *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack64,pLVar1);
  FUN_7100006980(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,pLVar1);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar1);
  FUN_7100006ab0(this,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

