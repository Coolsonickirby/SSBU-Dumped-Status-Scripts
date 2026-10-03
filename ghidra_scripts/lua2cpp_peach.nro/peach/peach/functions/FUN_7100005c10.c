
void FUN_7100005c10(undefined8 param_1,L2CValue *param_2,L2CValue *param_3)

{
  Hash40 HVar1;
  float fVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x77a08c3fc);
  HVar1 = lib::L2CValue::as_hash(aLStack96);
  fVar2 = (float)app::sv_math::randf(HVar1,1.0);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::operator-(param_2,param_3);
  lib::L2CValue::operator*(aLStack80,aLStack112);
  lib::L2CValue::operator+(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

