
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalAttack_main_loop
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  KineticEnergy *pKVar7;
  L2CValue *pLVar8;
  float fVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
    lib::L2CValue::L2CValue(aLStack144,170.0);
    uVar5 = lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::CameraModule__set_enable_update_pos_impl(this->moduleAccessor,uVar3,-1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_WEAPON_GEKKOUGA_GEKKOUGAS_KINETIC_ENERGY_ID_MOTION);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack144,pvVar6);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__enable_impl(pKVar7);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_GEKKOUGA_GEKKOUGAS_KINETIC_ENERGY_ID_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,pvVar6);
    lib::L2CValue::_L2CValue(aLStack144);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
    uVar11 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar7);
    lib::L2CValue::L2CValue(aLStack144,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,aLStack144);
    lib::L2CValue::L2CValue(aLStack80,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar9 = (float)app::lua_bind::SlowModule__rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8);
    lib::L2CValue::operator_(aLStack80,aLStack176);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack160);
    lVar12 = lib::L2CValue::as_number(aLStack192);
    uVar10 = lib::L2CValue::as_number(aLStack208);
    local_40 = uVar5 & 0xffffffff | lVar12 << 0x20;
    uStack56 = (ulong)uVar10;
    app::lua_bind::CameraModule__add_camera_range_offset_impl
              (this->moduleAccessor,(Vector3f *)&local_40,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

