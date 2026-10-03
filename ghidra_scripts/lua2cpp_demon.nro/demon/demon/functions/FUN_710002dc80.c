
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002dc80(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_ATTACK_STAND_3_WORK_INT_COMBO);
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
    if ((uVar2 & 1) == 0) goto LAB_710002dda8;
    lib::L2CValue::L2CValue(aLStack48,0xf6bff5c2f);
    lib::L2CValue::operator=(param_1,aLStack48);
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0xff2f60d95);
    lib::L2CValue::operator=(param_1,aLStack48);
  }
  lib::L2CValue::~L2CValue(aLStack48);
LAB_710002dda8:
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

