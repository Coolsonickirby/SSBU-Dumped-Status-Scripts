
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005d5d0(L2CValue *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
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
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack280,false);
  lib::L2CValue::L2CValue(aLStack296,false);
  FUN_710005e930(aLStack312,param_2);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  uVar5 = lib::L2CValue::operator==(aLStack312,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  iVar3 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if ((uVar5 & 1) == 0) {
    if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
      iVar4 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack328,iVar4);
        FUN_710005ef10(aLStack120,param_2,aLStack328);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack328);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack344,iVar4);
          lib::L2CValue::L2CValue
                    (aLStack360,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
          FUN_710005efe0(param_2,aLStack344,aLStack360);
          lib::L2CValue::~L2CValue(aLStack360);
          lib::L2CValue::~L2CValue(aLStack344);
          lib::L2CValue::L2CValue(aLStack376,iVar4);
          lib::L2CValue::L2CValue(aLStack392,aLStack312);
          FUN_710005f1f0(param_2,aLStack376,aLStack392);
          lib::L2CValue::~L2CValue(aLStack392);
          lib::L2CValue::~L2CValue(aLStack376);
          lib::L2CValue::L2CValue(aLStack120,true);
          lib::L2CValue::operator=(param_1,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::L2CValue(aLStack120,true);
          lib::L2CValue::operator=(aLStack280,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      goto LAB_710005d768;
    }
  }
  else {
LAB_710005d768:
    iVar3 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
    if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
      iVar4 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack408,iVar4);
        FUN_7100059490(aLStack136,param_2,aLStack408);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
        uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack408);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack424,iVar4);
          FUN_710005f400(aLStack136,param_2,aLStack424);
          lib::L2CValue::~L2CValue(aLStack424);
          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
          uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack440,iVar4);
            lib::L2CValue::L2CValue
                      (aLStack456,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
            FUN_710005efe0(param_2,aLStack440,aLStack456);
            lib::L2CValue::~L2CValue(aLStack456);
            lib::L2CValue::~L2CValue(aLStack440);
            lib::L2CValue::L2CValue(aLStack472,iVar4);
            lib::L2CValue::L2CValue(aLStack488,aLStack136);
            FUN_710005f1f0(param_2,aLStack472,aLStack488);
            lib::L2CValue::~L2CValue(aLStack488);
            lib::L2CValue::~L2CValue(aLStack472);
            lib::L2CValue::L2CValue(aLStack120,true);
            lib::L2CValue::operator=(param_1,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::L2CValue(aLStack120,true);
            lib::L2CValue::operator=(aLStack296,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
          }
          lib::L2CValue::~L2CValue(aLStack136);
        }
        iVar1 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
        iVar3 = 0;
        do {
          lib::L2CValue::L2CValue(aLStack504,iVar3);
          FUN_7100059490(aLStack136,param_2,aLStack504);
          lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE)
          ;
          uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack504);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack520,iVar3);
            FUN_710005fce0(aLStack136,param_2,aLStack520);
            lib::L2CValue::~L2CValue(aLStack520);
            lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
            uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack536,iVar3);
              lib::L2CValue::L2CValue
                        (aLStack552,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
              FUN_710005efe0(param_2,aLStack536,aLStack552);
              lib::L2CValue::~L2CValue(aLStack552);
              lib::L2CValue::~L2CValue(aLStack536);
              lib::L2CValue::L2CValue(aLStack568,iVar3);
              lib::L2CValue::L2CValue(aLStack584,aLStack136);
              FUN_710005f1f0(param_2,aLStack568,aLStack584);
              lib::L2CValue::~L2CValue(aLStack584);
              lib::L2CValue::~L2CValue(aLStack568);
              lib::L2CValue::L2CValue(aLStack120,true);
              lib::L2CValue::operator=(param_1,aLStack120);
              lib::L2CValue::~L2CValue(aLStack120);
            }
            lib::L2CValue::~L2CValue(aLStack136);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack600,0);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar5 = lib::L2CValue::operator==(aLStack280,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar5 = lib::L2CValue::operator==(aLStack296,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) goto LAB_710005daac;
  }
  else {
LAB_710005daac:
    FUN_710005d390(aLStack120,param_2);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack136,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack152,0x13bef23707);
      uVar5 = lib::L2CValue::as_integer(aLStack136);
      uVar6 = lib::L2CValue::as_integer(aLStack152);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack120,iVar3);
      lib::L2CValue::operator=(aLStack600,aLStack120);
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack152,0x133ba243d8);
      uVar5 = lib::L2CValue::as_integer(aLStack136);
      uVar6 = lib::L2CValue::as_integer(aLStack152);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack120,iVar3);
      lib::L2CValue::operator=(aLStack600,aLStack120);
    }
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack152);
    lib::L2CValue::~L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack600);
  iVar4 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME_MAX);
  iVar3 = lib::L2CValue::as_integer(aLStack600);
  iVar4 = lib::L2CValue::as_integer(aLStack120);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,true);
  uVar5 = lib::L2CValue::operator==(aLStack280,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar5 = lib::L2CValue::operator==(aLStack296,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack120);
      iVar4 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      goto LAB_710005dd78;
    }
    lib::L2CValue::L2CValue(aLStack120,true);
    uVar5 = lib::L2CValue::operator==(param_1,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack120);
      iVar4 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      goto LAB_710005dd78;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack120);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
LAB_710005dd78:
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack120);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack152,&DAT_710039bbcd);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
  uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
    uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
      uVar5 = lib::L2CValue::operator==(aLStack136,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) == 0) goto LAB_710005deb8;
      lib::L2CValue::L2CValue(aLStack120,&DAT_71003992d7);
      lib::L2CValue::operator=(aLStack152,aLStack120);
    }
    else {
      lib::L2CValue::L2CValue(aLStack120,&DAT_7100399b91);
      lib::L2CValue::operator=(aLStack152,aLStack120);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,&DAT_710039c780);
    lib::L2CValue::operator=(aLStack152,aLStack120);
  }
  lib::L2CValue::~L2CValue(aLStack120);
LAB_710005deb8:
  iVar3 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack168,&DAT_7100399483);
      if (iVar4 == _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SWORD) {
        lib::L2CValue::L2CValue(aLStack120,&DAT_710039aa3f);
        lib::L2CValue::operator=(aLStack168,aLStack120);
LAB_710005dfb4:
        lib::L2CValue::~L2CValue(aLStack120);
      }
      else {
        if (iVar4 == _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_AXE) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039bf39);
          lib::L2CValue::operator=(aLStack168,aLStack120);
          goto LAB_710005dfb4;
        }
        if (iVar4 == _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_PICK) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039abd9);
          lib::L2CValue::operator=(aLStack168,aLStack120);
          goto LAB_710005dfb4;
        }
        if (iVar4 == _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SHOVEL) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039a6fd);
          lib::L2CValue::operator=(aLStack168,aLStack120);
          goto LAB_710005dfb4;
        }
      }
      lib::L2CValue::L2CValue(aLStack200,iVar4);
      FUN_7100059490(aLStack184,param_2,aLStack200);
      lib::L2CValue::~L2CValue(aLStack200);
      lib::L2CValue::L2CValue(aLStack216,&DAT_7100399a1b);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
      uVar5 = lib::L2CValue::operator==(aLStack184,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
        uVar5 = lib::L2CValue::operator==(aLStack184,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_7100399b91);
          lib::L2CValue::operator=(aLStack216,aLStack120);
          goto LAB_710005e0c8;
        }
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
        uVar5 = lib::L2CValue::operator==(aLStack184,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039a507);
          lib::L2CValue::operator=(aLStack216,aLStack120);
          goto LAB_710005e0c8;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack120,&DAT_7100399a2c);
        lib::L2CValue::operator=(aLStack216,aLStack120);
LAB_710005e0c8:
        lib::L2CValue::~L2CValue(aLStack120);
      }
      lib::L2CValue::L2CValue(aLStack248,iVar4);
      FUN_71000596a0(aLStack232,param_2,aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::L2CValue(aLStack264,&DAT_710039b328);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      uVar5 = lib::L2CValue::operator==(aLStack232,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
        uVar5 = lib::L2CValue::operator==(aLStack232,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039b9fd);
          lib::L2CValue::operator=(aLStack264,aLStack120);
          goto LAB_710005e274;
        }
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
        uVar5 = lib::L2CValue::operator==(aLStack232,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039b34b);
          lib::L2CValue::operator=(aLStack264,aLStack120);
          goto LAB_710005e274;
        }
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
        uVar5 = lib::L2CValue::operator==(aLStack232,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039c0d2);
          lib::L2CValue::operator=(aLStack264,aLStack120);
          goto LAB_710005e274;
        }
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
        uVar5 = lib::L2CValue::operator==(aLStack232,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack120,&DAT_710039b35b);
          lib::L2CValue::operator=(aLStack264,aLStack120);
          goto LAB_710005e274;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack120,&DAT_710039b339);
        lib::L2CValue::operator=(aLStack264,aLStack120);
LAB_710005e274:
        lib::L2CValue::~L2CValue(aLStack120);
      }
      lib::L2CValue::~L2CValue(aLStack264);
      lib::L2CValue::~L2CValue(aLStack232);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack168);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar3 = _FIGHTER_PICKEL_MATERIAL_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_MATERIAL_KIND_NUM) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack168,iVar4);
      FUN_71000599c0(aLStack120,aLStack168);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack168);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack120,&DAT_7100399483);
        if (iVar4 == _FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND) {
          lib::L2CValue::L2CValue(aLStack184,&DAT_710039b339);
          lib::L2CValue::operator=(aLStack120,aLStack184);
LAB_710005e404:
          lib::L2CValue::~L2CValue(aLStack184);
        }
        else {
          if (iVar4 == _FIGHTER_PICKEL_MATERIAL_KIND_GOLD) {
            lib::L2CValue::L2CValue(aLStack184,&DAT_710039b9fd);
            lib::L2CValue::operator=(aLStack120,aLStack184);
            goto LAB_710005e404;
          }
          if (iVar4 == _FIGHTER_PICKEL_MATERIAL_KIND_IRON) {
            lib::L2CValue::L2CValue(aLStack184,&DAT_710039b34b);
            lib::L2CValue::operator=(aLStack120,aLStack184);
            goto LAB_710005e404;
          }
          if (iVar4 == _FIGHTER_PICKEL_MATERIAL_KIND_STONE) {
            lib::L2CValue::L2CValue(aLStack184,&DAT_710039c0d2);
            lib::L2CValue::operator=(aLStack120,aLStack184);
            goto LAB_710005e404;
          }
          if (iVar4 == _FIGHTER_PICKEL_MATERIAL_KIND_WOOD) {
            lib::L2CValue::L2CValue(aLStack184,&DAT_710039b35b);
            lib::L2CValue::operator=(aLStack120,aLStack184);
            goto LAB_710005e404;
          }
        }
        lib::L2CValue::~L2CValue(aLStack120);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack600);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack280);
  return;
}

