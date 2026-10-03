
void FUN_7100002e50(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lib::L2CValue::L2CValue(aLStack112,param_4);
  FUN_7100002f60(aLStack80,aLStack96,aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(param_1,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

