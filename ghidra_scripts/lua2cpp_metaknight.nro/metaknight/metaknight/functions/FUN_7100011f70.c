
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011f70(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(param_1->moduleAccessor,iVar2,0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::GroundModule__set_collidable_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  app::lua_bind::ColorBlendModule__cancel_main_color_impl(param_1->moduleAccessor,0);
  return;
}

