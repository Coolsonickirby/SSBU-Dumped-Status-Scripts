
void FUN_7100070de0(long param_1,L2CValue *param_2)

{
  int iVar1;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,param_2);
  iVar1 = app::lua_bind::StatusModule__status_kind_interrupt_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  FUN_7100028af0(param_1,aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

