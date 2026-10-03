
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100218520(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_DOUBLE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x1ee81abee2);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_DOUBLE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_GENERATE_ARTICLE_BOWARROW);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__shoot_impl(param_1->moduleAccessor,iVar3,0,true);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_FLAG_DOUBLE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      app::lua_bind::ItemModule__remove_item_impl(param_1->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack64,0x20cbc92683);
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack64);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(this,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_1->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__enable_transition_term_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__unable_transition_term_impl(param_1->moduleAccessor,iVar3);
      }
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

