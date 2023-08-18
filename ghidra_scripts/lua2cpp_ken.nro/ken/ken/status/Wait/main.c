
void __thiscall L2CFighterKen::status::Wait_main(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_wait_common(this);
  lua2cpp::L2CFighterCommon::sub_wait_motion_mtrans(this);
  lib::L2CValue::L2CValue(aLStack48,Wait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

