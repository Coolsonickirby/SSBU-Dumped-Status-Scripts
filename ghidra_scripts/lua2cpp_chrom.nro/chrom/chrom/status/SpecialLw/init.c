
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::SpecialLwHit_init(L2CFighterChrom *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  ulong uVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  KineticEnergy *pKVar10;
  KineticEnergyNormal *pKVar11;
  FighterKineticEnergyGravity *pFVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  undefined8 uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  ppBVar13 = &this->moduleAccessor;
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack128,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue(aLStack144,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_e0);
  lib::L2CValue::operator_(this_00,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack240,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,pLVar6);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar7 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ROY_STATUS_KIND_SPECIAL_LW_HIT);
    uVar7 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    if ((uVar7 & 1) == 0) goto LAB_7100004b28;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_ROY_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack304,0xad0949135);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    uVar8 = lib::L2CValue::as_integer(aLStack304);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack320,0xae4e0921d);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack288,fVar14);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack320,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack336,0x1474b9ee9b);
    uVar7 = lib::L2CValue::as_integer(aLStack320);
    uVar8 = lib::L2CValue::as_integer(aLStack336);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack304,fVar14);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::operator_((L2CValue *)&local_e0,(L2CValue *)&local_70);
    lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack352,0x1232595a37);
    uVar7 = lib::L2CValue::as_integer(aLStack336);
    uVar8 = lib::L2CValue::as_integer(aLStack352);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack320,fVar14);
    uVar7 = lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack336,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack352,0x1232595a37);
      uVar7 = lib::L2CValue::as_integer(aLStack336);
      uVar8 = lib::L2CValue::as_integer(aLStack352);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack320,fVar14);
      lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack320);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
    }
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_ROY_STATUS_SPECIAL_LW_FLAG_IS_ATTACK_ENEMY);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((bVar2 & 1U) == 0) {
      uVar7 = lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_e0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack288);
      }
    }
    else {
      uVar7 = lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_e0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)&local_e0,aLStack304);
      }
    }
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_ROY_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  else {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_ROY_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack304,0xf2ffdeb36);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar7 = lib::L2CValue::as_number(aLStack240);
      uVar15 = lib::L2CValue::as_number(aLStack304);
      local_e0 = uVar7 & 0xffffffff | (ulong)uVar15 << 0x20;
      uStack216 = 0;
      uVar7 = lib::L2CValue::as_number(aLStack320);
      lVar17 = lib::L2CValue::as_number(aLStack336);
      uVar15 = lib::L2CValue::as_number(aLStack352);
      local_70 = uVar7 & 0xffffffff | lVar17 << 0x20;
      uStack104 = (ulong)uVar15;
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar10,iVar3,(Vector2f *)&local_e0,(Vector3f *)&local_70,pBVar9);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack304,0xf83a3b6fe);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      uVar7 = lib::L2CValue::as_number((L2CValue *)&local_70);
      uVar15 = lib::L2CValue::as_number(aLStack320);
      local_e0 = uVar7 & 0xffffffff | (ulong)uVar15 << 0x20;
      uStack216 = 0;
      pKVar11 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar11,(Vector2f *)&local_e0);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__enable_impl(pKVar10);
      lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      uVar7 = lib::L2CValue::as_number(aLStack304);
      uVar15 = lib::L2CValue::as_number(aLStack256);
      local_e0 = uVar7 & 0xffffffff | (ulong)uVar15 << 0x20;
      uStack216 = 0;
      uVar7 = lib::L2CValue::as_number(aLStack320);
      lVar17 = lib::L2CValue::as_number(aLStack336);
      uVar15 = lib::L2CValue::as_number(aLStack352);
      local_70 = uVar7 & 0xffffffff | lVar17 << 0x20;
      uStack104 = (ulong)uVar15;
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar10,iVar3,(Vector2f *)&local_e0,(Vector3f *)&local_70,pBVar9);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack304,0xcc098ce4e);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
      lib::L2CValue::operator_((L2CValue *)&local_70);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
      pFVar12 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar12,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0xcb44ee068);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar14);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
      pFVar12 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar12,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__enable_impl(pKVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_ROY_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar3,iVar4);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
LAB_7100004b28:
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

