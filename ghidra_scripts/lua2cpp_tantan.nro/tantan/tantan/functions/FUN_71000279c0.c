
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000279c0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar7);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  uVar8 = lib::L2CValue::operator==
                    (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_7100027e1c;
  }
  pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack112);
  uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
  lib::L2CValue::L2CValue(aLStack144,uVar6);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar6);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar7);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar10,iVar5);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar7);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  uVar8 = lib::L2CValue::operator==
                    (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar8 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack144);
    uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue(aLStack176,uVar6);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar7);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    if ((bVar2 & 1U) == 0) {
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_5);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) goto LAB_7100027bd4;
      lib::L2CValue::L2CValue(param_1,false);
    }
    else {
      lib::L2CValue::~L2CValue(aLStack176);
LAB_7100027bd4:
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_FLAG_IS_REINFORCE);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,false);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar11 = lib::L2CValue::as_hash(param_3);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        fVar14 = (float)lib::L2CValue::as_number(aLStack224);
        bVar3 = lib::L2CValue::as_bool(aLStack240);
        bVar4 = lib::L2CValue::as_bool(aLStack256);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (pBVar10,HVar11,fVar12,fVar13,(bool)(bVar1 & 1),fVar14,(bool)(bVar3 & 1),
                   (bool)(bVar4 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,false);
        lib::L2CValue::L2CValue(aLStack256,false);
        HVar11 = lib::L2CValue::as_hash(param_4);
        fVar12 = (float)lib::L2CValue::as_number(aLStack176);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        fVar14 = (float)lib::L2CValue::as_number(aLStack224);
        bVar3 = lib::L2CValue::as_bool(aLStack240);
        bVar4 = lib::L2CValue::as_bool(aLStack256);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (pBVar10,HVar11,fVar12,fVar13,(bool)(bVar1 & 1),fVar14,(bool)(bVar3 & 1),
                   (bool)(bVar4 & 1));
      }
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(param_1,true);
    }
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_7100027e1c:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

