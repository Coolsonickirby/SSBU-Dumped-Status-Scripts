
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003dda0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  void *pvVar9;
  Article *pAVar10;
  Rhombus2 *pRVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  GroundCollisionLine *pGVar14;
  float fVar15;
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
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
  L2CValue aLStack96 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  bVar2 = app::FighterSpecializer_Pickel::check_material_special_lw_generate_stone(pBVar7);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack944,false);
  uVar8 = lib::L2CValue::operator==(aLStack96,aLStack944);
  lib::L2CValue::~L2CValue(aLStack944);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
LAB_710003de90:
    lib::L2CValue::L2CValue(param_1,0x50000000);
    return;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack944,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator==(pLVar6,aLStack944);
  lib::L2CValue::~L2CValue(aLStack944);
  if ((uVar8 & 1) == 0) goto LAB_710003de90;
  lib::L2CValue::L2CValue(aLStack944,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
  iVar3 = lib::L2CValue::as_integer(aLStack944);
  pvVar9 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack720,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack720,pvVar9);
  }
  lib::L2CValue::~L2CValue(aLStack944);
  uVar8 = lib::L2CValue::operator==(aLStack720,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0x50000000);
    goto LAB_710003ede0;
  }
  pAVar10 = (Article *)lib::L2CValue::as_pointer(aLStack720);
  uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
  lib::L2CValue::L2CValue(aLStack944,uVar4);
  uVar4 = lib::L2CValue::as_integer(aLStack944);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack736,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack736,pvVar9);
  }
  lib::L2CValue::~L2CValue(aLStack944);
  uVar8 = lib::L2CValue::operator==(aLStack736,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar8 & 1) == 0) {
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack736);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack944,_ITEM_STATUS_KIND_LANDING);
    uVar8 = lib::L2CValue::operator==(aLStack96,aLStack944);
    lib::L2CValue::~L2CValue(aLStack944);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0x50000000);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::ArticleModule__is_generatable_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack944,false);
      uVar8 = lib::L2CValue::operator==(aLStack96,aLStack944);
      lib::L2CValue::~L2CValue(aLStack944);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack944,true);
        bVar2 = lib::L2CValue::as_bool(aLStack944);
        pRVar11 = (Rhombus2 *)
                  app::lua_bind::GroundModule__get_rhombus_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
        app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar11);
        FUN_7100039c70(aLStack752,aLStack768);
        lib::L2CValue::~L2CValue(aLStack768);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::L2CValue(aLStack944,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack96,0xca10e4019);
        uVar8 = lib::L2CValue::as_integer(aLStack944);
        uVar12 = lib::L2CValue::as_integer(aLStack96);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar8,uVar12);
        lib::L2CValue::L2CValue(aLStack784,fVar15);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::L2CValue(aLStack944,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack96,0xcd609708f);
        uVar8 = lib::L2CValue::as_integer(aLStack944);
        uVar12 = lib::L2CValue::as_integer(aLStack96);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar8,uVar12);
        lib::L2CValue::L2CValue(aLStack800,fVar15);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::L2CValue(aLStack832,aLStack752);
        lib::L2CValue::L2CValue(aLStack848,aLStack784);
        lib::L2CValue::L2CValue(aLStack864,aLStack800);
        lib::L2CValue::L2CValue(aLStack96,0x50000000);
        lib::L2CValue::L2CValue(aLStack112,0x50000000);
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::L2CValue(aLStack144,-1.0);
        FUN_710003fe20(aLStack944,param_2,aLStack144);
        lib::L2CValue::operator=(aLStack96,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack144);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::sv_battle_object::is_active(uVar4);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack944,true);
        uVar8 = lib::L2CValue::operator==(aLStack160,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar8 & 1) != 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,pvVar9);
          }
          uVar8 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack192,aLStack96);
            lib::L2CValue::L2CValue(aLStack208,false);
            FUN_7100035ca0(aLStack176,param_2,aLStack192,aLStack208);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::L2CValue(aLStack240,aLStack176);
            lib::L2CValue::L2CValue(aLStack256,aLStack848);
            lib::L2CValue::L2CValue(aLStack272,aLStack864);
            FUN_710003db60(aLStack224,aLStack240,aLStack256,aLStack272);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack240);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x5b4ca7514);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x5b4ca7514);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](pLVar13,0x18cdc1683);
            lib::L2CValue::operator=(pLVar13,pLVar6);
            lib::L2CValue::L2CValue(aLStack288,aLStack128);
            lib::L2CValue::L2CValue(aLStack304,aLStack176);
            FUN_71000405e0(aLStack944,aLStack288,aLStack304);
            lib::L2CValue::operator=(aLStack128,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::~L2CValue(aLStack288);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x5b4ca7514);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x47a67e768);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](pLVar13,0x18cdc1683);
            lib::L2CValue::operator=(pLVar13,pLVar6);
            lib::L2CValue::L2CValue(aLStack336,aLStack832);
            lib::L2CValue::L2CValue(aLStack352,aLStack224);
            FUN_7100035280(aLStack320,aLStack336,aLStack352);
            lib::L2CValue::L2CValue(aLStack944,true);
            uVar8 = lib::L2CValue::operator==(aLStack320,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack320);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack336);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::operator=(aLStack112,aLStack96);
            }
            lib::L2CValue::~L2CValue(aLStack224);
            lib::L2CValue::~L2CValue(aLStack176);
          }
          lib::L2CValue::~L2CValue(aLStack160);
        }
        lib::L2CValue::L2CValue(aLStack160,1.0);
        FUN_710003fe20(aLStack944,param_2,aLStack160);
        lib::L2CValue::operator=(aLStack96,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack160);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::sv_battle_object::is_active(uVar4);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack944,true);
        uVar8 = lib::L2CValue::operator==(aLStack176,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar8 & 1) != 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,pvVar9);
          }
          uVar8 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack320,aLStack96);
            lib::L2CValue::L2CValue(aLStack368,false);
            FUN_7100035ca0(aLStack224,param_2,aLStack320,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack320);
            lib::L2CValue::L2CValue(aLStack400,aLStack224);
            lib::L2CValue::L2CValue(aLStack416,aLStack848);
            lib::L2CValue::L2CValue(aLStack432,aLStack864);
            FUN_710003db60(aLStack384,aLStack400,aLStack416,aLStack432);
            lib::L2CValue::~L2CValue(aLStack432);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack400);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x47a67e768);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](pLVar13,0x18cdc1683);
            lib::L2CValue::operator=(pLVar13,pLVar6);
            lib::L2CValue::L2CValue(aLStack448,aLStack128);
            lib::L2CValue::L2CValue(aLStack464,aLStack224);
            FUN_71000405e0(aLStack944,aLStack448,aLStack464);
            lib::L2CValue::operator=(aLStack128,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack464);
            lib::L2CValue::~L2CValue(aLStack448);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x47a67e768);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x5b4ca7514);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](pLVar13,0x18cdc1683);
            lib::L2CValue::operator=(pLVar13,pLVar6);
            lib::L2CValue::L2CValue(aLStack496,aLStack832);
            lib::L2CValue::L2CValue(aLStack512,aLStack384);
            FUN_7100035280(aLStack480,aLStack496,aLStack512);
            lib::L2CValue::L2CValue(aLStack944,true);
            uVar8 = lib::L2CValue::operator==(aLStack480,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack480);
            lib::L2CValue::~L2CValue(aLStack512);
            lib::L2CValue::~L2CValue(aLStack496);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::operator=(aLStack112,aLStack96);
            }
            lib::L2CValue::~L2CValue(aLStack384);
            lib::L2CValue::~L2CValue(aLStack224);
          }
          lib::L2CValue::~L2CValue(aLStack176);
        }
        lib::L2CValue::L2CValue(aLStack176,false);
        uVar8 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack224,aLStack832);
          lib::L2CValue::L2CValue(aLStack384,aLStack128);
          FUN_7100035280(aLStack944,aLStack224,aLStack384);
          lib::L2CValue::operator=(aLStack176,aLStack944);
          lib::L2CValue::~L2CValue(aLStack944);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack224);
        }
        lib::L2CValue::L2CValue(aLStack480,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID);
        iVar3 = lib::L2CValue::as_integer(aLStack480);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack944,iVar3);
        lib::L2CValue::operator=(aLStack96,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack480);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::sv_battle_object::is_active(uVar4);
        lib::L2CValue::L2CValue(aLStack480,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack944,true);
        uVar8 = lib::L2CValue::operator==(aLStack480,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::~L2CValue(aLStack480);
        if ((uVar8 & 1) == 0) {
LAB_710003e86c:
          lib::L2CValue::L2CValue(aLStack944,true);
          uVar8 = lib::L2CValue::operator==(aLStack176,aLStack944);
          lib::L2CValue::~L2CValue(aLStack944);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack816,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack816,0x50000000);
          }
        }
        else {
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack480,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack480,pvVar9);
          }
          uVar8 = lib::L2CValue::operator==(aLStack480,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::~L2CValue(aLStack480);
            goto LAB_710003e86c;
          }
          lib::L2CValue::L2CValue(aLStack544,aLStack96);
          lib::L2CValue::L2CValue(aLStack560,false);
          FUN_7100035ca0(aLStack528,param_2,aLStack544,aLStack560);
          lib::L2CValue::~L2CValue(aLStack560);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::L2CValue(aLStack592,aLStack528);
          lib::L2CValue::L2CValue(aLStack608,aLStack848);
          lib::L2CValue::L2CValue(aLStack624,aLStack864);
          FUN_710003db60(aLStack576,aLStack592,aLStack608,aLStack624);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::L2CValue(aLStack656,aLStack832);
          lib::L2CValue::L2CValue(aLStack672,aLStack576);
          FUN_7100035280(aLStack640,aLStack656,aLStack672);
          lib::L2CValue::L2CValue(aLStack944,true);
          uVar8 = lib::L2CValue::operator==(aLStack640,aLStack944);
          lib::L2CValue::~L2CValue(aLStack944);
          lib::L2CValue::~L2CValue(aLStack640);
          lib::L2CValue::~L2CValue(aLStack672);
          lib::L2CValue::~L2CValue(aLStack656);
          if ((uVar8 & 1) == 0) {
LAB_710003eacc:
            lib::L2CValue::L2CValue(aLStack816,0x50000000);
          }
          else {
            lib::L2CValue::L2CValue(aLStack688,aLStack832);
            lib::L2CValue::L2CValue(aLStack704,aLStack528);
            FUN_7100035280(aLStack640,aLStack688,aLStack704);
            lib::L2CValue::L2CValue(aLStack944,true);
            uVar8 = lib::L2CValue::operator==(aLStack640,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack640);
            lib::L2CValue::~L2CValue(aLStack704);
            lib::L2CValue::~L2CValue(aLStack688);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack944,0x50000000);
              lib::L2CValue::L2CValue(aLStack640,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack944);
              iVar5 = lib::L2CValue::as_integer(aLStack640);
              app::lua_bind::WorkModule__set_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar5);
LAB_710003eabc:
              lib::L2CValue::~L2CValue(aLStack640);
              lib::L2CValue::~L2CValue(aLStack944);
              goto LAB_710003eacc;
            }
            lib::L2CValue::L2CValue(aLStack944,true);
            uVar8 = lib::L2CValue::operator==(aLStack176,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack944,0x50000000);
              lib::L2CValue::L2CValue(aLStack640,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack944);
              iVar5 = lib::L2CValue::as_integer(aLStack640);
              app::lua_bind::WorkModule__set_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar5);
              goto LAB_710003eabc;
            }
            lib::L2CValue::L2CValue(aLStack816,aLStack96);
          }
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack528);
          lib::L2CValue::~L2CValue(aLStack480);
        }
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack864);
        lib::L2CValue::~L2CValue(aLStack848);
        lib::L2CValue::~L2CValue(aLStack832);
        lib::L2CValue::L2CValue(aLStack944,0x50000000);
        uVar8 = lib::L2CValue::operator==(aLStack816,aLStack944);
        lib::L2CValue::~L2CValue(aLStack944);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0xba12fa217);
          lib::L2CValue::L2CValue(aLStack144,0x58c1a452f);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          uVar12 = lib::L2CValue::as_integer(aLStack144);
          fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar8,uVar12);
          lib::L2CValue::L2CValue(aLStack112,fVar15);
          lib::L2CValue::L2CValue(aLStack944,0.5);
          lib::L2CValue::operator*(aLStack112,aLStack944);
          lib::L2CValue::~L2CValue(aLStack944);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack960,aLStack816);
          lib::L2CValue::L2CValue(aLStack976,aLStack96);
          FUN_71000375c0(aLStack944,param_2,aLStack960,aLStack976);
          lib::L2CValue::operator=(aLStack112,aLStack944);
          lib::L2CValue::operator=(aLStack128,aLStack928);
          lib::L2CValue::operator=(aLStack144,aLStack912);
          lib::L2CValue::operator=(aLStack160,aLStack896);
          lib::L2CValue::operator=(aLStack176,aLStack880);
          lib::L2CValue::~L2CValue(aLStack880);
          lib::L2CValue::~L2CValue(aLStack896);
          lib::L2CValue::~L2CValue(aLStack912);
          lib::L2CValue::~L2CValue(aLStack928);
          lib::L2CValue::~L2CValue(aLStack944);
          lib::L2CValue::~L2CValue(aLStack976);
          lib::L2CValue::~L2CValue(aLStack960);
          uVar8 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) == 0) {
            pGVar14 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack112);
            uVar4 = app::sv_ground_collision_line::get_attribute_flags(pGVar14);
            lib::L2CValue::L2CValue(aLStack208,uVar4);
            lib::L2CValue::L2CValue(aLStack944,_FLAG_IGNORE_BOSS);
            lib::L2CValue::operator&(aLStack208,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::L2CValue(aLStack944,0);
            uVar8 = lib::L2CValue::operator==(aLStack192,aLStack944);
            lib::L2CValue::~L2CValue(aLStack944);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack208);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue(param_1,0x50000000);
              goto LAB_710003ed74;
            }
            bVar1 = true;
          }
          else {
            lib::L2CValue::L2CValue(param_1,0x50000000);
LAB_710003ed74:
            bVar1 = false;
          }
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          if (bVar1) goto LAB_710003edac;
        }
        else {
LAB_710003edac:
          lib::L2CValue::L2CValue(param_1,aLStack816);
        }
        lib::L2CValue::~L2CValue(aLStack816);
        lib::L2CValue::~L2CValue(aLStack800);
        lib::L2CValue::~L2CValue(aLStack784);
        lib::L2CValue::~L2CValue(aLStack752);
      }
      else {
        lib::L2CValue::L2CValue(param_1,0x50000000);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(param_1,0x50000000);
  }
  lib::L2CValue::~L2CValue(aLStack736);
LAB_710003ede0:
  lib::L2CValue::~L2CValue(aLStack720);
  return;
}

