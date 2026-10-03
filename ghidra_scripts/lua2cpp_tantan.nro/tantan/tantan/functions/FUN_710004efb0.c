
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004efb0(L2CValue *param_1,BattleObjectModuleAccessor *param_2,L2CValue *param_3)

{
  ulong uVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(param_2);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_TURN_LR_LEFT);
    uVar1 = lib::L2CValue::operator==(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_710004f0c0;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_TURN_LR_RIGHT);
    uVar1 = lib::L2CValue::operator==(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_710004f0c0;
    }
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_710004f0c0:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

