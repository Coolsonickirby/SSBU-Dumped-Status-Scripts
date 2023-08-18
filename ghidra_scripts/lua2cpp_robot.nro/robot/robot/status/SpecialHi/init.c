
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialHi_init(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  L2CAgent *pLVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  KineticEnergy *pKVar11;
  KineticEnergyNormal *pKVar12;
  FighterKineticEnergyController *pFVar13;
  FighterModuleAccessor *pFVar14;
  Hash40 HVar15;
  Hash40 HVar16;
  L2CValue *pLVar17;
  BattleObjectModuleAccessor **ppBVar18;
  float fVar19;
  uint uVar20;
  undefined8 uVar21;
  long lVar22;
  int in_stack_fffffffffffffdd4;
  undefined in_stack_fffffffffffffddc;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar18 = &this->moduleAccessor;
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue(aLStack144,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue(aLStack160,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_PUSH_B_BUTTON);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  uVar21 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue(aLStack208,(float)uVar21);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar21 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack192);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar19);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_number(pLVar17);
    uVar20 = lib::L2CValue::as_number(aLStack240);
    local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
    uStack104 = 0;
    uVar6 = lib::L2CValue::as_number(aLStack256);
    lVar22 = lib::L2CValue::as_number(aLStack272);
    uVar20 = lib::L2CValue::as_number(aLStack288);
    local_80 = uVar6 & 0xffffffff | lVar22 << 0x20;
    uStack120 = (ulong)uVar20;
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar11,iVar3,(Vector2f *)&local_70,(Vector3f *)&local_80,pBVar10);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    uVar6 = lib::L2CValue::as_number(pLVar17);
    uVar20 = lib::L2CValue::as_number((L2CValue *)&local_80);
    local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
    uStack104 = 0;
    pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar12,(Vector2f *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_number(aLStack240);
    uVar20 = lib::L2CValue::as_number(pLVar17);
    local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
    uStack104 = 0;
    uVar6 = lib::L2CValue::as_number(aLStack256);
    lVar22 = lib::L2CValue::as_number(aLStack272);
    uVar20 = lib::L2CValue::as_number(aLStack288);
    local_80 = uVar6 & 0xffffffff | lVar22 << 0x20;
    uStack120 = (ulong)uVar20;
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar11,iVar3,(Vector2f *)&local_70,(Vector3f *)&local_80,pBVar10);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
    app::lua_bind::KineticEnergy__enable_impl(pKVar11);
    goto LAB_7100019134;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x139ca2c3cf);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack224,fVar19);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar17 = (L2CValue *)0x1fbdb2615;
  pLVar8 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CAgent::math_abs(pLVar8,pLVar17);
  uVar6 = lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) != 0) {
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar6 = lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack240,1.0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,1.0);
      lib::L2CValue::operator_(aLStack256);
    }
    lib::L2CValue::operator_(aLStack224,aLStack240);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack240);
    if (!bVar1) {
      lib::L2CValue::_L2CValue(aLStack256);
    }
  }
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar18);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar6 & 1) == 0) {
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar6 = lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar6 & 1) != 0) {
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack272,0x11b4a2ec54);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar19);
      lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
      goto LAB_71000187c4;
    }
  }
  else {
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack272,0x145e2e166f);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar19);
    lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
LAB_71000187c4:
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue(aLStack240,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  uVar6 = lib::L2CValue::as_number(aLStack272);
  uVar20 = lib::L2CValue::as_number(pLVar17);
  local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
  uStack104 = 0;
  uVar6 = lib::L2CValue::as_number(aLStack288);
  lVar22 = lib::L2CValue::as_number(aLStack304);
  uVar20 = lib::L2CValue::as_number(aLStack320);
  local_80 = uVar6 & 0xffffffff | lVar22 << 0x20;
  uStack120 = (ulong)uVar20;
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar11,iVar3,(Vector2f *)&local_70,(Vector3f *)&local_80,pBVar10);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
  app::lua_bind::KineticEnergy__enable_impl(pKVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x13eba5f359);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack240,fVar19);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar17 = (L2CValue *)0x18cdc1683;
  pLVar8 = (L2CAgent *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CAgent::math_abs(pLVar8,pLVar17);
  uVar6 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) != 0) {
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar6 = lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack272,1.0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack288,1.0);
      lib::L2CValue::operator_(aLStack288);
    }
    lib::L2CValue::operator_(aLStack240,aLStack272);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack272);
    if (!bVar1) {
      lib::L2CValue::_L2CValue(aLStack288);
    }
  }
  lib::L2CValue::L2CValue(aLStack272,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
  pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = lib::L2CValue::as_number(pLVar17);
  uVar20 = lib::L2CValue::as_number(aLStack304);
  local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
  uStack104 = 0;
  uVar6 = lib::L2CValue::as_number(aLStack320);
  lVar22 = lib::L2CValue::as_number(aLStack336);
  uVar20 = lib::L2CValue::as_number(aLStack352);
  local_80 = uVar6 & 0xffffffff | lVar22 << 0x20;
  uStack120 = (ulong)uVar20;
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar11,iVar3,(Vector2f *)&local_70,(Vector3f *)&local_80,pBVar10);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  uVar6 = lib::L2CValue::as_number(pLVar17);
  uVar20 = lib::L2CValue::as_number((L2CValue *)&local_80);
  local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
  uStack104 = 0;
  pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar12,(Vector2f *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack272,0x107a177a97);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar19);
  fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  pFVar13 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::FighterKineticEnergyController__set_accel_x_add_impl(pFVar13,fVar19);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack304,0x1485958ed6);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar18,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar19);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  uVar6 = lib::L2CValue::as_number((L2CValue *)&local_80);
  uVar20 = lib::L2CValue::as_number(aLStack320);
  local_70 = uVar6 & 0xffffffff | (ulong)uVar20 << 0x20;
  uStack104 = 0;
  pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar12,(Vector2f *)&local_70);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
  app::lua_bind::KineticEnergy__enable_impl(pKVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,pvVar5);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_70);
  app::lua_bind::KineticEnergy__unable_impl(pKVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar18,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,pvVar5);
  pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)&local_70);
  app::lua_bind::KineticEnergy__unable_impl(pKVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_ROBOT_STATUS_BURNER_WORK_FLOAT_UP_SPEED);
  fVar19 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar18,fVar19,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar14 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar17);
  iVar3 = app::FighterSpecializer_Robot::create_burner_effect(pFVar14);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_JET);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_JET_ON);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue(aLStack320,0x119ebb5d36);
  lib::L2CValue::L2CValue(aLStack336,0x4aa784301);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,-90.0);
  lib::L2CValue::L2CValue(aLStack448,1.0);
  lib::L2CValue::L2CValue(aLStack464,false);
  lib::L2CValue::L2CValue(aLStack480,_EFFECT_SUB_ATTRIBUTE_SYNC_INIT_POS);
  HVar15 = lib::L2CValue::as_hash(aLStack320);
  HVar16 = lib::L2CValue::as_hash(aLStack336);
  uVar6 = lib::L2CValue::as_number(aLStack352);
  lVar22 = lib::L2CValue::as_number(aLStack368);
  uVar20 = lib::L2CValue::as_number(aLStack384);
  local_70 = uVar6 & 0xffffffff | lVar22 << 0x20;
  uStack104 = (ulong)uVar20;
  uVar6 = lib::L2CValue::as_number(aLStack400);
  lVar22 = lib::L2CValue::as_number(aLStack416);
  uVar20 = lib::L2CValue::as_number(aLStack432);
  local_80 = uVar6 & 0xffffffff | lVar22 << 0x20;
  uStack120 = (ulong)uVar20;
  fVar19 = (float)lib::L2CValue::as_number(aLStack448);
  bVar2 = lib::L2CValue::as_bool(aLStack464);
  uVar20 = lib::L2CValue::as_integer(aLStack480);
  uVar20 = app::lua_bind::EffectModule__req_follow_impl
                     (*ppBVar18,HVar15,HVar16,(Vector3f *)&local_70,(Vector3f *)&local_80,fVar19,
                      (bool)(bVar2 & 1),uVar20,0,-1,in_stack_fffffffffffffdd4,0,
                      (bool)in_stack_fffffffffffffddc,false);
  lib::L2CValue::L2CValue(aLStack304,uVar20);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack304);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_ROBOT_STATUS_BURNER_WORK_INT_EFFECT_ID_NORMAL);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar18,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_EFFECT_NORMAL_ON);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar18,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
LAB_7100019134:
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_ROBOT_PARTIAL_ANIM_NO_BURNER_PARTS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar18,iVar3,false);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_BURNER_TRANSFORM_COMP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar18,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_BURNER_TRANSFORM_REVERS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar18,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

