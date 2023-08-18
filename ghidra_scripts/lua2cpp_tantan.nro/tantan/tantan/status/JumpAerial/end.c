
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::JumpAerial_end(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_AERIAL);
  bVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,(bool)(~bVar1 & 1));
  lua2cpp::L2CFighterCommon::status_end_JumpAerial_param(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710002af50(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

