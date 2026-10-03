
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013d90(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_CLOWN_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_SLOPE_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack176,0x10ec7cd54d);
  uVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::operator*(aLStack96,aLStack144);
  lib::L2CValue::L2CValue(aLStack64,0.01);
  lib::L2CValue::operator*(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack112);
  if ((uVar2 & 1) != 0) goto LAB_71000141f0;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_SLOPE_ANGLE_PREV);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_CLOWN_ANGLE_SPEED);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack128);
  if ((uVar2 & 1) == 0) {
LAB_7100013f78:
    lib::L2CValue::operator-(aLStack112,aLStack80);
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack208,0x11e2a31902);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar4);
    lib::L2CValue::operator/(aLStack160,aLStack176);
    lib::L2CValue::operator=(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator+(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_CLOWN_ANGLE_SPEED);
    fVar4 = (float)lib::L2CValue::as_number(aLStack160);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) goto LAB_7100013f78;
  }
  lib::L2CValue::operator+(aLStack80,aLStack144);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack64,aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = lib::L2CValue::operator<(aLStack112,aLStack80), (uVar2 & 1) == 0)) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = lib::L2CValue::operator<(aLStack80,aLStack112), (uVar2 & 1) != 0))
    goto LAB_710001411c;
  }
  else {
LAB_710001411c:
    lib::L2CValue::operator=(aLStack80,aLStack112);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_CLOWN_ANGLE_SPEED);
    fVar4 = (float)lib::L2CValue::as_number(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_CLOWN_ANGLE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_71000141f0:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

