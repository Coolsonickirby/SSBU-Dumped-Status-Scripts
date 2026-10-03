
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035000(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar5;
  BattleObjectModuleAccessor *pBVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined8 local_100;
  ulong uStack248;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_LINK_NO_ARTICLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  uVar2 = app::lua_bind::LinkModule__get_parent_id_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,true);
  lib::L2CValue::L2CValue(aLStack128,uVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  pvVar3 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar3 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar3);
  }
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x31d39a761);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  local_70 = (float)lib::L2CValue::as_number(this_01);
  fStack108 = (float)lib::L2CValue::as_number(this_02);
  uVar2 = lib::L2CValue::as_number(this_03);
  uStack104 = (ulong)uVar2;
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  app::lua_bind::ModelModule__joint_rotate_impl(pBVar6,HVar5,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,local_70);
  lib::L2CValue::L2CValue(aLStack240,fStack108);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack104);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator=(this,aLStack240);
  lib::L2CValue::operator=(this_00,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x31d39a761);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  uVar7 = lib::L2CValue::as_number(pLVar4);
  uVar8 = lib::L2CValue::as_number(aLStack272);
  uVar2 = lib::L2CValue::as_number(aLStack288);
  local_100 = CONCAT44(uVar8,uVar7);
  uStack248 = (ulong)uVar2;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,(Vector3f *)&local_100,0,0
            );
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

