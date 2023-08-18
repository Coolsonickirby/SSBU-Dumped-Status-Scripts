
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KamuiSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar1,false,-1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,KamuiSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

