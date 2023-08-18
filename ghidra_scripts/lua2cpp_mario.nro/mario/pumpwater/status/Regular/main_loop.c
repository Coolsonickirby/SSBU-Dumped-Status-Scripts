
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioPumpwater::status::Regular_main_loop
          (L2CWeaponMarioPumpwater *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  BattleObjectModuleAccessor **ppBVar5;
  L2CValue *in_x2;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  BattleObjectModuleAccessor *local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar6);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar6);
  lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar6);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CAgent::math_atan((L2CAgent *)auStack128,aLStack160,in_x2);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  ppBVar5 = &local_40;
  lib::L2CValue::operator_((L2CValue *)(auStack128 + 0x10),(L2CValue *)ppBVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)(auStack128 + 0x10),(L2CValue *)ppBVar5);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  uVar9 = lib::L2CValue::as_number(aLStack176);
  local_40 = (BattleObjectModuleAccessor *)CONCAT44(uVar8,uVar7);
  uStack56 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::AttackModule__is_infliction_impl(this->moduleAccessor,0x7f);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
    uVar9 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
      uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_7100010674;
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_MARIO_PUMP_WATER_STATUS_KIND_DIE);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_WEAPON_MARIO_PUMP_WATER_INSTANCE_WORK_ID_FLAG_CLASH_GROUND);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_MARIO_PUMP_WATER_STATUS_KIND_CLASH);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_MARIO_PUMP_WATER_STATUS_KIND_CLASH);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
LAB_7100010674:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

