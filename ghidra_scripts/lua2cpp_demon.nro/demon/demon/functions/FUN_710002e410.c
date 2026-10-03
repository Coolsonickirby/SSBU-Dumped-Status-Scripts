
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e410(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_ATTACK_STAND_2_WORK_INT_COMBO);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack48,1);
  lib::L2CValue::operator+(aLStack80,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1);
  lib::L2CValue::L2CValue(aLStack48,1);
  uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,2);
    uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack48,3);
      uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack48,4);
        uVar2 = lib::L2CValue::operator==(aLStack64,aLStack48);
        lib::L2CValue::~L2CValue(aLStack48);
        if ((uVar2 & 1) == 0) goto LAB_710002e5d0;
        lib::L2CValue::L2CValue(aLStack48,0xf9b87c85b);
        lib::L2CValue::operator=(param_1,aLStack48);
      }
      else {
        lib::L2CValue::L2CValue(aLStack48,0xf05e35df8);
        lib::L2CValue::operator=(param_1,aLStack48);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack48,0xf72e46d6e);
      lib::L2CValue::operator=(param_1,aLStack48);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0xfebed3cd4);
    lib::L2CValue::operator=(param_1,aLStack48);
  }
  lib::L2CValue::~L2CValue(aLStack48);
LAB_710002e5d0:
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

