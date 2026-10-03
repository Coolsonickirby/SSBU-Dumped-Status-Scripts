
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003dec0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_710003e17c;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_INT_PAD_FLAG);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
  lib::L2CValue::operator&(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_FLAG_ATTACK_RELEASE);
    lib::L2CValue::operator&(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) goto LAB_710003dfac;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack96);
LAB_710003dfac:
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_ENABLE_COMBO_PRECEDE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_LOOPED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_looped_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_LOOPED);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      goto LAB_710003e16c;
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_CONTINUE_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_CONTINUE_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_ENABLE_COMBO_PRECEDE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::ControlModule__check_button_off_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) goto LAB_710003e174;
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_CONTINU);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_100_WORK_FLAG_ENABLE_COMBO_PRECEDE);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
LAB_710003e16c:
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
LAB_710003e174:
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710003e17c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

