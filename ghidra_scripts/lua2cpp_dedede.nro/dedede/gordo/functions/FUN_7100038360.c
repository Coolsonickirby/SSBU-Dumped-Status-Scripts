
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038360(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_REMOVE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  FUN_7100036940(param_2);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

