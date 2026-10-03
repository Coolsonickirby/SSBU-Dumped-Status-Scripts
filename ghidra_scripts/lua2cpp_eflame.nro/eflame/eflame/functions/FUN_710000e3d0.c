
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e3d0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_BODY);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_JOSTLE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_TREAD_JUMP_CHECK);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_TREAD_PASSIVE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_ITEM_PICKUP);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_ITEM_PICKUP_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_BODY_WATER);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_LADDER_CHECK);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_AREA_KIND_LADDER_CHECK_BOTTOM);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(param_2);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

