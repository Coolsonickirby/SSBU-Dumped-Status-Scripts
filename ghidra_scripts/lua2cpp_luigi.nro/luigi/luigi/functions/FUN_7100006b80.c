
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006b80(L2CAgent *param_1)

{
  BattleObject **this;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_KIND_FINAL_VACUUM);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_KIND_FINAL_SHOOT_READY);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_KIND_FINAL_FAIL);
      uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_KIND_FINAL_SHOOT);
        uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_KIND_FINAL_END);
          uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
            lib::L2CAgent::clear_lua_stack(param_1);
            lib::L2CAgent::push_lua_stack(param_1,aLStack64);
            app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_1,1);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
            iVar1 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__remove_impl(param_1->moduleAccessor,iVar1,0);
            lib::L2CValue::~L2CValue(aLStack64);
          }
        }
      }
    }
  }
  return;
}

