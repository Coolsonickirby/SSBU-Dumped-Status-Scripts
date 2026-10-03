
void FUN_710003db60(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *pLVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,param_2);
  FUN_7100039c70(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x24394ee70);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar1,param_4);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x24394ee70);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x41cff903b);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar1,param_4);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x41cff903b);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x47a67e768);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  lib::L2CValue::operator-(pLVar1,param_3);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x47a67e768);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x5b4ca7514);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  lib::L2CValue::operator+(pLVar1,param_3);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](param_1,0x5b4ca7514);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](pLVar1,0x18cdc1683);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

