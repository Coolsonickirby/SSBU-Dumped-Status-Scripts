
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011f10(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__generate_article_impl(param_2->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCAS_HIMOHEBI_STATUS_KIND_PULL);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_impl(param_2->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0xa02480224);
  lua2cpp::L2CFighterCommon::status_CatchPull_common(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::LinkModule__remove_model_constraint_impl(param_2->moduleAccessor,(bool)(bVar1 & 1))
  ;
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,lua2cpp::L2CFighterCommon::status_CatchPull_Main);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

