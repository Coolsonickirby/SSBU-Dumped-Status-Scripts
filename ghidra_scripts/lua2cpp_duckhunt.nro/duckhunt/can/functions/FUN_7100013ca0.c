
void FUN_7100013ca0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack96,0x12eb44cba5);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator-(aLStack64);
  uVar1 = lib::L2CValue::operator<(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::operator-(aLStack64);
    lib::L2CValue::operator=(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,param_3);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

