
void FUN_7100008630(undefined8 param_1,undefined8 param_2)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0xa02480224);
  lib::L2CValue::L2CValue(aLStack64,0xc501fcc43);
  lib::L2CValue::L2CValue(aLStack80,0xc2718fcd5);
  FUN_7100008340(param_1,param_2,aLStack48,aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

