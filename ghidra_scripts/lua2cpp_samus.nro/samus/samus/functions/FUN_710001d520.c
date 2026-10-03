
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d520(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = aLStack112;
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::operator=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack48,1);
  uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,2);
    uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) goto LAB_710001d678;
    lib::L2CValue::L2CValue(aLStack48,0x298600da7a);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack48);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0x2993ae42dd);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack48);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    this = aLStack96;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack48);
LAB_710001d678:
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

