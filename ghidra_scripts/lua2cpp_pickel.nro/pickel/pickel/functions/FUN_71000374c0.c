
void FUN_71000374c0(L2CValue *param_1,undefined8 param_2,L2CValue *param_3,L2CValue *param_4)

{
  ulong uVar1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lib::L2CValue::L2CValue(aLStack112,param_4);
  FUN_7100035400(aLStack80,param_2,aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1,(uVar1 & 1) == 0);
  return;
}

