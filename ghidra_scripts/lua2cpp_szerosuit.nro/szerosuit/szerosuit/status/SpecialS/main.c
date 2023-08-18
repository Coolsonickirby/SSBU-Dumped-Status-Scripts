
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialS_main(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  uint uVar4;
  int iVar5;
  L2CValue *this_00;
  ulong uVar6;
  Hash40 HVar7;
  long lVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack128,false);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar9,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(this_00,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
    lib::L2CValue::L2CValue(aLStack128,0xd2b3a620b);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::ArticleModule__change_motion_impl(*ppBVar9,iVar2,HVar7,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_AIR_LASSO);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar9,uVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar9,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x976c3b29b);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP);
    lib::L2CValue::L2CValue(aLStack128,0x976c3b29b);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::ArticleModule__change_motion_impl(*ppBVar9,iVar2,HVar7,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE2_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(*ppBVar9,0.0);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack128,0x976c3b29b);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
  lVar8 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xd2b3a620b);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
  lVar8 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_S_FLAG_S2_CHECK);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

