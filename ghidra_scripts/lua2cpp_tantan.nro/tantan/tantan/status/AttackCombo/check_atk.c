
void __thiscall
L2CFighterTantan::status::AttackCombo_check_atk(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  lib::L2CValue::L2CValue(aLStack80,in_x2);
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessAttack_check_attack
            (this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

