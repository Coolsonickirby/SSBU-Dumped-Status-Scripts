
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002dc60(long param_1)

{
  bool bVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar3 = (L2CValue *)(param_1 + 200);
  this = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x17);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_710002dd94;
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_710002dd94;
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710002dd94:
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar1 & 1U) != 0) {
    FUN_7100012480(param_1);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

