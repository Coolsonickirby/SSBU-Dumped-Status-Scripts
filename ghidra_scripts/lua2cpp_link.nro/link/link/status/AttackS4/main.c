
void __thiscall L2CFighterLink::status::AttackS4_main(L2CFighterLink *this,L2CValue *return_value)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x61e93d2e8);
  lib::L2CValue::L2CValue(aLStack80,0xb8f067556);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_AttackS4(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

