
void __thiscall L2CFighterPurin::status::Throw_main(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_Throw_Sub(this);
  lib::L2CValue::L2CValue(aLStack48,Throw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

