
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialHiAttack_exec(L2CFighterNess *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_TARGET_ANGLE);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_START_ANGLE);
  FUN_71000030b0(this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

