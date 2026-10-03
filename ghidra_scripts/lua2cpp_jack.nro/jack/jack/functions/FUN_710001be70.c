
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001be70(void *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  Item *pIVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  Hash40 HVar14;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  BattleObjectModuleAccessor *pBVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  ulong local_1c0;
  undefined8 uStack440;
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
  undefined8 local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1c0,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0x50000000);
  uVar4 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_1c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
  if ((uVar4 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    pvVar5 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                               (FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_HOLD_KEEP_FRAME,uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack176,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar5);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_1c0,0);
    uVar4 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_1c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1c0,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_ITEM_JOINT_ID);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack192,lVar6);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1c0,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_ITEM_OFFSET_X);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1c0);
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack224,fVar16);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_ITEM_OFFSET_Y);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack240,fVar16);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_ITEM_OFFSET_Z);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack256,fVar16);
      lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
      pIVar7 = (Item *)lib::L2CValue::as_pointer(aLStack176);
      pvVar5 = (void *)app::lua_bind::Item__item_module_accessor_impl(pIVar7);
      lib::L2CValue::L2CValue(aLStack272,pvVar5);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0)
      ;
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70)
      ;
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x54f934137);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
      HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      uVar4 = lib::L2CValue::as_number(pLVar11);
      lVar6 = lib::L2CValue::as_number(pLVar12);
      uVar3 = lib::L2CValue::as_number(pLVar13);
      local_80 = uVar4 & 0xffffffff | lVar6 << 0x20;
      uStack120 = (ulong)uVar3;
      app::lua_bind::ModelModule__joint_global_position_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar14,(Vector3f *)&local_80
                 ,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)local_80);
      lib::L2CValue::L2CValue(aLStack432,local_80._4_4_);
      lib::L2CValue::L2CValue(aLStack416,(float)uStack120);
      lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_1c0);
      lib::L2CValue::operator=(pLVar9,aLStack432);
      lib::L2CValue::operator=(pLVar10,aLStack416);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
      this = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x162d277af);
      lib::L2CValue::L2CValue(aLStack464,true);
      HVar14 = lib::L2CValue::as_hash(aLStack192);
      uVar4 = lib::L2CValue::as_number(pLVar11);
      lVar6 = lib::L2CValue::as_number(pLVar12);
      uVar3 = lib::L2CValue::as_number(pLVar13);
      local_80 = uVar4 & 0xffffffff | lVar6 << 0x20;
      uStack120 = (ulong)uVar3;
      uVar4 = lib::L2CValue::as_number(this);
      lVar6 = lib::L2CValue::as_number(this_00);
      uVar3 = lib::L2CValue::as_number(this_01);
      local_90 = uVar4 & 0xffffffff | lVar6 << 0x20;
      uStack136 = (ulong)uVar3;
      bVar1 = lib::L2CValue::as_bool(aLStack464);
      pBVar15 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
      app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                (pBVar15,HVar14,(Vector3f *)&local_80,(Vector3f *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,(float)local_90);
      lib::L2CValue::L2CValue(aLStack432,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack416,(float)uStack136);
      lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_1c0);
      lib::L2CValue::operator=(pLVar9,aLStack432);
      lib::L2CValue::operator=(pLVar10,aLStack416);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::~L2CValue(aLStack464);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
      lib::L2CValue::operator-(pLVar8,pLVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar8,pLVar9);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      pBVar15 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
      uVar17 = app::lua_bind::PostureModule__pos_2d_impl(pBVar15);
      lib::L2CValue::L2CValue(aLStack528,(float)uVar17);
      lib::L2CValue::L2CValue(aLStack512,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_1c0,aLStack528);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack512);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1c0);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack528);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::operator+(pLVar8,pLVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack464,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x1fbdb2615);
      lib::L2CValue::operator+(pLVar8,pLVar9);
      uVar4 = lib::L2CValue::as_number((L2CValue *)&local_80);
      uVar3 = lib::L2CValue::as_number(aLStack544);
      local_1c0 = uVar4 & 0xffffffff | (ulong)uVar3 << 0x20;
      uStack440 = 0;
      pBVar15 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
      app::lua_bind::PostureModule__set_pos_2d_impl(pBVar15,(Vector2f *)&local_1c0);
      lib::L2CValue::~L2CValue(aLStack544);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

