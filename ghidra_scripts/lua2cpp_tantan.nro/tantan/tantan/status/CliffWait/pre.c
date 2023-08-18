
void __thiscall
L2CFighterTantan::status::CliffWait_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::ItemModule__set_change_status_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_pre_CliffWait(this);
  return;
}

