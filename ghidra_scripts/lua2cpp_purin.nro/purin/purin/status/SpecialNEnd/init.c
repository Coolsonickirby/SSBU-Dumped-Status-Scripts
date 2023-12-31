
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNEnd_init(L2CFighterPurin *this,L2CValue *return_value)

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
  KineticEnergyNormal *pKVar9;
  FighterKineticEnergyGravity *pFVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  undefined8 *puVar13;
  float fVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  ulong local_140;
  ulong uStack312;
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
  BattleObjectModuleAccessor *local_70;
  ulong uStack104;
  
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack224,pvVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack240,pvVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_140);
  lib::L2CValue::operator_(pLVar4,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((uVar5 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xdcd99d9bc);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xda369710b);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    uVar15 = lib::L2CValue::as_number(aLStack144);
    local_140 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
    uStack312 = 0;
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    lVar17 = lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar15 = lib::L2CValue::as_number(aLStack192);
    local_70 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar17 << 0x20);
    uStack104 = (ulong)uVar15;
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar8,iVar1,(Vector2f *)&local_140,(Vector3f *)&local_70,pBVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergy__enable_impl(pKVar8);
    lib::L2CValue::L2CValue(aLStack128,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    uVar15 = lib::L2CValue::as_number(aLStack352);
    local_140 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
    uStack312 = 0;
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    lVar17 = lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar15 = lib::L2CValue::as_number(aLStack192);
    local_70 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar17 << 0x20);
    uStack104 = (ulong)uVar15;
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar8,iVar1,(Vector2f *)&local_140,(Vector3f *)&local_70,pBVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x5e24fde57);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_((L2CValue *)&local_70);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_140);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
    app::lua_bind::KineticEnergy__enable_impl(pKVar8);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xdcd99d9bc);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    uVar15 = lib::L2CValue::as_number(aLStack144);
    local_140 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
    uStack312 = 0;
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    lVar17 = lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar15 = lib::L2CValue::as_number(aLStack192);
    local_70 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar17 << 0x20);
    uStack104 = (ulong)uVar15;
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar8,iVar1,(Vector2f *)&local_140,(Vector3f *)&local_70,pBVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergy__on_consider_ground_friction_impl(pKVar8);
    pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergy__enable_impl(pKVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar15 = lib::L2CValue::as_number(aLStack128);
    local_140 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
    uStack312 = 0;
    pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack224);
    app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar9,(Vector2f *)&local_140);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  }
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_140);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)auStack176);
  lib::L2CValue::operator_(pLVar11,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0x31d39a761);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_70,0x162d277af);
  HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack176);
  uVar5 = lib::L2CValue::as_number(pLVar3);
  lVar17 = lib::L2CValue::as_number(pLVar4);
  uVar15 = lib::L2CValue::as_number(pLVar11);
  local_140 = uVar5 & 0xffffffff | lVar17 << 0x20;
  uStack312 = (ulong)uVar15;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (this->moduleAccessor,HVar12,(Vector3f *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&local_70);
  FUN_710000f330(&local_140,aLStack368);
  lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack128);
  fVar14 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,-1.0);
  uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,false);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_140);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_140);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack384,aLStack128);
  FUN_710000e590(this,aLStack384);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack144);
  fVar14 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar14);
  fVar14 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
  uVar5 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,2.0);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_140);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_140,15.0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  puVar13 = &LUA_SCRIPT_LINE_SYSTEM_POST;
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CAgent::math_ceil((L2CAgent *)auStack176,(L2CValue *)puVar13);
  lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,4);
  uVar5 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0xf);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_140,(L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_140);
    if ((uVar5 & 1) == 0) goto LAB_71000182e0;
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0xf);
    lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_140);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,4);
    lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_140);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
LAB_71000182e0:
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(L2CValue *)auStack176);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_140);
  lib::L2CValue::operator_(aLStack400,(L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
  fVar14 = (float)lib::L2CValue::as_number(aLStack192);
  iVar1 = lib::L2CValue::as_integer(aLStack400);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar1);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar14 = (float)lib::L2CValue::as_number(aLStack400);
  iVar1 = lib::L2CValue::as_integer(aLStack416);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar1);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack400);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar7);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar1 = lib::L2CValue::as_integer(aLStack400);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar7);
  lib::L2CValue::_L2CValue(aLStack400);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Purin::special_n_remove_effect_flushing(pBVar7);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  fVar14 = (float)lib::L2CValue::as_number(aLStack400);
  iVar1 = lib::L2CValue::as_integer(aLStack416);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar1);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::FighterSpecializer_Purin::special_n_clear_copy_attack_data(pBVar7);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_140);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

