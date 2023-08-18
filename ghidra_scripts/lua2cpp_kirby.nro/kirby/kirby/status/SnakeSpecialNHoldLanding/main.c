
void __thiscall
L2CFighterKirby::status::SnakeSpecialNHoldLanding_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lua2cpp::L2CFighterCommon::sub_ItemShootLanding_Common(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,SnakeSpecialNHoldLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

