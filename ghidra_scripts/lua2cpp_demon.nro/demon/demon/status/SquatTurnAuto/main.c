
void __thiscall
L2CFighterDemon::status::SquatTurnAuto_main(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  lua2cpp::L2CFighterCommon::status_SquatWait_common(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar1 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterUtil::set_turn_squat_auto(pBVar1);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,SquatTurnAuto_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

