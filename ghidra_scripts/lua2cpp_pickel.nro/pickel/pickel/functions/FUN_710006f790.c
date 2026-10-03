
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710006f790(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  bool bVar4;
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)(param_2 + 200);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_FALL);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_FALL);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        bVar4 = false;
        goto LAB_710006f870;
      }
    }
  }
  bVar4 = true;
LAB_710006f870:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

