
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000eab0(void *param_1)

{
  int iVar1;
  int iVar2;
  L2CTable *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack224 [16];
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
  
  pLVar3 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar3,4);
  lib::L2CValue::L2CValue(aLStack144,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.65);
  lib::L2CValue::L2CValue(aLStack96,0.7);
  lib::L2CValue::L2CValue(aLStack112,0.8);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,1);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,2);
  lib::L2CValue::operator=(pLVar4,aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,3);
  lib::L2CValue::operator=(pLVar4,aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,4);
  lib::L2CValue::operator=(pLVar4,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar3 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar3,4);
  lib::L2CValue::L2CValue(aLStack160,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.1);
  lib::L2CValue::L2CValue(aLStack96,1.35);
  lib::L2CValue::L2CValue(aLStack112,1.3);
  lib::L2CValue::L2CValue(aLStack128,1.2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,1);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,2);
  lib::L2CValue::operator=(pLVar4,aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,3);
  lib::L2CValue::operator=(pLVar4,aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,4);
  lib::L2CValue::operator=(pLVar4,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::operator=(pLVar5,aLStack112);
  lib::L2CValue::operator=(pLVar6,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SCALE_IDX);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar7 = lib::L2CValue::operator<=((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,4);
    uVar7 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::operator+(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,aLStack224);
      lib::L2CValue::operator*(pLVar4,pLVar5);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar4,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack224);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::operator+(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,aLStack224);
      lib::L2CValue::operator*(pLVar4,pLVar5);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
      lib::L2CValue::operator=(pLVar4,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SCALE_IDX);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__add_int_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar2);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_710000f020;
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
LAB_710000f020:
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  uVar9 = lib::L2CValue::as_number(pLVar4);
  uVar10 = lib::L2CValue::as_number(pLVar5);
  uVar11 = lib::L2CValue::as_number(pLVar6);
  local_50 = CONCAT44(uVar10,uVar9);
  uStack72 = (ulong)uVar11;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar8,(Vector3f *)&local_50);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

