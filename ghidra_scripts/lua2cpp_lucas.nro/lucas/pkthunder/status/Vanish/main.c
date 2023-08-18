
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkthunder::status::Vanish_main(L2CWeaponLucasPkthunder *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCAS_PK_THUNDER_STATUS_WORK_ID_INT_VANISH_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack80,0x1e5d36fea5);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,Vanish_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

