
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100189da0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  L2CTable *this;
  Hash40 HVar9;
  void *pvVar10;
  Article *pAVar11;
  BattleObjectModuleAccessor *pBVar12;
  L2CValue *this_00;
  L2CValue aLStack352 [16];
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
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N);
  lib::L2CValue::operator=(aLStack240,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_HOLD);
  lib::L2CValue::operator=(aLStack256,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_MAX);
  lib::L2CValue::operator=(aLStack272,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_SHOOT);
  lib::L2CValue::operator=(aLStack288,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_GENERATE_ARTICLE_SHADOWBALL);
  lib::L2CValue::operator=(aLStack304,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar6 = lib::L2CValue::operator==(aLStack224,aLStack240);
  if ((uVar6 & 1) == 0) {
LAB_7100189ee8:
    uVar6 = lib::L2CValue::operator==(aLStack224,aLStack256);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack272);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack288);
        if ((uVar6 & 1) == 0) goto LAB_7100189fa4;
      }
    }
    uVar6 = lib::L2CValue::operator==(aLStack224,aLStack272);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack288);
      if ((uVar6 & 1) == 0) goto LAB_7100189fa4;
    }
    uVar6 = lib::L2CValue::operator==(aLStack224,aLStack288);
    if ((uVar6 & 1) == 0) goto LAB_710018a4a4;
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710018a4a4;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack256);
    if ((uVar6 & 1) != 0) goto LAB_7100189ee8;
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack288);
    if ((uVar6 & 1) != 0) goto LAB_7100189ee8;
  }
LAB_7100189fa4:
  this_00 = (L2CValue *)(param_1 + 200);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](this_00,5);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,0);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Mewtwo::save_shadowball_status(pFVar8,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack336,aLStack224);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](this_00,0xb);
  lib::L2CValue::L2CValue(aLStack352,pLVar7);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_HOLD);
  lib::L2CValue::operator+(aLStack336,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_HOLD);
  lib::L2CValue::operator-(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator=(aLStack336,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,8);
  lib::L2CValue::L2CValue(aLStack208,this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_CANCEL);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_GUARD_ON);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_ESCAPE_F);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_KIND_ESCAPE_B);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_KIND_ESCAPE_AIR);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_FLY);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_KIND_CATCH);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,1);
  lib::L2CValue::operator=(pLVar7,aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,2);
  lib::L2CValue::operator=(pLVar7,aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,3);
  lib::L2CValue::operator=(pLVar7,aLStack112);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,4);
  lib::L2CValue::operator=(pLVar7,aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,5);
  lib::L2CValue::operator=(pLVar7,aLStack144);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,6);
  lib::L2CValue::operator=(pLVar7,aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,7);
  lib::L2CValue::operator=(pLVar7,aLStack176);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,8);
  lib::L2CValue::operator=(pLVar7,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_HOLD);
  uVar6 = lib::L2CValue::operator==(aLStack336,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_MAX);
    uVar6 = lib::L2CValue::operator==(aLStack336,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710018a244;
LAB_710018a2e8:
    lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
    HVar9 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__remove_common_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar9);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack320,false);
  }
  else {
LAB_710018a244:
    iVar4 = lib::L2CValue::length(aLStack208);
    iVar3 = 1;
    do {
      if (iVar4 <= iVar3 + -1) goto LAB_710018a2e8;
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,iVar3);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack352);
      iVar3 = iVar3 + 1;
    } while ((uVar6 & 1) == 0);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MEWTWO_SPECIAL_N_MAX);
    uVar6 = lib::L2CValue::operator==(aLStack336,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__req_common_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar9,0.0);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack320,true);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator==(aLStack320,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  if ((uVar6 & 1) != 0) {
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar10);
    }
    uVar6 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar6 & 1) == 0) {
      pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack80);
      uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
      lib::L2CValue::L2CValue(aLStack96,uVar5);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar10);
      }
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      iVar3 = app::WeaponSpecializer_MewtwoShadowball::get_charge_frame(pBVar12);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](this_00,5);
      lib::L2CValue::L2CValue(aLStack128,true);
      pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::FighterSpecializer_Mewtwo::save_shadowball_status(pFVar8,(bool)(bVar1 & 1),iVar3);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::ArticleModule__remove_exist_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
LAB_710018a4a4:
  uVar6 = lib::L2CValue::operator==(aLStack224,aLStack240);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack288);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__remove_common_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar9);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  uVar6 = lib::L2CValue::operator==(aLStack224,aLStack288);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,0);
    pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Mewtwo::save_shadowball_status(pFVar8,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  return;
}

