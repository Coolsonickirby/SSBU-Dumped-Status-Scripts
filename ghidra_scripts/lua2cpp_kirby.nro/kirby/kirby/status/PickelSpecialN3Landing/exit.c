
void __thiscall
L2CFighterKirby::status::PickelSpecialN3LandingLight_exit
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue LStack48;
  
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exit(this,&LStack48);
  lib::L2CValue::_L2CValue((L2CValue *)&LStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

