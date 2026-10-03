
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019340(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_HI_HANG);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_HI_CUT);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL_AERIAL);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_GENERATE_ARTICLE_CYPHER);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_GENERATE_ARTICLE_CYPHER);
          lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          AVar4 = lib::L2CValue::as_integer(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::ArticleModule__shoot_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,AVar4,(bool)(bVar1 & 1))
          ;
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
        }
      }
    }
  }
  return;
}

