
void __thiscall
L2CWeaponPikminPikmin::status::Turn_end(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

