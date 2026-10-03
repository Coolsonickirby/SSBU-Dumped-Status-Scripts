
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006980(undefined8 param_1,L2CValue *param_2)

{
  ulong uVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_KIND_FINAL_DASH);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_KIND_FINAL_COMBO);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_INT_FINAL_EF_ID_TRIFORCE);
        FUN_7100006b60(param_1,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_INT_FINAL_EF_ID_TRIFORCE_BREAK);
        FUN_7100006b60(param_1,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  return;
}

