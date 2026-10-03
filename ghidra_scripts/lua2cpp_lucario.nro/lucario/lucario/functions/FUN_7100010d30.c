
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010d30(L2CAgent *param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_STATUS_KIND_FINAL_ENTRY);
  uVar2 = lib::L2CValue::operator<(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_STATUS_KIND_FINAL_END);
    uVar2 = lib::L2CValue::operator<(aLStack64,pLVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  FUN_7100010e60(param_1);
  lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack64);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

