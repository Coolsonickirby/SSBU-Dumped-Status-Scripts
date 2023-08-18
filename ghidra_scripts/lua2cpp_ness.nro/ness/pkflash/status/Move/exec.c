
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkflash::status::Move_exec(L2CWeaponNessPkflash *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  KineticEnergyNormal *pKVar5;
  WeaponKineticEnergyGravity *pWVar6;
  KineticEnergy *pKVar7;
  ulong *puVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd58819e28);
  lib::L2CValue::L2CValue(aLStack112,0x585d94462);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar9 = &this->moduleAccessor;
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd58819e28);
  lib::L2CValue::L2CValue(aLStack128,0x7ce9765a6);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd58819e28);
  lib::L2CValue::L2CValue(aLStack144,0x86fec4d80);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd58819e28);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x853e172d9);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_FLOAT_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  uVar2 = lib::L2CValue::operator_(aLStack96,(L2CValue *)(auStack176 + 0x10));
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_FLAG_MAX);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_FLOAT_COUNT);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  puVar8 = &local_50;
  uVar2 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)puVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar2 & 1) == 0) {
    fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar10);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,(L2CValue *)puVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.2);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator_((L2CValue *)auStack176,aLStack112);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
    lib::L2CValue::L2CValue(aLStack208,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar2 = lib::L2CValue::as_number(aLStack192);
    uVar11 = lib::L2CValue::as_number(aLStack224);
    local_50 = uVar2 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack72 = 0;
    pKVar5 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
    app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar5,(Vector2f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  }
  iVar1 = app::lua_bind::StatusModule__prev_situation_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
LAB_7100021b14:
    iVar1 = app::lua_bind::StatusModule__prev_situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) != 0) {
      iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack192,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      if ((uVar2 & 1) == 0) goto LAB_7100021cf0;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,pvVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar2 = lib::L2CValue::as_number(aLStack192);
      uVar11 = lib::L2CValue::as_number(aLStack208);
      local_50 = uVar2 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack72 = 0;
      pKVar5 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack176);
      app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar5,(Vector2f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar2 = lib::L2CValue::as_number(aLStack192);
      uVar11 = lib::L2CValue::as_number(aLStack208);
      local_50 = uVar2 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack72 = 0;
      pKVar5 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack176);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar5,(Vector2f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_NESS_PK_FLASH_KINETIC_ENERGY_ID_GRAVITY);
      iVar1 = lib::L2CValue::as_integer(aLStack192);
      pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,pvVar4);
      lib::L2CValue::_L2CValue(aLStack192);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
      app::lua_bind::KineticEnergy__clear_speed_impl(pKVar7);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
      app::lua_bind::KineticEnergy__unable_impl(pKVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    puVar8 = (ulong *)auStack176;
  }
  else {
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack192,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    if ((uVar2 & 1) == 0) goto LAB_7100021b14;
    lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_NESS_PK_FLASH_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue(aLStack192,0xd58819e28);
    lib::L2CValue::L2CValue(aLStack208,0x7b9905530);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar10);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,0xd58819e28);
    lib::L2CValue::L2CValue(aLStack224,0xb5af02a17);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_((L2CValue *)auStack176);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    pWVar6 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
    app::lua_bind::WeaponKineticEnergyGravity__set_accel_impl(pWVar6,fVar10);
    lib::L2CValue::_L2CValue(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    pWVar6 = (WeaponKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
    app::lua_bind::WeaponKineticEnergyGravity__set_limit_speed_impl(pWVar6,fVar10);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    puVar8 = &local_50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar8);
LAB_7100021cf0:
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack192);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  app::lua_bind::PostureModule__set_scale_impl(*ppBVar9,fVar10,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

