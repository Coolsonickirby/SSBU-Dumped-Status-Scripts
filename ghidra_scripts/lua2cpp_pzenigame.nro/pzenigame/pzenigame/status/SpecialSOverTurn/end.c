
void __thiscall
L2CFighterPzenigame::status::SpecialSOverTurn_end(L2CFighterPzenigame *this,L2CValue *return_value)

{
  app::lua_bind::ControlModule__end_clatter_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

