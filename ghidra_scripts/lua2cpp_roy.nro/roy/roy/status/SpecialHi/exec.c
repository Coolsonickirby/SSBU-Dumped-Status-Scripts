
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialHi_exec(L2CFighterRoy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  Hash40 HVar9;
  FighterKineticEnergyMotion *pFVar10;
  BattleObjectModuleAccessor *pBVar11;
  KineticEnergy *pKVar12;
  FighterKineticEnergyGravity *pFVar13;
  FighterKineticEnergyController *pFVar14;
  L2CValue *pLVar15;
  void ***pppvVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  undefined8 uVar19;
  long lVar20;
  L2CValue aLStack368 [16];
  undefined local_160 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  void **local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)local_160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  ppBVar17 = &this->moduleAccessor;
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue(aLStack128,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_STICK_CONTROL_ANGLE_CHK_END);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
  pLVar15 = (L2CValue *)(ulong)(uVar4 & 1);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SUB41(uVar4 & 1,0));
  lib::L2CValue::operator_((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    fVar18 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
    lib::L2CAgent::math_abs((L2CAgent *)&local_70,pLVar15);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0xeac5a3d76);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack144,fVar18);
    uVar6 = lib::L2CValue::operator_(aLStack144,(L2CValue *)local_160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    if ((uVar6 & 1) != 0) {
      fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar18);
      lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)local_160,0);
      pLVar15 = aLStack144;
      uVar6 = lib::L2CValue::operator_((L2CValue *)local_160,pLVar15);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      if ((uVar6 & 1) != 0) {
        lib::L2CAgent::math_abs((L2CAgent *)&local_70,pLVar15);
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xeac5a3d76);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar18);
        lib::L2CValue::operator_((L2CValue *)auStack176,aLStack192);
        lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack288,0xeac5a3d76);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        uVar7 = lib::L2CValue::as_integer(aLStack288);
        fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack256,fVar18);
        lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
        lib::L2CValue::operator_((L2CValue *)local_160,aLStack256);
        lib::L2CValue::_L2CValue((L2CValue *)local_160);
        lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0xdb9935cb9);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)local_160);
        lib::L2CValue::_L2CValue((L2CValue *)local_160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)local_160,0);
        pppvVar16 = &local_70;
        uVar6 = lib::L2CValue::operator_((L2CValue *)local_160,(L2CValue *)pppvVar16);
        lib::L2CValue::_L2CValue((L2CValue *)local_160);
        if ((uVar6 & 1) == 0) {
          lib::L2CAgent::math_rad((L2CAgent *)(auStack176 + 0x10),(L2CValue *)pppvVar16);
        }
        else {
          lib::L2CAgent::math_rad((L2CAgent *)(auStack176 + 0x10),(L2CValue *)pppvVar16);
          lib::L2CValue::operator_((L2CValue *)local_160);
          lib::L2CValue::_L2CValue((L2CValue *)local_160);
        }
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_ROY_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE);
        pLVar15 = (L2CValue *)lib::L2CValue::as_integer(aLStack192);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,(int)pLVar15);
        lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar15);
        lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar15);
        uVar6 = lib::L2CValue::operator_(aLStack192,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator_((L2CValue *)local_160,(L2CValue *)auStack176);
        }
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_ROY_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE);
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)local_160);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
        lib::L2CValue::_L2CValue(aLStack144);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar19 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_160,(float)uVar19);
  pLVar15 = (L2CValue *)(local_160 + 0x10);
  lib::L2CValue::L2CValue(pLVar15,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::operator_(pLVar8,(L2CValue *)local_160);
  lib::L2CValue::operator_(this_00,pLVar15);
  lib::L2CValue::_L2CValue(pLVar15);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_160,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar1 & 1U) == 0) goto LAB_7100007394;
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack176 + 0x10),_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_FREE_FALL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar2 = app::lua_bind::KineticModule__is_enable_energy_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_70);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar6 = lib::L2CValue::as_number(aLStack192);
      uVar4 = lib::L2CValue::as_number(pLVar15);
      local_160._0_8_ = (void **)(uVar6 & 0xffffffff | (ulong)uVar4 << 0x20);
      local_160._8_8_ = (lua_State *)0x0;
      uVar6 = lib::L2CValue::as_number(aLStack208);
      lVar20 = lib::L2CValue::as_number(aLStack224);
      uVar4 = lib::L2CValue::as_number(aLStack240);
      local_70 = (void **)(uVar6 & 0xffffffff | lVar20 << 0x20);
      plStack104 = (lua_State *)(ulong)uVar4;
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar12,iVar3,(Vector2f *)local_160,(Vector3f *)&local_70,pBVar11);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack192,0x7b9905530);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
      lib::L2CValue::operator_((L2CValue *)&local_70);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar13 = (FighterKineticEnergyGravity *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar13,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x56a02656c);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar13 = (FighterKineticEnergyGravity *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar13,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::KineticEnergy__enable_impl(pKVar12);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    }
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar2 = app::lua_bind::KineticModule__is_enable_energy_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_70);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar6 = lib::L2CValue::as_number(pLVar15);
      uVar4 = lib::L2CValue::as_number(aLStack192);
      local_160._0_8_ = (void **)(uVar6 & 0xffffffff | (ulong)uVar4 << 0x20);
      local_160._8_8_ = (lua_State *)0x0;
      uVar6 = lib::L2CValue::as_number(aLStack208);
      lVar20 = lib::L2CValue::as_number(aLStack224);
      uVar4 = lib::L2CValue::as_number(aLStack240);
      local_70 = (void **)(uVar6 & 0xffffffff | lVar20 << 0x20);
      plStack104 = (lua_State *)(ulong)uVar4;
      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar12,iVar3,(Vector2f *)local_160,(Vector3f *)&local_70,pBVar11);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x102ed92d0f);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar14 = (FighterKineticEnergyController *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyController__set_accel_x_mul_impl(pFVar14,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x102ed92d0f);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar14 = (FighterKineticEnergyController *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyController__mul_x_speed_max_impl(pFVar14,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::KineticEnergy__enable_impl(pKVar12);
      lib::L2CValue::L2CValue((L2CValue *)local_160,0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar14 = (FighterKineticEnergyController *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyController__set_accel_y_mul_impl(pFVar14,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::L2CValue((L2CValue *)local_160,0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar14 = (FighterKineticEnergyController *)
                lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::FighterKineticEnergyController__set_accel_y_add_impl(pFVar14,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    }
    pKVar12 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::KineticEnergy__unable_impl(pKVar12);
  }
  else {
    HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar9);
    lib::L2CValue::L2CValue((L2CValue *)local_160,0xed8a31e01);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_160,0xa28f17495);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x1086bc4a93);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0xb76f1b37a);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
        uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
        pFVar10 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::FighterKineticEnergyMotion__set_speed_mul_impl(pFVar10,fVar18);
        goto LAB_7100007298;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0xf87ace3a1);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)local_160,fVar18);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_160);
      pFVar10 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::FighterKineticEnergyMotion__set_speed_mul_impl(pFVar10,fVar18);
LAB_7100007298:
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_FREE_FALL_CHK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_160,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar1 & 1U) != 0) {
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)local_160,-1e-05);
      uVar6 = lib::L2CValue::operator_(pLVar15,(L2CValue *)local_160);
      lib::L2CValue::_L2CValue((L2CValue *)local_160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_160,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_FREE_FALL)
        ;
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)local_160);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_160,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_FREE_FALL_CHK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
LAB_7100007394:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE_SET_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_160,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_160,_FIGHTER_ROY_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE);
    pLVar15 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_160);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,(int)pLVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    pFVar10 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::FighterKineticEnergyMotion__set_angle_impl(pFVar10,fVar18);
    lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar15);
    lib::L2CAgent::math_abs((L2CAgent *)local_160,pLVar15);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::L2CValue((L2CValue *)local_160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0xdb9935cb9);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)local_160);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar18);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0x12a334bbd5);
    uVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack272,fVar18);
    lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)local_160,1.0);
    lib::L2CValue::operator_((L2CValue *)local_160,aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    uVar6 = lib::L2CValue::as_number(aLStack192);
    uVar4 = lib::L2CValue::as_number(aLStack208);
    local_160._0_8_ = (void **)(uVar6 & 0xffffffff | (ulong)uVar4 << 0x20);
    local_160._8_8_ = (lua_State *)0x0;
    pFVar10 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::FighterKineticEnergyMotion__set_speed_mul_2nd_impl(pFVar10,(Vector2f *)local_160)
    ;
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_160,_FIGHTER_ROY_STATUS_SPECIAL_HI_FLAG_TRANS_MOVE_SET_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_160);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

