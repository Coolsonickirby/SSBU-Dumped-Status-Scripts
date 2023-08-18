
void __thiscall
L2CWeaponPikminPikmin::status::AttackAir_end(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_shield_stiff_mul_impl(this->moduleAccessor,fVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_power_up_impl(this->moduleAccessor,fVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

