
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialHiAttack_exec(L2CFighterLucas *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_TARGET_ANGLE);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_START_ANGLE);
  FUN_7100003410(this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

