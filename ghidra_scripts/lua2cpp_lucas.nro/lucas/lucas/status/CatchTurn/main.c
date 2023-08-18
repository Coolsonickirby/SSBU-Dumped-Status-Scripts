
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::CatchTurn_main(L2CFighterLucas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
  lib::L2CValue::L2CValue(aLStack80,0xa5f869486);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar3,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
  lib::L2CValue::L2CValue(aLStack80,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_CatchTurn(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

