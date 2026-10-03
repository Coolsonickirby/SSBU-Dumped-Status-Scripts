
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d290(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  GroundCorrectKind GVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(param_4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar6 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar1 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
        goto LAB_710001d3a8;
      }
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      return;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
    GVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
  }
  else {
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
LAB_710001d3a8:
      lib::L2CValue::~L2CValue(aLStack96);
      param_2 = param_3;
      goto LAB_710001d4b0;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
    GVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar1);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710001d4b0:
  iVar2 = lib::L2CValue::as_integer(param_2);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  return;
}

