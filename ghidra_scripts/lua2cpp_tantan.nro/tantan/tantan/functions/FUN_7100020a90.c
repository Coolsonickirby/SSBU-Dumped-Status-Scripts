
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020a90(void *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  uint uVar15;
  float fVar16;
  long lVar17;
  L2CValue aLStack464 [16];
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack384);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar4);
  }
  lib::L2CValue::~L2CValue(aLStack384);
  uVar5 = lib::L2CValue::operator==
                    (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar5 & 1) == 0) {
    pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack160);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
    lib::L2CValue::L2CValue(aLStack384,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack384);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack176,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar4);
    }
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack384,1);
    iVar2 = lib::L2CValue::as_integer(aLStack384);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    HVar8 = app::lua_bind::PhysicsModule__get_2nd_joint_id_impl(pBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack336,HVar8);
    lib::L2CValue::~L2CValue(aLStack384);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    lib::L2CValue::L2CValue(aLStack400,true);
    HVar8 = lib::L2CValue::as_hash(aLStack336);
    uVar5 = lib::L2CValue::as_number(pLVar12);
    lVar17 = lib::L2CValue::as_number(pLVar13);
    uVar3 = lib::L2CValue::as_number(pLVar14);
    local_90 = uVar5 & 0xffffffff | lVar17 << 0x20;
    uStack136 = (ulong)uVar3;
    bVar1 = lib::L2CValue::as_bool(aLStack400);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    app::lua_bind::ModelModule__joint_global_position_impl
              (pBVar7,HVar8,(Vector3f *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack384,(float)local_90);
    lib::L2CValue::L2CValue(aLStack368,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
    lib::L2CValue::operator=(pLVar9,aLStack384);
    lib::L2CValue::operator=(pLVar10,aLStack368);
    lib::L2CValue::operator=(pLVar11,aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack400);
    uVar3 = 1;
    do {
      uVar3 = uVar3 + 1;
      lib::L2CValue::L2CValue((L2CValue *)&local_90,uVar3);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
      HVar8 = app::lua_bind::PhysicsModule__get_2nd_joint_id_impl(pBVar7,iVar2);
      lib::L2CValue::L2CValue(aLStack384,HVar8);
      lib::L2CValue::operator=(aLStack336,aLStack384);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
      lib::L2CValue::L2CValue(aLStack400,false);
      HVar8 = lib::L2CValue::as_hash(aLStack336);
      uVar5 = lib::L2CValue::as_number(pLVar12);
      lVar17 = lib::L2CValue::as_number(pLVar13);
      uVar15 = lib::L2CValue::as_number(pLVar14);
      local_90 = uVar5 & 0xffffffff | lVar17 << 0x20;
      uStack136 = (ulong)uVar15;
      bVar1 = lib::L2CValue::as_bool(aLStack400);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
      app::lua_bind::ModelModule__joint_global_position_impl
                (pBVar7,HVar8,(Vector3f *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack384,(float)local_90);
      lib::L2CValue::L2CValue(aLStack368,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack352,(float)uStack136);
      lib::L2CValue::operator=(pLVar9,aLStack384);
      lib::L2CValue::operator=(pLVar10,aLStack368);
      lib::L2CValue::operator=(pLVar11,aLStack352);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack400);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
      lib::L2CValue::operator-(pLVar9,pLVar10);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar9,pLVar10);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar9,pLVar10);
      lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40)
      ;
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack464,aLStack384);
      lua2cpp::L2CFighterBase::Vector3__length(param_1,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::operator+(aLStack192,(L2CValue *)&local_90);
      lib::L2CValue::operator=(aLStack192,aLStack400);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::operator=(aLStack208,aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack384);
    } while (uVar3 < 7);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    fVar16 = (float)app::lua_bind::PostureModule__scale_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack384,fVar16);
    lib::L2CValue::operator/(aLStack192,aLStack384);
    lib::L2CValue::L2CValue(aLStack400,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLOAT_INIT_LENGTH)
    ;
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    iVar2 = lib::L2CValue::as_integer(aLStack400);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    app::lua_bind::WorkModule__set_float_impl(pBVar7,fVar16,iVar2);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

