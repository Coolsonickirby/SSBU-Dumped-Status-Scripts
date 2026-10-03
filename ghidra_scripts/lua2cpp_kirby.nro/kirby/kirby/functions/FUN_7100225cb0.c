
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100225cb0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *this;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0xa862d9a23);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar5 = lib::L2CValue::operator<(aLStack80,aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0xc1902f2de);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator+(aLStack80,aLStack112);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_QUARTER);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      this = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,4.0);
      lib::L2CValue::operator/(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      uVar5 = lib::L2CValue::operator<=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) goto LAB_710022615c;
      lib::L2CValue::L2CValue(aLStack64,0x12eb4bf175);
      HVar7 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::ControlModule__stop_rumble_kind_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,0x50000000);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x127242a0cf);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar7 = lib::L2CValue::as_hash(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::ControlModule__set_rumble_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,iVar3,(bool)(bVar1 & 1),
                 0x50000000);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x14a92dd7eb);
      HVar7 = lib::L2CValue::as_hash(aLStack64);
      iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,false,false,false);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_QUARTER);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      this = aLStack64;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,0x14de2ae77d);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = app::lua_bind::SoundModule__is_playing_status_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack112);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_710022615c;
    lib::L2CValue::L2CValue(aLStack64,0x14a92dd7eb);
    HVar7 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::SoundModule__stop_se_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x14de2ae77d);
    HVar7 = lib::L2CValue::as_hash(aLStack64);
    iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7,false,false,false);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::~L2CValue(aLStack160);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
LAB_710022615c:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

