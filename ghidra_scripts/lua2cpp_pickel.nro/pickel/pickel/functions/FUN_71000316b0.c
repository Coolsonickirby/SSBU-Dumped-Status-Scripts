
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000316b0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Rhombus2 *pRVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  void *pvVar12;
  Article *pAVar13;
  BattleObjectModuleAccessor *pBVar14;
  int iVar15;
  float fVar16;
  L2CValue aLStack680 [16];
  L2CValue aLStack664 [16];
  L2CValue aLStack648 [16];
  undefined auStack632 [32];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
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
  
  FUN_7100039a40(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)auStack632,false);
  uVar7 = lib::L2CValue::operator==(aLStack120,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0x50000000);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack632,true);
  bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack632);
  pRVar8 = (Rhombus2 *)
           app::lua_bind::GroundModule__get_rhombus_impl
                     (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
  app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar8);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::L2CValue((L2CValue *)auStack632,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack120,0xe753b2b1a);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack632);
  uVar9 = lib::L2CValue::as_integer(aLStack120);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack472,fVar16);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::L2CValue((L2CValue *)auStack632,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack120,0x10021463d9);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack632);
  uVar9 = lib::L2CValue::as_integer(aLStack120);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack488,fVar16);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::L2CValue(aLStack520,aLStack456);
  lib::L2CValue::operator+(aLStack472,aLStack488);
  lib::L2CValue::L2CValue(aLStack552,aLStack488);
  lib::L2CValue::L2CValue(aLStack136,aLStack520);
  FUN_7100039c70(aLStack120,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x24394ee70);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar10,aLStack552);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x24394ee70);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar10,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x41cff903b);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar10,aLStack552);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x41cff903b);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar10,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x47a67e768);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
  lib::L2CValue::operator=(pLVar11,pLVar10);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x5b4ca7514);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
  lib::L2CValue::operator=(pLVar11,pLVar10);
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack152,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack632,0);
  uVar7 = lib::L2CValue::operator<(aLStack152,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::~L2CValue(aLStack152);
  if ((uVar7 & 1) == 0) {
    fVar16 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack152,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)auStack632,0);
    uVar7 = lib::L2CValue::operator<((L2CValue *)auStack632,aLStack152);
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
    lib::L2CValue::~L2CValue(aLStack152);
    if ((uVar7 & 1) != 0) {
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
      lib::L2CValue::operator=(pLVar11,pLVar10);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
      lib::L2CValue::operator+(pLVar10,aLStack536);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
      lib::L2CValue::operator=(pLVar10,(L2CValue *)auStack632);
      goto LAB_7100031bb8;
    }
  }
  else {
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
    lib::L2CValue::operator=(pLVar11,pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
    lib::L2CValue::operator-(pLVar10,aLStack536);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)auStack632);
LAB_7100031bb8:
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack632,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack632);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack152,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  uVar4 = lib::L2CValue::as_integer(aLStack152);
  bVar2 = app::sv_battle_object::is_active(uVar4);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)auStack632,true);
  uVar7 = lib::L2CValue::operator==(aLStack168,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  lib::L2CValue::~L2CValue(aLStack168);
  if ((uVar7 & 1) == 0) {
LAB_7100031c94:
    lib::L2CValue::L2CValue(aLStack168,0x50000000);
    lib::L2CValue::L2CValue(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
    lib::L2CValue::L2CValue((L2CValue *)auStack632,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack632);
    pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    if (pvVar12 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack200,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack200,pvVar12);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
    uVar7 = lib::L2CValue::operator==(aLStack200,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar7 & 1) == 0) {
      pAVar13 = (Article *)lib::L2CValue::as_pointer(aLStack200);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
      lib::L2CValue::L2CValue(aLStack216,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack216);
      pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar12 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack232,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack232,pvVar12);
      }
      uVar7 = lib::L2CValue::operator==(aLStack232,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack632,true);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack632);
        pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack232);
        pRVar8 = (Rhombus2 *)
                 app::lua_bind::GroundModule__get_rhombus_impl(pBVar14,(bool)(bVar2 & 1));
        app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar8);
        lib::L2CValue::~L2CValue((L2CValue *)auStack632);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x47a67e768);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack248,0x5b4ca7514);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
        lib::L2CValue::operator+(pLVar10,pLVar11);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x47a67e768);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack520,0x5b4ca7514);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
        lib::L2CValue::operator+(pLVar10,pLVar11);
        pLVar10 = aLStack296;
        lib::L2CValue::operator-(aLStack280,pLVar10);
        lib::L2CAgent::math_abs((L2CAgent *)auStack632,pLVar10);
        lib::L2CValue::~L2CValue((L2CValue *)auStack632);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack280);
        uVar7 = lib::L2CValue::operator<(aLStack264,aLStack184);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack296,aLStack120);
          lib::L2CValue::L2CValue(aLStack312,aLStack248);
          FUN_7100035280(aLStack280,aLStack296,aLStack312);
          lib::L2CValue::L2CValue((L2CValue *)auStack632,true);
          uVar7 = lib::L2CValue::operator==(aLStack280,(L2CValue *)auStack632);
          lib::L2CValue::~L2CValue((L2CValue *)auStack632);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::~L2CValue(aLStack280);
            lib::L2CValue::~L2CValue(aLStack312);
            lib::L2CValue::~L2CValue(aLStack296);
          }
          else {
            lib::L2CValue::L2CValue(aLStack344,aLStack520);
            lib::L2CValue::L2CValue(aLStack360,aLStack248);
            FUN_7100035280(aLStack328,aLStack344,aLStack360);
            lib::L2CValue::L2CValue((L2CValue *)auStack632,false);
            uVar7 = lib::L2CValue::operator==(aLStack328,(L2CValue *)auStack632);
            lib::L2CValue::~L2CValue((L2CValue *)auStack632);
            lib::L2CValue::~L2CValue(aLStack328);
            lib::L2CValue::~L2CValue(aLStack360);
            lib::L2CValue::~L2CValue(aLStack344);
            lib::L2CValue::~L2CValue(aLStack280);
            lib::L2CValue::~L2CValue(aLStack312);
            lib::L2CValue::~L2CValue(aLStack296);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::operator=(aLStack168,aLStack216);
              lib::L2CValue::operator=(aLStack184,aLStack264);
            }
          }
        }
        lib::L2CValue::~L2CValue(aLStack264);
        lib::L2CValue::~L2CValue(aLStack248);
      }
      lib::L2CValue::~L2CValue(aLStack232);
      lib::L2CValue::~L2CValue(aLStack216);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack632,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack632);
    iVar3 = app::lua_bind::ArticleModule__get_num_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack216,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
    iVar3 = lib::L2CValue::as_integer(aLStack216);
    if (0 < iVar3) {
      iVar15 = 0;
      do {
        lib::L2CValue::L2CValue((L2CValue *)auStack632,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
        lib::L2CValue::L2CValue(aLStack248,iVar15);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack632);
        iVar6 = lib::L2CValue::as_integer(aLStack248);
        pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_from_no_impl
                                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5,iVar6);
        if (pvVar12 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack232,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack232,pvVar12);
        }
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)auStack632);
        uVar7 = lib::L2CValue::operator==(aLStack232,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar7 & 1) == 0) {
          pAVar13 = (Article *)lib::L2CValue::as_pointer(aLStack232);
          uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
          lib::L2CValue::L2CValue(aLStack248,uVar4);
          lib::L2CValue::L2CValue(aLStack280,aLStack248);
          lib::L2CValue::L2CValue(aLStack328,false);
          FUN_7100036050(aLStack264,param_2,aLStack280,aLStack328);
          lib::L2CValue::~L2CValue(aLStack328);
          lib::L2CValue::~L2CValue(aLStack280);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x47a67e768);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x5b4ca7514);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
          lib::L2CValue::operator+(pLVar10,pLVar11);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x47a67e768);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack120,0x5b4ca7514);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0x18cdc1683);
          lib::L2CValue::operator+(pLVar10,pLVar11);
          pLVar10 = aLStack408;
          lib::L2CValue::operator-(aLStack392,pLVar10);
          lib::L2CAgent::math_abs((L2CAgent *)auStack632,pLVar10);
          lib::L2CValue::~L2CValue((L2CValue *)auStack632);
          lib::L2CValue::~L2CValue(aLStack408);
          lib::L2CValue::~L2CValue(aLStack392);
          uVar7 = lib::L2CValue::operator<(aLStack376,aLStack184);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack424,aLStack120);
            lib::L2CValue::L2CValue(aLStack440,aLStack264);
            FUN_7100035280(aLStack392,aLStack424,aLStack440);
            lib::L2CValue::L2CValue((L2CValue *)auStack632,true);
            uVar7 = lib::L2CValue::operator==(aLStack392,(L2CValue *)auStack632);
            lib::L2CValue::~L2CValue((L2CValue *)auStack632);
            lib::L2CValue::~L2CValue(aLStack392);
            lib::L2CValue::~L2CValue(aLStack440);
            lib::L2CValue::~L2CValue(aLStack424);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::operator=(aLStack168,aLStack248);
              lib::L2CValue::operator=(aLStack184,aLStack376);
            }
          }
          lib::L2CValue::~L2CValue(aLStack376);
          lib::L2CValue::~L2CValue(aLStack264);
          lib::L2CValue::~L2CValue(aLStack248);
        }
        lib::L2CValue::~L2CValue(aLStack232);
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar3);
    }
    lib::L2CValue::L2CValue(aLStack504,aLStack168);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack168);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack152);
    pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar12 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack632,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack632,pvVar12);
    }
    uVar7 = lib::L2CValue::operator==
                      ((L2CValue *)auStack632,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack632);
      goto LAB_7100031c94;
    }
    lib::L2CValue::L2CValue(aLStack504,aLStack152);
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  }
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack552);
  lib::L2CValue::~L2CValue(aLStack536);
  lib::L2CValue::~L2CValue(aLStack520);
  lib::L2CValue::L2CValue((L2CValue *)auStack632,0x50000000);
  uVar7 = lib::L2CValue::operator==(aLStack504,(L2CValue *)auStack632);
  lib::L2CValue::~L2CValue((L2CValue *)auStack632);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack152,0xbc9917066);
    lib::L2CValue::L2CValue(aLStack168,0x58c1a452f);
    uVar7 = lib::L2CValue::as_integer(aLStack152);
    uVar9 = lib::L2CValue::as_integer(aLStack168);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack136,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)auStack632,0.5);
    lib::L2CValue::operator*(aLStack136,(L2CValue *)auStack632);
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack200);
    lib::L2CValue::L2CValue(aLStack648,aLStack504);
    lib::L2CValue::L2CValue(aLStack664,aLStack120);
    FUN_71000375c0(auStack632,param_2,aLStack648,aLStack664);
    lib::L2CValue::operator=(aLStack136,(L2CValue *)auStack632);
    lib::L2CValue::operator=(aLStack152,(L2CValue *)(auStack632 + 0x10));
    lib::L2CValue::operator=(aLStack168,aLStack600);
    lib::L2CValue::operator=(aLStack184,aLStack584);
    lib::L2CValue::operator=(aLStack200,aLStack568);
    lib::L2CValue::~L2CValue(aLStack568);
    lib::L2CValue::~L2CValue(aLStack584);
    lib::L2CValue::~L2CValue(aLStack600);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack632 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack632);
    lib::L2CValue::~L2CValue(aLStack664);
    lib::L2CValue::~L2CValue(aLStack648);
    uVar7 = lib::L2CValue::operator==(aLStack136,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar7 & 1) == 0) {
LAB_7100032508:
      bVar1 = true;
    }
    else {
      lib::L2CValue::L2CValue(aLStack680,aLStack504);
      FUN_7100032ca0(aLStack216,aLStack680);
      lib::L2CValue::L2CValue((L2CValue *)auStack632,false);
      uVar7 = lib::L2CValue::operator==(aLStack216,(L2CValue *)auStack632);
      lib::L2CValue::~L2CValue((L2CValue *)auStack632);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::~L2CValue(aLStack680);
      if ((uVar7 & 1) == 0) goto LAB_7100032508;
      lib::L2CValue::L2CValue(param_1,0x50000000);
      bVar1 = false;
    }
    lib::L2CValue::~L2CValue(aLStack200);
    lib::L2CValue::~L2CValue(aLStack184);
    lib::L2CValue::~L2CValue(aLStack168);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack120);
    if (!bVar1) goto LAB_710003254c;
  }
  lib::L2CValue::L2CValue(param_1,aLStack504);
LAB_710003254c:
  lib::L2CValue::~L2CValue(aLStack504);
  lib::L2CValue::~L2CValue(aLStack488);
  lib::L2CValue::~L2CValue(aLStack472);
  lib::L2CValue::~L2CValue(aLStack456);
  return;
}

