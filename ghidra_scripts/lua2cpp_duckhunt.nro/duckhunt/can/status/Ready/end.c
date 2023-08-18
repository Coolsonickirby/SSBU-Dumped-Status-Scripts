
void __thiscall
L2CWeaponDuckhuntCan::status::Ready_end(L2CWeaponDuckhuntCan *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar1,false);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

