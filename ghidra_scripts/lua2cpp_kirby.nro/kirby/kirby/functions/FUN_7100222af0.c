
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100222af0(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  bool bVar3;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_WALK);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WALK);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      bVar3 = false;
      goto LAB_7100222b98;
    }
  }
  bVar3 = true;
LAB_7100222b98:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

