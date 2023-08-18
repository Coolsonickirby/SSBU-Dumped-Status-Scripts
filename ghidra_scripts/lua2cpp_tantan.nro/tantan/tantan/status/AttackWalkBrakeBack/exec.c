
void __thiscall
L2CFighterTantan::status::AttackWalkBrakeBack_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_71000186b0(aLStack48,this);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::sub_walk_brake_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

