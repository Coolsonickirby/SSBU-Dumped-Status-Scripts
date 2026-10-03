
void FUN_7100035f40(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *pLVar1;
  ulong uVar2;
  bool bVar3;
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x47a67e768);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  uVar2 = lib::L2CValue::operator<(param_3,pLVar1);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5b4ca7514);
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
    uVar2 = lib::L2CValue::operator<(pLVar1,param_3);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x41cff903b);
      pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
      uVar2 = lib::L2CValue::operator<(param_4,pLVar1);
      if ((uVar2 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x24394ee70);
        pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
        uVar2 = lib::L2CValue::operator<(pLVar1,param_4);
        if ((uVar2 & 1) == 0) {
          bVar3 = true;
          goto LAB_710003602c;
        }
      }
    }
  }
  bVar3 = false;
LAB_710003602c:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

