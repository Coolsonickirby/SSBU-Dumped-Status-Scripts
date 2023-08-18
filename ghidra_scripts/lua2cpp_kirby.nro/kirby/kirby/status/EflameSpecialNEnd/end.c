
void __thiscall
L2CFighterKirby::status::EflameSpecialNEnd_end(L2CFighterKirby *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_power_mul_5th_impl(this->moduleAccessor,fVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710011b2e0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

