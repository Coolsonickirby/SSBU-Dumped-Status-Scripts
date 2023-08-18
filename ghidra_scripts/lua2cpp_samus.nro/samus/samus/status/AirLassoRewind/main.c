
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamus::status::AirLassoRewind_main(L2CFighterSamus *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SAMUS_GBEAM_STATUS_KIND_HANG_REWIND);
  lua2cpp::L2CFighterCommon::status_AirLassoRewind(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

