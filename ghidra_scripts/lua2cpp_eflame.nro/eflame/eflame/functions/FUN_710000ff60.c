
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ff60(long param_1,L2CValue *param_2)

{
  bool bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack64 [16];
  
  pLVar6 = (L2CValue *)(param_1 + 200);
  this = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x17);
  uVar5 = lib::L2CValue::operator==(this,pLVar4);
  if (((uVar5 & 1) == 0) ||
     (bVar1 = lib::L2CValue::operator.cast.to.bool(param_2), (bVar1 & 1U) != 0)) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

