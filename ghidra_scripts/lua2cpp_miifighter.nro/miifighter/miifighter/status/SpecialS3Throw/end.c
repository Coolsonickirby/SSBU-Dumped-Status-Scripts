
void __thiscall
L2CFighterMiifighter::status::SpecialS3Throw_end(L2CFighterMiifighter *this,L2CValue *return_value)

{
  app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

