
void FUN_71000232a0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack96,0x1559e8634c);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x1772d23163);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  FUN_7100006700(param_1,param_2,aLStack128,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

