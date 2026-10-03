
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a0c0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this;
  long lVar9;
  long lVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x7e096c9f5);
  uVar5 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_710002a204:
    lib::L2CValue::L2CValue(param_1,-1);
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) goto LAB_710002a204;
  lib::L2CValue::L2CValue(aLStack80,0xd9838e994);
  uVar5 = lib::L2CValue::operator==(param_4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar6);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator==
                      (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar5 & 1) == 0) {
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack96);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack128,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      lib::L2CValue::operator=(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      this = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      uVar5 = lib::L2CValue::operator==
                        (aLStack96,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      if ((uVar5 & 1) != 0) goto LAB_710002a804;
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack96);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack128,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_OBJECT_ID);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
      lib::L2CValue::L2CValue(aLStack128,iVar2);
      lib::L2CValue::~L2CValue(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar6);
      }
      lib::L2CValue::operator=(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      this = aLStack112;
    }
    lib::L2CValue::~L2CValue(this);
LAB_710002a804:
    uVar5 = lib::L2CValue::operator==
                      (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x6084eb62d);
      lib::L2CValue::L2CValue(aLStack128,0xd9838e994);
      lVar9 = lib::L2CValue::as_integer(aLStack112);
      lVar10 = lib::L2CValue::as_integer(aLStack128);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl(pBVar8,lVar9,lVar10);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xb616c555c);
      lib::L2CValue::L2CValue(aLStack128,0x10c5a70ec8);
      lVar9 = lib::L2CValue::as_integer(aLStack112);
      lVar10 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::VisibilityModule__set_int64_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar9,lVar10);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(param_1,1);
    }
    else {
      lib::L2CValue::L2CValue(param_1,0);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_BOUND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar6);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    uVar5 = lib::L2CValue::operator==
                      (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar5 & 1) == 0) {
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack80);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack112,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar6);
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x6084eb62d);
      lib::L2CValue::L2CValue(aLStack128,0xb4a296b01);
      lVar9 = lib::L2CValue::as_integer(aLStack112);
      lVar10 = lib::L2CValue::as_integer(aLStack128);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::VisibilityModule__set_int64_impl(pBVar8,lVar9,lVar10);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xb616c555c);
      lib::L2CValue::L2CValue(aLStack128,0x12bfd89fca);
      lVar9 = lib::L2CValue::as_integer(aLStack112);
      lVar10 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar9,lVar10);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DETACH_RING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DETACH_RING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_RING);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar6);
  }
  uVar5 = lib::L2CValue::operator==
                    (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACH_RING);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_710002aa40;
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH3);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar6);
  }
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  uVar5 = lib::L2CValue::operator==
                    (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar6);
    }
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    uVar5 = lib::L2CValue::operator==
                      (aLStack128,
                       (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACH_RING);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710002a9d0;
      }
      else {
LAB_710002a9d0:
        lib::L2CValue::L2CValue(aLStack80,0xb616c555c);
        lib::L2CValue::L2CValue(aLStack160,0x12bfd89fca);
        lVar9 = lib::L2CValue::as_integer(aLStack80);
        lVar10 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_status_default_int64_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar9,lVar10);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710002aa40:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

