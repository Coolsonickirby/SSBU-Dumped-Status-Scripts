
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001da9d0(long param_1)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue *this;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1d01ed24a8);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_TYPE_MOTION);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x19f2c517a3);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_GROUND);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_TRANSITION_TERM_ID_AIR);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

