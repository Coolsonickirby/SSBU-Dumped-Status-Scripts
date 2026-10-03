
void __thiscall FUN_7100014bc0(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack48,SITUATION_KIND_AIR);
  uVar1 = lib::L2CValue::operator==(this_00,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uVar1 & 1) == 0);
  return;
}

