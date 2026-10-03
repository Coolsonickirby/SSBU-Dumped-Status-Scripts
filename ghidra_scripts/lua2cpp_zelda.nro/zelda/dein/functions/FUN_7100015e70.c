
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015e70(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = aLStack144;
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) goto LAB_7100016038;
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_ARTICLE_GENERATE_ARTICLE_LINK_PARENTS);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ZELDA_GENERATE_ARTICLE_DEIN_S);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    app::sv_module_access::article(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x27936db96d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,-1.0);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ZELDA_DEIN_STATUS_WORK_FLOAT_LIFE);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__add_float_impl(param_2->moduleAccessor,fVar4,iVar2);
    this = aLStack96;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100016038:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

