
void __thiscall
L2CFighterKirby::status::ElightSpecialNEnd_end(L2CFighterKirby *this,L2CValue *return_value)

{
  FUN_7100118590();
  app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

