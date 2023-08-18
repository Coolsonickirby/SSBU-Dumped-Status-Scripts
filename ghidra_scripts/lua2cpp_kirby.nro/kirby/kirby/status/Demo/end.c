
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Demo_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ArticleOperationTarget AVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Demo(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_GENERATE_ARTICLE_WINDUMMY);
  lib::L2CValue::L2CValue(aLStack96,_ARTICLE_OPE_TARGET_ALL);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  AVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,AVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_end_Win(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

