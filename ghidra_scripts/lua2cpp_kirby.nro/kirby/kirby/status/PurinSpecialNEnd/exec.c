
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNEnd_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  KineticEnergy *pKVar8;
  KineticEnergyNormal *pKVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  FighterKineticEnergyGravity *pFVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
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
  ulong local_d0;
  undefined8 uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack320,iVar2);
  lib::L2CValue::L2CValue(aLStack336,aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack352,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  FUN_71001b63d0(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack368,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack384,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::operator_(aLStack368,aLStack384);
  lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_d0,aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    uVar4 = lib::L2CValue::operator__(aLStack384,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    if ((uVar4 & 1) == 0) goto LAB_710009c514;
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0);
    uVar4 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    if ((uVar4 & 1) == 0) goto LAB_710009c514;
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_d0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) goto LAB_710009c514;
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_d0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
LAB_710009c514:
  lib::L2CValue::L2CValue(aLStack400,aLStack368);
  FUN_71001b6c50(&local_d0,aLStack400);
  lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  fVar13 = (float)lib::L2CValue::as_number(aLStack368);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack416);
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,-1.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_d0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,true);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_d0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack432,aLStack416);
  FUN_71001b5eb0(this,aLStack432);
  lib::L2CValue::_L2CValue(aLStack432);
  uVar4 = lib::L2CValue::operator__(aLStack336,aLStack352);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      cVar1 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar1 + 'p'),(L2CValue)(cVar1 + '`'))
      ;
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_d0);
      lib::L2CValue::operator_(pLVar10,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack224,_ENERGY_STOP_RESET_TYPE_FREE);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_number(aLStack240);
      uVar14 = lib::L2CValue::as_number(aLStack256);
      local_d0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack200 = 0;
      uVar4 = lib::L2CValue::as_number(aLStack272);
      lVar15 = lib::L2CValue::as_number(aLStack288);
      uVar14 = lib::L2CValue::as_number(aLStack304);
      local_60 = uVar4 & 0xffffffff | lVar15 << 0x20;
      uStack88 = (ulong)uVar14;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar2,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      uVar4 = lib::L2CValue::as_number((L2CValue *)&local_60);
      uVar14 = lib::L2CValue::as_number(aLStack224);
      local_d0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack200 = 0;
      pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar9,(Vector2f *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_number(aLStack240);
      uVar14 = lib::L2CValue::as_number(pLVar6);
      local_d0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack200 = 0;
      uVar4 = lib::L2CValue::as_number(aLStack256);
      lVar15 = lib::L2CValue::as_number(aLStack272);
      uVar14 = lib::L2CValue::as_number(aLStack288);
      local_60 = uVar4 & 0xffffffff | lVar15 << 0x20;
      uStack88 = (ulong)uVar14;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar2,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x5e24fde57);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar11 = lib::L2CValue::as_integer(aLStack240);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
      lib::L2CValue::operator_((L2CValue *)&local_60);
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
      pFVar12 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar12,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::_L2CValue(aLStack144);
      lVar15 = -0x70;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,pvVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue(aLStack128,_ENERGY_STOP_RESET_TYPE_FREE);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      uVar4 = lib::L2CValue::as_number(aLStack144);
      uVar14 = lib::L2CValue::as_number(aLStack160);
      local_d0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack200 = 0;
      uVar4 = lib::L2CValue::as_number(aLStack176);
      lVar15 = lib::L2CValue::as_number(aLStack224);
      uVar14 = lib::L2CValue::as_number(aLStack240);
      local_60 = uVar4 & 0xffffffff | lVar15 << 0x20;
      uStack88 = (ulong)uVar14;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar2,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar4 = lib::L2CValue::as_number((L2CValue *)&local_60);
      uVar14 = lib::L2CValue::as_number(aLStack128);
      local_d0 = uVar4 & 0xffffffff | (ulong)uVar14 << 0x20;
      uStack200 = 0;
      pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar9,(Vector2f *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
      lVar15 = -0xc0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar2 = lib::L2CValue::as_integer(aLStack336);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  return;
}

