
void __thiscall
L2CWeaponLuigiObakyumu::status::ConnectorExhaust_main
          (L2CWeaponLuigiObakyumu *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,ConnectorExhaust_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

