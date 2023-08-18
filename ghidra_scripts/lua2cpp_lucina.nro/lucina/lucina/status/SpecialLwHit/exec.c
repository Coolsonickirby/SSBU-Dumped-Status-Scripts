
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucina::status::SpecialLwHit_exec(L2CFighterLucina *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar6;
  KineticEnergy *pKVar7;
  ulong uVar8;
  KineticEnergyNormal *pKVar9;
  FighterKineticEnergyGravity *pFVar10;
  ulong *this_01;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  long lVar14;
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
  ulong auStack128 [2];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_MARTH_STATUS_KIND_SPECIAL_LW_HIT);
    lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_e0);
    this_01 = &local_e0;
  }
  else {
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar1);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_FIGHTER_MARTH_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_e0,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    if ((uVar3 & 1) != 0) goto LAB_7100005eec;
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack144,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar13 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_e0);
    lib::L2CValue::operator_(this_00,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack240,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,pLVar5);
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_MARTH_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack272);
      uVar3 = lib::L2CValue::as_number(aLStack240);
      uVar11 = lib::L2CValue::as_number(aLStack288);
      local_e0 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      uVar3 = lib::L2CValue::as_number(aLStack304);
      lVar14 = lib::L2CValue::as_number(aLStack320);
      uVar11 = lib::L2CValue::as_number(aLStack336);
      local_60 = uVar3 & 0xffffffff | lVar14 << 0x20;
      uStack88 = (ulong)uVar11;
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar7,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar6);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0xf83a3b6fe);
      uVar3 = lib::L2CValue::as_integer(aLStack272);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar3,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      uVar3 = lib::L2CValue::as_number((L2CValue *)&local_60);
      uVar11 = lib::L2CValue::as_number(aLStack304);
      local_e0 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
      app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar9,(Vector2f *)&local_e0);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
      app::lua_bind::KineticEnergy__enable_impl(pKVar7);
      lib::L2CValue::L2CValue(aLStack272,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack272);
      uVar3 = lib::L2CValue::as_number(aLStack288);
      uVar11 = lib::L2CValue::as_number(aLStack256);
      local_e0 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      uVar3 = lib::L2CValue::as_number(aLStack304);
      lVar14 = lib::L2CValue::as_number(aLStack320);
      uVar11 = lib::L2CValue::as_number(aLStack336);
      local_60 = uVar3 & 0xffffffff | lVar14 << 0x20;
      uStack88 = (ulong)uVar11;
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar7,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar6);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0xcc098ce4e);
      uVar3 = lib::L2CValue::as_integer(aLStack272);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar3,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
      lib::L2CValue::operator_((L2CValue *)&local_60);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0xcb44ee068);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar3,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar12);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_e0);
      pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar10,fVar12);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__enable_impl(pKVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_MARTH_STATUS_SPECIAL_LW_WORK_INT_SITUATION_PREV);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    this_01 = auStack128;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_01);
LAB_7100005eec:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

