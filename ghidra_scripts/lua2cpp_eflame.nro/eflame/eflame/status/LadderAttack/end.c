
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::LadderAttack_end(L2CFighterEflame *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LADDER);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::MotionModule__set_no_comp_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lua2cpp::L2CFighterCommon::status_end_LadderAttack(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

