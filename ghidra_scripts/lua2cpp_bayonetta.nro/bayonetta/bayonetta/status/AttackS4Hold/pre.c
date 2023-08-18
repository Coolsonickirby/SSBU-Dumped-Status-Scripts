
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::AttackS4Hold_pre(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_FLAG);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_INT);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_KEEP_FLAG_ATTACK_4_HOLD_FLOAT);
  lua2cpp::L2CFighterCommon::status_pre_AttackS4Hold_Common
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

