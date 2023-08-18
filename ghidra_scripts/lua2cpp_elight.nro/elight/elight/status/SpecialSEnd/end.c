
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialSEnd_end(L2CFighterElight *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_ELIGHT_GENERATE_ARTICLE_BUNSHIN);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

