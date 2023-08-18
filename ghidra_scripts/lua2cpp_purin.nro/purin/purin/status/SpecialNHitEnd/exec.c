
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNHitEnd_exec(L2CFighterPurin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  KineticEnergy *pKVar10;
  float fVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  ulong local_110;
  undefined8 uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  BattleObjectModuleAccessor *local_70;
  ulong uStack104;
  
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack144,aLStack128);
  FUN_710000eab0(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_HIT_END_DEGREE_SPEED)
  ;
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar4);
  lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar11);
  lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_70);
  lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)auStack176);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue(aLStack192,(L2CValue *)(auStack176 + 0x10));
  FUN_710000f330(&local_110,aLStack192);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar13 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_110);
  lib::L2CValue::operator_(pLVar5,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack304,0x97d4672df);
  uVar6 = lib::L2CValue::as_integer(aLStack288);
  uVar7 = lib::L2CValue::as_integer(aLStack304);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar11);
  lib::L2CValue::operator_((L2CValue *)&local_70);
  uVar6 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::KineticModule__is_enable_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_110,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_110);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack288,pvVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue(aLStack304,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer(aLStack304);
      uVar6 = lib::L2CValue::as_number(pLVar4);
      uVar12 = lib::L2CValue::as_number(aLStack320);
      local_110 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack264 = 0;
      uVar6 = lib::L2CValue::as_number(aLStack336);
      lVar14 = lib::L2CValue::as_number(aLStack352);
      uVar12 = lib::L2CValue::as_number(aLStack368);
      local_70 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar14 << 0x20);
      uStack104 = (ulong)uVar12;
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack288);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar10,iVar2,(Vector2f *)&local_110,(Vector3f *)&local_70,pBVar9);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack288);
      app::lua_bind::KineticEnergy__enable_impl(pKVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar9);
      lib::L2CValue::_L2CValue((L2CValue *)&local_110);
      lib::L2CValue::_L2CValue(aLStack288);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack288,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,-1.0);
  uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_110,true);
    lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_110);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_110,(L2CValue *)&local_70);
  FUN_710000e590(this,&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

