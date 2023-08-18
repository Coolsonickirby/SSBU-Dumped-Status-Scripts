
void __thiscall
L2CWeaponNessPkthunder::status::Move_exit(L2CWeaponNessPkthunder *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,5);
  uVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

