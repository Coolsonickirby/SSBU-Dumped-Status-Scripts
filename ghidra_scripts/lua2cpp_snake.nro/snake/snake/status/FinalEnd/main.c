
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSnake::status::FinalEnd_main(L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  Hash40 HVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  iVar3 = _FIGHTER_SNAKE_FINAL_LOCK_ON_MAX;
  if (0 < _FIGHTER_SNAKE_FINAL_LOCK_ON_MAX) {
    iVar7 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SNAKE_GENERATE_ARTICLE_MISSILE);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SNAKE_STATUS_FINAL_INT_SITUATION);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) == 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::L2CValue(aLStack112,-1.0);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf84e1d201);
      lib::L2CValue::operator_(aLStack128,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xf7eeeef62);
      lib::L2CValue::operator_(aLStack128,aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  else {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::L2CValue(aLStack112,-1.0);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xb81e7eef7);
      lib::L2CValue::operator_(aLStack128,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xb7be8d394);
      lib::L2CValue::operator_(aLStack128,aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

