
void __thiscall L2CFighterRyu::status::Pass_main(L2CFighterRyu *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Pass_common(this);
  lib::L2CValue::L2CValue(aLStack48,Pass_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

