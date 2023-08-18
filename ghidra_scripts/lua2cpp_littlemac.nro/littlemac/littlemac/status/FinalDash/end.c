
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::FinalDash_end(L2CFighterLittlemac *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_KIND_FINAL_DASH_END);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_KIND_FINAL_END);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_STATUS_KIND_FINAL_HIT);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x12599d92ee);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::EffectModule__remove_screen_impl(this->moduleAccessor,HVar5,-1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_GENERATE_ARTICLE_LITTLEMACG);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,true);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

