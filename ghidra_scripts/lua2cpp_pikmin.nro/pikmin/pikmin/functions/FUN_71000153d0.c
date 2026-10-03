
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000153d0(L2CValue *param_1,long param_2)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  int iVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)(param_2 + 200);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_WAIT);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    FUN_7100015570(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_WAIT);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_LANDING);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_KIND_SPECIAL_HI_END);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        iVar4 = 1;
        goto LAB_7100015514;
      }
    }
  }
  iVar4 = 0;
LAB_7100015514:
  lib::L2CValue::L2CValue(param_1,iVar4);
  return;
}

