
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialN_end(L2CFighterMiifighter *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_MIIFIGHTER_GENERATE_ARTICLE_IRONBALL);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

