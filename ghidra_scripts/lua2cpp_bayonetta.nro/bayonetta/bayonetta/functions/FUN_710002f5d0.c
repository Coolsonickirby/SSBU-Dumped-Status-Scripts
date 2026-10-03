
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f5d0(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  app::lua_bind::ControlModule__reset_trigger_impl(param_1->moduleAccessor);
  app::lua_bind::AttackModule__clear_all_impl(param_1->moduleAccessor);
  app::lua_bind::AttackModule__clear_inflict_kind_status_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_CANCEL_UNABLE_CANCEL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_module_access::cancel(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  app::lua_bind::ControlModule__clear_command_impl(param_1->moduleAccessor,false);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_F_FLAG_ENABLE_COMBO);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_F_FLAG_CONNECT_COMBO);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_F_FLAG_HIT_SPEED_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMBO_KIND_AIR_F);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ComboModule__set_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar3 = app::lua_bind::ComboModule__count_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xdbc5d7cc7);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x2b94de0d96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F2);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack144);
      app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      this = aLStack192;
      goto LAB_710002f9dc;
    }
    lib::L2CValue::L2CValue(aLStack80,3);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_710002f9f8;
    lib::L2CValue::L2CValue(aLStack80,0xdcb5a4c51);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x2b94de0d96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F3);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(param_1->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710002f9f8;
    lib::L2CValue::L2CValue(aLStack80,0x88fc722e4);
    lib::L2CValue::L2CValue(aLStack96,0x110ed68a57);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::VisibilityModule__set_int64_impl(param_1->moduleAccessor,lVar6,lVar7);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::ItemModule__set_have_item_visibility_impl
              (param_1->moduleAccessor,(bool)(bVar1 & 1),0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xc3495ada5);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (param_1->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x2b94de0d96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    this = aLStack176;
LAB_710002f9dc:
    lib::L2CValue::~L2CValue(this);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710002f9f8:
  lib::L2CValue::L2CValue(aLStack80,0xc3495ada5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar6,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

