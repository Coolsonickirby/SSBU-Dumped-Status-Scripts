
void __thiscall L2CFighterNana::status::CheerNana_end(L2CFighterNana *this,L2CValue *return_value)

{
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

