
void __thiscall
L2CFighterEflame::status::SpecialHiEnd_end(L2CFighterEflame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    FUN_71000108a0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

