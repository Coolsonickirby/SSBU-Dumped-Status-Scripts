
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710023b5a0(long param_1)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue
            (aLStack48,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue
            (aLStack48,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue
            (aLStack48,_WEAPON_KIRBY_FINALCUTTERSHOT_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

