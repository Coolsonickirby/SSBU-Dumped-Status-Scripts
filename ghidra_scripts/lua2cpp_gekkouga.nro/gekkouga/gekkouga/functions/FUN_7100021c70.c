
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021c70(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) goto LAB_71000222bc;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_INT_RUSH_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_INT_RUSH_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0x12c055ddfc);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  uVar4 = lib::L2CValue::operator<(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::GroundModule__set_passable_check_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP_SIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack128,0x193ad740a3);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      goto LAB_7100022194;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack128,0x16de87e9e9);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      goto LAB_7100022194;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN_SIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack128,0x1b39e97589);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      goto LAB_7100022194;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack128,0x16e1f96267);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      goto LAB_7100022194;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x14231a3469);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    lib::L2CValue::operator=(aLStack96,aLStack64);
LAB_7100022194:
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0xeaed35762);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::operator+(aLStack96,aLStack112);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_INT_RUSH_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_TO_END);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_71000222bc:
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

