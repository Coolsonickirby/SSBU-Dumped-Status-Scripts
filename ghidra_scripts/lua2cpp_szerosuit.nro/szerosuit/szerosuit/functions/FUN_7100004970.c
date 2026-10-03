
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004970(long param_1)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::AreaModule__set_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,true);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::CameraModule__set_whole_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_HIT_STATUS_NORMAL);
  HVar3 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::HitModule__set_whole_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,0)
  ;
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

