
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022210(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_FLOAT_HOLD_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar7);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0xa862d9a23);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  uVar4 = lib::L2CValue::operator<(aLStack64,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_FLOAT_HOLD_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack176,0xc1902f2de);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::operator+(aLStack112,aLStack144);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator+(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_FLOAT_HOLD_COUNT);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_FLOAT_HOLD_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar7);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0xa862d9a23);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    this = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX_FLUSHING);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0xaec2db62e);
    HVar6 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::EffectModule__req_common_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,0.0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX_FLUSHING);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
  return;
}

