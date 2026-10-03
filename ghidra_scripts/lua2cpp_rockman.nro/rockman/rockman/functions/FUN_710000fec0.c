
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000fec0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack144,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator=(param_1,aLStack96);
    lVar1 = -0x50;
    goto LAB_7100010684;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP_ACCEPT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator&(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,HVar8);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROCKMAN_MOTION_PART_SET_UDE);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::MotionModule__is_end_partial_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  }
  lib::L2CValue::L2CValue(aLStack96,1);
  uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,2);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,3);
      uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if (((uVar6 & 1) != 0) &&
         (bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160), (bVar3 & 1U) != 0)) {
        lib::L2CValue::L2CValue(aLStack96,0);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::operator=(param_1,aLStack96);
        pLVar7 = aLStack96;
        goto LAB_7100010570;
      }
    }
    else {
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack336,aLStack144);
        lib::L2CValue::L2CValue(aLStack352,param_3);
        lib::L2CValue::L2CValue(aLStack368,param_4);
        FUN_7100010d00(aLStack96,param_2,aLStack336,aLStack352,aLStack368);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        pLVar7 = aLStack336;
        goto LAB_7100010570;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,true);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x20);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_TURN);
      lib::L2CValue::operator&(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar3 & 1U) != 0) {
        FUN_7100010950(aLStack96,param_2);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,false);
          lib::L2CValue::operator=(aLStack112,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
        }
      }
    }
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if (((bVar3 & 1U) != 0) &&
       (bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160), (bVar3 & 1U) != 0)) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack224,param_3);
        lib::L2CValue::L2CValue(aLStack240,2);
        lib::L2CValue::L2CValue(aLStack256,false);
        lib::L2CValue::L2CValue(aLStack272,param_4);
        lib::L2CValue::L2CValue(aLStack288,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
        FUN_71000111e0(param_2,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack96,0x20cbc92683);
        lib::L2CValue::L2CValue(aLStack128,1);
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack128);
        lib::L2CAgent::push_lua_stack(param_2,aLStack320);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,2);
        lib::L2CValue::operator=(aLStack144,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,aLStack144);
        lib::L2CValue::L2CValue(aLStack192,param_3);
        lib::L2CValue::L2CValue(aLStack208,param_4);
        FUN_7100010d00(aLStack96,param_2,aLStack176,aLStack192,aLStack208);
        lib::L2CValue::operator=(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar4);
      }
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar7 = aLStack112;
LAB_7100010570:
    lib::L2CValue::~L2CValue(pLVar7);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lVar1 = -0x90;
LAB_7100010684:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

