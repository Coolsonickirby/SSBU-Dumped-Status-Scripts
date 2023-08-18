
void __thiscall L2CFighterTrail::status::AttackS3_end(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_AttackS3(this);
  lib::L2CValue::_L2CValue(aLStack48);
  app::lua_bind::ComboModule__clear_setting_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

