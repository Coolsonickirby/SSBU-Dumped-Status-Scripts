
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000144f0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar2 = app::lua_bind::ComboModule__count_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xd0383c659);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_02);
      lib::L2CValue::operator=(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::MotionModule__enable_remove_2nd_change_motion_impl
                (param_2->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar4 = lib::L2CValue::as_hash(aLStack128);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (param_2->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::MotionModule__enable_remove_2nd_change_motion_impl
                (param_2->moduleAccessor,(bool)(bVar1 & 1));
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xd7484f6cf);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
      lib::L2CValue::operator=(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::MotionModule__enable_remove_2nd_change_motion_impl
                (param_2->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar4 = lib::L2CValue::as_hash(aLStack128);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (param_2->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::MotionModule__enable_remove_2nd_change_motion_impl
                (param_2->moduleAccessor,(bool)(bVar1 & 1));
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xc3a4e2597);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N);
    lib::L2CValue::operator=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar4 = lib::L2CValue::as_hash(aLStack128);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (param_2->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x2b94de0d96);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack80);
  lib::L2CAgent::push_lua_stack(param_2,aLStack144);
  lib::L2CAgent::push_lua_stack(param_2,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_2,1);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar5,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

