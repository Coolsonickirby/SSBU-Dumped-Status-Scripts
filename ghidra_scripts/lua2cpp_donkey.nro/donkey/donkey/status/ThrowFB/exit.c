
void __thiscall
L2CFighterDonkey::status::ThrowFLw_exit(L2CFighterDonkey *this,L2CValue *return_value)

{
  app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
