
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007320(L2CValue *param_1,L2CValue *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP_AERIAL);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
      uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_FALL);
        uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR_TURN);
          bVar1 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          goto LAB_71000073f8;
        }
      }
    }
  }
  bVar1 = 1;
LAB_71000073f8:
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  return;
}

