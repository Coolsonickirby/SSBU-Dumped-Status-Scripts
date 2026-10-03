
void FUN_71000405e0(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  ulong uVar1;
  L2CValue *pLVar2;
  L2CAgent *pLVar3;
  L2CValue *pLVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = aLStack96;
  pLVar4 = param_3;
  uVar1 = lib::L2CValue::operator==(param_2,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar1 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x47a67e768);
    pLVar3 = (L2CAgent *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x47a67e768);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    lib::L2CAgent::math_min(pLVar3,pLVar2,pLVar4);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x47a67e768);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    lib::L2CValue::operator=(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5b4ca7514);
    pLVar3 = (L2CAgent *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x5b4ca7514);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    lib::L2CAgent::math_max(pLVar3,pLVar2,pLVar4);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5b4ca7514);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x18cdc1683);
    lib::L2CValue::operator=(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x24394ee70);
    pLVar3 = (L2CAgent *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x24394ee70);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    lib::L2CAgent::math_max(pLVar3,pLVar2,pLVar4);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x24394ee70);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x41cff903b);
    pLVar3 = (L2CAgent *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,0x41cff903b);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    lib::L2CAgent::math_min(pLVar3,pLVar2,pLVar4);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,0x41cff903b);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar2,aLStack80);
    pLVar2 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,param_3);
    FUN_7100039c70(aLStack80,aLStack96);
    lib::L2CValue::operator=(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::L2CValue(param_1,param_2);
  return;
}

