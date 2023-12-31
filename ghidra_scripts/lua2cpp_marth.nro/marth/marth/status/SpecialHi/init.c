
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMarth::status::SpecialHi_init(L2CFighterMarth *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  L2CValue *pLVar5;
  L2CValue *this_01;
  BattleObjectModuleAccessor *pBVar6;
  KineticEnergy *pKVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_INSTANCE_WORK_ID_INT_KIND);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_HI_NO);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0x1253744767);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar8);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,pvVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,pvVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_100);
  lib::L2CValue::operator_(this_01,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack272,pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack288,pLVar5);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack304,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack320,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    uVar2 = lib::L2CValue::as_number(aLStack336);
    uVar9 = lib::L2CValue::as_number(aLStack352);
    local_100 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack248 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack368);
    lVar11 = lib::L2CValue::as_number(aLStack384);
    uVar9 = lib::L2CValue::as_number(aLStack400);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack304);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_100,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack304);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::operator_(aLStack272,aLStack144);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack304,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack304);
    uVar2 = lib::L2CValue::as_number(aLStack272);
    uVar9 = lib::L2CValue::as_number(aLStack320);
    local_100 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack248 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack336);
    lVar11 = lib::L2CValue::as_number(aLStack352);
    uVar9 = lib::L2CValue::as_number(aLStack368);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_100,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue(aLStack304,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack304);
    uVar2 = lib::L2CValue::as_number(aLStack320);
    uVar9 = lib::L2CValue::as_number(aLStack288);
    local_100 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack248 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack336);
    lVar11 = lib::L2CValue::as_number(aLStack352);
    uVar9 = lib::L2CValue::as_number(aLStack368);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_100,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack176);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack304,pvVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack320,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS_ANGLE);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    uVar2 = lib::L2CValue::as_number(aLStack336);
    uVar9 = lib::L2CValue::as_number(aLStack352);
    local_100 = uVar2 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack248 = 0;
    uVar2 = lib::L2CValue::as_number(aLStack368);
    lVar11 = lib::L2CValue::as_number(aLStack384);
    uVar9 = lib::L2CValue::as_number(aLStack400);
    local_60 = uVar2 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar9;
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack304);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar7,iVar1,(Vector2f *)&local_100,(Vector3f *)&local_60,pBVar6);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    pKVar7 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack304);
    app::lua_bind::KineticEnergy__enable_impl(pKVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

