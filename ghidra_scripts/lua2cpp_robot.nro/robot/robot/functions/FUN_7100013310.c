
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013310(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  FighterEntryID FVar4;
  ItemKind IVar5;
  int iVar6;
  AttackerAttribute AVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  L2CValue *pLVar17;
  L2CValue *pLVar18;
  Hash40 HVar19;
  BattleObjectModuleAccessor *pBVar20;
  void *pvVar21;
  FighterInformation *pFVar22;
  Item *pIVar23;
  BattleObjectModuleAccessor *pBVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  long lVar28;
  undefined8 uVar29;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
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
  undefined8 local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
  uVar8 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  if ((uVar8 & 1) == 0) goto LAB_710001417c;
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) goto LAB_710001417c;
  fVar25 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack192,fVar25);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x8afaa2d47);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack240,fVar25);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack272,0x8d8ad1dd1);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar9 = lib::L2CValue::as_integer(aLStack272);
  fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack256,fVar25);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
  lib::L2CValue::L2CValue(aLStack384,0x54f934137);
  pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
  pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
  pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  pLVar18 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
  HVar19 = lib::L2CValue::as_hash(aLStack384);
  uVar8 = lib::L2CValue::as_number(pLVar13);
  lVar28 = lib::L2CValue::as_number(pLVar14);
  uVar26 = lib::L2CValue::as_number(pLVar15);
  local_90 = uVar8 & 0xffffffff | lVar28 << 0x20;
  uStack136 = (ulong)uVar26;
  uVar8 = lib::L2CValue::as_number(pLVar16);
  lVar28 = lib::L2CValue::as_number(pLVar17);
  uVar26 = lib::L2CValue::as_number(pLVar18);
  local_a0 = uVar8 & 0xffffffff | lVar28 << 0x20;
  uStack152 = (ulong)uVar26;
  app::lua_bind::ModelModule__joint_global_position_with_offset_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar19,(Vector3f *)&local_90,
             (Vector3f *)&local_a0,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack352,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack336,(float)uStack152);
  lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_170);
  lib::L2CValue::operator=(pLVar11,aLStack352);
  lib::L2CValue::operator=(pLVar12,aLStack336);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack384);
  uVar29 = app::lua_bind::GroundModule__get_center_pos_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack416,(float)uVar29);
  lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar29 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_170,aLStack416);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack400);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,(L2CValue)0x70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack416);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack432,pLVar10);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack448,pLVar10);
  fVar25 = (float)app::lua_bind::GroundModule__get_z_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack464,fVar25);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack480,0);
  pLVar10 = (L2CValue *)((long)param_1 + 200);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar10,5);
  pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
  bVar1 = app::FighterUtil::is_valid_entry_id(pBVar20);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack512,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack512);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack496,iVar3);
    FVar4 = lib::L2CValue::as_integer(aLStack496);
    pvVar21 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                (FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_MOTION_KIND_FAILURE,FVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar21);
    pFVar22 = (FighterInformation *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    uVar26 = app::lua_bind::FighterInformation__fighter_color_impl(pFVar22);
    lib::L2CValue::L2CValue((L2CValue *)&local_170,uVar26 & 0xff);
    lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_170);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::L2CValue(aLStack496,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_REGION_JP);
    iVar3 = lib::L2CValue::as_integer(aLStack496);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_170,false);
    uVar8 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_170);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack496);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_170,0);
      uVar8 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_170);
      lib::L2CValue::~L2CValue((L2CValue *)&local_170);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_170,1);
        uVar8 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_170);
        lib::L2CValue::~L2CValue((L2CValue *)&local_170);
        if ((uVar8 & 1) == 0) goto LAB_7100013a24;
        lib::L2CValue::L2CValue((L2CValue *)&local_170,0);
        lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_170);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_170,1);
        lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_170);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    }
  }
LAB_7100013a24:
  lib::L2CValue::L2CValue(aLStack512,_ITEM_KIND_ROBOTGYRO);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar10,3);
  pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
  pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
  pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
  pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x18cdc1683);
  pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x1fbdb2615);
  pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x162d277af);
  pLVar18 = (L2CValue *)lib::L2CValue::operator[](pLVar10,3);
  IVar5 = lib::L2CValue::as_integer(aLStack512);
  iVar3 = lib::L2CValue::as_integer(aLStack480);
  iVar6 = lib::L2CValue::as_integer(pLVar11);
  uVar8 = lib::L2CValue::as_number(pLVar12);
  lVar28 = lib::L2CValue::as_number(pLVar13);
  uVar26 = lib::L2CValue::as_number(pLVar14);
  local_170 = uVar8 & 0xffffffff | lVar28 << 0x20;
  uStack360 = (ulong)uVar26;
  uVar8 = lib::L2CValue::as_number(pLVar15);
  lVar28 = lib::L2CValue::as_number(pLVar16);
  uVar26 = lib::L2CValue::as_number(pLVar17);
  local_90 = uVar8 & 0xffffffff | lVar28 << 0x20;
  uStack136 = (ulong)uVar26;
  fVar25 = (float)lib::L2CValue::as_number(aLStack192);
  uVar26 = lib::L2CValue::as_integer(pLVar18);
  pvVar21 = (void *)app::sv_item::create_item_init_normal_safe_pos
                              (IVar5,iVar3,iVar6,(Vector3f *)&local_170,(Vector3f *)&local_90,fVar25
                               ,uVar26);
  if (pvVar21 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack496,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack496,pvVar21);
  }
  lib::L2CValue::~L2CValue(aLStack512);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack496);
  if ((bVar2 & 1U) != 0) {
    pIVar23 = (Item *)lib::L2CValue::as_pointer(aLStack496);
    pvVar21 = (void *)app::lua_bind::Item__item_module_accessor_impl(pIVar23);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar21);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar10,3);
    pIVar23 = (Item *)lib::L2CValue::as_pointer(aLStack496);
    iVar3 = lib::L2CValue::as_integer(pLVar11);
    app::sv_item::update_log_attack_info(pIVar23,iVar3);
    uVar26 = app::lua_bind::AttackModule__get_attacker_attribute_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_170,uVar26 & 0xff);
    AVar7 = lib::L2CValue::as_integer((L2CValue *)&local_170);
    pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    app::lua_bind::AttackModule__set_attacker_attribute_impl(pBVar20,AVar7);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,5);
    pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    pBVar24 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
    app::sv_battle_object::set_power_mul_region_attr_info(pBVar20,pBVar24);
    lib::L2CValue::L2CValue(aLStack512,0x10cf3adcf7);
    lib::L2CValue::L2CValue(aLStack528,0);
    uVar8 = lib::L2CValue::as_integer(aLStack512);
    uVar9 = lib::L2CValue::as_integer(aLStack528);
    fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar25);
    fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_170);
    pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    app::lua_bind::AttackModule__set_power_up_impl(pBVar20,fVar25);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::L2CValue((L2CValue *)&local_170,_ITEM_ROBOTGYRO_INSTANCE_WORK_FLAG_ROBOT_THROW);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
    pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__on_flag_impl(pBVar20,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_170,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
    fVar25 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack512,fVar25);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::L2CValue(aLStack544,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack560,0x106f411784);
    uVar8 = lib::L2CValue::as_integer(aLStack544);
    uVar9 = lib::L2CValue::as_integer(aLStack560);
    fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar25);
    uVar8 = lib::L2CValue::operator<=((L2CValue *)&local_170,aLStack512);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack592,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack608,0xdca0260bf);
      uVar8 = lib::L2CValue::as_integer(aLStack592);
      uVar9 = lib::L2CValue::as_integer(aLStack608);
      fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9)
      ;
      lib::L2CValue::L2CValue(aLStack576,fVar25);
      lib::L2CValue::L2CValue(aLStack656,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack672,0x18e3eaf6ca);
      uVar8 = lib::L2CValue::as_integer(aLStack656);
      uVar9 = lib::L2CValue::as_integer(aLStack672);
      fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9)
      ;
      lib::L2CValue::L2CValue(aLStack640,fVar25);
      lib::L2CValue::operator*(aLStack640,aLStack512);
      lib::L2CValue::operator+(aLStack576,aLStack624);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack672);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack608);
      pLVar10 = aLStack592;
    }
    else {
      lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack592,0x10d59fd5bf);
      uVar8 = lib::L2CValue::as_integer(aLStack576);
      uVar9 = lib::L2CValue::as_integer(aLStack592);
      fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9)
      ;
      lib::L2CValue::L2CValue(aLStack528,fVar25);
      lib::L2CValue::~L2CValue(aLStack592);
      pLVar10 = aLStack576;
    }
    lib::L2CValue::~L2CValue(pLVar10);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    fVar25 = (float)app::lua_bind::PostureModule__scale_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_170,fVar25);
    fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_170);
    pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
    app::lua_bind::PostureModule__set_owner_scale_impl(pBVar20,fVar25);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::L2CValue((L2CValue *)&local_170,_ITEM_ROBOTGYRO_ACTION_SET_CHARGE_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
    fVar25 = (float)lib::L2CValue::as_number(aLStack512);
    pIVar23 = (Item *)lib::L2CValue::as_pointer(aLStack496);
    app::lua_bind::Item__action_impl(pIVar23,iVar3,fVar25);
    lib::L2CValue::~L2CValue((L2CValue *)&local_170);
    lib::L2CValue::operator*(aLStack528,aLStack192);
    lib::L2CValue::L2CValue(aLStack560,0.0);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::L2CValue(aLStack592,1.0);
    fVar25 = (float)lib::L2CValue::as_number(aLStack192);
    uVar8 = lib::L2CValue::as_number(aLStack544);
    lVar28 = lib::L2CValue::as_number(aLStack560);
    uVar26 = lib::L2CValue::as_number(aLStack576);
    local_170 = uVar8 & 0xffffffff | lVar28 << 0x20;
    uStack360 = (ulong)uVar26;
    fVar27 = (float)lib::L2CValue::as_number(aLStack592);
    pIVar23 = (Item *)lib::L2CValue::as_pointer(aLStack496);
    app::lua_bind::Item__throw_attack_impl(pIVar23,fVar25,(Vector3f *)&local_170,fVar27);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_170,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
  fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_170);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar25,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  app::lua_bind::WorkModule__off_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
LAB_710001417c:
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

