
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100003730(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *pLVar11;
  float fVar12;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_STORE_TARGET_RIGHT);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_DECIDE_SPARK_RIGHT);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_STORE_TARGET_PRIORITY_RIGHT);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_FLOAT_TARGET_POS_X_RIGHT);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_FLOAT_TARGET_POS_Y_RIGHT);
  lib::L2CValue::L2CValue(aLStack112,-1.0);
  uVar6 = lib::L2CValue::operator==(param_3,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_STORE_TARGET_LEFT);
    lib::L2CValue::operator=(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_DECIDE_SPARK_LEFT);
    lib::L2CValue::operator=(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_STORE_TARGET_PRIORITY_LEFT);
    lib::L2CValue::operator=(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_FLOAT_TARGET_POS_X_LEFT)
    ;
    lib::L2CValue::operator=(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_FLOAT_TARGET_POS_Y_LEFT)
    ;
    lib::L2CValue::operator=(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_ENABLE_SPARK);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator==(aLStack208,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((uVar6 & 1) != 0) goto LAB_710000462c;
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator==(aLStack208,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack208);
  if ((uVar6 & 1) != 0) goto LAB_710000462c;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5d6e20d24);
  lib::L2CValue::L2CValue(aLStack112,COLLISION_KIND_HIT);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) goto LAB_710000462c;
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack272,*pfVar8);
  lib::L2CValue::L2CValue(aLStack256,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack240,pfVar8[2]);
  FUN_7100004a60(aLStack208,param_1,aLStack272);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0xa854977fe);
  uVar4 = lib::L2CValue::as_integer(pLVar7);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,pvVar9);
  }
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar10);
  lib::L2CValue::L2CValue(aLStack336,*pfVar8);
  lib::L2CValue::L2CValue(aLStack320,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack304,pfVar8[2]);
  FUN_7100004a60(aLStack288,param_1,aLStack336);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  uVar4 = lib::L2CValue::as_integer(pLVar7);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
  bVar1 = app::FighterUtil::is_exist_past_log_for_back_shield(uVar4,pBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x3a4b90435);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](param_2,0x6c2b55593);
    iVar3 = lib::L2CValue::as_integer(pLVar7);
    iVar5 = lib::L2CValue::as_integer(pLVar11);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
    iVar3 = app::lua_bind::HitModule__get_status_impl(pBVar10,iVar3,iVar5);
    lib::L2CValue::L2CValue(aLStack352,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_NORMAL);
    uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack352);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
      lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_GIMMICK);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
        lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ITEM);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
          lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ENEMY);
          uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) == 0) goto LAB_7100003e04;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x380d9e6ac);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        lib::L2CValue::operator=(pLVar11,pLVar7);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x380d9e6ac);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack112,10.0);
        lib::L2CValue::operator-(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar7,aLStack352);
        lib::L2CValue::~L2CValue(aLStack352);
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x380d9e6ac);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        lib::L2CValue::operator=(pLVar11,pLVar7);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x380d9e6ac);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack112,10.0);
        lib::L2CValue::operator-(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar7,aLStack352);
        lib::L2CValue::~L2CValue(aLStack352);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x380d9e6ac);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x162d277af);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
        lib::L2CValue::operator=(pLVar11,pLVar7);
      }
LAB_7100003e04:
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar6 = lib::L2CValue::operator==(param_3,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        uVar6 = lib::L2CValue::operator==(param_3,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          uVar6 = lib::L2CValue::operator<(pLVar7,pLVar11);
          goto LAB_7100003ec4;
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        uVar6 = lib::L2CValue::operator<(pLVar11,pLVar7);
LAB_7100003ec4:
        if ((uVar6 & 1) != 0) goto LAB_7100004614;
      }
      lib::L2CValue::L2CValue(aLStack352,true);
      lib::L2CValue::L2CValue(aLStack368,0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
      lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ITEM);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack384,_ITEM_INSTANCE_WORK_INT_TRAIT_FLAG);
        iVar3 = lib::L2CValue::as_integer(aLStack384);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::operator=(aLStack368,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack384);
      }
      lib::L2CValue::L2CValue(aLStack384,0);
      lib::L2CValue::L2CValue(aLStack400,1);
      lib::L2CValue::L2CValue(aLStack416,2);
      lib::L2CValue::L2CValue(aLStack432,3);
      lib::L2CValue::L2CValue(aLStack448,4);
      lib::L2CValue::L2CValue(aLStack464,99);
      lib::L2CValue::L2CValue(aLStack480,aLStack464);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x5d6e20d24);
      lib::L2CValue::L2CValue(aLStack112,COLLISION_KIND_SHIELD);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
        lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ITEM);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_ITEM_TRAIT_FLAG_BOSS);
          lib::L2CValue::operator&(aLStack368,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack496);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::~L2CValue(aLStack496);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_ITEM_TRAIT_FLAG_WEAPON);
            lib::L2CValue::operator&(aLStack368,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::operator!(aLStack528);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack512);
            lib::L2CValue::~L2CValue(aLStack512);
            lib::L2CValue::~L2CValue(aLStack528);
            lib::L2CValue::~L2CValue(aLStack496);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::operator=(aLStack480,aLStack384);
              goto LAB_7100004284;
            }
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
        lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_FIGHTER);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
          lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ITEM);
          uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_ITEM_TRAIT_FLAG_ASSIST);
            lib::L2CValue::operator&(aLStack368,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack496);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::~L2CValue(aLStack496);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,_ITEM_TRAIT_FLAG_WEAPON);
              lib::L2CValue::operator&(aLStack368,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::operator!(aLStack528);
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack512);
              lib::L2CValue::~L2CValue(aLStack512);
              lib::L2CValue::~L2CValue(aLStack528);
              lib::L2CValue::~L2CValue(aLStack496);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::operator=(aLStack480,aLStack416);
                goto LAB_7100004284;
              }
            }
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_2,0x10860c2250);
          lib::L2CValue::L2CValue(aLStack112,_BATTLE_OBJECT_CATEGORY_ENEMY);
          uVar6 = lib::L2CValue::operator==(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::operator=(aLStack480,aLStack432);
          }
        }
        else {
          lib::L2CValue::operator=(aLStack480,aLStack400);
        }
      }
      else {
        lib::L2CValue::operator=(aLStack480,aLStack448);
      }
LAB_7100004284:
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack496,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::operator==(aLStack496,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack496);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,false);
        lib::L2CValue::operator=(aLStack352,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack496,false);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack512,iVar3);
        uVar6 = lib::L2CValue::operator<(aLStack480,aLStack512);
        if ((uVar6 & 1) == 0) {
          uVar6 = lib::L2CValue::operator<(aLStack512,aLStack480);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator=(aLStack496,aLStack112);
            goto LAB_7100004374;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,true);
          lib::L2CValue::operator=(aLStack352,aLStack112);
LAB_7100004374:
          lib::L2CValue::~L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack112,true);
        uVar6 = lib::L2CValue::operator==(aLStack496,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack528,fVar12);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::operator-(pLVar7,pLVar11);
          lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar11);
          lib::L2CValue::~L2CValue(aLStack112);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          pLVar7 = aLStack528;
          lib::L2CValue::operator-(pLVar11,pLVar7);
          lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar7);
          lib::L2CValue::~L2CValue(aLStack112);
          uVar6 = lib::L2CValue::operator<(aLStack544,aLStack560);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator=(aLStack352,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
          }
          lib::L2CValue::~L2CValue(aLStack560);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::~L2CValue(aLStack528);
        }
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack496);
      }
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar6 = lib::L2CValue::operator==(aLStack352,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        iVar3 = lib::L2CValue::as_integer(aLStack480);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator+(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack496);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar12,iVar3);
        lib::L2CValue::~L2CValue(aLStack496);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::operator+(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack496);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar12,iVar3);
        lib::L2CValue::~L2CValue(aLStack496);
      }
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
    }
  }
LAB_7100004614:
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
LAB_710000462c:
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

