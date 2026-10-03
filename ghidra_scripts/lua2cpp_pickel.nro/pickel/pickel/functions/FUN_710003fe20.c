
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003fe20(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  int iVar9;
  float fVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(param_1,0x50000000);
  lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  uVar6 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack144);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue(aLStack160,uVar2);
    uVar2 = lib::L2CValue::as_integer(aLStack160);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,pvVar5);
    }
    uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar6 & 1) == 0) {
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
      fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar8);
      lib::L2CValue::L2CValue(aLStack192,fVar10);
      uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-(aLStack192,param_3);
        lib::L2CValue::operator=(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,param_3);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        uVar6 = lib::L2CValue::operator<(aLStack192,aLStack128);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator=(aLStack128,aLStack192);
          lib::L2CValue::operator=(param_1,aLStack160);
        }
      }
      else {
        uVar6 = lib::L2CValue::operator<(aLStack128,aLStack192);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator=(aLStack128,aLStack192);
          lib::L2CValue::operator=(param_1,aLStack160);
        }
      }
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar6 & 1) == 0) {
    pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack160);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue(aLStack176,uVar2);
    uVar2 = lib::L2CValue::as_integer(aLStack176);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,pvVar5);
    }
    uVar6 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar6 & 1) == 0) {
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
      fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar8);
      lib::L2CValue::L2CValue(aLStack208,fVar10);
      uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-(aLStack208,param_3);
        lib::L2CValue::operator=(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar6 = lib::L2CValue::operator<(aLStack112,param_3);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        uVar6 = lib::L2CValue::operator<(aLStack208,aLStack128);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator=(aLStack128,aLStack208);
          lib::L2CValue::operator=(param_1,aLStack176);
        }
      }
      else {
        uVar6 = lib::L2CValue::operator<(aLStack128,aLStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator=(aLStack128,aLStack208);
          lib::L2CValue::operator=(param_1,aLStack176);
        }
      }
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::ArticleModule__get_num_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack176,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  if (0 < iVar1) {
    iVar9 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
      lib::L2CValue::L2CValue(aLStack208,iVar9);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_from_no_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,pvVar5);
      }
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      uVar6 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar6 & 1) == 0) {
        pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack192);
        uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
        lib::L2CValue::L2CValue(aLStack208,uVar2);
        uVar2 = lib::L2CValue::as_integer(aLStack208);
        pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
        if (pvVar5 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack224,pvVar5);
        }
        uVar6 = lib::L2CValue::operator==(aLStack224,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar6 & 1) == 0) {
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
          iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar8);
          lib::L2CValue::L2CValue(aLStack240,iVar3);
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_PICKEL_STONE_STATUS_KIND_WAIT);
          uVar6 = lib::L2CValue::operator==(aLStack240,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack240);
          if ((uVar6 & 1) != 0) {
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
            fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar8);
            lib::L2CValue::L2CValue(aLStack240,fVar10);
            uVar6 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::operator-(aLStack240,param_3);
              lib::L2CValue::operator=(aLStack128,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
            }
            lib::L2CValue::L2CValue(aLStack112,0);
            uVar6 = lib::L2CValue::operator<(aLStack112,param_3);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar6 & 1) == 0) {
              uVar6 = lib::L2CValue::operator<(aLStack240,aLStack128);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::operator=(aLStack128,aLStack240);
                lib::L2CValue::operator=(param_1,aLStack208);
              }
            }
            else {
              uVar6 = lib::L2CValue::operator<(aLStack128,aLStack240);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::operator=(aLStack128,aLStack240);
                lib::L2CValue::operator=(param_1,aLStack208);
              }
            }
            lib::L2CValue::~L2CValue(aLStack240);
          }
        }
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
      }
      lib::L2CValue::~L2CValue(aLStack192);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

