
void FUN_7100047400(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  ulong uVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  uVar1 = lib::L2CValue::as_integer(param_3);
  uVar2 = lib::L2CValue::as_integer(param_4);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::operator=(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack64,2.0);
  lib::L2CValue::operator*(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  fVar4 = (float)app::sv_math::randf(HVar3,fVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::operator-(aLStack96,param_1);
  lib::L2CValue::operator=(param_1,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

