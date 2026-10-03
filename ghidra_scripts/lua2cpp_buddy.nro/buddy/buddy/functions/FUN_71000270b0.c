
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000270b0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
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
  uVar4 = app::lua_bind::ControlModule__get_flick_x_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,uVar4 & 0xff);
  lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack112,0xcba8643d6);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar5 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,fVar8);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator-(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack64,aLStack80);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xc60e57049);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    uVar5 = lib::L2CValue::operator<(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_CONTROL_PAD_BUTTON_GUARD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_7100027414;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100027414:
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x20);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
  lib::L2CValue::operator&(pLVar7,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x1a);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::operator-(aLStack112);
    lib::L2CValue::operator*(pLVar7,aLStack96);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

