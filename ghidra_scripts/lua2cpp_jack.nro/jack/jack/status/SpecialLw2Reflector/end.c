
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLw2Reflector_end(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  ShieldStatus SVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_SHIELD_STATUS_NONE);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_REFLECTOR_KIND_SPECIAL_LW);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  SVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ReflectorModule__set_status_impl(this->moduleAccessor,iVar1,SVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

