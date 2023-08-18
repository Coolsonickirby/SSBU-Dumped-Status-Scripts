
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterJack::status::SpecialHi_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,0xa28f17495);
  lib::L2CValue::L2CValue(aLStack128,0xed8a31e01);
  FUN_7100008540(this,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_HI_HOP);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0xdbd055029);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_HI_HOP);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_CLIFF_HANG_DATA_AIR_LASSO_IMMIDIATE);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE2_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,BATTLE_OBJECT_CATEGORY_INVALID);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x50000000);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x50000000);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_HIT_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack176,1);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_11 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_11 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,SpecialHi_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

