
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::Throw_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  uchar uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::L2CValue(aLStack80,_ATTACH_ITEM_GROUP_BADGE);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),uVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_Throw(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

