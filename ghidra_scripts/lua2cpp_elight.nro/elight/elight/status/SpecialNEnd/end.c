
void __thiscall
L2CFighterElight::status::SpecialNEnd_end(L2CFighterElight *this,L2CValue *return_value)

{
  app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

