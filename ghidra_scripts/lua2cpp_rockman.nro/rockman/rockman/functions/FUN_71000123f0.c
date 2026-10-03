
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000123f0(L2CFighterRockman *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *in_x1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,in_x1);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack48,_FIGHTER_ROCKMAN_STATUS_ROCKBUSTER_SHOOT_JUMP_WORK_ID_FLAG_BUTTON);
    lua2cpp::L2CFighterCommon::sub_jump_squat_uniq_check_sub(this,(L2CValue)0xd0);
    lib::L2CValue::~L2CValue(aLStack48);
    lua2cpp::L2CFighterCommon::sub_jump_squat_uniq_check_sub_mini_attack(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

