
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035400(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  int iVar11;
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
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
  iVar3 = lib::L2CValue::as_integer(aLStack120);
  iVar3 = app::lua_bind::ArticleModule__get_num_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  lib::L2CValue::~L2CValue(aLStack120);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_GENERATE_ARTICLE_STONE);
      lib::L2CValue::L2CValue(aLStack168,iVar11);
      iVar4 = lib::L2CValue::as_integer(aLStack120);
      iVar5 = lib::L2CValue::as_integer(aLStack168);
      pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_from_no_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,iVar5);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,pvVar7);
      }
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack120);
      uVar8 = lib::L2CValue::operator==(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar8 & 1) == 0) {
        pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack152);
        uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
        lib::L2CValue::L2CValue(param_1,uVar6);
        uVar6 = lib::L2CValue::as_integer(param_1);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar6);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack168,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack168,pvVar7);
        }
        uVar8 = lib::L2CValue::operator==(aLStack168,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack200,param_1);
          lib::L2CValue::L2CValue(aLStack216,false);
          FUN_7100035ca0(aLStack184,param_2,aLStack200,aLStack216);
          lib::L2CValue::~L2CValue(aLStack216);
          lib::L2CValue::~L2CValue(aLStack200);
          lib::L2CValue::L2CValue(aLStack248,aLStack184);
          lib::L2CValue::L2CValue(aLStack264,param_3);
          lib::L2CValue::L2CValue(aLStack280,param_4);
          FUN_7100035f40(aLStack232,aLStack248,aLStack264,aLStack280);
          lib::L2CValue::L2CValue(aLStack120,true);
          uVar8 = lib::L2CValue::operator==(aLStack232,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack280);
          lib::L2CValue::~L2CValue(aLStack264);
          lib::L2CValue::~L2CValue(aLStack248);
          if ((uVar8 & 1) == 0) {
LAB_7100035684:
            bVar2 = false;
            bVar1 = true;
          }
          else {
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
            iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar10);
            lib::L2CValue::L2CValue(aLStack232,iVar4);
            lib::L2CValue::L2CValue(aLStack120,_WEAPON_PICKEL_STONE_STATUS_KIND_WAIT);
            uVar8 = lib::L2CValue::operator==(aLStack232,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            lib::L2CValue::~L2CValue(aLStack232);
            if ((uVar8 & 1) == 0) goto LAB_7100035684;
            bVar1 = false;
            bVar2 = true;
          }
          lib::L2CValue::~L2CValue(aLStack184);
          lib::L2CValue::~L2CValue(aLStack168);
          if (!bVar1) {
            if (!bVar2) {
              lib::L2CValue::~L2CValue(param_1);
            }
            lib::L2CValue::~L2CValue(aLStack152);
            goto LAB_71000356cc;
          }
          if (bVar2) goto LAB_71000356ac;
        }
        else {
          lib::L2CValue::~L2CValue(aLStack168);
        }
        lib::L2CValue::~L2CValue(param_1);
      }
LAB_71000356ac:
      lib::L2CValue::~L2CValue(aLStack152);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  lib::L2CValue::L2CValue(param_1,0x50000000);
LAB_71000356cc:
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

