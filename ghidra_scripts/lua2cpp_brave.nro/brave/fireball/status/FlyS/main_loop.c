
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveFireball::status::FlyS_main_loop(L2CWeaponBraveFireball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xe728cfd17);
  lib::L2CValue::L2CValue(aLStack112,0x14383844c5);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0xe728cfd17);
    lib::L2CValue::L2CValue(aLStack128,0x953d11109);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,5);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100041e94;
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_HIT_WALL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CWeaponCommon::sub_ground_module_is_touch_all_consider_speed(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      pLVar7 = aLStack112;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator__(aLStack80,pLVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100041dbc;
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_HIT_WALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,5);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_S);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100041e94;
      }
      lib::L2CValue::L2CValue(aLStack80,2);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
      pLVar7 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar5 = lib::L2CValue::operator__(aLStack80,pLVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,5);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_S);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100041e94;
    }
  }
LAB_7100041dbc:
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,5);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_S);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100041e94:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

