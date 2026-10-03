
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023410(void *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1a29e55431);
  uVar2 = lib::L2CValue::as_integer(aLStack256);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack256);
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
  lib::L2CValue::L2CValue(aLStack272,0x54f934137);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  uVar2 = lib::L2CValue::as_number(aLStack288);
  lVar8 = lib::L2CValue::as_number(aLStack144);
  uVar7 = lib::L2CValue::as_number(aLStack304);
  local_70 = uVar2 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar7;
  uVar2 = lib::L2CValue::as_number(this_01);
  lVar8 = lib::L2CValue::as_number(this_02);
  uVar7 = lib::L2CValue::as_number(this_03);
  local_80 = uVar2 & 0xffffffff | lVar8 << 0x20;
  uStack120 = (ulong)uVar7;
  app::lua_bind::ModelModule__joint_global_position_with_offset_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,(Vector3f *)&local_70,
             (Vector3f *)&local_80,true);
  lib::L2CValue::L2CValue(aLStack256,(float)local_80);
  lib::L2CValue::L2CValue(aLStack240,local_80._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack120);
  lib::L2CValue::operator=(pLVar4,aLStack256);
  lib::L2CValue::operator=(this,aLStack240);
  lib::L2CValue::operator=(this_00,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::operator+(pLVar4,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CENTER_X);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar6,iVar1);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::operator+(pLVar4,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_CENTER_Y);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar6,iVar1);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

