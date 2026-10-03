
void __thiscall FUN_71000229d0(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  Item *pIVar2;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  pIVar2 = (Item *)lib::L2CValue::as_pointer(aLStack64);
  bVar1 = app::lua_bind::ItemModule__attach_item_instance_impl(this->moduleAccessor,pIVar2,false);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

