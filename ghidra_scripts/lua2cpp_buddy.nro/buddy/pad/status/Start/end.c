
void __thiscall L2CWeaponBuddyPad::status::Start_end(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

