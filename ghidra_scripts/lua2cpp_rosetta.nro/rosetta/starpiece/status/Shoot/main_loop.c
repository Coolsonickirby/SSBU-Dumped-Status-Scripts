
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaStarpiece::status::Shoot_main_loop
          (L2CWeaponRosettaStarpiece *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *this_00;
  Hash40 HVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 auStack80 [2];
  undefined8 local_40;
  ulong uStack56;
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)auStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)auStack80);
  if ((uVar5 & 1) == 0) {
LAB_710001178c:
    lib::L2CValue::L2CValue((L2CValue *)auStack80,0x9eefe6371);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_STARPIECE_INSTANCE_WORK_ID_FLOAT_ROT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)auStack80);
    uVar8 = lib::L2CValue::as_number(aLStack96);
    uVar9 = lib::L2CValue::as_number(aLStack112);
    uVar3 = lib::L2CValue::as_number(aLStack144);
    local_40 = CONCAT44(uVar9,uVar8);
    uStack56 = (ulong)uVar3;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar6,(Vector3f *)&local_40,0,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack80);
    iVar4 = 0;
    goto LAB_710001187c;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack80,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_STARPIECE_INSTANCE_WORK_ID_FLAG_BURST);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)auStack80);
    if ((bVar2 & 1U) != 0) goto LAB_71000115c4;
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack80,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)auStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_length_impl
                               (this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack80,fVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.01);
      uVar5 = lib::L2CValue::operator__((L2CValue *)auStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_40);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue((L2CValue *)auStack80);
        return;
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack80);
      goto LAB_710001178c;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    this_00 = auStack80;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)auStack80);
LAB_71000115c4:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_ROSETTA_STARPIECE_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue((L2CValue *)auStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack80);
    this_00 = &local_40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  iVar4 = 1;
LAB_710001187c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

