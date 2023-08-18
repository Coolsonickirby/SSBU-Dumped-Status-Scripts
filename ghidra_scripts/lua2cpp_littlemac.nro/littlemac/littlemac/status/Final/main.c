
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::Final_main(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1f20a9d549);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,true);
  FUN_7100015300(this,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_GENERATE_ARTICLE_LITTLEMACG);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_GENERATE_ARTICLE_LITTLEMACG);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_LITTLEMAC_LITTLEMACG_STATUS_KIND_START);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_GENERATE_ARTICLE_LITTLEMACG);
    lib::L2CValue::L2CValue(aLStack144,0x9bdc1e36b);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LITTLEMAC_GENERATE_ARTICLE_LITTLEMACG);
    lib::L2CValue::L2CValue(aLStack144,0x59f79558f);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

