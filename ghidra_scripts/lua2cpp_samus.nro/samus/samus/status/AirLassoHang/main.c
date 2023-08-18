
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamus::status::AirLassoHang_main(L2CFighterSamus *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x751cbc212);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO_HANG);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lua2cpp::L2CFighterCommon::status_AirLassoHang(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

