
void __thiscall
L2CWeaponDiddyBarreljet::status::Wait_main(L2CWeaponDiddyBarreljet *this,L2CValue *return_value)

{
  HitStatus HVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,HIT_STATUS_OFF);
  HVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar1,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,Wait_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

