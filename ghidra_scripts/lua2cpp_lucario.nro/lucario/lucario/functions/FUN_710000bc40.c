
void FUN_710000bc40(void *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  KineticEnergy *pKVar6;
  FighterKineticEnergyGravity *pFVar7;
  KineticEnergyNormal *pKVar8;
  float fVar9;
  uint uVar10;
  undefined8 uVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong local_b0;
  undefined8 uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,param_2);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  uVar2 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  if ((uVar2 & 1) == 0) {
    iVar1 = lib::L2CValue::as_integer(param_2);
    pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack96,pvVar3);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
    uVar11 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_b0);
    lib::L2CValue::operator=(pLVar5,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator*(pLVar4,param_3);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar4,param_4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    uVar2 = lib::L2CValue::as_number(pLVar4);
    uVar10 = lib::L2CValue::as_number(pLVar5);
    local_b0 = uVar2 & 0xffffffff | (ulong)uVar10 << 0x20;
    uStack168 = 0;
    pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_b0);
  }
  else {
    iVar1 = lib::L2CValue::as_integer(param_2);
    pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack96,pvVar3);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pKVar6 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
    uVar11 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_b0);
    lib::L2CValue::operator=(pLVar5,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar4,param_4);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
    pFVar7 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar7,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

