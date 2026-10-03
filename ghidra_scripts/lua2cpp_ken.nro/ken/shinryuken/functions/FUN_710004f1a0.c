
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004f1a0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_710004f8a4;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KEN_SHINRYUKEN_INSTANCE_WORK_ID_FLAG_ADD_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack80,true);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar2 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::AttackModule__sleep_partialy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::L2CValue(aLStack80,true);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar2 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::AttackModule__sleep_partialy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack80);
    this = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KEN_SHINRYUKEN_INSTANCE_WORK_ID_INT_ADD_ATTACK_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) goto LAB_710004f3b8;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
LAB_710004f3b8:
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator+(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_KEN_SHINRYUKEN_INSTANCE_WORK_ID_INT_ADD_ATTACK_DEC_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator-(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0x10bbe44ed9);
      lib::L2CValue::L2CValue(aLStack144,0x1da46fbdac);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator-(aLStack80,aLStack112);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack112,0x10bbe44ed9);
      lib::L2CValue::L2CValue(aLStack128,0x23047ddf88);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_KEN_SHINRYUKEN_INSTANCE_WORK_ID_INT_ADD_ATTACK_DEC_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack112,0x10bbe44ed9);
    lib::L2CValue::L2CValue(aLStack128,0x1d45b78acb);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator<(aLStack64,aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_KEN_SHINRYUKEN_INSTANCE_WORK_ID_INT_ADD_ATTACK_COUNT)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x10bbe44ed9);
    lib::L2CValue::L2CValue(aLStack144,0x1d79bab592);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,true);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__sleep_partialy_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack128,true);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__sleep_partialy_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,(bool)(bVar2 & 1));
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,0);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::AttackModule__set_attack_2_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack128,0);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::AttackModule__set_attack_2_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    this = aLStack80;
  }
  lib::L2CValue::~L2CValue(this);
LAB_710004f8a4:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

