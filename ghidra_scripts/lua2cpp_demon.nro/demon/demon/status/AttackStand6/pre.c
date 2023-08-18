
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStand6_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  FUN_710002c0f0(return_value,this,aLStack64,aLStack80,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

