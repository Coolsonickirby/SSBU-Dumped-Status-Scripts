
void FUN_71000820c0(undefined8 param_1,undefined8 param_2)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_7100083750(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,aLStack48);
  FUN_710003c460(param_1,param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

