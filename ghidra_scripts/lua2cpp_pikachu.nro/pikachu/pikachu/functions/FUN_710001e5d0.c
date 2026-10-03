
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e5d0(long param_1)

{
  L2CValue *this;
  ulong uVar1;
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack48,_SITUATION_KIND_GROUND);
  uVar1 = lib::L2CValue::operator==(this,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
    FUN_710001a760(param_1);
  }
  else {
    FUN_710001a4c0();
  }
  return;
}

