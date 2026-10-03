
void FUN_7100126310(long param_1)

{
  long lVar1;
  long lVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x5831b9722);
  lib::L2CValue::L2CValue(aLStack64,0xab9fe52b4);
  lVar1 = lib::L2CValue::as_integer(aLStack48);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar1,lVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

