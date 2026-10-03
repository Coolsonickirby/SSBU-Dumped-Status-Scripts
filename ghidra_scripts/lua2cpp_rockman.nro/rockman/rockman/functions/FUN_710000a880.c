
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a880(L2CValue *param_1,L2CValue *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_WAIT);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_WALK);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_WALK_BRAKE);
      uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_TURN);
        uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_JUMP_SQUAT);
          uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_JUMP);
            uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar2 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_AIR);
              uVar2 = lib::L2CValue::operator==(param_2,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar2 & 1) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_LANDING);
                bVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                goto LAB_710000a9dc;
              }
            }
          }
        }
      }
    }
  }
  bVar1 = 1;
LAB_710000a9dc:
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  return;
}

