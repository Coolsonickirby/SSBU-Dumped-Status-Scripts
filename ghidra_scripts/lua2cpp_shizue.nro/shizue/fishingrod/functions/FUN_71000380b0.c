
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000380b0(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SHIZUE_FISHINGROD_SEARCH_NO_HOOK);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::SearchModule__clear_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SHIZUE_FISHINGROD_SEARCH_NO_HOOK_THROW_ITEM);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::SearchModule__clear_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SHIZUE_FISHINGROD_AREA_KIND_ITEM_SEARCH);
  lib::L2CValue::L2CValue(aLStack80,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SHIZUE_FISHINGROD_AREA_KIND_FIND_WATER);
  lib::L2CValue::L2CValue(aLStack80,false);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__enable_area_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

