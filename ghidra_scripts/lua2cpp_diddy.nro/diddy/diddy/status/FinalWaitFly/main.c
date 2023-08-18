
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalWaitFly_main(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_7100019710();
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x8747e56d1);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
  lib::L2CValue::L2CValue(aLStack112,0x8747e56d1);
  lib::L2CValue::L2CValue(aLStack128,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::ArticleModule__change_motion_impl
            (this->moduleAccessor,iVar2,HVar5,(bool)(bVar1 & 1),-1.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_START_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_GENERATE_ARTICLE_BUNSHIN);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_GENERATE_ARTICLE_BUNSHIN);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::unable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack128,0x1212ed5e05);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack144,0x12414b46e1);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,0x77a08c3fc);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = app::sv_math::rand(HVar5,iVar2);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0xe35b6b29f);
  lib::L2CValue::L2CValue(aLStack160,true);
  HVar5 = lib::L2CValue::as_hash(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar5,(bool)(bVar1 & 1),true);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0xf8eef72e2);
  lib::L2CValue::L2CValue(aLStack160,1);
  HVar5 = lib::L2CValue::as_hash(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,FinalWaitFly_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

