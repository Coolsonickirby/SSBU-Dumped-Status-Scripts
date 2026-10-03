
void FUN_7100035280(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  L2CValue *pLVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  bool bVar4;
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x47a67e768);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x5b4ca7514);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
  uVar3 = lib::L2CValue::operator<(pLVar2,pLVar1);
  if ((uVar3 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5b4ca7514);
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x47a67e768);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    uVar3 = lib::L2CValue::operator<(pLVar1,pLVar2);
    if ((uVar3 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x41cff903b);
      pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x24394ee70);
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
      uVar3 = lib::L2CValue::operator<(pLVar2,pLVar1);
      if ((uVar3 & 1) == 0) {
        pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_2,0x24394ee70);
        pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
        pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x41cff903b);
        pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
        uVar3 = lib::L2CValue::operator<(pLVar1,pLVar2);
        if ((uVar3 & 1) == 0) {
          bVar4 = true;
          goto LAB_71000353dc;
        }
      }
    }
  }
  bVar4 = false;
LAB_71000353dc:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

