
void FUN_7100033930(long param_1)

{
  uint uVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack48,5);
  lib::L2CValue::operator=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  uVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::EffectModule__detach_all_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

