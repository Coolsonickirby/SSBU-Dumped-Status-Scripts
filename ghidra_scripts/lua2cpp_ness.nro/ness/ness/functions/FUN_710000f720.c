
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f720(L2CAgent *param_1)

{
  BattleObject **this;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_HOLD);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_HIT);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_END);
      uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x32de6245ed);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_HAVE_ITEM_WORK_MAIN);
        lib::L2CValue::L2CValue(aLStack112,false);
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
    }
  }
  return;
}

