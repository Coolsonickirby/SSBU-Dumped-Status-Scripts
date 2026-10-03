
void FUN_7100022990(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack96,0x1bd60b9854);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack112,0x2167342969);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,param_3);
  lib::L2CValue::L2CValue(aLStack144,aLStack64);
  lib::L2CValue::L2CValue(aLStack160,aLStack80);
  lua2cpp::L2CFighterCommon::sub_turn_run_uniq_main
            (param_2,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

