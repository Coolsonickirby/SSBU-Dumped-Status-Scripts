
void __thiscall
L2CFighterPzenigame::status::Run_end(L2CFighterPzenigame *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Run(this);
  lib::L2CValue::_L2CValue(aLStack48);
  app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

