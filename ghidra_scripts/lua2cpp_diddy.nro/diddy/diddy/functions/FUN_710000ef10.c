
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ef10(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_UPPER_DAMAGE);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_HIT_CEIL);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJET);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x10d2d6db71);
      lib::L2CValue::L2CValue(aLStack96,5);
      HVar4 = lib::L2CValue::as_hash(aLStack64);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::EffectModule__detach_kind_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

