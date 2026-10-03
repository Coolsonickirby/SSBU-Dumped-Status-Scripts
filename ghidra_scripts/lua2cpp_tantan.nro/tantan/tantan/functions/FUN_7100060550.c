
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100060550(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  bool bVar4;
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)(param_2 + 200);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WAIT);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BACK);
      uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BRAKE);
        uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,10);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BRAKE_BACK);
          uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) {
            bVar4 = true;
            goto LAB_71000606a8;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_71000606a8:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

