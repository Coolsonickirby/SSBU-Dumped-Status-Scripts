
void FUN_71000b3fa0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  ulong uVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar1 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar1 = lib::L2CValue::operator<(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  }
  lib::L2CValue::L2CValue(param_1,fVar2);
  return;
}

