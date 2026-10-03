
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000263c0(long param_1)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue *this;
  ulong uVar3;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

