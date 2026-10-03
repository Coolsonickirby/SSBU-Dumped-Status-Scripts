
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044710(long param_1)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,-1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_INT_OWNER_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

