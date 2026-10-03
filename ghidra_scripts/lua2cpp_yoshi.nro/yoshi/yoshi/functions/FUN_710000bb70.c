
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000bb70(void *param_1)

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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack160,4);
  pLVar3 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar3,4);
  lib::L2CValue::L2CValue(aLStack176,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.65);
  lib::L2CValue::L2CValue(aLStack112,0.7);
  lib::L2CValue::L2CValue(aLStack128,0.8);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,1);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,2);
  lib::L2CValue::operator=(pLVar4,aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,3);
  lib::L2CValue::operator=(pLVar4,aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,4);
  lib::L2CValue::operator=(pLVar4,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  pLVar3 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar3,4);
  lib::L2CValue::L2CValue(aLStack192,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.1);
  lib::L2CValue::L2CValue(aLStack112,1.35);
  lib::L2CValue::L2CValue(aLStack128,1.3);
  lib::L2CValue::L2CValue(aLStack144,1.2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,1);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,2);
  lib::L2CValue::operator=(pLVar4,aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,3);
  lib::L2CValue::operator=(pLVar4,aLStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,4);
  lib::L2CValue::operator=(pLVar4,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::operator=(pLVar5,aLStack128);
  lib::L2CValue::operator=(pLVar6,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_SCALE_INDEX);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar7 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = lib::L2CValue::operator<(aLStack128,aLStack160), (uVar7 & 1) != 0)) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,aLStack256);
    lib::L2CValue::operator*(pLVar4,pLVar5);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar4,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,aLStack256);
    lib::L2CValue::operator*(pLVar4,pLVar5);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::operator=(pLVar4,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  HVar8 = lib::L2CValue::as_hash(aLStack144);
  uVar9 = lib::L2CValue::as_number(pLVar4);
  uVar10 = lib::L2CValue::as_number(pLVar5);
  uVar11 = lib::L2CValue::as_number(pLVar6);
  local_60 = CONCAT44(uVar10,uVar9);
  uStack88 = (ulong)uVar11;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar8,(Vector3f *)&local_60);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_SCALE_INDEX);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

