
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001467f0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_GENERATE_BULLET);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_GENERATE_BULLET);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack112,0xbb6627ba8);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_GENERATE_ARTICLE_BULLET);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::ArticleModule__get_active_num_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar4 = lib::L2CValue::operator<(aLStack112,aLStack96);
    if ((uVar4 & 1) == 0) {
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack128,0x207941a4d5);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar3,HVar6,-1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack128,0x21ac144e2e);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar3,HVar6,-1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_GENERATE_ARTICLE_BULLET);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_enable_impl
                (param_2->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(param_1,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack128,0x2037da78a6);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar3,HVar6,-1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack128,0x21e28f925d);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (param_2->moduleAccessor,iVar3,HVar6,-1);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
      lib::L2CValue::L2CValue(aLStack128,1);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

