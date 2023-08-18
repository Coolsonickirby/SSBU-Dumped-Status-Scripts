
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNLoop_init(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_AREA_KIND_EAT_ITEM);
  lib::L2CValue::L2CValue(aLStack80,true);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

