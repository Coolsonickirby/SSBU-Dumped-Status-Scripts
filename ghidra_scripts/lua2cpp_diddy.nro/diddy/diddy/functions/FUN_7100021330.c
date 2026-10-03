
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021330(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_SITUATION_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0x15e7945fd8);
    HVar6 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,-1.0,1.0,0.0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_SITUATION_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::GroundModule__correct_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),GVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_SITUATION_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0x1191c9abc7);
    HVar6 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,-1.0,1.0,0.0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_SITUATION_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

