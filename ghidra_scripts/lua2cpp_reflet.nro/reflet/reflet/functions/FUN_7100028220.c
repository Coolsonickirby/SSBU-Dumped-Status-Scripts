
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028220(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  Fighter *pFVar9;
  ulong uVar10;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar6 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,lVar6);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) != 0) goto LAB_7100028310;
      lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xd40042152);
        uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) == 0) goto LAB_71000283a4;
      }
      uVar4 = app::lua_bind::ControlModule__get_flick_no_reset_y_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,uVar4 & 0xff);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_CSTICK_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_71000283a4;
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    else {
LAB_7100028310:
      uVar4 = app::lua_bind::ControlModule__get_flick_no_reset_x_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,uVar4 & 0xff);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_CSTICK_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_71000283a4;
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_71000283a4:
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar8 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,pvVar8);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_MAGIC_KIND_SWORD);
  pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Reflet::change_hud_kind(pFVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    FUN_7100027970(param_1);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_ATTACK_AIR_INT_THUNDER_SWORD);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_THUNDER_SWORD_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_AIR_SMASH);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack128,0x27c8749cb3);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar10 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::operator-(aLStack128,aLStack64);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar3,iVar5);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  else {
    FUN_7100027ff0(param_1);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
  iVar3 = app::lua_bind::ControlModule__get_attack_air_kind_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_THUNDER_SWORD_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
        uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
          uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xd40042152);
            uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar7 & 1) == 0) goto LAB_7100028af4;
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_15);
            lib::L2CValue::operator=(aLStack112,aLStack64);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_13);
            lib::L2CValue::operator=(aLStack112,aLStack64);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_11);
          lib::L2CValue::operator=(aLStack112,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_09);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07);
      lib::L2CValue::operator=(aLStack112,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
        uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
          uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xd40042152);
            uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar7 & 1) == 0) goto LAB_7100028af4;
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_16);
            lib::L2CValue::operator=(aLStack112,aLStack64);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_14);
            lib::L2CValue::operator=(aLStack112,aLStack64);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_12);
          lib::L2CValue::operator=(aLStack112,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_10);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08);
      lib::L2CValue::operator=(aLStack112,aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100028af4:
  lib::L2CValue::L2CValue(aLStack144,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack160,1);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator-(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator-(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

