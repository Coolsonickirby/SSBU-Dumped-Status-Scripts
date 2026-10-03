
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009750(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_S4_HOLD);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_S4);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_GENERATE_ARTICLE_BOWLING_BALL);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

