
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterFalco::status::Final_end(L2CFighterFalco *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FALCO_STATUS_KIND_FINAL_READY);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FALCO_GENERATE_ARTICLE_RETICLE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack80,0x19e09b5cc4);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar3,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

