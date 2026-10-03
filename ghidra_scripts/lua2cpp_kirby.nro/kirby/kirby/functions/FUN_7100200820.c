
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100200820(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_GENE_BREATH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_GENE_BREATH);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_GENERATE_ARTICLE_BREATH);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__generate_article_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,false,-1);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

