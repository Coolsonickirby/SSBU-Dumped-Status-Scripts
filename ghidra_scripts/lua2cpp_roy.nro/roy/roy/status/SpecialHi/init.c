
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialHi_init(L2CFighterRoy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  void *pvVar2;
  L2CValue *pLVar3;
  L2CValue *this_01;
  ulong uVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  KineticEnergy *pKVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
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
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_d0);
  lib::L2CValue::operator_(this_01,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack224,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack240,pLVar3);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack256,pvVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack272,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    uVar4 = lib::L2CValue::as_number(aLStack288);
    uVar9 = lib::L2CValue::as_number(aLStack304);
    local_d0 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack200 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar9 = lib::L2CValue::as_number(aLStack352);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack272,0x1253744767);
    uVar4 = lib::L2CValue::as_integer(aLStack256);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack256,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    this_00 = &this->globalTable;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack256);
    uVar4 = lib::L2CValue::as_number(aLStack224);
    uVar9 = lib::L2CValue::as_number(aLStack272);
    local_d0 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack200 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack288);
    lVar11 = lib::L2CValue::as_number(aLStack304);
    uVar9 = lib::L2CValue::as_number(aLStack320);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue(aLStack256,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack256);
    uVar4 = lib::L2CValue::as_number(aLStack272);
    uVar9 = lib::L2CValue::as_number(aLStack240);
    local_d0 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack200 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack288);
    lVar11 = lib::L2CValue::as_number(aLStack304);
    uVar9 = lib::L2CValue::as_number(aLStack320);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack256,pvVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack272,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS_ANGLE);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    uVar4 = lib::L2CValue::as_number(aLStack288);
    uVar9 = lib::L2CValue::as_number(aLStack304);
    local_d0 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack200 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar9 = lib::L2CValue::as_number(aLStack352);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

