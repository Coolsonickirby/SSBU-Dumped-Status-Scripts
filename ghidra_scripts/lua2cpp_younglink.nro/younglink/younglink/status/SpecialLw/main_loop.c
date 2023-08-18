
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYounglink::status::SpecialLw_main_loop(L2CFighterYounglink *this,L2CValue *return_value)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  long lVar9;
  Fighter *pFVar10;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack160,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001a360;
  }
  ppBVar11 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_7100019a14;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001a360;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100019a14:
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar7 & 1) == 0) {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001a360;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001a360;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  FUN_7100012bb0(aLStack96,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100019dd4:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      FUN_7100012bb0(aLStack80,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_WORK_ID_INT_BOMB_MOT_AIR);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        lib::L2CValue::operator_(aLStack80,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_INT_BOMB_MOTION);
        lVar9 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar9,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
        FUN_710001a6d0(this);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_WAIT);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_FALL);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar11,iVar4);
        goto LAB_7100019f8c;
      }
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_7100019dd4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    GVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_WORK_ID_INT_BOMB_MOT_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar9);
    lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_INT_BOMB_MOTION);
    lVar9 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar9,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    FUN_710001a6d0(this);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar11,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOMB_TRANSITION_TERM_ID_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar11,iVar4);
LAB_7100019f8c:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_LINK);
  uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    bVar3 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar11,0);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lVar9 = -0x50;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_SET_ITEM_HOLD_ANIM);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_710001a0ac;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
      app::FighterSpecializer_Link::set_item_hold_anim_for_script(pFVar10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_SET_ITEM_HOLD_ANIM);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar4);
      lVar9 = -0x40;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
  }
LAB_710001a0ac:
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LINK_GENERATE_ARTICLE_LINKBOMB);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_TOONLINK);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_YOUNGLINK);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOUNGLINK_GENERATE_ARTICLE_YOUNGLINKBOMB);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        goto LAB_710001a1b0;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TOONLINK_GENERATE_ARTICLE_TOONLINKBOMB);
      lib::L2CValue::operator_(aLStack128,aLStack80);
LAB_710001a1b0:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_GENERATE_LINKBOMB);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_ALREADY_GENERATED);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::ArticleModule__is_generatable_impl(*ppBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_HAVE_ITEM_WORK_MAIN);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          iVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_have_item_impl
                    (*ppBVar11,iVar4,iVar6,0x7fb997a80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_BOMB_ALREADY_GENERATED);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001a360:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

