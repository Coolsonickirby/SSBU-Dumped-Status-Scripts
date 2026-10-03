
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000124c0(long param_1)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_OWNER_SCALE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack48,fVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::PostureModule__set_owner_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_SCALE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PostureModule__set_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar2,false);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

