
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a040(long param_1)

{
  GroundCorrectKind GVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack64 [16];
  
  pLVar5 = (L2CValue *)(param_1 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      goto LAB_710001a1d8;
    }
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    return;
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x17);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  GVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
LAB_710001a1d8:
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

