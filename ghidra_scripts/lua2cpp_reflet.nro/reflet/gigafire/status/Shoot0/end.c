
void __thiscall
L2CWeaponRefletGigafire::status::Shoot0_end(L2CWeaponRefletGigafire *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack48,0);
  lib::L2CValue::operator_(aLStack64,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
