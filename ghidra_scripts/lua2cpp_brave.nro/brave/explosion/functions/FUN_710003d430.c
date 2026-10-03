
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003d430(L2CAgent *param_1)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__dec_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::L2CValue(aLStack48,0);
  uVar2 = lib::L2CValue::operator<=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack48);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

