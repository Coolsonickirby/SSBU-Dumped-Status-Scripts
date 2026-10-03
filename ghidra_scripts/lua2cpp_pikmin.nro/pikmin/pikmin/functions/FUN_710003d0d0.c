
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003d0d0(void *param_1)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong local_d0;
  ulong uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,*pfVar6);
  lib::L2CValue::L2CValue(aLStack192,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar6[2]);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_d0);
  lib::L2CValue::operator=(pLVar4,aLStack192);
  lib::L2CValue::operator=(pLVar5,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_INDEX);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack224,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,1);
  uVar7 = lib::L2CValue::operator==(aLStack224,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((uVar7 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,3.0);
    lib::L2CValue::operator*(aLStack256,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::operator+(pLVar3,aLStack240);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar3,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  uVar7 = lib::L2CValue::as_number(pLVar3);
  lVar12 = lib::L2CValue::as_number(pLVar4);
  uVar11 = lib::L2CValue::as_number(pLVar5);
  local_d0 = uVar7 & 0xffffffff | lVar12 << 0x20;
  uStack200 = (ulong)uVar11;
  app::lua_bind::PostureModule__set_pos_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_d0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  uVar7 = lib::L2CValue::as_number(aLStack224);
  lVar12 = lib::L2CValue::as_number(aLStack240);
  uVar11 = lib::L2CValue::as_number(aLStack256);
  local_d0 = uVar7 & 0xffffffff | lVar12 << 0x20;
  uStack200 = (ulong)uVar11;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_d0,0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack240,0x1c3c6b8ddb);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack256,0x1c0066b282);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar8 = lib::L2CValue::as_integer(aLStack256);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack240,fVar10);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::operator-(aLStack240,aLStack224);
  lib::L2CValue::L2CValue(aLStack304,0x66933a7e6);
  HVar9 = lib::L2CValue::as_hash(aLStack304);
  fVar10 = (float)app::sv_math::randf(HVar9,1.0);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::operator*(aLStack272,aLStack288);
  lib::L2CValue::operator+(aLStack224,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
  lib::L2CValue::operator+(aLStack256,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_d0,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_MOTION_SPEED_X_MUL);
  fVar10 = (float)lib::L2CValue::as_number(aLStack272);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar10,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack288,0x1e4e672ec6);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  uVar8 = lib::L2CValue::as_integer(aLStack288);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,iVar1);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack288,0x66933a7e6);
  HVar9 = lib::L2CValue::as_hash(aLStack288);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  uVar11 = app::sv_math::rand(HVar9,iVar1);
  lib::L2CValue::L2CValue(aLStack272,uVar11);
  lib::L2CValue::L2CValue
            (aLStack304,_WEAPON_PIKMIN_PIKMIN_STATUS_THROW_WORK_INT_MOTION_START_DELAY_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar2);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_PIKMIN_PIKMIN_STATUS_THROW_WORK_FLAG_MOTION_STARTED);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__off_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

