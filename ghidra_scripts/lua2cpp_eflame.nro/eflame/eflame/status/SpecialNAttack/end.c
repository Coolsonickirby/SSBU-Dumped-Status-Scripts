
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::SpecialNAttack_end(L2CFighterEflame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_EFLAME_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::operator__(this_00,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

