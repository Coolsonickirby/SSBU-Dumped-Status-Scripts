
void __thiscall L2CFighterRyu::status::SpecialSEnd_end(L2CFighterRyu *this,L2CValue *return_value)

{
  app::lua_bind::MotionAnimcmdModule__flush_impl(this->moduleAccessor,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

