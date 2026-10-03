
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000265a0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  FUN_7100026980(aLStack80,param_1);
  FUN_7100006480(aLStack96,param_1);
  lib::L2CValue::L2CValue(aLStack128,0x169d8e2182);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  bVar1 = app::lua_bind::SoundModule__is_playing_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1603eab421);
    HVar4 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = app::lua_bind::SoundModule__is_playing_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_7100026850;
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_ROLLER_EMPTY_SE_MAX_PITCH);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::operator-(aLStack64,aLStack80);
    lib::L2CValue::operator-(aLStack96,aLStack80);
    lib::L2CValue::operator/(aLStack160,aLStack176);
    lib::L2CValue::operator*(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack144,0x1603eab421);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    fVar5 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::SoundModule__set_se_pitch_cent_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_ROLLER_SE_MAX_PITCH);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::operator-(aLStack64,aLStack80);
    lib::L2CValue::operator-(aLStack96,aLStack80);
    lib::L2CValue::operator/(aLStack160,aLStack176);
    lib::L2CValue::operator*(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack144,0x169d8e2182);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    fVar5 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::SoundModule__set_se_pitch_cent_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100026850:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

