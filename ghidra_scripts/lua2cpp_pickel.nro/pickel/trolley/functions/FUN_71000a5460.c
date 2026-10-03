
void FUN_71000a5460(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = param_2;
  fVar4 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar4);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar3);
  lib::L2CValue::L2CValue(aLStack112,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack128,0x1bb4d74e1a);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  uVar1 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,(L2CValue *)&stack0xffffffffffffffc0);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0.0);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

