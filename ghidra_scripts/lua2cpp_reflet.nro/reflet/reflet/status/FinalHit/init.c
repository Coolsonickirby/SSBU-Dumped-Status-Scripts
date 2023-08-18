
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::FinalEnd_init(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  L2CValue *this_00;
  void *pvVar12;
  KineticEnergy *pKVar13;
  FighterKineticEnergyGravity *pFVar14;
  undefined8 *this_01;
  BattleObjectModuleAccessor **this_02;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined8 auStack384 [2];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined local_130 [32];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  BattleObjectModuleAccessor *local_90;
  ulong uStack136;
  
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)local_130,FIGHTER_STATUS_KIND_FINAL);
  uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_130);
  lib::L2CValue::_L2CValue((L2CValue *)local_130);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_KIND_FINAL_HIT);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_130);
    lib::L2CValue::_L2CValue((L2CValue *)local_130);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_KIND_FINAL_MOVE);
      uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_KIND_FINAL_ATTACK);
        uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_130);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        if ((uVar4 & 1) == 0) goto LAB_710000a44c;
        lib::L2CValue::L2CValue((L2CValue *)local_130,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
        pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,pvVar12);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        lib::L2CValue::L2CValue((L2CValue *)local_130,0xdf05c072b);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x186268ca59);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)local_130);
        uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar4,uVar11);
        lib::L2CValue::L2CValue(aLStack320,fVar15);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        lib::L2CValue::L2CValue(aLStack352,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack464,0.0);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        iVar2 = lib::L2CValue::as_integer(aLStack352);
        uVar4 = lib::L2CValue::as_number(aLStack368);
        uVar18 = lib::L2CValue::as_number(aLStack320);
        local_130._0_8_ = (void **)(uVar4 & 0xffffffff | (ulong)uVar18 << 0x20);
        local_130._8_8_ = (lua_State *)0x0;
        uVar4 = lib::L2CValue::as_number((L2CValue *)auStack384);
        lVar20 = lib::L2CValue::as_number(aLStack400);
        uVar18 = lib::L2CValue::as_number(aLStack464);
        local_90 = (BattleObjectModuleAccessor *)(uVar4 & 0xffffffff | lVar20 << 0x20);
        uStack136 = (ulong)uVar18;
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar13,iVar2,(Vector2f *)local_130,(Vector3f *)&local_90,pBVar6);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)local_130,0.0);
        fVar15 = (float)lib::L2CValue::as_number((L2CValue *)local_130);
        pFVar14 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar14,fVar15);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        fVar15 = (float)lib::L2CValue::as_number(aLStack320);
        pFVar14 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar14,fVar15);
        lib::L2CValue::L2CValue((L2CValue *)local_130,-1.0);
        fVar15 = (float)lib::L2CValue::as_number((L2CValue *)local_130);
        pFVar14 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::FighterKineticEnergyGravity__set_limit_speed_impl(pFVar14,fVar15);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        lib::L2CValue::L2CValue((L2CValue *)local_130,0.0);
        fVar15 = (float)lib::L2CValue::as_number((L2CValue *)local_130);
        pFVar14 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::FighterKineticEnergyGravity__set_brake_impl(pFVar14,fVar15);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
        pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack208);
        app::lua_bind::KineticEnergy__enable_impl(pKVar13);
        lib::L2CValue::_L2CValue(aLStack320);
        this_02 = (BattleObjectModuleAccessor **)auStack208;
        goto LAB_710000a448;
      }
      lib::L2CValue::L2CValue(aLStack608,0.0);
      lib::L2CValue::L2CValue(aLStack624,0.0);
      fVar15 = 0.0;
      lib::L2CValue::L2CValue(aLStack640,0.0);
      pLVar5 = aLStack624;
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,SUB81(pLVar5,0),(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue(aLStack608);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x162d277af);
      pLVar1 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
      pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      uVar19 = app::FighterSpecializer_Reflet::get_final_chrom_pos(pFVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_130,(float)uVar19);
      pLVar7 = (L2CValue *)(local_130 + 0x10);
      lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::L2CValue(aLStack272,fVar15);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)local_130);
      lib::L2CValue::operator_(pLVar10,pLVar7);
      lib::L2CValue::operator_(this_00,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
      iVar2 = lib::L2CValue::as_integer(aLStack320);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)local_130,fVar15);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::operator_((L2CValue *)local_130,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
      iVar2 = lib::L2CValue::as_integer(aLStack352);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)local_130,fVar15);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::operator_((L2CValue *)local_130,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack352);
      pLVar7 = aLStack320;
      lib::L2CAgent::math_atan((L2CAgent *)auStack208,pLVar7,pLVar5);
      lib::L2CAgent::math_deg((L2CAgent *)local_130,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_ANGLE);
      fVar15 = (float)lib::L2CValue::as_number(aLStack352);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue(aLStack656,0.0);
      lib::L2CValue::L2CValue(aLStack672,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack656);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x1fbdb2615);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
      pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      uVar19 = app::FighterSpecializer_Reflet::get_final_target_pos_base_work(pFVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_130,(float)uVar19);
      pLVar5 = (L2CValue *)(local_130 + 0x10);
      lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_130);
      lib::L2CValue::operator_(pLVar8,pLVar5);
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack368,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,pLVar7);
      lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack688);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
      pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)local_130);
      app::FighterSpecializer_Reflet::set_final_chrom_lr(pFVar9,fVar15);
      lib::L2CValue::L2CValue((L2CValue *)auStack384,_FIGHTER_REFLET_GENERATE_ARTICLE_CHROM);
      lib::L2CValue::L2CValue(aLStack400,_WEAPON_REFLET_CHROM_STATUS_KIND_FINAL_MOVE);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      iVar3 = lib::L2CValue::as_integer(aLStack400);
      app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      this_01 = (undefined8 *)local_130;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      uVar19 = app::FighterSpecializer_Reflet::get_final_target_pos_base_work(pFVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_130,(float)uVar19);
      pLVar5 = (L2CValue *)(local_130 + 0x10);
      lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_130);
      lib::L2CValue::operator_(pLVar8,pLVar5);
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      fVar15 = 0.0;
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x162d277af);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      uVar19 = app::FighterSpecializer_Reflet::get_final_chrom_pos(pFVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_130,(float)uVar19);
      pLVar5 = (L2CValue *)(local_130 + 0x10);
      lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::L2CValue(aLStack272,fVar15);
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_130);
      lib::L2CValue::operator_(pLVar8,pLVar5);
      lib::L2CValue::operator_(pLVar10,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,pLVar7);
      lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)local_130,-1.0);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      fVar15 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack368,fVar15);
      FUN_71000069c0(aLStack400,this);
      lib::L2CValue::operator_(aLStack400);
      lib::L2CValue::operator_((L2CValue *)local_130,aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar5,pLVar8);
      lib::L2CValue::operator_(pLVar7,pLVar10);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack528,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack544,0x19ebe04843);
      uVar4 = lib::L2CValue::as_integer(aLStack528);
      uVar11 = lib::L2CValue::as_integer(aLStack544);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar11);
      lib::L2CValue::L2CValue(aLStack512,fVar15);
      lib::L2CValue::operator_(aLStack512,aLStack368);
      lib::L2CValue::operator_(aLStack496,aLStack352);
      lib::L2CValue::operator_(pLVar5,aLStack480);
      lib::L2CValue::operator_(aLStack464,(L2CValue *)auStack384);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack496,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack512,0x199ce778d5);
      uVar4 = lib::L2CValue::as_integer(aLStack496);
      uVar11 = lib::L2CValue::as_integer(aLStack512);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar11);
      lib::L2CValue::L2CValue(aLStack480,fVar15);
      lib::L2CValue::operator_(aLStack480,aLStack368);
      lib::L2CValue::operator_(pLVar5,aLStack464);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
      fVar15 = (float)lib::L2CValue::as_number(pLVar5);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
      fVar15 = (float)lib::L2CValue::as_number(pLVar5);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_OFFSET_LR);
      fVar15 = (float)lib::L2CValue::as_number(aLStack352);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x162d277af);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x162d277af);
      lib::L2CValue::operator_(pLVar7,pLVar5);
      lib::L2CValue::L2CValue(aLStack560,0.0);
      lib::L2CValue::L2CValue(aLStack576,0.0);
      lib::L2CValue::L2CValue(aLStack592,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack592);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack560);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,pLVar7);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar5,pLVar7);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x162d277af);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack208,0x162d277af);
      lib::L2CValue::operator_(pLVar5,pLVar7);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x162d277af);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x162d277af);
      fVar15 = (float)lib::L2CValue::as_number(pLVar5);
      fVar16 = (float)lib::L2CValue::as_number(pLVar7);
      fVar17 = (float)lib::L2CValue::as_number(pLVar8);
      fVar15 = (float)app::sv_math::vec3_length(fVar15,fVar16,fVar17);
      lib::L2CValue::L2CValue(aLStack480,fVar15);
      lib::L2CValue::L2CValue((L2CValue *)local_130,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack512,0x10c0b4a58a);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)local_130);
      uVar11 = lib::L2CValue::as_integer(aLStack512);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar11);
      lib::L2CValue::L2CValue(aLStack496,fVar15);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue(aLStack512,1.0);
      lib::L2CValue::L2CValue((L2CValue *)local_130,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack544,0x12dc5d5284);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)local_130);
      uVar11 = lib::L2CValue::as_integer(aLStack544);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar11);
      lib::L2CValue::L2CValue(aLStack528,iVar2);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::operator_(aLStack480,aLStack496);
      lib::L2CValue::operator_(aLStack512,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue((L2CValue *)local_130,1.0);
      uVar4 = lib::L2CValue::operator_(aLStack512,(L2CValue *)local_130);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      if ((uVar4 & 1) == 0) {
        uVar4 = lib::L2CValue::operator_(aLStack528,aLStack512);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::operator_(aLStack480,aLStack528);
          lib::L2CValue::operator_(aLStack496,(L2CValue *)local_130);
          lib::L2CValue::_L2CValue((L2CValue *)local_130);
          lib::L2CValue::operator_(aLStack512,aLStack528);
        }
      }
      else {
        lib::L2CValue::operator_(aLStack496,aLStack480);
        lib::L2CValue::L2CValue((L2CValue *)local_130,1.0);
        lib::L2CValue::operator_(aLStack512,(L2CValue *)local_130);
        lib::L2CValue::_L2CValue((L2CValue *)local_130);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_130,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_SPEED);
      fVar15 = (float)lib::L2CValue::as_number(aLStack496);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::operator_(aLStack528,aLStack512);
      lib::L2CValue::L2CValue(aLStack544,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_FRAME);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)local_130);
      iVar2 = lib::L2CValue::as_integer(aLStack544);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar2);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue((L2CValue *)local_130);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack400);
      this_01 = auStack384;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_01);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    this_02 = &local_90;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar1 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    lib::L2CValue::_L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)local_130,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    lib::L2CValue::_L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    lib::L2CValue::_L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)local_130,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    lib::L2CValue::_L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)local_130,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)local_130);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    this_02 = (BattleObjectModuleAccessor **)local_130;
  }
LAB_710000a448:
  lib::L2CValue::_L2CValue((L2CValue *)this_02);
LAB_710000a44c:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
