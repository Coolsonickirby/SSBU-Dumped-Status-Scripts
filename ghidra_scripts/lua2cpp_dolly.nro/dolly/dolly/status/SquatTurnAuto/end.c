
void __thiscall
L2CFighterDolly::status::SquatTurnAuto_end(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_SquatWait(this);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SQUAT_WAIT);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    app::lua_bind::TurnModule__end_turn_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

