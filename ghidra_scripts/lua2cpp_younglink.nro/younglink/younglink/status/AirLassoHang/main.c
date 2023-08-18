
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYounglink::status::AirLassoHang_main(L2CFighterYounglink *this,L2CValue *return_value)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x61e93d2e8);
  lib::L2CValue::L2CValue(aLStack80,0xb8f067556);
  lVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar1,lVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xa13f4a944);
  lib::L2CValue::L2CValue(aLStack96,aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

