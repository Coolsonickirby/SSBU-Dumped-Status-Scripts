
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028870(L2CAgent *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  ulong local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1);
  uVar3 = lib::L2CValue::as_number(aLStack64);
  lVar4 = lib::L2CValue::as_number(aLStack80);
  uVar2 = lib::L2CValue::as_number(aLStack96);
  local_30 = uVar3 & 0xffffffff | lVar4 << 0x20;
  uStack40 = (ulong)uVar2;
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::PostureModule__set_rot_impl(param_1->moduleAccessor,(Vector3f *)&local_30,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0x333dc56321);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_30);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0x349fc77ea0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_30);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  app::lua_bind::LinkModule__remove_model_constraint_impl(param_1->moduleAccessor,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,_WEAPON_PIKMIN_PIKMIN_LINK_NO_PARENT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  app::lua_bind::LinkModule__unlink_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  return;
}

