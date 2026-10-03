
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710022e290(void *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  FighterEntryID FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar14;
  code *pcVar15;
  long *plVar16;
  FighterInformation *pFVar17;
  Hash40 HVar18;
  ulong *puVar19;
  FighterEntry *pFVar20;
  BattleObjectModuleAccessor **ppBVar21;
  float fVar22;
  long lVar23;
  int in_stack_fffffffffffffd34;
  undefined in_stack_fffffffffffffd3c;
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
  ulong local_190;
  ulong uStack392;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  ulong auStack304 [2];
  L2CValue aLStack288 [16];
  ulong auStack272 [2];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  ulong auStack192 [2];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_REMOVE);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar21 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON)
    ;
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
    iVar5 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0;
    if ((bVar3 & 1U) == 0) {
      for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
        iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        bVar2 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar21,iVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_190);
          iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::ItemModule__set_have_item_visibility_impl
                    (*ppBVar21,(bool)(bVar2 & 1),iVar7);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        }
      }
    }
    else {
      FUN_710000ffd0(param_1);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_REMOVE)
    ;
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_USE);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar5);
    lib::L2CValue::L2CValue(aLStack160,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    FVar6 = lib::L2CValue::as_integer(aLStack160);
    pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_entry_impl
                                (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE,FVar6);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar10);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON)
    ;
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((bVar3 & 1U) == 0) {
      FVar6 = lib::L2CValue::as_integer(aLStack160);
      pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                  (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE,FVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,pvVar10);
      iVar5 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
      if (_FIGHTER_KIRBY_HAVE_ITEM_WORK_0 < _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM) {
        iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0;
        do {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
          iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          bVar2 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar21,iVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
            iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            uVar8 = app::lua_bind::ItemModule__get_have_item_id_impl(*ppBVar21,iVar7);
            lib::L2CValue::L2CValue((L2CValue *)&local_190,uVar8);
            uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_190);
            pvVar10 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                                        (LUA_SCRIPT_STATUS_FUNC_EXEC_STOP,uVar8);
            if (pvVar10 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack208,pvVar10);
            }
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_90);
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
            uVar11 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            if ((uVar11 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
              iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
              iVar7 = app::lua_bind::ItemModule__get_have_item_trait_impl(*ppBVar21,iVar7);
              lib::L2CValue::L2CValue(aLStack224,iVar7);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              fVar22 = (float)app::lua_bind::DamageModule__damage_impl(*ppBVar21,0);
              lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar22);
              lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_FOOD);
              lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              if ((bVar3 & 1U) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_RECOVER);
                lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                if ((bVar3 & 1U) != 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                  iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                  app::lua_bind::ItemModule__use_item_impl(*ppBVar21,iVar7,false);
                  goto LAB_710022e8fc;
                }
                lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_QUICK);
                lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                if ((bVar3 & 1U) != 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                  iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                  app::lua_bind::ItemModule__use_item_impl(*ppBVar21,iVar7,false);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  pFVar17 = (FighterInformation *)lib::L2CValue::as_pointer((L2CValue *)auStack192);
                  bVar2 = app::lua_bind::FighterInformation__get_no_change_hp_impl(pFVar17);
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
                  lib::L2CValue::operator!((L2CValue *)&local_90);
                  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((bVar3 & 1U) == 0) goto LAB_710022e904;
                  lib::L2CValue::L2CValue((L2CValue *)auStack272,0xf899192aa);
                  lib::L2CValue::L2CValue(aLStack288,0x204bff27ec);
                  uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack272);
                  uVar12 = lib::L2CValue::as_integer(aLStack288);
                  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar21,uVar11,uVar12);
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
                  lib::L2CValue::operator-((L2CValue *)&local_90);
                  lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_190);
LAB_710022f414:
                  puVar19 = &local_190;
LAB_710022f4f0:
                  lib::L2CValue::~L2CValue((L2CValue *)puVar19);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  lib::L2CValue::~L2CValue(aLStack288);
                  puVar19 = auStack272;
                  goto LAB_710022e900;
                }
                lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_TOUCH);
                lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                if ((bVar3 & 1U) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_BOMB);
                  lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((bVar3 & 1U) != 0) {
                    lib::L2CValue::L2CValue((L2CValue *)auStack272,0xf899192aa);
                    lib::L2CValue::L2CValue(aLStack288,0x1ff53d24f8);
                    uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack272);
                    uVar12 = lib::L2CValue::as_integer(aLStack288);
                    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                              (*ppBVar21,uVar11,uVar12);
                    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
                    fVar22 = (float)app::lua_bind::FighterManager__one_on_one_ratio_impl
                                              (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
                    lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar22);
                    lib::L2CValue::operator*((L2CValue *)&local_90,(L2CValue *)auStack304);
                    lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_190);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                    puVar19 = auStack304;
                    goto LAB_710022f4f0;
                  }
                  lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
                  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x204bff27ec);
                  uVar11 = lib::L2CValue::as_integer(aLStack288);
                  uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack304);
                  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                            (*ppBVar21,uVar11,uVar12);
                  lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar22);
                  lib::L2CValue::operator-((L2CValue *)(auStack256 + 0x10),(L2CValue *)auStack272);
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
                  uVar11 = lib::L2CValue::operator<((L2CValue *)&local_90,(L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  lib::L2CValue::~L2CValue((L2CValue *)auStack272);
                  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
                  lib::L2CValue::~L2CValue(aLStack288);
                  if ((uVar11 & 1) != 0) {
                    lib::L2CValue::operator-((L2CValue *)(auStack256 + 0x10));
                    lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_190);
                    goto LAB_710022e8fc;
                  }
                  pFVar17 = (FighterInformation *)lib::L2CValue::as_pointer((L2CValue *)auStack192);
                  bVar2 = app::lua_bind::FighterInformation__get_no_change_hp_impl(pFVar17);
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
                  lib::L2CValue::operator!((L2CValue *)&local_90);
                  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((bVar3 & 1U) != 0) {
                    lib::L2CValue::L2CValue((L2CValue *)auStack272,0xf899192aa);
                    lib::L2CValue::L2CValue(aLStack288,0x204bff27ec);
                    uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack272);
                    uVar12 = lib::L2CValue::as_integer(aLStack288);
                    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                              (*ppBVar21,uVar11,uVar12);
                    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
                    lib::L2CValue::operator-((L2CValue *)&local_90);
                    lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_190);
                    goto LAB_710022f414;
                  }
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                  iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                  app::lua_bind::ItemModule__use_item_impl(*ppBVar21,iVar7,false);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  pFVar17 = (FighterInformation *)lib::L2CValue::as_pointer((L2CValue *)auStack192);
                  bVar2 = app::lua_bind::FighterInformation__get_no_change_hp_impl(pFVar17);
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
                  lib::L2CValue::operator!((L2CValue *)&local_90);
                  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((bVar3 & 1U) != 0) {
                    lib::L2CValue::L2CValue((L2CValue *)auStack272,0xf899192aa);
                    lib::L2CValue::L2CValue(aLStack288,0x204bff27ec);
                    uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack272);
                    uVar12 = lib::L2CValue::as_integer(aLStack288);
                    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                              (*ppBVar21,uVar11,uVar12);
                    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
                    lib::L2CValue::operator-((L2CValue *)&local_90);
                    lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)&local_190);
                    goto LAB_710022f414;
                  }
                }
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                app::lua_bind::ItemModule__use_item_impl(*ppBVar21,iVar7,false);
LAB_710022e8fc:
                puVar19 = &local_190;
LAB_710022e900:
                lib::L2CValue::~L2CValue((L2CValue *)puVar19);
              }
LAB_710022e904:
              lib::L2CValue::L2CValue((L2CValue *)auStack272,false);
              lib::L2CValue::L2CValue(aLStack320,0.0);
              lib::L2CValue::L2CValue(aLStack336,0.0);
              lib::L2CValue::L2CValue(aLStack352,0.0);
              lua2cpp::L2CFighterBase::Vector3__create
                        (param_1,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
              lib::L2CValue::~L2CValue(aLStack352);
              lib::L2CValue::~L2CValue(aLStack336);
              lib::L2CValue::~L2CValue(aLStack320);
              pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
              this = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
              this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
              lib::L2CValue::L2CValue((L2CValue *)auStack304,0x31d39a761);
              this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
              this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
              this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
              HVar14 = lib::L2CValue::as_hash((L2CValue *)auStack304);
              uVar11 = lib::L2CValue::as_number(this_01);
              lVar23 = lib::L2CValue::as_number(this_02);
              uVar8 = lib::L2CValue::as_number(this_03);
              local_90 = uVar11 & 0xffffffff | lVar23 << 0x20;
              uStack136 = (ulong)uVar8;
              app::lua_bind::ModelModule__joint_global_position_impl
                        (*ppBVar21,HVar14,(Vector3f *)&local_90,true);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)local_90);
              lib::L2CValue::L2CValue(aLStack384,local_90._4_4_);
              lib::L2CValue::L2CValue(aLStack368,(float)uStack136);
              lib::L2CValue::operator=(pLVar13,(L2CValue *)&local_190);
              lib::L2CValue::operator=(this,aLStack384);
              lib::L2CValue::operator=(this_00,aLStack368);
              lib::L2CValue::~L2CValue(aLStack368);
              lib::L2CValue::~L2CValue(aLStack384);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)auStack304);
              app::LinkEventTouchItem::new_l2c_table();
              pLVar13 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack304,0x105a79305b);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,0xaa1a7e542);
              lib::L2CValue::operator=(pLVar13,(L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              pLVar13 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack304,0x5d3c685ae);
              lib::L2CValue::operator=(pLVar13,aLStack208);
              pLVar13 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack304,0xa488a5591);
              lib::L2CValue::operator=(pLVar13,aLStack288);
              bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
              if ((bVar3 & 1U) != 0) {
                pLVar13 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack304,0x11f63699bf)
                ;
                pcVar15 = (code *)lib::L2CValue::as_pointer(pLVar13);
                plVar16 = (long *)(*pcVar15)();
                app::lua_bind::LinkEventTouchItem__load_from_l2c_table_impl
                          ((LinkEventTouchItem *)plVar16,(L2CValue *)auStack304);
                bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack272);
                pFVar20 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack176);
                bVar2 = app::lua_bind::FighterEntry__eat_item_impl
                                  (pFVar20,(LinkEventTouchItem *)plVar16,(bool)(bVar2 & 1));
                lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar2 & 1));
                app::lua_bind::LinkEventTouchItem__store_l2c_table_impl
                          ((LinkEventTouchItem *)plVar16);
                lib::L2CValue::L2CValue(aLStack384,(L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                (**(code **)(*plVar16 + 8))(plVar16);
                lib::L2CValue::operator=((L2CValue *)auStack272,(L2CValue *)&local_190);
                lib::L2CValue::operator=((L2CValue *)auStack304,aLStack384);
                lib::L2CValue::~L2CValue(aLStack384);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                lib::L2CValue::operator!((L2CValue *)auStack272);
                bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_90);
                if ((bVar3 & 1U) == 0) {
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
                  puVar19 = &local_190;
                  uVar11 = lib::L2CValue::operator<((L2CValue *)auStack256,(L2CValue *)puVar19);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((uVar11 & 1) != 0) {
                    lib::L2CAgent::math_abs((L2CAgent *)auStack256,(L2CValue *)puVar19);
                    lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
                    lib::L2CValue::L2CValue(aLStack416,0);
                    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
                    bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
                    iVar7 = lib::L2CValue::as_integer(aLStack416);
                    pFVar20 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack176);
                    app::lua_bind::FighterEntry__heal_impl
                              (pFVar20,fVar22,(bool)(bVar2 & 1),iVar7,0x7fb997a80);
                    lib::L2CValue::~L2CValue(aLStack416);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                    goto LAB_710022f13c;
                  }
                }
                lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
                uVar11 = lib::L2CValue::operator==((L2CValue *)auStack256,(L2CValue *)&local_190);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                if ((uVar11 & 1) == 0) {
                  lib::L2CValue::operator!((L2CValue *)auStack272);
                  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  if ((bVar3 & 1U) != 0) {
                    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
                    app::lua_bind::DamageModule__add_damage_impl(*ppBVar21,fVar22,0);
                  }
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_TRAIT_FLAG_FOOD);
                  lib::L2CValue::operator&(aLStack224,(L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
                  uVar11 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                  if ((uVar11 & 1) != 0) {
                    lib::L2CValue::L2CValue((L2CValue *)&local_190,0x1066bb3b8f);
                    HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_190);
                    iVar7 = app::lua_bind::SoundModule__play_se_impl
                                      (*ppBVar21,HVar14,true,false,false,false,0);
                    lib::L2CValue::L2CValue(aLStack432,iVar7);
                    lib::L2CValue::~L2CValue(aLStack432);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                    lib::L2CValue::L2CValue(aLStack416,0xc8b9a0581);
                    lib::L2CValue::L2CValue(aLStack464,0x31ed91fca);
                    lib::L2CValue::L2CValue(aLStack480,0.0);
                    lib::L2CValue::L2CValue(aLStack496,0.0);
                    lib::L2CValue::L2CValue(aLStack512,0.0);
                    lib::L2CValue::L2CValue(aLStack528,0.0);
                    lib::L2CValue::L2CValue(aLStack544,0.0);
                    lib::L2CValue::L2CValue(aLStack560,0.0);
                    lib::L2CValue::L2CValue(aLStack592,0xc28b70a0b);
                    lib::L2CValue::L2CValue(aLStack608,0);
                    uVar11 = lib::L2CValue::as_integer(aLStack592);
                    uVar12 = lib::L2CValue::as_integer(aLStack608);
                    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                              (*ppBVar21,uVar11,uVar12);
                    lib::L2CValue::L2CValue(aLStack576,fVar22);
                    HVar14 = lib::L2CValue::as_hash(aLStack416);
                    HVar18 = lib::L2CValue::as_hash(aLStack464);
                    uVar11 = lib::L2CValue::as_number(aLStack480);
                    lVar23 = lib::L2CValue::as_number(aLStack496);
                    uVar8 = lib::L2CValue::as_number(aLStack512);
                    local_190 = uVar11 & 0xffffffff | lVar23 << 0x20;
                    uStack392 = (ulong)uVar8;
                    uVar11 = lib::L2CValue::as_number(aLStack528);
                    lVar23 = lib::L2CValue::as_number(aLStack544);
                    uVar8 = lib::L2CValue::as_number(aLStack560);
                    local_90 = uVar11 & 0xffffffff | lVar23 << 0x20;
                    uStack136 = (ulong)uVar8;
                    fVar22 = (float)lib::L2CValue::as_number(aLStack576);
                    uVar8 = app::lua_bind::EffectModule__req_follow_impl
                                      (*ppBVar21,HVar14,HVar18,(Vector3f *)&local_190,
                                       (Vector3f *)&local_90,fVar22,false,0,0,-1,
                                       in_stack_fffffffffffffd34,0,(bool)in_stack_fffffffffffffd3c,
                                       false);
                    lib::L2CValue::L2CValue(aLStack448,uVar8);
                    lib::L2CValue::~L2CValue(aLStack448);
                    lib::L2CValue::~L2CValue(aLStack576);
                    lib::L2CValue::~L2CValue(aLStack608);
                    lib::L2CValue::~L2CValue(aLStack592);
                    lib::L2CValue::~L2CValue(aLStack560);
                    lib::L2CValue::~L2CValue(aLStack544);
                    lib::L2CValue::~L2CValue(aLStack528);
                    lib::L2CValue::~L2CValue(aLStack512);
                    lib::L2CValue::~L2CValue(aLStack496);
                    lib::L2CValue::~L2CValue(aLStack480);
                    lib::L2CValue::~L2CValue(aLStack464);
                    lib::L2CValue::~L2CValue(aLStack416);
                  }
                }
              }
LAB_710022f13c:
              lib::L2CValue::~L2CValue((L2CValue *)auStack304);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::L2CValue(aLStack288,iVar1);
              iVar7 = lib::L2CValue::as_integer(aLStack288);
              iVar7 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar21,iVar7);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar7);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_KIND_KROOLCROWN);
              uVar11 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              lib::L2CValue::~L2CValue(aLStack288);
              if ((uVar11 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                app::lua_bind::ItemModule__remove_item_impl(*ppBVar21,iVar7);
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,_ITEM_KROOLCROWN_ACTION_EATEN);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
                lib::L2CValue::L2CValue(aLStack288,iVar1);
                iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
                iVar9 = lib::L2CValue::as_integer(aLStack288);
                app::lua_bind::ItemModule__set_have_item_action_impl(*ppBVar21,iVar7,fVar22,iVar9);
                lib::L2CValue::~L2CValue(aLStack288);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar1);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
                lib::L2CValue::L2CValue(aLStack288,true);
                iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_190);
                bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
                bVar4 = lib::L2CValue::as_bool(aLStack288);
                app::lua_bind::ItemModule__eject_have_item_impl
                          (*ppBVar21,iVar7,(bool)(bVar2 & 1),(bool)(bVar4 & 1));
                lib::L2CValue::~L2CValue(aLStack288);
                lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              }
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)auStack272);
              lib::L2CValue::~L2CValue((L2CValue *)auStack256);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
              lib::L2CValue::~L2CValue(aLStack224);
            }
            lib::L2CValue::~L2CValue(aLStack208);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar5);
      }
      puVar19 = auStack192;
    }
    else {
      uVar11 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar11 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_190,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_DRINK_WEAPON_KIND
                  );
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_KIRBY_EAT_WEAPON_KIND_BOMB);
        uVar11 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        if ((uVar11 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack192,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack208,0x204bff27ec);
          uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack192);
          uVar12 = lib::L2CValue::as_integer(aLStack208);
          fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar11,uVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar22);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue((L2CValue *)auStack192);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,true);
          lib::L2CValue::L2CValue(aLStack208,0);
          fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack192);
          iVar5 = lib::L2CValue::as_integer(aLStack208);
          pFVar20 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack176);
          app::lua_bind::FighterEntry__heal_impl(pFVar20,fVar22,(bool)(bVar2 & 1),iVar5,0x7fb997a80)
          ;
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        }
        else {
          lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack224,0x1ff53d24f8);
          uVar11 = lib::L2CValue::as_integer(aLStack208);
          uVar12 = lib::L2CValue::as_integer(aLStack224);
          fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar11,uVar12);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar22);
          fVar22 = (float)app::lua_bind::FighterManager__one_on_one_ratio_impl
                                    (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
          lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),fVar22);
          lib::L2CValue::operator*((L2CValue *)auStack192,(L2CValue *)(auStack256 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack192);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
          app::lua_bind::DamageModule__add_damage_impl(*ppBVar21,fVar22,0);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar5);
      puVar19 = &local_190;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar19);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_ITEM_USE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  return;
}

