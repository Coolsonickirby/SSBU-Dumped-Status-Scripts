
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPit::status::FinalAttack_end(L2CFighterPit *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_STATUS_KIND_FINAL_END);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
    HVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_CAMERA_CAM_ENABLE_ZOOM_REQ);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_module_access::camera(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1f20a9d549);
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_CHARIOT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_L);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_R);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,true);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,true);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

