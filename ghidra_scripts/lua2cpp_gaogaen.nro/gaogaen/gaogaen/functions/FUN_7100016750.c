
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016750(long param_1)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_INT_FALL_HIT_OBJECT_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_DISABLE_OPPONENT_PASSIVE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

