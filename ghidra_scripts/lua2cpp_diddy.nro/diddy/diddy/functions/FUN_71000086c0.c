
/* WARNING: Could not reconcile some variable overlaps */

void FUN_71000086c0(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  L2CValue *pLVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar4 = lib::L2CValue::as_hash(param_2);
  uVar6 = lib::L2CValue::as_number(this);
  lVar7 = lib::L2CValue::as_number(this_00);
  uVar5 = lib::L2CValue::as_number(this_01);
  local_90 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack136 = (ulong)uVar5;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar4,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_100);
  lib::L2CValue::operator=(pLVar2,aLStack240);
  lib::L2CValue::operator=(pLVar3,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::operator=(pLVar1,param_3);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar4 = lib::L2CValue::as_hash(param_2);
  uVar6 = lib::L2CValue::as_number(pLVar1);
  lVar7 = lib::L2CValue::as_number(pLVar2);
  uVar5 = lib::L2CValue::as_number(pLVar3);
  local_100 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack248 = (ulong)uVar5;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar4,(Vector3f *)&local_100,0,0
            );
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

