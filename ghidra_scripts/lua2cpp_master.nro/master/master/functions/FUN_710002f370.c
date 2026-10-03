
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f370(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar4);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    uVar5 = lib::L2CValue::operator==
                      (aLStack80,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
    if ((uVar5 & 1) == 0) {
      pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack80);
      uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
      lib::L2CValue::L2CValue(aLStack64,uVar3);
      uVar3 = lib::L2CValue::as_integer(aLStack64);
      pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar4 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar4);
      }
      lib::L2CValue::~L2CValue(aLStack64);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar2 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_MASTER_SWORD_STATUS_KIND_EXTEND);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__inc_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

