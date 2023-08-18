
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::TrailSpecialN3_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  Fighter *pFVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_TRAIL_GENERATE_ARTICLE_CLOUD);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack48);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Trail::change_magic(pFVar2);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

