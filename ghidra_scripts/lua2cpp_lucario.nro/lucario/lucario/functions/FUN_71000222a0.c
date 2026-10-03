
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000222a0(long param_1)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    FUN_71000189a0(param_1);
    FUN_7100018700(param_1);
    FUN_7100023100(param_1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  }
  else {
    FUN_7100018660();
    FUN_71000183c0(param_1);
    FUN_7100022fe0(param_1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

