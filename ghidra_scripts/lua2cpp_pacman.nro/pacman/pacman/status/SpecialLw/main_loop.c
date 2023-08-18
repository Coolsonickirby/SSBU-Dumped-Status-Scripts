
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::Final_main_loop(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  uint uVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_STATUS_FINAL_FLAG_CHANGE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_FINAL_FLAG_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_X);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_FINAL_WORK_FLOAT_START_POS_Y);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_GENERATE_ARTICLE_BIGPACMAN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
    HVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::HitModule__set_whole_impl(*ppBVar9,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::AreaModule__set_whole_impl(*ppBVar9,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar9,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ItemModule__set_have_item_visibility_impl(*ppBVar9,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ItemModule__set_attach_item_visibility_impl(*ppBVar9,(bool)(bVar1 & 1),0xff);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PACMAN_STATUS_FINAL_FLAG_START_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      iVar3 = 0;
      goto LAB_710001ca6c;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_LINK_NO_BIGPACMAN);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_LINK_NO_BIGPACMAN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::LinkModule__unlink_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_LINK_NO_BIGPACMAN);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_BIGPACMAN_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::LinkModule__link_impl(*ppBVar9,iVar3,uVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_LINK_NO_BIGPACMAN);
    lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack160,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
    lib::L2CValue::L2CValue(aLStack176,false);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    HVar8 = lib::L2CValue::as_hash(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (*ppBVar9,iVar3,HVar7,HVar8,uVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACMAN_STATUS_KIND_FINAL_MOVE);
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar3 = 1;
LAB_710001ca6c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

