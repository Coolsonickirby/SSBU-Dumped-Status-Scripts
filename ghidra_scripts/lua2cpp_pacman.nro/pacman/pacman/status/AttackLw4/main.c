
void __thiscall
L2CFighterPacman::status::AttackLw4_main(L2CFighterPacman *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackLw4_common(this);
  lib::L2CValue::L2CValue(aLStack48,false);
  FUN_710001aac0(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,AttackLw4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

