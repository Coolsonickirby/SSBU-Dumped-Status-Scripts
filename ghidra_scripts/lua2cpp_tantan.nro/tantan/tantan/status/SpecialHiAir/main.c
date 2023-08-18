
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAir_main(L2CFighterTantan *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x16ba39edca);
  lib::L2CValue::L2CValue(aLStack80,0x14dd899136);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  FUN_7100039930(this,aLStack96,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_CLIFF_HANG_DATA_AIR_LASSO_IMMIDIATE);
  uVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
  lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE2_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,SpecialHiAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

