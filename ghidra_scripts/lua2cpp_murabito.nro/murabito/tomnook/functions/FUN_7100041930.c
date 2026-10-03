
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100041930(long param_1,L2CValue *param_2)

{
  GroundCorrectKind GVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar4 = (L2CValue *)(param_1 + 200);
  if ((uVar3 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) goto LAB_7100041978;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
LAB_7100041978:
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND);
    GVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_MURABITO_TOMNOOK_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

