
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003af30(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  ulong uVar10;
  Rhombus2 *pRVar11;
  void *pvVar12;
  Article *pAVar13;
  int iVar14;
  float fVar15;
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack552,0xf250902eb);
  FUN_710003c460(aLStack136,param_2,aLStack552);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack552);
  if ((uVar7 & 1) != 0) goto LAB_710003afb8;
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_STONE);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_STONE);
    iVar3 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack120);
    FUN_710003c590(aLStack488,param_2);
    lib::L2CValue::L2CValue(aLStack120,0x50000000);
    uVar7 = lib::L2CValue::operator==(aLStack488,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack568,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
      iVar3 = lib::L2CValue::as_integer(aLStack152);
      bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack120,false);
      uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack136);
      lib::L2CValue::~L2CValue(aLStack152);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
        iVar3 = lib::L2CValue::as_integer(aLStack152);
        bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack120,true);
        uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack152);
        if ((uVar7 & 1) == 0) {
          FUN_71000316b0(aLStack120,param_2);
          lib::L2CValue::operator=(aLStack488,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::L2CValue(aLStack120,0x50000000);
          uVar7 = lib::L2CValue::operator==(aLStack488,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          if ((uVar7 & 1) == 0) {
            uVar4 = lib::L2CValue::as_integer(aLStack488);
            pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar12 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack136,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack136,pvVar12);
            }
            uVar7 = lib::L2CValue::operator==(aLStack136,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack120,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack168,0xe753b2b1a);
              uVar7 = lib::L2CValue::as_integer(aLStack120);
              uVar10 = lib::L2CValue::as_integer(aLStack168);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (param_2->moduleAccessor,uVar7,uVar10);
              lib::L2CValue::L2CValue(aLStack152,fVar15);
              lib::L2CValue::~L2CValue(aLStack168);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::L2CValue(aLStack120,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack184,0x10021463d9);
              uVar7 = lib::L2CValue::as_integer(aLStack120);
              uVar10 = lib::L2CValue::as_integer(aLStack184);
              fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (param_2->moduleAccessor,uVar7,uVar10);
              lib::L2CValue::L2CValue(aLStack168,fVar15);
              lib::L2CValue::~L2CValue(aLStack184);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::L2CValue(aLStack200,aLStack488);
              lib::L2CValue::L2CValue(aLStack216,false);
              FUN_7100039600(aLStack184,param_2,aLStack200,aLStack216);
              lib::L2CValue::~L2CValue(aLStack216);
              lib::L2CValue::~L2CValue(aLStack200);
              lib::L2CValue::L2CValue(aLStack120,true);
              bVar1 = lib::L2CValue::as_bool(aLStack120);
              pRVar11 = (Rhombus2 *)
                        app::lua_bind::GroundModule__get_rhombus_impl
                                  (param_2->moduleAccessor,(bool)(bVar1 & 1));
              app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar11);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::L2CValue(aLStack280,aLStack488);
              lib::L2CValue::L2CValue(aLStack296,false);
              FUN_7100035ca0(aLStack264,param_2,aLStack280,aLStack296);
              lib::L2CValue::L2CValue(aLStack312,aLStack184);
              lib::L2CValue::L2CValue(aLStack328,0);
              FUN_710003db60(aLStack248,aLStack264,aLStack312,aLStack328);
              lib::L2CValue::~L2CValue(aLStack328);
              lib::L2CValue::~L2CValue(aLStack312);
              lib::L2CValue::~L2CValue(aLStack264);
              lib::L2CValue::~L2CValue(aLStack296);
              lib::L2CValue::~L2CValue(aLStack280);
              lib::L2CValue::L2CValue(aLStack360,aLStack232);
              lib::L2CValue::L2CValue(aLStack376,aLStack248);
              FUN_7100035280(aLStack344,aLStack360,aLStack376);
              lib::L2CValue::L2CValue(aLStack120,false);
              uVar7 = lib::L2CValue::operator==(aLStack344,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack344);
              lib::L2CValue::~L2CValue(aLStack376);
              lib::L2CValue::~L2CValue(aLStack360);
              bVar2 = (uVar7 & 1) != 0;
              if (bVar2) {
                lib::L2CValue::L2CValue(aLStack568,true);
              }
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::~L2CValue(aLStack232);
              lib::L2CValue::~L2CValue(aLStack184);
              lib::L2CValue::~L2CValue(aLStack168);
              lib::L2CValue::~L2CValue(aLStack152);
              if (bVar2) {
                lib::L2CValue::~L2CValue(aLStack136);
                goto LAB_710003b16c;
              }
            }
            lib::L2CValue::~L2CValue(aLStack136);
          }
          lib::L2CValue::L2CValue(aLStack568,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack520,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
          iVar3 = lib::L2CValue::as_integer(aLStack520);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack504,iVar3);
          lib::L2CValue::L2CValue(aLStack120,0x50000000);
          uVar7 = lib::L2CValue::operator==(aLStack504,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack120,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack152,0xca10e4019);
            uVar7 = lib::L2CValue::as_integer(aLStack120);
            uVar10 = lib::L2CValue::as_integer(aLStack152);
            fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (param_2->moduleAccessor,uVar7,uVar10);
            lib::L2CValue::L2CValue(aLStack136,fVar15);
            lib::L2CValue::~L2CValue(aLStack152);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::L2CValue(aLStack120,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack168,0xcd609708f);
            uVar7 = lib::L2CValue::as_integer(aLStack120);
            uVar10 = lib::L2CValue::as_integer(aLStack168);
            fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (param_2->moduleAccessor,uVar7,uVar10);
            lib::L2CValue::L2CValue(aLStack152,fVar15);
            lib::L2CValue::~L2CValue(aLStack168);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::L2CValue(aLStack120,true);
            bVar1 = lib::L2CValue::as_bool(aLStack120);
            pRVar11 = (Rhombus2 *)
                      app::lua_bind::GroundModule__get_rhombus_impl
                                (param_2->moduleAccessor,(bool)(bVar1 & 1));
            app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar11);
            lib::L2CValue::L2CValue(aLStack200,aLStack136);
            lib::L2CValue::L2CValue(aLStack216,aLStack152);
            FUN_710003db60(aLStack168,aLStack184,aLStack200,aLStack216);
            lib::L2CValue::~L2CValue(aLStack216);
            lib::L2CValue::~L2CValue(aLStack200);
            lib::L2CValue::~L2CValue(aLStack184);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::L2CValue(aLStack232,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            lib::L2CValue::L2CValue(aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            lib::L2CValue::L2CValue(aLStack264,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
            iVar3 = lib::L2CValue::as_integer(aLStack264);
            pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                        (param_2->moduleAccessor,iVar3);
            if (pvVar12 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack120,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack120,pvVar12);
            }
            lib::L2CValue::operator=(aLStack248,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::~L2CValue(aLStack264);
            uVar7 = lib::L2CValue::operator==(aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar7 & 1) == 0) {
              pAVar13 = (Article *)lib::L2CValue::as_pointer(aLStack248);
              uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
              lib::L2CValue::L2CValue(aLStack264,uVar4);
              lib::L2CValue::L2CValue(aLStack280,true);
              FUN_7100035ca0(aLStack120,param_2,aLStack264,aLStack280);
              lib::L2CValue::operator=(aLStack232,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack280);
              lib::L2CValue::~L2CValue(aLStack264);
              lib::L2CValue::L2CValue(aLStack312,aLStack168);
              lib::L2CValue::L2CValue(aLStack328,aLStack232);
              FUN_7100035280(aLStack296,aLStack312,aLStack328);
              lib::L2CValue::L2CValue(aLStack120,true);
              uVar7 = lib::L2CValue::operator==(aLStack296,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack296);
              lib::L2CValue::~L2CValue(aLStack328);
              lib::L2CValue::~L2CValue(aLStack312);
              if ((uVar7 & 1) == 0) goto LAB_710003ba98;
              lib::L2CValue::L2CValue(aLStack536,true);
            }
            else {
LAB_710003ba98:
              lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
              iVar3 = lib::L2CValue::as_integer(aLStack120);
              iVar3 = app::lua_bind::ArticleModule__get_num_impl(param_2->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack296,iVar3);
              lib::L2CValue::~L2CValue(aLStack120);
              iVar3 = lib::L2CValue::as_integer(aLStack296);
              if (0 < iVar3) {
                iVar14 = 0;
                do {
                  lib::L2CValue::L2CValue(aLStack344,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
                  lib::L2CValue::L2CValue(aLStack360,iVar14);
                  iVar5 = lib::L2CValue::as_integer(aLStack344);
                  iVar6 = lib::L2CValue::as_integer(aLStack360);
                  pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_from_no_impl
                                              (param_2->moduleAccessor,iVar5,iVar6);
                  if (pvVar12 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack120,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack120,pvVar12);
                  }
                  lib::L2CValue::operator=(aLStack248,aLStack120);
                  lib::L2CValue::~L2CValue(aLStack120);
                  lib::L2CValue::~L2CValue(aLStack360);
                  lib::L2CValue::~L2CValue(aLStack344);
                  uVar7 = lib::L2CValue::operator==
                                    (aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  if ((uVar7 & 1) == 0) {
                    pAVar13 = (Article *)lib::L2CValue::as_pointer(aLStack248);
                    uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
                    lib::L2CValue::L2CValue(aLStack376,uVar4);
                    lib::L2CValue::L2CValue(aLStack392,true);
                    FUN_7100035ca0(aLStack120,param_2,aLStack376,aLStack392);
                    lib::L2CValue::operator=(aLStack232,aLStack120);
                    lib::L2CValue::~L2CValue(aLStack120);
                    lib::L2CValue::~L2CValue(aLStack392);
                    lib::L2CValue::~L2CValue(aLStack376);
                    lib::L2CValue::L2CValue(aLStack408,aLStack168);
                    lib::L2CValue::L2CValue(aLStack424,aLStack232);
                    FUN_7100035280(aLStack344,aLStack408,aLStack424);
                    lib::L2CValue::L2CValue(aLStack120,true);
                    uVar7 = lib::L2CValue::operator==(aLStack344,aLStack120);
                    lib::L2CValue::~L2CValue(aLStack120);
                    lib::L2CValue::~L2CValue(aLStack344);
                    lib::L2CValue::~L2CValue(aLStack424);
                    lib::L2CValue::~L2CValue(aLStack408);
                    if ((uVar7 & 1) != 0) {
                      lib::L2CValue::L2CValue(aLStack536,true);
                      goto LAB_710003be10;
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar3);
              }
              lib::L2CValue::L2CValue(aLStack344,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
              iVar3 = lib::L2CValue::as_integer(aLStack344);
              pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                          (param_2->moduleAccessor,iVar3);
              if (pvVar12 == (void *)0x0) {
                lib::L2CValue::L2CValue(aLStack120,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
              }
              else {
                lib::L2CValue::L2CValue(aLStack120,pvVar12);
              }
              lib::L2CValue::operator=(aLStack248,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
              lib::L2CValue::~L2CValue(aLStack344);
              uVar7 = lib::L2CValue::operator==(aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
              ;
              if ((uVar7 & 1) == 0) {
                pAVar13 = (Article *)lib::L2CValue::as_pointer(aLStack248);
                uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
                lib::L2CValue::L2CValue(aLStack344,uVar4);
                lib::L2CValue::L2CValue(aLStack360,true);
                FUN_7100035ca0(aLStack120,param_2,aLStack344,aLStack360);
                lib::L2CValue::operator=(aLStack232,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::~L2CValue(aLStack360);
                lib::L2CValue::~L2CValue(aLStack344);
                lib::L2CValue::L2CValue(aLStack456,aLStack168);
                lib::L2CValue::L2CValue(aLStack472,aLStack232);
                FUN_7100035280(aLStack440,aLStack456,aLStack472);
                lib::L2CValue::L2CValue(aLStack120,true);
                uVar7 = lib::L2CValue::operator==(aLStack440,aLStack120);
                lib::L2CValue::~L2CValue(aLStack120);
                lib::L2CValue::~L2CValue(aLStack440);
                lib::L2CValue::~L2CValue(aLStack472);
                lib::L2CValue::~L2CValue(aLStack456);
                if ((uVar7 & 1) == 0) goto LAB_710003bdf4;
                lib::L2CValue::L2CValue(aLStack536,true);
              }
              else {
LAB_710003bdf4:
                lib::L2CValue::L2CValue(aLStack536,false);
              }
LAB_710003be10:
              lib::L2CValue::~L2CValue(aLStack296);
            }
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::~L2CValue(aLStack232);
            lib::L2CValue::~L2CValue(aLStack168);
            lib::L2CValue::~L2CValue(aLStack152);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::L2CValue(aLStack120,false);
            uVar7 = lib::L2CValue::operator==(aLStack536,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::~L2CValue(aLStack536);
            lib::L2CValue::~L2CValue(aLStack504);
            lib::L2CValue::~L2CValue(aLStack520);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack568,true);
              goto LAB_710003b16c;
            }
          }
          else {
            lib::L2CValue::~L2CValue(aLStack504);
            lib::L2CValue::~L2CValue(aLStack520);
          }
          lib::L2CValue::L2CValue(aLStack568,false);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
        iVar3 = lib::L2CValue::as_integer(aLStack152);
        bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack120,false);
        uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack152);
        if ((uVar7 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,5);
          lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
          iVar3 = lib::L2CValue::as_integer(aLStack152);
          iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack136,iVar3);
          lib::L2CValue::L2CValue(aLStack120,0);
          uVar7 = lib::L2CValue::operator<=(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack152);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack568,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack568,true);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack568,true);
        }
      }
    }
LAB_710003b16c:
    lib::L2CValue::~L2CValue(aLStack488);
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar7 = lib::L2CValue::operator==(aLStack568,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack568);
    if ((uVar7 & 1) != 0) goto LAB_710003afb8;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator==(pLVar8,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  iVar3 = _FIGHTER_STATUS_KIND_FALL;
  if ((uVar7 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack136);
    iVar3 = _FIGHTER_STATUS_KIND_JUMP;
    if ((uVar7 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_check_button_frick(param_2);
      lib::L2CValue::L2CValue(aLStack120,true);
      uVar7 = lib::L2CValue::operator==(aLStack136,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack136);
      iVar3 = _FIGHTER_STATUS_KIND_JUMP;
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,_CONTROL_PAD_BUTTON_GUARD);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl
                          (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack136);
        iVar3 = FIGHTER_STATUS_KIND_GUARD_ON;
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack136,CONTROL_PAD_BUTTON_SPECIAL);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          bVar1 = app::lua_bind::ControlModule__check_button_off_impl(param_2->moduleAccessor,iVar3)
          ;
          lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack136);
          if ((bVar2 & 1U) == 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,5);
            lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
            iVar3 = lib::L2CValue::as_integer(aLStack152);
            iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar9,iVar3);
            lib::L2CValue::L2CValue(aLStack136,iVar3);
            lib::L2CValue::L2CValue(aLStack120,0);
            uVar7 = lib::L2CValue::operator<=(aLStack136,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::~L2CValue(aLStack152);
            iVar3 = _FIGHTER_STATUS_KIND_NONE;
            if ((uVar7 & 1) == 0) goto LAB_710003b264;
          }
LAB_710003afb8:
          lib::L2CValue::L2CValue(param_1,param_3);
          return;
        }
      }
    }
  }
LAB_710003b264:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

