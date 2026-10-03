
void FUN_7100012030(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  ulong uVar1;
  L2CValue *pLVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1);
  lib::L2CValue::L2CValue(aLStack80,0.75);
  lib::L2CValue::operator*(aLStack80,param_4);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar1 = lib::L2CValue::operator<=(aLStack96,param_3);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.5);
    lib::L2CValue::operator*(aLStack80,param_4);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar1 = lib::L2CValue::operator<=(aLStack96,param_3);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar1 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,3);
      lib::L2CValue::operator=(param_1,pLVar2);
    }
    else {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,2);
      lib::L2CValue::operator=(param_1,pLVar2);
    }
  }
  else {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_2,1);
    lib::L2CValue::operator=(param_1,pLVar2);
  }
  return;
}

