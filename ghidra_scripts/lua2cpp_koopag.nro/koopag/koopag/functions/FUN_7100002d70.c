
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100002d70(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_KIND_SPECIAL_S_FALL);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_THROW_NO_CHANGE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_THROW_NO_CHANGE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DEAD);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::CatchModule__set_send_cut_event_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    app::lua_bind::CatchModule__catch_cut_impl(param_1->moduleAccessor,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_THROW_NO_CHANGE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x31dbed6513);
    lib::L2CValue::L2CValue(aLStack96,0xbefb89abe);
    lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_SPECIAL_S_FLAG_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

