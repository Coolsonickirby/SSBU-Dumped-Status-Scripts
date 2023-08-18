
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNSwallow_main(L2CFighterKrool *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SUCTION_IRONBALL)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_IRONBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_BLUNDERBUSS_STATUS_KIND_SWALLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100025c00(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialNSwallow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

