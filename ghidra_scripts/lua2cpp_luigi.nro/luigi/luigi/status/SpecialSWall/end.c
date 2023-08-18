
void __thiscall
L2CFighterLuigi::status::SpecialSWall_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  app::lua_bind::GroundModule__detach_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

