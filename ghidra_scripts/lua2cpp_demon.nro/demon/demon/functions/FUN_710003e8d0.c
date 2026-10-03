
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003e8d0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((uVar4 & 1) == 0) {
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__unable_energy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
  }
  else {
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
    GVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar3);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

