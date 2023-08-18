
void __thiscall L2CFighterLuigi::status::TurnRun_main(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x8afd9b84f);
  lib::L2CValue::L2CValue(aLStack64,true);
  lua2cpp::L2CFighterCommon::status_TurnRun_Sub(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack80,TurnRun_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

