
void __thiscall
L2CFighterBayonetta::status::FinalStart_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue aLStack48 [16];
  
  FUN_71000236f0();
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::MotionAnimcmdModule__set_sleep_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

