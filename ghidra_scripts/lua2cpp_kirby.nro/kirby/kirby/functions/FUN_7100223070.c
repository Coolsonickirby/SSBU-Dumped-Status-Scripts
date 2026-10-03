
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100223070(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  bool bVar3;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_LANDING);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_LANDING);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      bVar3 = false;
      goto LAB_7100223118;
    }
  }
  bVar3 = true;
LAB_7100223118:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

