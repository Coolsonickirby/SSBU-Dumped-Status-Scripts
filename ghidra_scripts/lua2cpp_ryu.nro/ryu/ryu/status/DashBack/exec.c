
void __thiscall L2CFighterRyu::status::DashBack_exec(L2CFighterRyu *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lua2cpp::L2CFighterCommon::sub_dash_uniq_process_main_internal(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

