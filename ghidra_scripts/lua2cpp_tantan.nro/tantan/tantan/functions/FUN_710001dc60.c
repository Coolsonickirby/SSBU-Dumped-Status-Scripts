
/* WARNING: Could not reconcile some variable overlaps */

void FUN_710001dc60(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  byte bVar1;
  bool bVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  long lVar17;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  ulong local_190;
  undefined8 uStack392;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar3,param_4);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  HVar12 = lib::L2CValue::as_hash(aLStack416);
  uVar16 = lib::L2CValue::as_number(pLVar6);
  lVar17 = lib::L2CValue::as_number(pLVar7);
  uVar13 = lib::L2CValue::as_number(pLVar8);
  local_90 = uVar16 & 0xffffffff | lVar17 << 0x20;
  uStack136 = (ulong)uVar13;
  uVar16 = lib::L2CValue::as_number(pLVar9);
  lVar17 = lib::L2CValue::as_number(pLVar10);
  uVar13 = lib::L2CValue::as_number(pLVar11);
  local_a0 = uVar16 & 0xffffffff | lVar17 << 0x20;
  uStack152 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_with_offset_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar12,(Vector3f *)&local_90,
             (Vector3f *)&local_a0,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack384,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack368,(float)uStack152);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar4,aLStack384);
  lib::L2CValue::operator=(pLVar5,aLStack368);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack416);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  lib::L2CValue::operator=(pLVar3,param_5);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
  uVar16 = lib::L2CValue::operator==(param_6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar16 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    lib::L2CValue::operator-(pLVar3);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x162d277af);
  HVar12 = lib::L2CValue::as_hash(aLStack416);
  uVar16 = lib::L2CValue::as_number(pLVar6);
  lVar17 = lib::L2CValue::as_number(pLVar7);
  uVar13 = lib::L2CValue::as_number(pLVar8);
  local_90 = uVar16 & 0xffffffff | lVar17 << 0x20;
  uStack136 = (ulong)uVar13;
  uVar16 = lib::L2CValue::as_number(pLVar9);
  lVar17 = lib::L2CValue::as_number(pLVar10);
  uVar13 = lib::L2CValue::as_number(pLVar11);
  local_a0 = uVar16 & 0xffffffff | lVar17 << 0x20;
  uStack152 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_with_offset_impl
            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar12,(Vector3f *)&local_90,
             (Vector3f *)&local_a0,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack384,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack368,(float)uStack152);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar4,aLStack384);
  lib::L2CValue::operator=(pLVar5,aLStack368);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack416);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  lib::L2CValue::operator-(pLVar5,pLVar6);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar5,pLVar6);
  lib::L2CValue::L2CValue(aLStack432,false);
  uVar16 = lib::L2CValue::as_number(pLVar3);
  uVar13 = lib::L2CValue::as_number(pLVar4);
  local_190 = uVar16 & 0xffffffff | (ulong)uVar13 << 0x20;
  uStack392 = 0;
  uVar16 = lib::L2CValue::as_number((L2CValue *)&local_a0);
  uVar13 = lib::L2CValue::as_number(aLStack416);
  local_90 = uVar16 & 0xffffffff | (ulong)uVar13 << 0x20;
  uStack136 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack432);
  bVar1 = app::lua_bind::GroundModule__ray_check_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector2f *)&local_190,
                     (Vector2f *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_1);
  if ((bVar2 & 1U) != 0) {
    FUN_71000209e0(param_2);
    app::lua_bind::VisibilityModule__set_default_all_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    app::lua_bind::GrabModule__clear_all_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,false);
    HVar12 = lib::L2CValue::as_hash(param_3);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar12,fVar14,fVar15,
               (bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

