
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021430(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack80,0xadd214353);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x56061c80f);
  lib::L2CValue::L2CValue(aLStack80,0xae4fd20b8);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack80,0xcec1191d4);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x7e096c9f5);
  lib::L2CValue::L2CValue(aLStack80,0xcd5cdf23f);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0xb616c555c);
    lib::L2CValue::L2CValue(aLStack80,0x10c5a70ec8);
    lVar3 = lib::L2CValue::as_integer(aLStack64);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::VisibilityModule__set_int64_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar6);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator==
                      (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar5 & 1) == 0) {
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack64);
      uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack96,uVar2);
      uVar2 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,pvVar6);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_OBJECT_ID);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar1);
      lib::L2CValue::L2CValue(aLStack96,iVar1);
      lib::L2CValue::~L2CValue(aLStack112);
      uVar2 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      uVar5 = lib::L2CValue::operator==
                        (aLStack112,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0x6084eb62d);
        lib::L2CValue::L2CValue(aLStack144,0xd9838e994);
        lVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar4 = lib::L2CValue::as_integer(aLStack144);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::VisibilityModule__set_status_default_int64_impl(pBVar8,lVar3,lVar4);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

