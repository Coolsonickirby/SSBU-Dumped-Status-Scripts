
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPichu::status::SpecialHiWarp_main(L2CFighterPichu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_GENERATE_ARTICLE_SPECIALUPDUMMY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_GENERATE_ARTICLE_SPECIALUPDUMMY);
      lib::L2CValue::L2CValue(aLStack112,0x105739d665);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar3,HVar6,(bool)(bVar2 & 1),-1.0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_GENERATE_ARTICLE_SPECIALUPDUMMY);
      lib::L2CValue::L2CValue(aLStack112,0x10ce3087df);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar3,HVar6,(bool)(bVar2 & 1),-1.0);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_GENERATE_ARTICLE_SPECIALUPDUMMY);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::ArticleModule__set_frame_impl(this->moduleAccessor,iVar3,fVar8);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x157cbabb70);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xf6d0a2d85);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xff4037c3f);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,SpecialHiWarp_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

