
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000039a0(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack80,0xa7d7e3773);
  lib::L2CValue::L2CValue(aLStack96,0xe8d2c5de7);
  FUN_710000a2f0(this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_GENERATE_ARTICLE_DOYLE);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_JACK_DOYLE_STATUS_KIND_SPECIAL_S);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack144,1);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_10 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_10 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  FUN_710000ab10(return_value,this);
  return;
}

