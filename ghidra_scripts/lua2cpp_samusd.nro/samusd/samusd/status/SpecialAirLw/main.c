
void __thiscall
L2CFighterSamusd::status::SpecialAirLw_main(L2CFighterSamusd *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710001d520();
  FUN_710001bfe0(this);
  lib::L2CValue::L2CValue(aLStack48,SpecialAirLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

