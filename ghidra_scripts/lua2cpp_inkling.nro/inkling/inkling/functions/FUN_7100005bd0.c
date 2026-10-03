
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005bd0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x1152d25085);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0x12bd59df70);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  FUN_7100006390(aLStack144,param_2);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x18d08aff86);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1941009c18);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,1.0);
  uVar2 = lib::L2CValue::operator<(aLStack112,aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator-(aLStack96,aLStack112);
    lib::L2CValue::L2CValue(aLStack80,2.0);
    lib::L2CValue::operator-(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator/(aLStack176,aLStack192);
    lib::L2CValue::operator=(aLStack144,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator-(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::operator=(aLStack144,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator=(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,HVar4);
  uVar2 = lib::L2CValue::operator<=(aLStack144,aLStack128);
  if ((uVar2 & 1) != 0) {
    HVar4 = app::lua_bind::MotionModule__motion_kind_2nd_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,HVar4);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack208,aLStack160);
  lib::L2CValue::L2CValue(aLStack224,aLStack96);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  lua2cpp::L2CFighterCommon::set_speed_ratio(param_2,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__scale_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar5);
  lib::L2CValue::operator*(aLStack80,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack256);
  fVar5 = (float)lib::L2CValue::as_number(aLStack192);
  app::lua_bind::MotionModule__set_rate_impl(param_2->moduleAccessor,fVar5);
  fVar5 = (float)lib::L2CValue::as_number(aLStack192);
  app::lua_bind::MotionModule__set_rate_2nd_impl(param_2->moduleAccessor,fVar5);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_weight_impl(param_2->moduleAccessor,fVar5,true);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
  fVar5 = (float)lib::L2CValue::as_number(aLStack256);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

