
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019b00(void *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  KineticEnergy *pKVar8;
  ulong uVar9;
  ulong uVar10;
  KineticEnergyNormal *pKVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  undefined8 uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_LEFT);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_a0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_RIGHT);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      return;
    }
  }
  else {
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack64,pvVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
  pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack64);
  uVar13 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_a0);
  lib::L2CValue::operator=(pLVar7,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
  lib::L2CValue::operator-(pLVar6);
  lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0x1b21abfe2b);
  uVar9 = lib::L2CValue::as_integer(aLStack192);
  uVar10 = lib::L2CValue::as_integer(aLStack208);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack176,fVar12);
  lib::L2CValue::operator*(aLStack96,aLStack176);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x1fbdb2615);
  uVar9 = lib::L2CValue::as_number(pLVar6);
  uVar3 = lib::L2CValue::as_number(pLVar7);
  local_a0 = uVar9 & 0xffffffff | (ulong)uVar3 << 0x20;
  uStack152 = 0;
  pKVar11 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack64);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar11,(Vector2f *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

