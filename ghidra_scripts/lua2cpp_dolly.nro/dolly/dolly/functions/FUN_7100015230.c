
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015230(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue *this;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = aLStack112;
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator==(param_4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pcVar5 = (code *)lib::L2CValue::as_pointer(param_4);
    (*pcVar5)(param_1);
  }
  else {
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator==(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pcVar5 = (code *)lib::L2CValue::as_pointer(param_3);
    (*pcVar5)(param_1);
    this_00 = aLStack96;
  }
  lib::L2CValue::~L2CValue(this_00);
  return;
}

