
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialNTurn_main(L2CFighterCaptain *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  L2CValue *this_00;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xe396c1260);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_CAPTAIN_FALCONPUNCH_STATUS_KIND_SPECIAL_N_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(this_00,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
        lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
        lib::L2CValue::L2CValue(aLStack112,false);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
        lib::L2CValue::L2CValue(aLStack96,0x127b3ee7af);
        lib::L2CValue::L2CValue(aLStack112,false);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
      }
    }
    else {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
        lib::L2CValue::L2CValue(aLStack96,0x1054b560f7);
        lib::L2CValue::L2CValue(aLStack112,false);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
        lib::L2CValue::L2CValue(aLStack96,0x10aeba5d94);
        lib::L2CValue::L2CValue(aLStack112,false);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,(bool)(bVar1 & 1),-1.0);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::ArticleModule__set_frame_impl(this->moduleAccessor,iVar3,fVar8);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_GENERATE_ARTICLE_FALCONPUNCH);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__set_visibility_whole_impl
              (this->moduleAccessor,iVar3,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,SpecialNTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

