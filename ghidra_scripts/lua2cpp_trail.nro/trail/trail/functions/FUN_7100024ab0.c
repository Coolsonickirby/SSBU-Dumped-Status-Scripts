
void FUN_7100024ab0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack96,0xdeb5675e2);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,90.0);
  lib::L2CValue::operator-(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,270.0);
  pLVar3 = aLStack64;
  lib::L2CValue::operator-(param_3,pLVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar3);
  pLVar3 = aLStack80;
  uVar1 = lib::L2CValue::operator<=(aLStack64,pLVar3);
  if ((uVar1 & 1) == 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
    uVar1 = lib::L2CValue::operator<=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_7100024bf8;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,true);
LAB_7100024bf8:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

