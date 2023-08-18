
void __thiscall
L2CFighterPickel::status::AttackWalkBack_main(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_7100081860();
  lua2cpp::L2CFighterCommon::status_WalkBack_common(this);
  lib::L2CValue::L2CValue(aLStack48,AttackWalkBack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

