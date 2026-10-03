
void FUN_71000069c0(undefined8 param_1,long param_2)

{
  float fVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,32.0);
  fVar1 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar1);
  lib::L2CValue::operator*(aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

