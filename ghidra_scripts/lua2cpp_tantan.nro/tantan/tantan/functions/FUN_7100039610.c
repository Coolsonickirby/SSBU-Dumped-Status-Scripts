
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039610(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  uVar6 = lib::L2CValue::operator==
                    (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_71000397b4;
  }
  pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack80);
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
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_4);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) goto LAB_710003974c;
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_710003974c:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar9 = lib::L2CValue::as_hash(param_3);
    app::lua_bind::ArticleModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar9,false,-1.0);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000397b4:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

