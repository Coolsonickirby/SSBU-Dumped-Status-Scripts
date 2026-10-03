
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006bc0(L2CAgent *param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  iVar1 = lib::L2CValue::as_integer(param_2);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_MA_MSC_CMD_EFFECT_EFFECT_OFF_HANDLE);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

