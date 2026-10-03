
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012330(L2CValue *param_1,BattleObjectModuleAccessor *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::L2CValue(aLStack48,-1.0);
  uVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar3 = GROUND_TOUCH_FLAG_RIGHT;
  uVar2 = GROUND_TOUCH_FLAG_UP_RIGHT;
  if ((uVar1 & 1) != 0) {
    uVar3 = _GROUND_TOUCH_FLAG_LEFT;
    uVar2 = GROUND_TOUCH_FLAG_UP_LEFT;
  }
  lib::L2CValue::L2CValue(param_1,uVar2 | uVar3);
  return;
}

