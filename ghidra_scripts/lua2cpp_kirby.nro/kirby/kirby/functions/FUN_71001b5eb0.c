
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001b5eb0(void *param_1,L2CValue *param_2)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  float local_70;
  float fStack108;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  }
  lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_110);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_70);
  lib::L2CValue::operator=(pLVar5,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  local_70 = (float)lib::L2CValue::as_number(this);
  fStack108 = (float)lib::L2CValue::as_number(this_00);
  uVar8 = lib::L2CValue::as_number(this_01);
  uStack104 = (ulong)uVar8;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,local_70);
  lib::L2CValue::L2CValue(aLStack256,fStack108);
  lib::L2CValue::L2CValue(aLStack240,(float)uStack104);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_110);
  lib::L2CValue::operator=(pLVar4,aLStack256);
  pLVar3 = aLStack240;
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_110);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  uVar9 = lib::L2CValue::as_number(pLVar3);
  uVar10 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(pLVar5);
  local_110 = CONCAT44(uVar10,uVar9);
  uStack264 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,(Vector3f *)&local_110,0,0
            );
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

