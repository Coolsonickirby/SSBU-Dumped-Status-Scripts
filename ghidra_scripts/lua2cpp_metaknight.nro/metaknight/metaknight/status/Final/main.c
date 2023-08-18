
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::Final_main(L2CFighterMetaknight *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *this_00;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar3 = _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_END;
  iVar4 = _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START;
  if (_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START <=
      _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_END) {
    do {
      lib::L2CValue::L2CValue(aLStack112,-1);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar1 = iVar4 < iVar3;
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  lib::L2CValue::L2CValue(aLStack112,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_START_LR);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  lib::L2CValue::L2CValue(aLStack144,false);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar3,(bool)(bVar2 & 1),0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::L2CValue(aLStack160,0xde6c876be);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x11714e7467);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x118b414904);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xd1cc74bdd);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xde6c876be);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar9 = lib::L2CValue::as_hash(aLStack160);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  bVar2 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar9 = lib::L2CValue::as_hash(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar3,HVar9,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_FOURWINGS);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar9 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar3,HVar9,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

