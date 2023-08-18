
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRichter::status::SpecialLw_main(L2CFighterRichter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  L2CValue *pLVar6;
  uint uVar7;
  undefined8 uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_ITEM_KIND_SIMONHOLYWATER);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_40,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack144,_ITEM_KIND_RICHTERHOLYWATER);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      goto LAB_7100011884;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SIMON_GENERATE_ARTICLE_HOLYWATER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0x104cc566f5);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0x14cd70e9b5);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION_AIR)
      ;
      lVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      pLVar6 = aLStack144;
      goto LAB_7100011adc;
    }
  }
  else {
LAB_7100011884:
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack144,0xab6928cf2);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION);
  lVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0xe46c0e666);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION_AIR);
  lVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  uVar8 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,aLStack144);
  lib::L2CValue::L2CValue(aLStack80,aLStack128);
  lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  uVar4 = lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    uVar4 = lib::L2CValue::as_number(aLStack80);
    lVar5 = lib::L2CValue::as_number(aLStack96);
    uVar7 = lib::L2CValue::as_number(aLStack160);
    local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
    uStack56 = (ulong)uVar7;
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_40,iVar3);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar6 = aLStack112;
LAB_7100011adc:
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  return;
}

