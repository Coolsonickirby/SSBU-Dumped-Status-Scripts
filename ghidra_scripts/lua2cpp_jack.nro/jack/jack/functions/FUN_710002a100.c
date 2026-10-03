
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a100(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
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
  
  pLVar6 = aLStack224;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xa82125b6f);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xcaaf17fe2);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xa82125b6f);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xe724031fb);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xcddf64f74);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1065bc787e);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xcaaf17fe2);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1012bb48e8);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xb1709c575);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xb600ef5e3);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf979cf0d4);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb1709c575);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xfe09bc042);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_MOTION_KIND);
  lVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_TRIGGER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_EXIST);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_flag_impl(param_2->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack80,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl(param_2->moduleAccessor,uVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack128,1);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08 + -1);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08 + -1);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack128,1);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07 + -1);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07 + -1);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    pLVar6 = aLStack192;
  }
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (param_2->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (param_2->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

