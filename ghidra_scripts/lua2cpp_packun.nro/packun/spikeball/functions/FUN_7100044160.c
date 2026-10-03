
/* WARNING: Could not reconcile some variable overlaps */

void FUN_7100044160(long param_1)

{
  L2CTable *this;
  L2CValue *pLVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  ulong uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  float local_60;
  float fStack92;
  ulong uStack88;
  
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,0);
  lib::L2CValue::L2CValue(aLStack112,this);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  lib::L2CValue::L2CValue(aLStack176,0x570211ebd);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  HVar4 = lib::L2CValue::as_hash(aLStack176);
  local_60 = (float)lib::L2CValue::as_number(this_00);
  fStack92 = (float)lib::L2CValue::as_number(this_01);
  uVar5 = lib::L2CValue::as_number(this_02);
  uStack88 = (ulong)uVar5;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(Vector3f *)&local_60,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,local_60);
  lib::L2CValue::L2CValue(aLStack144,fStack92);
  lib::L2CValue::L2CValue(aLStack128,(float)uStack88);
  lib::L2CValue::operator=(pLVar1,(L2CValue *)&local_a0);
  lib::L2CValue::operator=(pLVar2,aLStack144);
  lib::L2CValue::operator=(pLVar3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  uVar6 = lib::L2CValue::as_number(pLVar1);
  uVar7 = lib::L2CValue::as_number(pLVar2);
  uVar5 = lib::L2CValue::as_number(pLVar3);
  local_a0 = CONCAT44(uVar7,uVar6);
  uStack152 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_pos_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

