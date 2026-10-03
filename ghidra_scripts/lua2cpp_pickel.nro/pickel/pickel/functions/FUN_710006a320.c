
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710006a320(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_JUMP);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_JUMP_AERIAL);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL_AERIAL);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          return;
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::operator=(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

