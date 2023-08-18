
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTrailIce::status::Fly_main_loop(L2CWeaponTrailIce *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = aLStack96;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TRAIL_ICE_INSTANCE_WORK_ID_FLAG_HIT_WALL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CWeaponCommon::sub_ground_module_is_touch_all_consider_speed(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator__(aLStack80,pLVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_71000359a0;
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_TRAIL_ICE_INSTANCE_WORK_ID_FLAG_HIT_WALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_71000358a0;
      }
      lib::L2CValue::L2CValue(aLStack80,2);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
      pLVar4 = aLStack80;
    }
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar5 = lib::L2CValue::operator__(aLStack80,pLVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_71000359a0;
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_71000358a0:
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_71000359a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

