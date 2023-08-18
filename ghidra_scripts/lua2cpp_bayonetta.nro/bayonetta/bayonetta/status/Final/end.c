
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Final_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  L2CValue aLStack48 [16];
  
  FUN_71000236f0();
  lib::L2CValue::L2CValue(aLStack48,_HIT_STATUS_NORMAL);
  HVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

