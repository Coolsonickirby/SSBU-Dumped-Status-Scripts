
void FUN_71002069a0(L2CValue *param_1,undefined8 param_2,L2CValue *param_3)

{
  bool bVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    FUN_7100206ed0(param_2);
  }
  lib::L2CValue::L2CValue(aLStack80,param_3);
  FUN_7100205650(aLStack64,param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

