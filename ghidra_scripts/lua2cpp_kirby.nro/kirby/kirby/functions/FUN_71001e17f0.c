
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001e17f0(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DIDDY_SPECIAL_N_CHARGE);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar2 = aLStack80;
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DIDDY_SPECIAL_N_SHOOT);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar2 = aLStack80;
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DIDDY_SPECIAL_N_DANGER);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar2 = aLStack80;
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DIDDY_SPECIAL_N_BLOW);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        pLVar2 = aLStack80;
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_GENERATE_ARTICLE_GUN);
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::ArticleModule__remove_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
          pLVar2 = aLStack64;
        }
      }
    }
  }
  lib::L2CValue::~L2CValue(pLVar2);
  return;
}

