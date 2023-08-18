
void __thiscall
L2CFighterNana::status::TurnRunBrake_main(L2CFighterNana *this,L2CValue *return_value)

{
  L2CValue *this_00;
  Fighter *pFVar1;
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_TurnRunBrake_Sub(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar1 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Popo::change_item_have_motion(pFVar1);
  lib::L2CValue::L2CValue(aLStack48,TurnRunBrake_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

