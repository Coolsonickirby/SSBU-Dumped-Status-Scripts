
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100017590(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  bool bVar4;
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)(param_2 + 200);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x17);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
LAB_7100017624:
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) != 0) goto LAB_7100017694;
    }
    bVar4 = false;
  }
  else {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_7100017624;
LAB_7100017694:
    bVar4 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

