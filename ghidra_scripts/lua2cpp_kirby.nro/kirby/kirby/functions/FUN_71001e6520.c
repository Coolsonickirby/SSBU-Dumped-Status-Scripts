
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001e6520(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0xb);
  lib::L2CValue::operator=(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PIT_SPECIAL_N_CHARGE);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PIT_SPECIAL_N_DIR);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PIT_SPECIAL_N_TURN);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PIT_SPECIAL_N_SHOOT);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_GENERATE_ARTICLE_BOW);
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::ArticleModule__remove_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0x66933a7e6);
          lib::L2CValue::L2CValue(aLStack96,0xcb9b9eb5e);
          lVar4 = lib::L2CValue::as_integer(aLStack64);
          lVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_status_default_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar4,lVar5);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_GENERATE_ARTICLE_BOWARROW);
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::ArticleModule__remove_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
          lib::L2CValue::~L2CValue(aLStack64);
        }
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

