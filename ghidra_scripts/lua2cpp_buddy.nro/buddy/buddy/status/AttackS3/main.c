
void __thiscall L2CFighterBuddy::status::AttackS3_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_AttackS3Common(this);
  lib::L2CValue::L2CValue(aLStack48,AttackS3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

