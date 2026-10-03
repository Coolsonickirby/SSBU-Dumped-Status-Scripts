
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023c70(void *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  float *pfVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined local_100 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  float local_70;
  float fStack108;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)local_100,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x14950a8e0d);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)local_100);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CValue::L2CValue((L2CValue *)local_100,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x14a907b154);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)local_100);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x9aee445d1);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar10 = lib::L2CValue::as_hash(aLStack272);
  local_70 = (float)lib::L2CValue::as_number(pLVar7);
  fStack108 = (float)lib::L2CValue::as_number(pLVar8);
  uVar13 = lib::L2CValue::as_number(pLVar9);
  plStack104 = (lua_State *)(ulong)uVar13;
  app::lua_bind::ModelModule__joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)local_100,local_70);
  pLVar7 = (L2CValue *)(local_100 + 0x10);
  lib::L2CValue::L2CValue(pLVar7,fStack108);
  lib::L2CValue::L2CValue(aLStack224,plStack104._0_4_);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)local_100);
  lib::L2CValue::operator=(pLVar5,pLVar7);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_100,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)local_100);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack288,fVar12);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Y);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack304,fVar12);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLOAT_MINING_POS_Z);
  iVar1 = lib::L2CValue::as_integer(aLStack336);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack320,fVar12);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x162d277af);
  lib::L2CValue::L2CValue(aLStack400,0x9aee445d1);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar10 = lib::L2CValue::as_hash(aLStack400);
  fVar12 = (float)lib::L2CValue::as_number(pLVar7);
  fVar14 = (float)lib::L2CValue::as_number(pLVar8);
  uVar13 = lib::L2CValue::as_number(pLVar9);
  plStack104 = (lua_State *)(ulong)uVar13;
  pfVar11 = &local_70;
  local_70 = fVar12;
  fStack108 = fVar14;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)pfVar11,true)
  ;
  lib::L2CValue::L2CValue((L2CValue *)local_100,local_70);
  pLVar7 = (L2CValue *)(local_100 + 0x10);
  lib::L2CValue::L2CValue(pLVar7,fStack108);
  lib::L2CValue::L2CValue(aLStack224,plStack104._0_4_);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)local_100);
  lib::L2CValue::operator=(pLVar5,pLVar7);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CValue::~L2CValue(aLStack400);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar7,pLVar4);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x18cdc1683);
  lib::L2CValue::operator-(pLVar7,pLVar4);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack432,fVar12);
  lib::L2CValue::operator*(aLStack416,aLStack432);
  pLVar7 = aLStack400;
  lib::L2CAgent::math_atan((L2CAgent *)local_100,pLVar7,(L2CValue *)pfVar11);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar7);
  lib::L2CValue::operator-(aLStack128);
  uVar2 = lib::L2CValue::operator<(aLStack400,(L2CValue *)local_100);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::operator=(aLStack400,(L2CValue *)local_100);
    lib::L2CValue::~L2CValue((L2CValue *)local_100);
  }
  uVar2 = lib::L2CValue::operator<(aLStack144,aLStack400);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator=(aLStack400,aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack416,0x9aee445d1);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::operator+(pLVar7,aLStack400);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)local_100,90.0);
  lib::L2CValue::operator+(pLVar7,(L2CValue *)local_100);
  lib::L2CValue::~L2CValue((L2CValue *)local_100);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar10 = lib::L2CValue::as_hash(aLStack416);
  uVar15 = lib::L2CValue::as_number(aLStack432);
  uVar16 = lib::L2CValue::as_number(aLStack448);
  uVar13 = lib::L2CValue::as_number(pLVar7);
  local_100._0_8_ = (void **)CONCAT44(uVar16,uVar15);
  local_100._8_8_ = (lua_State *)(ulong)uVar13;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)local_100,0,0
            );
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

