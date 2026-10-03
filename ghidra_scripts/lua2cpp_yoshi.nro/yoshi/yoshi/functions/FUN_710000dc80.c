
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000dc80(void *param_1)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack288 [16];
  ulong local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_110);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_110,360.0);
    lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_110,360.0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_110,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_110,360.0);
    lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  lib::L2CValue::L2CValue(aLStack288,0x31d39a761);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  HVar6 = lib::L2CValue::as_hash(aLStack288);
  uVar2 = lib::L2CValue::as_number(this);
  lVar9 = lib::L2CValue::as_number(this_00);
  uVar8 = lib::L2CValue::as_number(this_01);
  local_90 = uVar2 & 0xffffffff | lVar9 << 0x20;
  uStack136 = (ulong)uVar8;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)local_90);
  lib::L2CValue::L2CValue(aLStack256,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack240,(float)uStack136);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_110);
  lib::L2CValue::operator=(pLVar4,aLStack256);
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue(aLStack288);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar2 = lib::L2CValue::as_number(pLVar3);
  lVar9 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(pLVar5);
  local_110 = uVar2 & 0xffffffff | lVar9 << 0x20;
  uStack264 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,(Vector3f *)&local_110,0,0
            );
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

