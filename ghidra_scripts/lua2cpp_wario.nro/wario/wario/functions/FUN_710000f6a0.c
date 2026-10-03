
void FUN_710000f6a0(L2CValue *param_1,long param_2)

{
  L2CValue *this;
  ulong uVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),8);
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar1 = lib::L2CValue::operator==(this,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
LAB_710000f728:
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack48,0);
    uVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      iVar2 = 0;
      goto LAB_710000f778;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack48,0);
    uVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) goto LAB_710000f728;
  }
  iVar2 = 1;
LAB_710000f778:
  lib::L2CValue::L2CValue(param_1,iVar2);
  return;
}

