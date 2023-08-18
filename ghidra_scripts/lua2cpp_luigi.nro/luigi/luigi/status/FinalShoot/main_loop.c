
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::FinalShoot_main_loop(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUIGI_STATUS_FINAL_FLAG_RESHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_FINAL_FLAG_RESHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x27381bbe78);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUIGI_STATUS_FINAL_INT_SHOOT_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xf745a93d8);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar5 = lib::L2CValue::as_hash(aLStack96);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        fVar7 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
        lib::L2CValue::L2CValue(aLStack128,0xf745a93d8);
        lib::L2CValue::L2CValue(aLStack144,false);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar5 = lib::L2CValue::as_hash(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar5,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xb715caf2e);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar5 = lib::L2CValue::as_hash(aLStack96);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        fVar7 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
        lib::L2CValue::L2CValue(aLStack128,0xb715caf2e);
        lib::L2CValue::L2CValue(aLStack144,false);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar5 = lib::L2CValue::as_hash(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar5,(bool)(bVar1 & 1),-1.0);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar2 = (bVar2 & 1U) != 0;
  if (bVar2) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar2);
  return;
}

