
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AirLassoRewind_main(L2CFighterTantan *this,L2CValue *return_value)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack80,0xadd214353);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack80,0xcec1191d4);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_HANG_REWIND);
  lua2cpp::L2CFighterCommon::status_AirLassoRewind(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

