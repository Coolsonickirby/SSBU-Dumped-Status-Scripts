
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018940(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  HitStatus HVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_THROW_FLAG_INVINCIBLE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      bVar2 = app::lua_bind::CatchModule__is_catch_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
        HVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::HitModule__set_whole_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar4,0);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_THROW_FLAG_INVINCIBLE);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_THROW_FLAG_START_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar5);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_AIR_ANGLE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__unable_transition_term_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__unable_energy_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_THROW_FLAG_START_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

