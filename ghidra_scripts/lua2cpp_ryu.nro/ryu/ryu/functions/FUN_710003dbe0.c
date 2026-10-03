
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003dbe0(long param_1,L2CValue *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue aLStack112 [16];
  
  iVar1 = _FIGHTER_AREA_KIND_NUM;
  iVar4 = _FIGHTER_AREA_KIND_BODY;
  if (_FIGHTER_AREA_KIND_BODY < _FIGHTER_AREA_KIND_NUM) {
    do {
      if (iVar4 != _FIGHTER_AREA_KIND_WIND && iVar4 != _FIGHTER_AREA_KIND_WIND_RAD) {
        lib::L2CValue::L2CValue(aLStack112,iVar4);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = lib::L2CValue::as_bool(param_2);
        app::lua_bind::AreaModule__enable_area_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar2 & 1),-1);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

