
void __thiscall
L2CFighterSimon::status::AttackLw3_main(L2CFighterSimon *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackLw3(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,AttackLw3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}
