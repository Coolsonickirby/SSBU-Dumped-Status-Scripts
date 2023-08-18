
void __thiscall L2CFighterShulk::status::Guard_main(L2CFighterShulk *this,L2CValue *return_value)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x4dba80bb2);
  lib::L2CValue::L2CValue(aLStack80,0xf1bae52ad);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  lVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar2,lVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_Guard(this);
  return;
}

