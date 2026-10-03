
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014a90(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_WAIT);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_WALK);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_TURN);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_JUMP_SQUAT);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_JUMP);
          uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar1 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_PASS);
            uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar1 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_FALL);
              uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar1 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_LANDING);
                uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar1 & 1) == 0) {
                  bVar2 = false;
                  goto LAB_7100014bfc;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_7100014bfc:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

