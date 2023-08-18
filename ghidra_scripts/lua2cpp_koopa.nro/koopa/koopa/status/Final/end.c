
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKoopa::status::Final_end(L2CFighterKoopa *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_KIND_FINAL_END);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::ItemModule__set_have_item_visibility_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::ItemModule__set_attach_item_visibility_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),0xff);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::CameraModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_GENERATE_ARTICLE_KOOPAG);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

