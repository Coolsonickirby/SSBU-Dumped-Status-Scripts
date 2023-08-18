
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::AirLassoReach_main(L2CFighterLucas *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI2);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar1,false,-1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCAS_HIMOHEBI2_STATUS_KIND_REACH);
  lua2cpp::L2CFighterCommon::status_AirLassoReach(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

