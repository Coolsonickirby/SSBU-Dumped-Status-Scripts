
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d730(long param_1)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  FUN_710000d7f0();
  FUN_710000d920(param_1);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME)
  ;
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

