
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSheikNeedle::status::Move_main_loop(L2CWeaponSheikNeedle *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  undefined8 *puVar7;
  L2CValue *in_x2;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  BattleObject *pBStack56;
  
  bVar1 = app::lua_bind::StopModule__is_hit_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::operator_(aLStack176);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    lib::L2CAgent::math_atan((L2CAgent *)aLStack96,aLStack144,in_x2);
    puVar7 = &local_40;
    lib::L2CValue::operator_(aLStack112,(L2CValue *)puVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack112,(L2CValue *)puVar7);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    uVar9 = lib::L2CValue::as_number(aLStack144);
    uVar10 = lib::L2CValue::as_number(aLStack160);
    uVar11 = lib::L2CValue::as_number(aLStack176);
    local_40 = CONCAT44(uVar10,uVar9);
    pBStack56 = (BattleObject *)(ulong)uVar11;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_ALL);
    uVar11 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x66933a7e6);
      lib::L2CValue::L2CValue(aLStack160,5);
      HVar6 = lib::L2CValue::as_hash(aLStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar11 = app::sv_math::rand(HVar6,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,uVar11);
      lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,3);
      uVar5 = lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_SHEIK_NEEDLE_STATUS_KIND_JUMP);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_SHEIK_NEEDLE_INSTANCE_WORK_ID_INT_NEXT_STATUS_KIND);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_SHEIK_NEEDLE_STATUS_KIND_STAY);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_SHEIK_NEEDLE_INSTANCE_WORK_ID_INT_NEXT_STATUS_KIND);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

