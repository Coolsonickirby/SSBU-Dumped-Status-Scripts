
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponElightSpreadbullet::status::Fly_main_loop
          (L2CWeaponElightSpreadbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined8 uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar7 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ELIGHT_SPREADBULLET_INSTANCE_WORK_ID_FLOAT_SPEED_X);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ELIGHT_SPREADBULLET_INSTANCE_WORK_ID_FLOAT_SPEED_Y);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710001f5b8;
  }
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_ELIGHT_SPREADBULLET_INSTANCE_WORK_ID_FLAG_HIT_WALL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CWeaponCommon::sub_ground_module_is_touch_all_consider_speed(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = aLStack144;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack128,1);
      uVar4 = lib::L2CValue::operator__(aLStack128,pLVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) == 0) goto LAB_710001f5ac;
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ELIGHT_SPREADBULLET_INSTANCE_WORK_ID_FLAG_HIT_WALL)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack128,1);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710001f5b8;
      }
      lib::L2CValue::L2CValue(aLStack128,2);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
      pLVar5 = aLStack128;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack128,2);
    uVar4 = lib::L2CValue::operator__(aLStack128,pLVar5);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001f5b8;
    }
  }
LAB_710001f5ac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001f5b8:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

