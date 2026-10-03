
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001efa0(void *param_1)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  ulong *puVar8;
  uint uVar9;
  float fVar10;
  long lVar11;
  L2CValue aLStack336 [16];
  ulong local_140;
  ulong uStack312;
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
  undefined8 local_90;
  lua_State *plStack136;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
  lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  iVar1 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
  uVar2 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0x4dba80bb2);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xbb499cbe2);
    HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_140);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    app::lua_bind::VisibilityModule__set_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar3,HVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  }
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
  lib::L2CValue::L2CValue(aLStack224,1.0);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_140);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_90);
  lib::L2CValue::operator=(pLVar7,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar2 = lib::L2CValue::as_number(pLVar5);
  lVar11 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  local_140 = uVar2 & 0xffffffff | lVar11 << 0x20;
  uStack312 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar3,(Vector3f *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  lib::L2CValue::L2CValue(aLStack336,0x31d39a761);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  HVar3 = lib::L2CValue::as_hash(aLStack336);
  uVar2 = lib::L2CValue::as_number(this);
  lVar11 = lib::L2CValue::as_number(this_00);
  uVar9 = lib::L2CValue::as_number(this_01);
  local_90 = (void **)(uVar2 & 0xffffffff | lVar11 << 0x20);
  plStack136 = (lua_State *)(ulong)uVar9;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar3,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)local_90);
  lib::L2CValue::L2CValue(aLStack304,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack288,plStack136._0_4_);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_140);
  lib::L2CValue::operator=(pLVar6,aLStack304);
  pLVar5 = aLStack288;
  lib::L2CValue::operator=(pLVar7,aLStack288);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)&local_90,pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  puVar8 = &local_140;
  lib::L2CValue::operator=(pLVar5,(L2CValue *)puVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)&local_90,(L2CValue *)puVar8);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar2 = lib::L2CValue::as_number(pLVar5);
  lVar11 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(pLVar7);
  local_140 = uVar2 & 0xffffffff | lVar11 << 0x20;
  uStack312 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar3,(Vector3f *)&local_140,0,0
            );
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
  uVar2 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  if ((uVar2 & 1) == 0) {
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::PostureModule__set_lr_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar10);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
  lib::L2CValue::operator=((L2CValue *)&local_90,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar10,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

