
void __thiscall
L2CFighterPacman::status::FallAerial_main(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_FallAerialSub(this);
  FUN_710001bd50(this);
  lib::L2CValue::L2CValue(aLStack48,FallAerial_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

