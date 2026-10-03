
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ac90(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_PULL);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_GENERATE_ARTICLE_GBEAM);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUSD_GENERATE_ARTICLE_GBEAM);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,0);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

