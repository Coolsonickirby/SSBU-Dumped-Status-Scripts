
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001bfcd0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  KineticEnergy *pKVar6;
  ulong uVar7;
  FighterKineticEnergyGravity *pFVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
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
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,pvVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,pvVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar11 = app::lua_bind::KineticModule__get_sum_speed_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_d0);
  lib::L2CValue::operator=(pLVar4,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack224,ENERGY_STOP_RESET_TYPE_AIR);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  uVar12 = lib::L2CValue::as_number(pLVar3);
  uVar9 = lib::L2CValue::as_number(aLStack240);
  local_d0 = uVar12 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack200 = 0;
  uVar12 = lib::L2CValue::as_number(aLStack256);
  lVar13 = lib::L2CValue::as_number(aLStack272);
  uVar9 = lib::L2CValue::as_number(aLStack288);
  local_60 = uVar12 & 0xffffffff | lVar13 << 0x20;
  uStack88 = (ulong)uVar9;
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar6,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar5);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergy__enable_impl(pKVar6);
  lib::L2CValue::L2CValue(aLStack224,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  uVar12 = lib::L2CValue::as_number(aLStack240);
  uVar9 = lib::L2CValue::as_number(pLVar3);
  local_d0 = uVar12 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack200 = 0;
  uVar12 = lib::L2CValue::as_number(aLStack256);
  lVar13 = lib::L2CValue::as_number(aLStack272);
  uVar9 = lib::L2CValue::as_number(aLStack288);
  local_60 = uVar12 & 0xffffffff | lVar13 << 0x20;
  uStack88 = (ulong)uVar9;
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar6,iVar1,(Vector2f *)&local_d0,(Vector3f *)&local_60,pBVar5);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0x5e24fde57);
  uVar12 = lib::L2CValue::as_integer(aLStack224);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar12,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  lib::L2CValue::operator-((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  pFVar8 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar8,fVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergy__enable_impl(pKVar6);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

