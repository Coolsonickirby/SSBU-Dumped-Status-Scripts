
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022220(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  L2CTable *this;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  long lVar16;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  lib::L2CValue::L2CValue(aLStack272,0x31d39a761);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  HVar10 = lib::L2CValue::as_hash(aLStack272);
  uVar15 = lib::L2CValue::as_number(pLVar7);
  lVar16 = lib::L2CValue::as_number(pLVar8);
  uVar12 = lib::L2CValue::as_number(pLVar9);
  local_90 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack136 = (ulong)uVar12;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)&local_90,
             true);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  FUN_710000cf20(param_1);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
  uVar15 = lib::L2CValue::operator==(param_3,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  if ((uVar15 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
    lib::L2CValue::L2CValue(aLStack272,false);
    HVar10 = lib::L2CValue::as_hash(param_2);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    bVar1 = lib::L2CValue::as_bool(aLStack272);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,fVar14,fVar13,
               (bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  }
  else {
    HVar10 = lib::L2CValue::as_hash(param_2);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,-1.0,1.0,0.0,false,
               false);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack272,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack288,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,0);
  lib::L2CValue::L2CValue(aLStack304,this);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar11);
  lib::L2CValue::L2CValue(aLStack240,pfVar11[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar11[2]);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(LUA_SCRIPT_LINE_MAP_CORRECTION);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,false);
  uVar15 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar15 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0.0);
    pLVar4 = (L2CValue *)(auStack352 + 0x10);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,SUB81(pLVar4,0));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::~L2CValue(aLStack320);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x1fbdb2615);
    pfVar11 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                 (LUA_SCRIPT_LINE_MAP_CORRECTION);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar11);
    lib::L2CValue::L2CValue(aLStack240,pfVar11[1]);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_100);
    lib::L2CValue::operator=(pLVar6,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x18cdc1683);
    lib::L2CValue::operator-(pLVar5,pLVar6);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar5,pLVar6);
    pLVar5 = (L2CValue *)(auStack384 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack352,pLVar5,pLVar4);
    lib::L2CAgent::math_deg((L2CAgent *)auStack384,pLVar5);
    fVar14 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack416,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,-1.0);
    uVar15 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack416);
    if ((uVar15 & 1) != 0) {
      lib::L2CValue::operator-(aLStack400);
      lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_100);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    }
    lib::L2CValue::operator-(aLStack288,aLStack400);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)auStack384);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::operator+(aLStack272,aLStack288);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack352,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar14,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar14,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  FUN_7100007c20(param_1);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar15 = lib::L2CValue::as_number((L2CValue *)auStack352);
  lVar16 = lib::L2CValue::as_number((L2CValue *)(auStack384 + 0x10));
  uVar12 = lib::L2CValue::as_number((L2CValue *)auStack384);
  local_100 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack248 = (ulong)uVar12;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)&local_100,0,
             0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0x54f934137);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x162d277af);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack384);
  uVar15 = lib::L2CValue::as_number(pLVar7);
  lVar16 = lib::L2CValue::as_number(pLVar8);
  uVar12 = lib::L2CValue::as_number(pLVar9);
  local_90 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack136 = (ulong)uVar12;
  app::lua_bind::ModelModule__joint_global_position_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(Vector3f *)&local_90,
             true);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x18cdc1683);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x1fbdb2615);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar11);
  lib::L2CValue::L2CValue(aLStack240,pfVar11[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar11[2]);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::operator=(pLVar5,aLStack240);
  lib::L2CValue::operator=(pLVar6,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  lib::L2CValue::operator+(pLVar4,(L2CValue *)&local_90);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar4,(L2CValue *)auStack384);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  uVar15 = lib::L2CValue::as_number(pLVar4);
  lVar16 = lib::L2CValue::as_number(pLVar5);
  uVar12 = lib::L2CValue::as_number(pLVar6);
  local_100 = uVar15 & 0xffffffff | lVar16 << 0x20;
  uStack248 = (ulong)uVar12;
  app::lua_bind::PostureModule__set_pos_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

