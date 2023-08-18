
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueBalloon::status::Burst_main(L2CWeaponShizueBalloon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  LinkAttribute LVar3;
  HitStatus HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x2ba816c2de);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x26ad27a492);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_MURABITO_BALLOON);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_SHIZUE_BALLOON);
    lib::L2CValue::operator__(pLVar5,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack128,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    LVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack128,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    LVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,HIT_STATUS_OFF);
  HVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x57d3ea0b0);
  FUN_7100003de0(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,Burst_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

