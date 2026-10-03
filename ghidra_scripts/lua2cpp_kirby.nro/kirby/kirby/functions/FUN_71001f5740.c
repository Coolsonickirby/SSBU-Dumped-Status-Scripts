
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001f5740(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_71001f6334;
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar8 = &param_2->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_COUNT_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) goto LAB_71001f58a4;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_71001f58a4:
      lib::L2CValue::L2CValue(aLStack96,0x20cbc92683);
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_ATTACK_NUM);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_COUNT_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_FOOD);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar8,iVar3,false,-1);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_BUTTON_RELEASE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_COUNT_ENABLE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_TRIGGER_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,-1);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0x86eb1efbe);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_LOOP_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = aLStack144;
LAB_71001f5d94:
      lib::L2CValue::~L2CValue(pLVar7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_BUTTON_RELEASE);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack208);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_LOOP_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        pLVar7 = aLStack96;
        goto LAB_71001f5d94;
      }
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_RAPID_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar1 & 1U) == 0) goto LAB_71001f5e8c;
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_RAPID_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
      pLVar7 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar7);
  }
LAB_71001f5e8c:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_COUNT_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x1226656196);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_TRIGGER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar5 = lib::L2CValue::operator<=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_FLAG_COUNT_ENABLE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_LOOP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x10e1168692);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator-(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::FighterMotionModuleImpl__set_frame_sync_anim_cmd_kirby_copy_impl
              (*ppBVar8,fVar9,(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack96,2);
    lib::L2CValue::operator-(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    iVar3 = app::lua_bind::MotionAnimcmdModule__exec_motion_lines_initialize_impl
                      (*ppBVar8,fVar9,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_MTRANS);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_MTRANS);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_N_WORK_INT_TRIGGER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71001f6334:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

