
void __thiscall
L2CFighterDolly::status::SpecialLwLanding_init(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x12a6a3f625);
  lua2cpp::L2CFighterCommon::sub_landing_fall_special_init(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x12a6a3f625);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

