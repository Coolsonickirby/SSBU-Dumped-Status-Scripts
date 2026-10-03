
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008fa0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  uint uVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchPull(param_2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_CONSTRAINT_FLAG_ONE_NODE | CONSTRAINT_FLAG_POSITION);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::LinkModule__off_model_constraint_flag_impl(param_2->moduleAccessor,uVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_WAIT);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl(param_2->moduleAccessor,iVar2,0);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

