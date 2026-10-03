
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002dcb0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,8);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    return;
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_MIIMISSILE_FLAG_WEAPON);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar7 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MIIGUNNER_STATUS_MIIMISSILE_FLAG_WEAPON_GENERATED);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_710002df7c;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_MIIMISSILE);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_2_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_2_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) != 0) goto LAB_710002dea0;
    }
    else {
LAB_710002dea0:
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_SUPERMISSILE);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_enable_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false,-1);
    lib::L2CValue::L2CValue(aLStack64,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    AVar4 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__shoot_exist_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,AVar4,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIGUNNER_STATUS_MIIMISSILE_FLAG_WEAPON_GENERATED);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    pLVar7 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar7);
LAB_710002df7c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

