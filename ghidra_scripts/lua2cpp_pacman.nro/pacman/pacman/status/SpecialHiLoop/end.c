
void __thiscall
L2CFighterPacman::status::SpecialHiLoop_end(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::AttackModule__set_power_mul_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::L2CValue(aLStack80,true);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

