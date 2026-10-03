
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000140b0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_SPECIAL_HI_THROW_FLAG_CHANGE_KINE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      this = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_SPECIAL_HI_THROW_FLAG_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) goto LAB_7100014228;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_SPECIAL_HI_THROW_FLAG_CHANGE_KINE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_GANON_SPECIAL_HI_THROW_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__enable_transition_term_group_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      this = aLStack64;
    }
    lib::L2CValue::~L2CValue(this);
  }
LAB_7100014228:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

