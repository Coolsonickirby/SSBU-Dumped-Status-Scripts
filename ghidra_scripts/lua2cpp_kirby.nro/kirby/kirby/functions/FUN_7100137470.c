
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100137470(L2CValue *param_1,L2CValue *param_2)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0xffffffff);
  lib::L2CValue::L2CValue(param_1 + 0x10,0xffffffff);
  lib::L2CValue::L2CValue(param_1 + 0x20,0xffffffff);
  lib::L2CValue::L2CValue(param_1 + 0x30,_KINETIC_TYPE_NONE);
  lib::L2CValue::L2CValue(aLStack64,_FS_SUCCEEDS_KEEP_EFFECT);
  lib::L2CValue::operator|(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FS_SUCCEEDS_KEEP_SOUND);
  lib::L2CValue::operator|(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FS_SUCCEEDS_KEEP_TRANSITION);
  lib::L2CValue::operator|(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FS_SUCCEEDS_KEEP_CANCEL);
  lib::L2CValue::operator|(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

