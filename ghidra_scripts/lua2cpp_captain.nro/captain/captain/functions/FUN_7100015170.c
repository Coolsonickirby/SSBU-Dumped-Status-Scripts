
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015170(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    FUN_7100010cc0(param_1);
    FUN_710000ffb0(param_1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  }
  else {
    FUN_7100010c20();
    FUN_710000fd20(param_1);
    bVar1 = app::lua_bind::MotionModule__is_end_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_TYPE_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

