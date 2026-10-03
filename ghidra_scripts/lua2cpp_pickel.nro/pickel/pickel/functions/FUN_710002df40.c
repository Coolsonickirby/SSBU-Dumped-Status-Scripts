
void FUN_710002df40(L2CValue *param_1,BattleObjectModuleAccessor *param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(param_2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::L2CValue(aLStack48,-1.0);
  uVar1 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0xacc0;
  }
  else {
    lVar2 = 0xacc4;
  }
  lib::L2CValue::L2CValue(param_1,*(int *)((long)&LUA_SCRIPT_LINE_MAX + lVar2));
  return;
}

