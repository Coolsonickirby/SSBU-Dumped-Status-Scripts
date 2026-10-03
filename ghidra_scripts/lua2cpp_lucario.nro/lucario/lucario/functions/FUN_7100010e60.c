
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010e60(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  Fighter *pFVar3;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_LUCARIO_GENERATE_ARTICLE_LUCARIOM);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack48);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
  pFVar3 = (Fighter *)lib::L2CValue::as_pointer(this);
  app::FighterSpecializer_Lucario::req_aura_effect_both(pFVar3);
  return;
}

