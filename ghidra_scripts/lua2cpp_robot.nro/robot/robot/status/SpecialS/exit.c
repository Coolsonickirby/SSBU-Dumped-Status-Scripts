
void __thiscall L2CFighterRobot::status::SpecialS_exit(L2CFighterRobot *this,L2CValue *return_value)

{
  app::lua_bind::PostureModule__init_rot_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

