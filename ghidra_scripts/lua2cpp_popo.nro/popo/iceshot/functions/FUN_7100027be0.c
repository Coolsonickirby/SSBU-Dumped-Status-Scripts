
void FUN_7100027be0(undefined8 param_1,long param_2)

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
  
  lib::L2CValue::L2CValue(aLStack80,0xdf4e9c2dc);
  lib::L2CValue::L2CValue(aLStack96,0x1c74edbf6c);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xdf4e9c2dc);
  lib::L2CValue::L2CValue(aLStack112,0x1c48e08035);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x66933a7e6);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  fVar4 = (float)app::sv_math::randf(HVar3,1.0);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator-(aLStack80,aLStack64);
  lib::L2CValue::operator*(aLStack128,aLStack96);
  lib::L2CValue::operator+(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

