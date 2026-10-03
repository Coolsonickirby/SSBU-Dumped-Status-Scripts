
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710007fa30(void *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack272 [16];
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
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack272,0x35dbfe258);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
    HVar5 = lib::L2CValue::as_hash(aLStack272);
    uVar3 = lib::L2CValue::as_number(this_00);
    lVar7 = lib::L2CValue::as_number(this_01);
    uVar6 = lib::L2CValue::as_number(this_02);
    local_90 = uVar3 & 0xffffffff | lVar7 << 0x20;
    uStack136 = (ulong)uVar6;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,(Vector3f *)&local_90,
               true);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
    lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
    lib::L2CValue::operator=(pLVar2,(L2CValue *)&local_100);
    lib::L2CValue::operator=(pLVar4,aLStack240);
    lib::L2CValue::operator=(this,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack272);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar3 = lib::L2CValue::as_number(pLVar2);
    lVar7 = lib::L2CValue::as_number(pLVar4);
    uVar6 = lib::L2CValue::as_number(aLStack272);
    local_100 = uVar3 & 0xffffffff | lVar7 << 0x20;
    uStack248 = (ulong)uVar6;
    iVar1 = app::GroundUtility::check_dead_area((Vector3f *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_UP);
    uVar3 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  return;
}

