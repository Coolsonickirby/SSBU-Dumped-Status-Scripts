
void __thiscall
L2CFighterDiddy::status::FinalWaitFly_end(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack48 [16];
  
  FUN_710000e730();
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
