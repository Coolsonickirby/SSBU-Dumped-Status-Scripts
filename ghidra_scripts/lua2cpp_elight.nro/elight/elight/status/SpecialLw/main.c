
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialLw_main(L2CFighterElight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  FighterEntryID FVar5;
  ItemKind IVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  FighterInformation *pFVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::FighterElementLinkEventChange::new_l2c_table();
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack80,0x1cd83c14e3);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0xa854977fe);
  lib::L2CValue::L2CValue(aLStack80,0x50000000);
  lib::L2CValue::operator_(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_7100016b40(aLStack80,this,aLStack112,aLStack96);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_ITEM_LINK_NO_HAVE);
  FUN_7100016b40(aLStack80,this,aLStack112,aLStack96);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  FVar5 = lib::L2CValue::as_integer(aLStack80);
  pvVar8 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                             (FIGHTER_TREADED_KIND_NO_REAC,FVar5);
  lib::L2CValue::L2CValue(aLStack112,pvVar8);
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_rabbit_cap_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_USAGIHAT);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_reflector_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_BADGE);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_superleaf_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_SUPERLEAF);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_rocketbelt_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_ROCKETBELT);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_screw_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_SCREW);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pFVar9 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::FighterInformation__is_backshield_impl(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_ITEM_KIND_BACKSHIELD);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,true);
    IVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar3 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ItemModule__eject_attach_impl
              (this->moduleAccessor,IVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,true);
  FUN_7100019e20(this,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710001a1e0(this);
  lib::L2CValue::L2CValue(aLStack144,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

