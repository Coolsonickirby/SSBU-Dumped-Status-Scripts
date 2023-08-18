
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootJumpSquat_exec(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_JUMP_BUTTON);
  lua2cpp::L2CFighterCommon::sub_jump_squat_uniq_check_sub(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100007470(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

