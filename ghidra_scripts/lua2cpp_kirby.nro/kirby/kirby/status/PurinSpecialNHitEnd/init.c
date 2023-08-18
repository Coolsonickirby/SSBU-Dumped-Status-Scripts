
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNHitEnd_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  void *pvVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  KineticEnergy *pKVar8;
  FighterKineticEnergyGravity *pFVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,pvVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,pvVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar13 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_d0);
  lib::L2CValue::operator_(pLVar4,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcd16a7bf2);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x96a3d669c);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack272,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x114ffbc6ee);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1173f6f9b7);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack304,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  fVar10 = (float)lib::L2CValue::as_number(pLVar3);
  fVar11 = (float)lib::L2CValue::as_number(pLVar4);
  fVar10 = (float)app::sv_math::vec2_length(fVar10,fVar11);
  lib::L2CValue::L2CValue(aLStack320,fVar10);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack320,aLStack256);
  if ((uVar5 & 1) == 0) {
    uVar5 = lib::L2CValue::operator_(aLStack272,aLStack320);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator_(aLStack320,aLStack256);
      lib::L2CValue::operator_(aLStack272,aLStack256);
      lib::L2CValue::operator_((L2CValue *)&local_60,aLStack352);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack304,aLStack288);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_d0);
      lib::L2CValue::operator_(aLStack352,aLStack288);
      lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    }
    else {
      lib::L2CValue::operator_(aLStack336,aLStack304);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack336,aLStack288);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_d0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_HIT_END_DEGREE_SPEED);
  fVar10 = (float)lib::L2CValue::as_number(aLStack336);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack352,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack368,0x942727cdc);
  uVar5 = lib::L2CValue::as_integer(aLStack352);
  uVar6 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,ENERGY_STOP_RESET_TYPE_AIR);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack352);
  uVar5 = lib::L2CValue::as_number(aLStack224);
  uVar12 = lib::L2CValue::as_number(aLStack368);
  local_d0 = uVar5 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack200 = 0;
  uVar5 = lib::L2CValue::as_number(aLStack384);
  lVar14 = lib::L2CValue::as_number(aLStack400);
  uVar12 = lib::L2CValue::as_number(aLStack416);
  local_60 = uVar5 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar12;
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar8,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar7);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergy__enable_impl(pKVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack352,0x97f12556c);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar10);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack352,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack352);
  uVar5 = lib::L2CValue::as_number(aLStack368);
  uVar12 = lib::L2CValue::as_number(aLStack240);
  local_d0 = uVar5 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack200 = 0;
  uVar5 = lib::L2CValue::as_number(aLStack384);
  lVar14 = lib::L2CValue::as_number(aLStack400);
  uVar12 = lib::L2CValue::as_number(aLStack416);
  local_60 = uVar5 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar12;
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar8,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar7);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue(aLStack352,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack368,0xb92dd74ba);
  uVar5 = lib::L2CValue::as_integer(aLStack352);
  uVar6 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  lib::L2CValue::operator_((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar9,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack352,0xfd48146de);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar10);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar9,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack352,0xfd48146de);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar10);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::FighterKineticEnergyGravity__set_limit_speed_impl(pFVar9,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergy__enable_impl(pKVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Kirby::purin_remove_effect_flushing(pBVar7);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

