
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSWalkTurn_end(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      FUN_7100009e90(this,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_INKLING_ROLLER_STATUS_KIND_END);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack112,0x23d3ec2d50);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar5,0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

