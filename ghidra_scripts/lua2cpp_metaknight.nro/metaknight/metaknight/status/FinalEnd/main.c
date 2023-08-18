
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::FinalEnd_main(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_FLAG_ATTACK_END_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_FLAG_ENABLE_TRANS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
  lib::L2CValue::L2CValue(aLStack112,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xb7be8d394);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_KIND_FINAL_HIT_WAIT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_START_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xef2d4d347);
      lib::L2CValue::operator_(aLStack112,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xe08dbee24);
      lib::L2CValue::operator_(aLStack112,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar3 = aLStack128;
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xf84e1d201);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xf7eeeef62);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
    }
    else {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xb81e7eef7);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xb7be8d394);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
    }
    pLVar3 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar5,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  fVar6 = (float)app::lua_bind::MotionModule__whole_rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar2,fVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar5,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

