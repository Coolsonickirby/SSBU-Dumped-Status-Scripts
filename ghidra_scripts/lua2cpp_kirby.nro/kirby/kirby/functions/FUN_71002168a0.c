
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002168a0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this;
  BattleObjectModuleAccessor **ppBVar7;
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
  
  this = aLStack224;
  lib::L2CValue::L2CValue(aLStack112,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(param_2);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_7100217340;
  }
  ppBVar7 = &param_2->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
LAB_71002169e8:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(*ppBVar7,GVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_STEP_START);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_STEP_HOLD);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_STEP_END);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(param_1,0);
          goto LAB_7100217340;
        }
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
          lib::L2CValue::L2CValue(aLStack128,0x91355f0c9);
          lib::L2CValue::L2CValue(aLStack144,true);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*ppBVar7,iVar3,HVar6,(bool)(bVar2 & 1),-1.0);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack176,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          FUN_71002180a0(param_2);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
          lib::L2CValue::L2CValue(aLStack128,0x91355f0c9);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          app::lua_bind::ArticleModule__change_motion_impl(*ppBVar7,iVar3,HVar6,false,-1.0);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_BOW_FLAG_DOUBLE);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar7,iVar3);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack224,FUN_7100218210);
        lua2cpp::L2CFighterBase::fastshift(param_2,(L2CValue)0x20);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xd483c0ed2);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
          lib::L2CValue::L2CValue(aLStack128,0x5306f402c);
          lib::L2CValue::L2CValue(aLStack144,true);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*ppBVar7,iVar3,HVar6,(bool)(bVar2 & 1),-1.0);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xd483c0ed2);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack176,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
          lib::L2CValue::L2CValue(aLStack128,0x5306f402c);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar6 = lib::L2CValue::as_hash(aLStack128);
          app::lua_bind::ArticleModule__change_motion_impl(*ppBVar7,iVar3,HVar6,false,-1.0);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,FUN_7100217d90);
        lua2cpp::L2CFighterBase::fastshift(param_2,(L2CValue)0x30);
        this = aLStack208;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_START);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack128,0xb7af226d2);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        bVar2 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar7,iVar3,HVar6,(bool)(bVar2 & 1),-1.0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack128);
        fVar9 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack128,0xb7af226d2);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar6 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::ArticleModule__change_motion_impl(*ppBVar7,iVar3,HVar6,false,-1.0);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_START);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack192,FUN_7100217af0);
      lua2cpp::L2CFighterBase::fastshift(param_2,(L2CValue)0x40);
      this = aLStack192;
    }
    lib::L2CValue::~L2CValue(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_71002169e8;
    }
    lib::L2CValue::L2CValue(param_1,0);
  }
LAB_7100217340:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

