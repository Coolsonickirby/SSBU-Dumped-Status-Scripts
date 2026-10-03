
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100051bf0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11,L2CValue *param_12,
                   L2CValue *param_13,L2CValue *param_14,L2CValue *param_15,int *param_16,
                   L2CValue *param_17,L2CValue *param_18)

{
  L2CValue LVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  Fighter *pFVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  L2CValue *pLVar17;
  L2CValue *pLVar18;
  L2CValue *pLVar19;
  ulong *this;
  BattleObjectModuleAccessor *pBVar20;
  void *pvVar21;
  GroundCollisionLine *pGVar22;
  long *plVar23;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  long lVar30;
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
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
  ulong local_1b0;
  undefined8 uStack424;
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
  undefined8 local_b0;
  ulong uStack168;
  ulong local_a0;
  ulong uStack152;
  
  iVar7 = lib::L2CValue::as_integer(param_3);
  HVar8 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
  lib::L2CValue::L2CValue(aLStack496,HVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_1b0,0x7fb997a80);
  uVar9 = lib::L2CValue::operator==(aLStack496,(L2CValue *)&local_1b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_7100053720;
  }
  iVar7 = lib::L2CValue::as_integer(param_3);
  bVar2 = app::lua_bind::MotionModule__is_end_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
  uVar9 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)&local_1b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar9 & 1) != 0) {
    uVar9 = lib::L2CValue::operator==(aLStack496,param_4);
    if ((uVar9 & 1) == 0) {
      uVar9 = lib::L2CValue::operator==(aLStack496,param_5);
      if ((uVar9 & 1) == 0) {
        uVar9 = lib::L2CValue::operator==(aLStack496,param_7);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(param_1,true);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
          uVar9 = lib::L2CValue::operator==(param_9,(L2CValue *)&local_1b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1b0,0.0);
            lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
            HVar8 = lib::L2CValue::as_hash(param_13);
            fVar28 = (float)lib::L2CValue::as_number((L2CValue *)&local_1b0);
            fVar26 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
            bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
            app::lua_bind::MotionModule__change_motion_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar8,fVar28,fVar26,
                       (bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
          }
          iVar7 = lib::L2CValue::as_integer(param_3);
          app::lua_bind::MotionModule__remove_motion_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,0.0);
          lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
          lib::L2CValue::L2CValue(aLStack192,true);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,true);
          lib::L2CValue::L2CValue(aLStack240,true);
          lib::L2CValue::L2CValue(aLStack256,false);
          iVar7 = lib::L2CValue::as_integer(param_11);
          HVar8 = lib::L2CValue::as_hash(param_12);
          fVar28 = (float)lib::L2CValue::as_number((L2CValue *)&local_1b0);
          fVar26 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
          bVar3 = lib::L2CValue::as_bool(aLStack192);
          fVar27 = (float)lib::L2CValue::as_number(aLStack208);
          bVar4 = lib::L2CValue::as_bool(aLStack224);
          bVar5 = lib::L2CValue::as_bool(aLStack240);
          bVar6 = lib::L2CValue::as_bool(aLStack256);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7,HVar8,fVar28,
                     fVar26,(bool)(bVar2 & 1),(bool)(bVar3 & 1),fVar27,(bool)(bVar4 & 1),
                     (bool)(bVar5 & 1),(bool)(bVar6 & 1));
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
          lib::L2CValue::L2CValue(param_1,false);
        }
        goto LAB_7100053720;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack512,param_3);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      LVar1 = SUB81(&stack0xfffffffffffffff0,0);
      lua2cpp::L2CFighterBase::Vector3__create
                (param_2,(L2CValue)((char)LVar1 + '@'),(L2CValue)((char)LVar1 + '0'),
                 (L2CValue)((char)LVar1 + ' '));
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(param_2,LVar1,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90)
      ;
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack384);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1b0,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
      uVar9 = lib::L2CValue::operator==(aLStack512,(L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
        iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(bool)(bVar2 & 1));
        lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_1b0);
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
        iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(bool)(bVar2 & 1));
        lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_1b0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
      uVar9 = lib::L2CValue::operator==(aLStack384,(L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      if ((uVar9 & 1) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x121407fd4d);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack512);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x17ef0b62bf);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack512);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
      lib::L2CValue::L2CValue(aLStack448,0x31ed91fca);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
      pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      pLVar18 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      pLVar19 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
      HVar8 = lib::L2CValue::as_hash(aLStack448);
      uVar9 = lib::L2CValue::as_number(pLVar14);
      lVar30 = lib::L2CValue::as_number(pLVar15);
      uVar29 = lib::L2CValue::as_number(pLVar16);
      local_a0 = uVar9 & 0xffffffff | lVar30 << 0x20;
      uStack152 = (ulong)uVar29;
      uVar9 = lib::L2CValue::as_number(pLVar17);
      lVar30 = lib::L2CValue::as_number(pLVar18);
      uVar29 = lib::L2CValue::as_number(pLVar19);
      local_b0 = uVar9 & 0xffffffff | lVar30 << 0x20;
      uStack168 = (ulong)uVar29;
      app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar8,(Vector3f *)&local_a0,
                 (Vector3f *)&local_b0,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)local_b0);
      lib::L2CValue::L2CValue(aLStack416,local_b0._4_4_);
      lib::L2CValue::L2CValue(aLStack400,(float)uStack168);
      lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
      lib::L2CValue::operator=(pLVar12,aLStack416);
      lib::L2CValue::operator=(pLVar13,aLStack400);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
      uVar9 = lib::L2CValue::operator==(aLStack384,(L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      if ((uVar9 & 1) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x128d0eacf7);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack512);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        this = &local_a0;
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1776023305);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack512);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        lib::L2CValue::operator-(pLVar10);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        this = &local_1b0;
      }
      lib::L2CValue::~L2CValue((L2CValue *)this);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
      lib::L2CValue::L2CValue(aLStack448,0x31ed91fca);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
      pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
      pLVar18 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
      pLVar19 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
      HVar8 = lib::L2CValue::as_hash(aLStack448);
      uVar9 = lib::L2CValue::as_number(pLVar14);
      lVar30 = lib::L2CValue::as_number(pLVar15);
      uVar29 = lib::L2CValue::as_number(pLVar16);
      local_a0 = uVar9 & 0xffffffff | lVar30 << 0x20;
      uStack152 = (ulong)uVar29;
      uVar9 = lib::L2CValue::as_number(pLVar17);
      lVar30 = lib::L2CValue::as_number(pLVar18);
      uVar29 = lib::L2CValue::as_number(pLVar19);
      local_b0 = uVar9 & 0xffffffff | lVar30 << 0x20;
      uStack168 = (ulong)uVar29;
      app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar8,(Vector3f *)&local_a0,
                 (Vector3f *)&local_b0,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)local_b0);
      lib::L2CValue::L2CValue(aLStack416,local_b0._4_4_);
      lib::L2CValue::L2CValue(aLStack400,(float)uStack168);
      lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
      lib::L2CValue::operator=(pLVar12,aLStack416);
      lib::L2CValue::operator=(pLVar13,aLStack400);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue(aLStack448);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      lib::L2CValue::operator-(pLVar13,pLVar14);
      pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      lib::L2CValue::operator-(pLVar13,pLVar14);
      lib::L2CValue::L2CValue(aLStack464,false);
      uVar9 = lib::L2CValue::as_number(pLVar10);
      uVar29 = lib::L2CValue::as_number(pLVar12);
      local_1b0 = uVar9 & 0xffffffff | (ulong)uVar29 << 0x20;
      uStack424 = 0;
      uVar9 = lib::L2CValue::as_number((L2CValue *)&local_b0);
      uVar29 = lib::L2CValue::as_number(aLStack448);
      local_a0 = uVar9 & 0xffffffff | (ulong)uVar29 << 0x20;
      uStack152 = 0;
      bVar2 = lib::L2CValue::as_bool(aLStack464);
      bVar2 = app::lua_bind::GroundModule__ray_check_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                         (Vector2f *)&local_1b0,(Vector2f *)&local_a0,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack480,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
      uVar9 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack512);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack544,param_3);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_2,(L2CValue)((char)LVar1 + '@'),(L2CValue)((char)LVar1 + '0'),
                   (L2CValue)((char)LVar1 + ' '));
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(param_2,LVar1,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_2,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::L2CValue(aLStack384);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1b0,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
        uVar9 = lib::L2CValue::operator==(aLStack544,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
          iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(bool)(bVar2 & 1));
          lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_1b0);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_a0,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
          iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(bool)(bVar2 & 1));
          lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_1b0);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1b6370ee07);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack544);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
        lib::L2CValue::L2CValue(aLStack448,0x31ed91fca);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        pLVar18 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        pLVar19 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x162d277af);
        HVar8 = lib::L2CValue::as_hash(aLStack448);
        uVar9 = lib::L2CValue::as_number(pLVar14);
        lVar30 = lib::L2CValue::as_number(pLVar15);
        uVar29 = lib::L2CValue::as_number(pLVar16);
        local_a0 = uVar9 & 0xffffffff | lVar30 << 0x20;
        uStack152 = (ulong)uVar29;
        uVar9 = lib::L2CValue::as_number(pLVar17);
        lVar30 = lib::L2CValue::as_number(pLVar18);
        uVar29 = lib::L2CValue::as_number(pLVar19);
        local_b0 = uVar9 & 0xffffffff | lVar30 << 0x20;
        uStack168 = (ulong)uVar29;
        app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar8,
                   (Vector3f *)&local_a0,(Vector3f *)&local_b0,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)local_b0);
        lib::L2CValue::L2CValue(aLStack416,local_b0._4_4_);
        lib::L2CValue::L2CValue(aLStack400,(float)uStack168);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::operator=(pLVar12,aLStack416);
        lib::L2CValue::operator=(pLVar13,aLStack400);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue(aLStack448);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1bfa79bfbd);
        pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
        iVar7 = lib::L2CValue::as_integer(aLStack544);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        fVar28 = (float)app::FighterSpecializer_Tantan::get_spiral_param_float(pFVar11,iVar7,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,fVar28);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
        uVar9 = lib::L2CValue::operator==(aLStack384,(L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        if ((uVar9 & 1) != 0) {
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
          lib::L2CValue::operator-(pLVar10);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
          lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        }
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
        lib::L2CValue::L2CValue(aLStack448,0x31ed91fca);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
        pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
        pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
        pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        pLVar18 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        pLVar19 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
        HVar8 = lib::L2CValue::as_hash(aLStack448);
        uVar9 = lib::L2CValue::as_number(pLVar14);
        lVar30 = lib::L2CValue::as_number(pLVar15);
        uVar29 = lib::L2CValue::as_number(pLVar16);
        local_a0 = uVar9 & 0xffffffff | lVar30 << 0x20;
        uStack152 = (ulong)uVar29;
        uVar9 = lib::L2CValue::as_number(pLVar17);
        lVar30 = lib::L2CValue::as_number(pLVar18);
        uVar29 = lib::L2CValue::as_number(pLVar19);
        local_b0 = uVar9 & 0xffffffff | lVar30 << 0x20;
        uStack168 = (ulong)uVar29;
        app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),HVar8,
                   (Vector3f *)&local_a0,(Vector3f *)&local_b0,true);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(float)local_b0);
        lib::L2CValue::L2CValue(aLStack416,local_b0._4_4_);
        lib::L2CValue::L2CValue(aLStack400,(float)uStack168);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1b0);
        lib::L2CValue::operator=(pLVar12,aLStack416);
        lib::L2CValue::operator=(pLVar13,aLStack400);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue(aLStack448);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        lib::L2CValue::operator-(pLVar13,pLVar14);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::operator-(pLVar13,pLVar14);
        lib::L2CValue::L2CValue(aLStack480,_FLAG_RIGHT | _FLAG_UPPER | _FLAG_LEFT);
        uVar9 = lib::L2CValue::as_number(pLVar10);
        uVar29 = lib::L2CValue::as_number(pLVar12);
        local_1b0 = uVar9 & 0xffffffff | (ulong)uVar29 << 0x20;
        uStack424 = 0;
        uVar9 = lib::L2CValue::as_number(aLStack448);
        uVar29 = lib::L2CValue::as_number(aLStack464);
        local_a0 = uVar9 & 0xffffffff | (ulong)uVar29 << 0x20;
        uStack152 = 0;
        uVar29 = lib::L2CValue::as_integer(aLStack480);
        pvVar21 = (void *)app::lua_bind::GroundModule__ray_check_get_line_ignore_any_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                     (Vector2f *)&local_1b0,(Vector2f *)&local_a0,uVar29);
        if (pvVar21 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_b0,
                     (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,pvVar21);
        }
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack448);
        uVar9 = lib::L2CValue::operator==
                          ((L2CValue *)&local_b0,
                           (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
        if ((uVar9 & 1) == 0) {
          pGVar22 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)&local_b0);
          bVar2 = app::sv_ground_collision_line::is_floor_passable(pGVar22);
          lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_1b0,true);
          uVar9 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)&local_1b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
          if ((uVar9 & 1) == 0) goto LAB_7100053350;
          lib::L2CValue::L2CValue(aLStack528,true);
        }
        else {
LAB_7100053350:
          lib::L2CValue::L2CValue(aLStack528,false);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1b0,
                   _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IGNORE_FLOOR_PASSABLE);
        bVar2 = lib::L2CValue::as_bool(aLStack528);
        iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_1b0);
        app::lua_bind::WorkModule__set_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(bool)(bVar2 & 1),iVar7);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::L2CValue(aLStack576,param_8);
        lib::L2CValue::L2CValue(aLStack592,param_9);
        lib::L2CValue::L2CValue(aLStack608,param_10);
        UNRECOVERED_JUMPTABLE = (code *)lib::L2CValue::as_pointer(param_14);
        lib::L2CValue::L2CValue((L2CValue *)&local_1b0,aLStack576);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack592);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,aLStack608);
        (*UNRECOVERED_JUMPTABLE)(param_2,&local_1b0,&local_a0,&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1b0,
                   _FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IGNORE_FLOOR_PASSABLE);
        iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_1b0);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
        pBVar20 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
        app::FighterSpecializer_Tantan::check_attack_reverse(pBVar20);
        iVar7 = lib::L2CValue::as_integer(param_17);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
        iVar7 = lib::L2CValue::as_integer(param_18);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar7);
      }
    }
  }
  uVar9 = lib::L2CValue::operator==(aLStack496,param_5);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack640,param_5);
    lib::L2CValue::L2CValue(aLStack656,param_6);
    lib::L2CValue::L2CValue(aLStack672,param_8);
    lib::L2CValue::L2CValue(aLStack688,param_10);
    lib::L2CValue::L2CValue(aLStack704,param_9);
    UNRECOVERED_JUMPTABLE = (code *)lib::L2CValue::as_pointer(param_15);
    lib::L2CValue::L2CValue((L2CValue *)&local_1b0,aLStack640);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack656);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,aLStack672);
    lib::L2CValue::L2CValue(aLStack192,aLStack688);
    lib::L2CValue::L2CValue(aLStack208,aLStack704);
    (*UNRECOVERED_JUMPTABLE)(param_2,&local_1b0,&local_a0,&local_b0,aLStack192,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
    lib::L2CValue::~L2CValue(aLStack624);
    lib::L2CValue::~L2CValue(aLStack704);
    lib::L2CValue::~L2CValue(aLStack688);
    lib::L2CValue::~L2CValue(aLStack672);
    lib::L2CValue::~L2CValue(aLStack656);
    pLVar10 = aLStack640;
  }
  else {
    lib::L2CValue::L2CValue(aLStack736,param_8);
    lib::L2CValue::L2CValue(aLStack752,param_9);
    if (*param_16 == 6) {
      lib::L2CValue::L2CValue(aLStack208,aLStack736);
      lib::L2CValue::L2CValue(aLStack224,aLStack752);
      plVar23 = (long *)lib::L2CValue::as_inner_function((L2CValue *)param_16);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,aLStack208);
      lib::L2CValue::L2CValue(aLStack192,aLStack224);
      lVar30 = *plVar23;
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(L2CValue *)&local_b0);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack192);
      plVar23 = *(long **)(lVar30 + 0x20);
      if (plVar23 == (long *)0x0) {
        puVar24 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar24 = &PTR_FIGHTER_STATUS_KIND_CATCHED_AIR_GANON_710049f920;
        uVar25 = __cxa_throw(puVar24,&
                                     PTR_FIGHTER_STATUS_CLIFF_WORK_FLOAT_HIT_NORMAL_FRAME_710049f940
                             ,std::exception::FIGHTER_STATUS_KIND_CATCHED_AIR_GANON);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
        lib::L2CValue::~L2CValue(aLStack496);
        _Unwind_Resume(uVar25);
                    /* WARNING: Could not recover jumptable at 0x007100053f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x7100053f18);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      (**(code **)(*plVar23 + 0x30))(plVar23,&local_1b0,&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue(aLStack224);
      lVar30 = -0xc0;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,aLStack736);
      lib::L2CValue::L2CValue(aLStack192,aLStack752);
      UNRECOVERED_JUMPTABLE = (code *)lib::L2CValue::as_pointer((L2CValue *)param_16);
      lib::L2CValue::L2CValue((L2CValue *)&local_1b0,(L2CValue *)&local_b0);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack192);
      (*UNRECOVERED_JUMPTABLE)(param_2,&local_1b0,&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1b0);
      lib::L2CValue::~L2CValue(aLStack192);
      lVar30 = -0xa0;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar30));
    lib::L2CValue::~L2CValue(aLStack720);
    lib::L2CValue::~L2CValue(aLStack752);
    pLVar10 = aLStack736;
  }
  lib::L2CValue::~L2CValue(pLVar10);
  lib::L2CValue::L2CValue(param_1,false);
LAB_7100053720:
  lib::L2CValue::~L2CValue(aLStack496);
  return;
}

