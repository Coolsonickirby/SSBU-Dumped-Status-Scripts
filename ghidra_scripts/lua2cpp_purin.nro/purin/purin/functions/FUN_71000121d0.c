
/* WARNING: Could not reconcile some variable overlaps */

void FUN_71000121d0(undefined8 param_1,void *param_2)

{
  L2CValue *pLVar1;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x31d39a761);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar2 = lib::L2CValue::as_hash(aLStack272);
  uVar4 = lib::L2CValue::as_number(this_01);
  lVar5 = lib::L2CValue::as_number(this_02);
  uVar3 = lib::L2CValue::as_number(this_03);
  local_90 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack136 = (ulong)uVar3;
  app::lua_bind::ModelModule__joint_global_offset_from_top_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar2,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue(aLStack256,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator=(pLVar1,aLStack256);
  lib::L2CValue::operator=(this,aLStack240);
  lib::L2CValue::operator=(this_00,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,2.0);
  lib::L2CValue::operator*(pLVar1,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::operator*((L2CValue *)&local_90,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

