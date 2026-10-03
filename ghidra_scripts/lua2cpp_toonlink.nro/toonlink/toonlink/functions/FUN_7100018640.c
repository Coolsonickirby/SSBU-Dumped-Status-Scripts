
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100018640(L2CFighterToonlink *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100018700;
    FUN_7100015ee0(aLStack80,this);
  }
  else {
    FUN_7100015180(aLStack80,this);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100018700:
  FUN_7100016c10(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

