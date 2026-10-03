
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e690(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
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
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
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
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar5);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator==
                      (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar6 & 1) == 0) {
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack64);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack112,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar5);
      }
      lib::L2CValue::~L2CValue(aLStack112);
      pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack80);
      uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
      lib::L2CValue::L2CValue(aLStack128,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar5);
      }
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_CATCH_PHYSICS);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_CATCH_PHYSICS);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(pBVar8,iVar3);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
        lib::L2CValue::L2CValue(aLStack176,true);
        FUN_7100021950(param_2,aLStack160,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
        lib::L2CValue::L2CValue(aLStack208,true);
        FUN_7100021950(param_2,aLStack192,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TANTAN_STATUS_KIND_CATCH_PHYSICS_REWIND);
        lib::L2CValue::L2CValue(aLStack240,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
      }
      lib::L2CValue::L2CValue(param_1,0);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(param_1,false);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

