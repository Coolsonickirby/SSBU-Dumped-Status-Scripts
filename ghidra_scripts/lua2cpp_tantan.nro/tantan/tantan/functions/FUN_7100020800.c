
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020800(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<=(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::operator=(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    fVar5 = (float)lib::L2CValue::as_number(param_2);
    app::lua_bind::ArticleModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,fVar5);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    fVar5 = (float)lib::L2CValue::as_number(param_2);
    app::lua_bind::ArticleModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,fVar5);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

