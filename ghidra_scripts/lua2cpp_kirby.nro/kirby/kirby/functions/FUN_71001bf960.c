
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001bf960(long param_1)

{
  int iVar1;
  void *pvVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  KineticEnergy *pKVar5;
  KineticEnergyNormal *pKVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  pvVar2 = (void *)app::lua_bind::KineticModule__get_energy_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,pvVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR)
  ;
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0001);
  lib::L2CValue::operator*((L2CValue *)&local_40,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack144,_ENERGY_STOP_RESET_TYPE_FREE);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number(aLStack160);
  local_40 = CONCAT44(uVar9,uVar8);
  uStack56 = 0;
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack192);
  uVar10 = lib::L2CValue::as_number(aLStack208);
  local_50 = CONCAT44(uVar9,uVar8);
  uStack72 = (ulong)uVar10;
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  pKVar5 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__reset_energy_impl
            (pKVar5,iVar1,(Vector2f *)&local_40,(Vector3f *)&local_50,pBVar4);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number((L2CValue *)&local_50);
  local_40 = CONCAT44(uVar9,uVar8);
  uStack56 = 0;
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar6,(Vector2f *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pKVar5 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__on_consider_ground_friction_impl(pKVar5);
  pKVar5 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergy__enable_impl(pKVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

