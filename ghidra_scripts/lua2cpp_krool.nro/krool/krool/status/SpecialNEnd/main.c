
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNEnd_main(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_BLUNDERBUSS_STATUS_KIND_END);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100025c00(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

