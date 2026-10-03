
void FUN_710003e500(undefined8 param_1,void *param_2,L2CValue *param_3)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,param_3);
  lib::L2CValue::L2CValue(aLStack80,param_3 + 0x10);
  lib::L2CValue::L2CValue(aLStack96,param_3 + 0x20);
  lib::L2CValue::L2CValue(aLStack112,param_3 + 0x30);
  lua2cpp::L2CFighterBase::Vector4__create
            (param_2,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

