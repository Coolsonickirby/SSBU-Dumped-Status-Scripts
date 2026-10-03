
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000116f0(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  void *pvVar7;
  Article *pAVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar11 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,3);
  uVar3 = lib::L2CValue::as_integer(pLVar5);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
  bVar1 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  iVar4 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_N_HOLD);
    lib::L2CValue::operator=(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_N_MAX);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_N_SHOOT);
    lib::L2CValue::operator=(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_N_CANCEL);
    lib::L2CValue::operator=(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_GENERATE_ARTICLE_AURABALL);
    lib::L2CValue::operator=(aLStack208,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N_HOLD);
    lib::L2CValue::operator=(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N_MAX);
    lib::L2CValue::operator=(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N_SHOOT);
    lib::L2CValue::operator=(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_LUCARIO_SPECIAL_N_CANCEL);
    lib::L2CValue::operator=(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_GENERATE_ARTICLE_AURABALL);
    lib::L2CValue::operator=(aLStack208,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack128);
  if ((uVar6 & 1) == 0) {
LAB_7100011994:
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack144);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack160);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack176);
        if ((uVar6 & 1) == 0) goto LAB_7100011a44;
      }
    }
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack160);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack176);
      if ((uVar6 & 1) == 0) goto LAB_7100011a44;
    }
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack176);
    if ((uVar6 & 1) == 0) goto LAB_7100011d48;
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_7100011d48;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack144);
    if ((uVar6 & 1) != 0) goto LAB_7100011994;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack176);
    if ((uVar6 & 1) != 0) goto LAB_7100011994;
  }
LAB_7100011a44:
  lib::L2CValue::L2CValue(aLStack240,aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
  lib::L2CValue::L2CValue(aLStack256,pLVar5);
  lib::L2CValue::L2CValue(aLStack272,aLStack144);
  lib::L2CValue::L2CValue(aLStack288,aLStack160);
  lib::L2CValue::L2CValue(aLStack304,aLStack192);
  uVar6 = lib::L2CValue::operator==(aLStack256,aLStack304);
  if ((uVar6 & 1) == 0) {
LAB_7100011b10:
    lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
    HVar10 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__remove_common_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar10);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack224,false);
  }
  else {
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack272);
    if ((uVar6 & 1) == 0) {
      uVar6 = lib::L2CValue::operator==(aLStack240,aLStack288);
      if ((uVar6 & 1) == 0) goto LAB_7100011b10;
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar10 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__req_common_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar10,0.0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack224,true);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,true);
    }
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack224,0);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    app::FighterSpecializer_Lucario::save_aura_ball_status(pBVar9,(bool)(bVar1 & 1),iVar4);
LAB_7100011d20:
    lib::L2CValue::~L2CValue(aLStack224);
  }
  else {
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar7);
    }
    uVar6 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
    if ((uVar6 & 1) == 0) {
      pAVar8 = (Article *)lib::L2CValue::as_pointer(aLStack80);
      uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar8);
      lib::L2CValue::L2CValue(aLStack320,uVar3);
      uVar3 = lib::L2CValue::as_integer(aLStack320);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,pvVar7);
      }
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack336,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_CHARGE_FRAME)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(pBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack320,iVar4);
      lib::L2CValue::~L2CValue(aLStack336);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
      lib::L2CValue::L2CValue(aLStack336,true);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      bVar1 = lib::L2CValue::as_bool(aLStack336);
      iVar4 = lib::L2CValue::as_integer(aLStack320);
      app::FighterSpecializer_Lucario::save_aura_ball_status(pBVar9,(bool)(bVar1 & 1),iVar4);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      goto LAB_7100011d20;
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,0);
LAB_7100011d48:
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack128);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar11,0xb);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar10 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__remove_common_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar10);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack176);
  if ((uVar6 & 1) != 0) {
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](pLVar11,5);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack224,0);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    app::FighterSpecializer_Lucario::save_aura_ball_status(pBVar9,(bool)(bVar1 & 1),iVar4);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

