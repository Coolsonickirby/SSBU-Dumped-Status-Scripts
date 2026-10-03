
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000071a0(L2CValue *param_1,L2CValue *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_F);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_B);
      uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_TURN);
        uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP_SQUAT);
          uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_LANDING);
            bVar1 = lib::L2CValue::operator==(param_2,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            goto LAB_71000072a4;
          }
        }
      }
    }
  }
  bVar1 = 1;
LAB_71000072a4:
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  return;
}

