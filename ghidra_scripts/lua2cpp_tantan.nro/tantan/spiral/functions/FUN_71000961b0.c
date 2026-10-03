
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000961b0(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ArticleOperationTarget AVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  Hash40 HVar17;
  Article *pAVar18;
  L2CAgent *this;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  float fVar22;
  long lVar23;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  undefined auStack512 [32];
  undefined auStack480 [32];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  ulong local_170;
  ulong uStack360;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_170,_LINK_NO_ARTICLE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  uVar5 = app::lua_bind::LinkModule__get_parent_id_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4,true);
  lib::L2CValue::L2CValue(aLStack160,uVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack176,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,pvVar8);
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DETACH_RING);
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar9,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_170,true);
  uVar10 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_170,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(pBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack192,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_170,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
    uVar10 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_170);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_GENERATE_ARTICLE_RING);
      lib::L2CValue::L2CValue((L2CValue *)&local_170,false);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_ITEM_VARIATION_NONE);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_170);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
      app::lua_bind::ArticleModule__generate_article_impl(pBVar9,iVar4,(bool)(bVar1 & 1),iVar6);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue((L2CValue *)&local_170);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
      pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar9,iVar4);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack224,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,pvVar8);
      }
      uVar10 = lib::L2CValue::operator==
                         (aLStack224,
                          (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      if ((uVar10 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_170,
                   _WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
        iVar4 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack240,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        uVar5 = lib::L2CValue::as_integer(aLStack240);
        pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
        if (pvVar8 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack256,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack256,pvVar8);
        }
        lib::L2CValue::L2CValue(aLStack288,0);
        lib::L2CValue::L2CValue(aLStack304,0);
        lib::L2CValue::L2CValue(aLStack320,0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_1,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
        lib::L2CValue::L2CValue(aLStack384,0x703d6cf75);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
        lib::L2CValue::L2CValue(aLStack400,true);
        HVar17 = lib::L2CValue::as_hash(aLStack384);
        uVar10 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar5 = lib::L2CValue::as_number(pLVar16);
        local_90 = uVar10 & 0xffffffff | lVar23 << 0x20;
        uStack136 = (ulong)uVar5;
        bVar1 = lib::L2CValue::as_bool(aLStack400);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::ModelModule__joint_global_position_impl
                  (pBVar9,HVar17,(Vector3f *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)local_90);
        lib::L2CValue::L2CValue(aLStack352,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack336,(float)uStack136);
        lib::L2CValue::operator=(pLVar11,(L2CValue *)&local_170);
        lib::L2CValue::operator=(pLVar12,aLStack352);
        lib::L2CValue::operator=(pLVar13,aLStack336);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::L2CValue(aLStack416,0);
        lib::L2CValue::L2CValue(aLStack432,0);
        lib::L2CValue::L2CValue(aLStack448,0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack416);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CValue::L2CValue(aLStack400,0x703d6cf75);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)(auStack480 + 0x10),true);
        HVar17 = lib::L2CValue::as_hash(aLStack400);
        uVar10 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar5 = lib::L2CValue::as_number(pLVar16);
        local_90 = uVar10 & 0xffffffff | lVar23 << 0x20;
        uStack136 = (ulong)uVar5;
        bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack480 + 0x10));
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::ModelModule__joint_global_rotation_impl
                  (pBVar9,HVar17,(Vector3f *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)local_90);
        lib::L2CValue::L2CValue(aLStack352,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack336,(float)uStack136);
        lib::L2CValue::operator=(pLVar11,(L2CValue *)&local_170);
        lib::L2CValue::operator=(pLVar12,aLStack352);
        lib::L2CValue::operator=(pLVar13,aLStack336);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack480 + 0x10));
        lib::L2CValue::~L2CValue(aLStack400);
        pAVar18 = (Article *)lib::L2CValue::as_pointer(aLStack224);
        uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar18);
        lib::L2CValue::L2CValue(aLStack400,uVar5);
        uVar5 = lib::L2CValue::as_integer(aLStack400);
        pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
        if (pvVar8 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack480 + 0x10),
                     (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)(auStack480 + 0x10),pvVar8);
        }
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
        uVar10 = lib::L2CValue::as_number(pLVar11);
        lVar23 = lib::L2CValue::as_number(pLVar12);
        uVar5 = lib::L2CValue::as_number(pLVar13);
        local_170 = uVar10 & 0xffffffff | lVar23 << 0x20;
        uStack360 = (ulong)uVar5;
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::PostureModule__set_pos_impl(pBVar9,(Vector3f *)&local_170);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
        lib::L2CValue::L2CValue((L2CValue *)auStack480,0);
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0);
        uVar10 = lib::L2CValue::as_number((L2CValue *)&local_90);
        lVar23 = lib::L2CValue::as_number((L2CValue *)auStack480);
        uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack512 + 0x10));
        local_170 = uVar10 & 0xffffffff | lVar23 << 0x20;
        uStack360 = (ulong)uVar5;
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::PostureModule__set_rot_impl(pBVar9,(Vector3f *)&local_170,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack480);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        fVar22 = (float)app::lua_bind::ModelModule__scale_impl(pBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar22);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
        fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_170);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::PostureModule__set_scale_impl(pBVar9,fVar22,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::L2CValue(aLStack528,0);
        lib::L2CValue::L2CValue(aLStack544,0);
        lib::L2CValue::L2CValue(aLStack560,0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_1,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::~L2CValue(aLStack528);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)auStack480,0x4d27eea40);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),false);
        HVar17 = lib::L2CValue::as_hash((L2CValue *)auStack480);
        uVar10 = lib::L2CValue::as_number(pLVar14);
        lVar23 = lib::L2CValue::as_number(pLVar15);
        uVar5 = lib::L2CValue::as_number(pLVar16);
        local_90 = uVar10 & 0xffffffff | lVar23 << 0x20;
        uStack136 = (ulong)uVar5;
        bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack512 + 0x10));
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::ModelModule__joint_global_rotation_impl
                  (pBVar9,HVar17,(Vector3f *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)local_90);
        lib::L2CValue::L2CValue(aLStack352,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack336,(float)uStack136);
        lib::L2CValue::operator=(pLVar11,(L2CValue *)&local_170);
        lib::L2CValue::operator=(pLVar12,aLStack352);
        lib::L2CValue::operator=(pLVar13,aLStack336);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack480);
        fVar22 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
        lib::L2CValue::L2CValue((L2CValue *)&local_170,0);
        uVar10 = lib::L2CValue::operator<((L2CValue *)&local_90,(L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        if ((uVar10 & 1) != 0) {
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
          lib::L2CValue::L2CValue((L2CValue *)&local_170,0xb4);
          puVar21 = &local_170;
          lib::L2CValue::operator-(pLVar11,(L2CValue *)puVar21);
          lib::L2CValue::~L2CValue((L2CValue *)&local_170);
          lib::L2CAgent::math_abs((L2CAgent *)auStack480,(L2CValue *)puVar21);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
          lib::L2CValue::operator=(pLVar11,(L2CValue *)&local_90);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::~L2CValue((L2CValue *)auStack480);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_170,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_LONG);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        pLVar11 = (L2CValue *)0x162d277af;
        this = (L2CAgent *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CAgent::math_rad(this,pLVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_170,0);
        uVar10 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        if ((uVar10 & 1) != 0) {
          bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0xcb4cf0e97);
            lib::L2CValue::L2CValue((L2CValue *)auStack512,0x11c243cc3e);
            uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
            uVar19 = lib::L2CValue::as_integer((L2CValue *)auStack512);
            fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10
                                       ,uVar19);
            lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar22);
            puVar21 = &local_170;
            lib::L2CValue::operator=((L2CValue *)auStack480,(L2CValue *)puVar21);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0xcb4cf0e97);
            lib::L2CValue::L2CValue((L2CValue *)auStack512,0x165e954d7d);
            uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
            uVar19 = lib::L2CValue::as_integer((L2CValue *)auStack512);
            fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10
                                       ,uVar19);
            lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar22);
            puVar21 = &local_170;
            lib::L2CValue::operator=((L2CValue *)auStack480,(L2CValue *)puVar21);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_170);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
          lib::L2CAgent::math_rad((L2CAgent *)auStack480,(L2CValue *)puVar21);
          lib::L2CValue::operator=((L2CValue *)auStack480,(L2CValue *)&local_170);
          lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_170,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_ANGLE_BASE);
        fVar22 = (float)lib::L2CValue::as_number((L2CValue *)auStack480);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_float_impl(pBVar9,fVar22,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::L2CValue(aLStack576,0xcb4cf0e97);
        lib::L2CValue::L2CValue(aLStack592,0x1141371af1);
        pLVar11 = (L2CValue *)lib::L2CValue::as_integer(aLStack576);
        uVar10 = lib::L2CValue::as_integer(aLStack592);
        fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),
                                   (ulong)pLVar11,uVar10);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar22);
        lib::L2CAgent::math_rad((L2CAgent *)auStack512,pLVar11);
        lib::L2CValue::operator+((L2CValue *)auStack480,(L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::operator=((L2CValue *)auStack480,(L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_170,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_ANGLE);
        fVar22 = (float)lib::L2CValue::as_number((L2CValue *)auStack480);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_float_impl(pBVar9,fVar22,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack512 + 0x10),
                   _WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_REINFORCE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack512 + 0x10),
                   _WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLAG_IS_REINFORCE);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_170);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack512 + 0x10));
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_flag_impl(pBVar9,(bool)(bVar1 & 1),iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_AIR);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLAG_IS_AIR);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack512 + 0x10));
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_flag_impl(pBVar9,(bool)(bVar1 & 1),iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLAG_IS_LONG);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_flag_impl(pBVar9,(bool)(bVar1 & 1),iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0);
        lib::L2CValue::L2CValue(aLStack576,0);
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack608,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack624,0x1000346547);
          uVar10 = lib::L2CValue::as_integer(aLStack608);
          uVar19 = lib::L2CValue::as_integer(aLStack624);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,uVar19);
          lib::L2CValue::L2CValue(aLStack592,iVar4);
          lib::L2CValue::operator=((L2CValue *)auStack512,aLStack592);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::L2CValue(aLStack608,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack624,0x10f0bc4c59);
          uVar10 = lib::L2CValue::as_integer(aLStack608);
          uVar19 = lib::L2CValue::as_integer(aLStack624);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,uVar19);
          lib::L2CValue::L2CValue(aLStack592,iVar4);
          lib::L2CValue::operator=(aLStack576,aLStack592);
        }
        else {
          lib::L2CValue::L2CValue(aLStack608,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack624,0x15dfb38f83);
          uVar10 = lib::L2CValue::as_integer(aLStack608);
          uVar19 = lib::L2CValue::as_integer(aLStack624);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,uVar19);
          lib::L2CValue::L2CValue(aLStack592,iVar4);
          lib::L2CValue::operator=((L2CValue *)auStack512,aLStack592);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::L2CValue(aLStack608,0xcb4cf0e97);
          lib::L2CValue::L2CValue(aLStack624,0x152f3ba69d);
          uVar10 = lib::L2CValue::as_integer(aLStack608);
          uVar19 = lib::L2CValue::as_integer(aLStack624);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,uVar19);
          lib::L2CValue::L2CValue(aLStack592,iVar4);
          lib::L2CValue::operator=(aLStack576,aLStack592);
        }
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::operator+(aLStack576,(L2CValue *)auStack512);
        lib::L2CValue::L2CValue(aLStack608,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_INT_REWIND_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack592);
        iVar6 = lib::L2CValue::as_integer(aLStack608);
        pBVar9 = (BattleObjectModuleAccessor *)
                 lib::L2CValue::as_pointer((L2CValue *)(auStack480 + 0x10));
        app::lua_bind::WorkModule__set_int_impl(pBVar9,iVar4,iVar6);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::L2CValue(aLStack592,_WEAPON_TANTAN_RING_STATUS_KIND_FLY);
        lib::L2CValue::L2CValue(aLStack608,_ARTICLE_OPE_TARGET_ALL);
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        iVar6 = lib::L2CValue::as_integer(aLStack592);
        AVar7 = lib::L2CValue::as_integer(aLStack608);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
        app::lua_bind::ArticleModule__change_status_impl(pBVar9,iVar4,iVar6,AVar7);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::L2CValue(aLStack592,0x6084eb62d);
        lib::L2CValue::L2CValue(aLStack608,0xb4a296b01);
        lVar23 = lib::L2CValue::as_integer(aLStack592);
        lVar20 = lib::L2CValue::as_integer(aLStack608);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::VisibilityModule__set_status_default_int64_impl(pBVar9,lVar23,lVar20);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::L2CValue(aLStack592,5);
        uVar5 = lib::L2CValue::as_integer(aLStack592);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::EffectModule__detach_all_impl(pBVar9,uVar5);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::L2CValue
                  (aLStack608,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_INT_PUNCH3_WIND_EFFECT_HANDLE);
        iVar4 = lib::L2CValue::as_integer(aLStack608);
        iVar4 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack592,iVar4);
        lib::L2CValue::L2CValue(aLStack624,true);
        lib::L2CValue::L2CValue(aLStack640,true);
        uVar5 = lib::L2CValue::as_integer(aLStack592);
        bVar1 = lib::L2CValue::as_bool(aLStack624);
        bVar3 = lib::L2CValue::as_bool(aLStack640);
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
        app::lua_bind::EffectModule__kill_impl(pBVar9,uVar5,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack512 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)auStack480);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack480 + 0x10));
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
      }
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

