
void __thiscall
L2CFighterDemon::status::ThrowCommand_check_dmg(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *in_x1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,in_x1);
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessThrow_check_damage(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

