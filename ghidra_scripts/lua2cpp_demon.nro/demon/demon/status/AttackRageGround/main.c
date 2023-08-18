
void __thiscall
L2CFighterDemon::status::AttackRageGround_main(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1834fc192b);
  lib::L2CValue::L2CValue(aLStack80,0x27051ec378);
  FUN_710001f660(aLStack48,this,aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,AttackRageGround_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

