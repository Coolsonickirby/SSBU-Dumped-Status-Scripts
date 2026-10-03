
void FUN_710002b000(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x12ce40e3e9);
  lib::L2CValue::L2CValue(aLStack64,1);
  HVar2 = lib::L2CValue::as_hash(aLStack48);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::EffectModule__detach_kind_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

