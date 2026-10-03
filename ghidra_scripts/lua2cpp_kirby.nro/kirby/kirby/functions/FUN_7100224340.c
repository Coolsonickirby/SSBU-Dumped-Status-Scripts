
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100224340(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  this = &param_1[2].battleObject;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xd2b3a620b);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0xa862d9a23);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::L2CValue(aLStack96,4.0);
      lib::L2CValue::operator/(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar6 = lib::L2CValue::operator<(aLStack96,aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xff5be8167);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::ArticleModule__is_exist_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar6 & 1) == 0) goto LAB_71002253dc;
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        goto LAB_7100224ed0;
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::ArticleModule__change_motion_impl
                (param_1->moduleAccessor,iVar3,HVar7,false,-1.0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x11c55a8405);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,0x11c55a8405);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,false,-1.0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x11c55a8405);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::ArticleModule__is_exist_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar6 & 1) == 0) goto LAB_71002253dc;
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,0x11c55a8405);
        lib::L2CValue::L2CValue(aLStack160,true);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::~L2CValue(aLStack160);
LAB_7100224ed0:
        lib::L2CValue::~L2CValue(aLStack144);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack160);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0xa862d9a23);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::L2CValue(aLStack96,4.0);
      lib::L2CValue::operator/(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar6 = lib::L2CValue::operator<(aLStack96,aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0xb022c8450);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar9 = (float)lib::L2CValue::as_number(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,false,-1.0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
        goto LAB_710022523c;
      }
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        goto LAB_7100224c44;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xd2537272c);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,0xd2537272c);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,false,-1.0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT1);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xd2537272c);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::ArticleModule__is_exist_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar6 & 1) == 0) goto LAB_7100225244;
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAMMER);
        lib::L2CValue::L2CValue(aLStack144,0xd2537272c);
        lib::L2CValue::L2CValue(aLStack160,true);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::ArticleModule__change_motion_impl
                  (param_1->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::~L2CValue(aLStack160);
LAB_7100224c44:
        lib::L2CValue::~L2CValue(aLStack144);
      }
LAB_710022523c:
      lib::L2CValue::~L2CValue(aLStack96);
    }
LAB_7100225244:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_71002253dc;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_71002253dc;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_GROUND_KILL_EFFECT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71002253dc:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

