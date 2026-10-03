
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027640(long param_1,L2CValue *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  uVar6 = lib::L2CValue::operator==
                    (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar6 & 1) == 0) {
    pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack64);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue(aLStack96,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar5);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_PH2NDARY_CRAW_NONE);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      app::lua_bind::PhysicsModule__set_2nd_status_impl(pBVar8,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_WAIT);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__change_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar4,0);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_SPECIAL_HI_AIR);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__change_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar4,0);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_PH2NDARY_CRAW_COLLIDE);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      app::lua_bind::PhysicsModule__set_2nd_status_impl(pBVar8,iVar2);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

