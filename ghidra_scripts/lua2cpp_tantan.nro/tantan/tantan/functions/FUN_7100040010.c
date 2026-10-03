
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100040010(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  Article *pAVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  iVar1 = lib::L2CValue::as_integer(param_3);
  pvVar3 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  if (pvVar3 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,pvVar3);
  }
  uVar4 = lib::L2CValue::operator==
                    (aLStack64,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar4 & 1) == 0) {
    pAVar5 = (Article *)lib::L2CValue::as_pointer(aLStack64);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar5);
    lib::L2CValue::L2CValue(aLStack48,uVar2);
    uVar2 = lib::L2CValue::as_integer(aLStack48);
    pvVar3 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar3 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar3);
    }
    lib::L2CValue::~L2CValue(aLStack48);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
    iVar1 = app::lua_bind::PhysicsModule__get_2nd_status_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::L2CValue(aLStack48,_PH2NDARY_CRAW_BACK);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,false);
    }
    else {
      lib::L2CValue::L2CValue(param_1,true);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

