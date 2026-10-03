
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011780(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  int iVar2;
  ArticleOperationTarget AVar3;
  L2CValue *pLVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::LinkEvent::new_l2c_table();
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack80,0x14c74c6800);
  lib::L2CValue::operator=(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x11f63699bf);
  pcVar5 = (code *)lib::L2CValue::as_pointer(pLVar4);
  plVar6 = (long *)(*pcVar5)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar6,aLStack96);
  app::lua_bind::LinkModule__send_event_nodes_struct_impl
            (param_2->moduleAccessor,iVar2,(LinkEvent *)plVar6,0);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar6);
  lib::L2CValue::L2CValue(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  (**(code **)(*plVar6 + 8))(plVar6);
  lib::L2CValue::operator=(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x7ad7b88f7);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_GENERATE_ARTICLE_PHANTOM);
    lib::L2CValue::L2CValue(aLStack112,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    AVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__shoot_exist_impl
              (param_2->moduleAccessor,iVar2,AVar3,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x7ad7b88f7);
  lib::L2CValue::L2CValue(param_1,pLVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

