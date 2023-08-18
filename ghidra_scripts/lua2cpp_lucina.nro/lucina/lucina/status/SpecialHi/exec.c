
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::SpecialHi_exec(L2CFighterLucina *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  Hash40 HVar8;
  FighterKineticEnergyMotion *pFVar9;
  void *pvVar10;
  BattleObjectModuleAccessor *pBVar11;
  KineticEnergy *pKVar12;
  FighterKineticEnergyGravity *pFVar13;
  FighterKineticEnergyController *pFVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined local_190 [32];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_INSTANCE_WORK_ID_INT_KIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
  ppBVar15 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_190,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_HI_NO);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0xeac5a3d76);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0xdb9935cb9);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0x7b9905530);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0x56a02656c);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack240,0x102ed92d0f);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)local_190,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
  pLVar6 = (L2CValue *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack240,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  fVar16 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
  lib::L2CAgent::math_abs((L2CAgent *)local_190,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack288 + 0x10),
             _FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_STICK_CONTROL_ANGLE_CHK_END);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_70);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack160);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack256);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)local_190,1.0);
      lib::L2CValue::operator_((L2CValue *)local_190,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),aLStack176);
      fVar16 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack320,fVar16);
      lib::L2CValue::L2CValue((L2CValue *)local_190,0);
      pLVar6 = aLStack320;
      uVar4 = lib::L2CValue::operator_((L2CValue *)local_190,pLVar6);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) == 0) {
        lib::L2CAgent::math_rad((L2CAgent *)auStack288,pLVar6);
      }
      else {
        lib::L2CAgent::math_rad((L2CAgent *)auStack288,pLVar6);
        lib::L2CValue::operator_((L2CValue *)local_190);
        lib::L2CValue::_L2CValue((L2CValue *)local_190);
      }
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue
                (aLStack320,_FIGHTER_MARTH_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack320);
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,(int)pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CAgent::math_abs((L2CAgent *)auStack304,pLVar6);
      lib::L2CAgent::math_abs((L2CAgent *)local_190,pLVar6);
      uVar4 = lib::L2CValue::operator_(aLStack336,aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)local_190,(L2CValue *)auStack304);
      }
      lib::L2CValue::L2CValue
                (aLStack320,_FIGHTER_MARTH_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar18 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_190,(float)uVar18);
  pLVar6 = (L2CValue *)(local_190 + 0x10);
  lib::L2CValue::L2CValue(pLVar6,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::operator_(pLVar7,(L2CValue *)local_190);
  lib::L2CValue::operator_(this_00,pLVar6);
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) == 0) goto LAB_710000874c;
  lib::L2CValue::L2CValue((L2CValue *)auStack288,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_FREE_FALL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_70);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack288,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    bVar1 = app::lua_bind::KineticModule__is_enable_energy_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_190,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_190,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
      pvVar10 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,pvVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      uVar4 = lib::L2CValue::as_number(aLStack320);
      uVar17 = lib::L2CValue::as_number(pLVar6);
      local_190._0_8_ = (void **)(uVar4 & 0xffffffff | (ulong)uVar17 << 0x20);
      local_190._8_8_ = (lua_State *)0x0;
      uVar4 = lib::L2CValue::as_number(aLStack336);
      lVar19 = lib::L2CValue::as_number(aLStack416);
      uVar17 = lib::L2CValue::as_number(aLStack432);
      local_70 = uVar4 & 0xffffffff | lVar19 << 0x20;
      uStack104 = (ulong)uVar17;
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar12,iVar3,(Vector2f *)local_190,(Vector3f *)&local_70,pBVar11);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::operator_(aLStack192);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
      pFVar13 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar13,fVar16);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      fVar16 = (float)lib::L2CValue::as_number(aLStack208);
      pFVar13 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar13,fVar16);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergy__enable_impl(pKVar12);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack288,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    bVar1 = app::lua_bind::KineticModule__is_enable_energy_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_190,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
      pvVar10 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,pvVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      uVar4 = lib::L2CValue::as_number(pLVar6);
      uVar17 = lib::L2CValue::as_number(aLStack320);
      local_190._0_8_ = (void **)(uVar4 & 0xffffffff | (ulong)uVar17 << 0x20);
      local_190._8_8_ = (lua_State *)0x0;
      uVar4 = lib::L2CValue::as_number(aLStack336);
      lVar19 = lib::L2CValue::as_number(aLStack416);
      uVar17 = lib::L2CValue::as_number(aLStack432);
      local_70 = uVar4 & 0xffffffff | lVar19 << 0x20;
      uStack104 = (ulong)uVar17;
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar12,iVar3,(Vector2f *)local_190,(Vector3f *)&local_70,pBVar11);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      fVar16 = (float)lib::L2CValue::as_number(aLStack224);
      pFVar14 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::FighterKineticEnergyController__set_accel_x_mul_impl(pFVar14,fVar16);
      fVar16 = (float)lib::L2CValue::as_number(aLStack224);
      pFVar14 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::FighterKineticEnergyController__mul_x_speed_max_impl(pFVar14,fVar16);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack288);
      app::lua_bind::KineticEnergy__enable_impl(pKVar12);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      app::sv_kinetic_energy::set_accel_y_mul(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      app::sv_kinetic_energy::set_accel_y_add(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    }
    pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::KineticEnergy__unable_impl(pKVar12);
  }
  else {
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar8);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0xed8a31e01);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_190,0x1184fa7e19);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_71000080fc;
      lib::L2CValue::L2CValue((L2CValue *)local_190,0x11f3fd4e8f);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_71000080fc;
      lib::L2CValue::L2CValue((L2CValue *)local_190,0x116d99db2c);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_71000080fc;
      lib::L2CValue::L2CValue((L2CValue *)local_190,0xa28f17495);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) {
LAB_710000895c:
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1086bc4a93);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0xb76f1b37a);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
        fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
        pFVar9 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack240);
        app::lua_bind::FighterKineticEnergyMotion__set_speed_mul_impl(pFVar9,fVar16);
        goto LAB_710000817c;
      }
      lib::L2CValue::L2CValue((L2CValue *)local_190,0xd6497dd30);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_710000895c;
      lib::L2CValue::L2CValue((L2CValue *)local_190,0xd1390eda6);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_710000895c;
      lib::L2CValue::L2CValue((L2CValue *)local_190,0xd8df47805);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) goto LAB_710000895c;
    }
    else {
LAB_71000080fc:
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,0xf87ace3a1);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
      pFVar9 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack240);
      app::lua_bind::FighterKineticEnergyMotion__set_speed_mul_impl(pFVar9,fVar16);
LAB_710000817c:
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack288,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_FREE_FALL_CHK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)local_190,-1e-05);
      uVar4 = lib::L2CValue::operator_(pLVar6,(L2CValue *)local_190);
      lib::L2CValue::_L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_190,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_FREE_FALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_190);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_FREE_FALL_CHK)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
LAB_710000874c:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE_SET_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)local_190);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_MARTH_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_190,fVar16);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
    pFVar9 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::FighterKineticEnergyMotion__set_angle_impl(pFVar9,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_190,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE_SET_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_190);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

