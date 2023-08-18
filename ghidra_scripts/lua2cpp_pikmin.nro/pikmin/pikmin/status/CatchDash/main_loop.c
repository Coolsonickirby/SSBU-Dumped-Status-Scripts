
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::CatchDash_main_loop
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  void *pvVar5;
  KineticEnergyNormal *pKVar6;
  KineticEnergy *pKVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar4 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_40);
      fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        uVar9 = lib::L2CValue::as_number(aLStack112);
        uVar10 = lib::L2CValue::as_number(aLStack128);
        local_40 = CONCAT44(uVar10,uVar9);
        uStack56 = 0;
        pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack80);
        app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar6,(Vector2f *)&local_40);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack80);
        app::lua_bind::KineticEnergy__unable_impl(pKVar7);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,0x29479ae28e);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_GROUND_FOLLOW)
      ;
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_FAILURE_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

