
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021950(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  Article *pAVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar2 = lib::L2CValue::as_integer(param_2);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar5);
  }
  uVar6 = lib::L2CValue::operator==
                    (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar6 & 1) == 0) {
    pAVar7 = (Article *)lib::L2CValue::as_pointer(aLStack80);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar7);
    lib::L2CValue::L2CValue(aLStack112,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar5);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_PH2NDARY_CRAW_NONE);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::PhysicsModule__set_2nd_status_impl(pBVar8,iVar2);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_WAIT);
      iVar2 = lib::L2CValue::as_integer(param_2);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__change_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar4,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_BOUND);
      iVar2 = lib::L2CValue::as_integer(param_2);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__change_status_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar4,0);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_PH2NDARY_CRAW_BACK);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::PhysicsModule__set_2nd_status_impl(pBVar8,iVar2);
      lib::L2CValue::~L2CValue(aLStack112);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar2 = app::lua_bind::PhysicsModule__get_2nd_node_num_impl(pBVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack144,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack160,0x1a4cee6318);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar9 = lib::L2CValue::as_integer(aLStack160);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::PhysicsModule__set_2nd_collision_size_impl(pBVar8,iVar2,fVar10);
      lib::L2CValue::L2CValue(aLStack176,param_2);
      FUN_7100021cd0(param_1,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

