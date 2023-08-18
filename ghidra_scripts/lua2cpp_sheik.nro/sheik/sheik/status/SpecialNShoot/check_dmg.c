
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialNShoot_check_dmg(L2CFighterSheik *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  int iVar3;
  L2CValue *in_x1;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack144,in_x1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_INTERRUPT);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if (-1 < iVar1) {
    iVar3 = -1;
    do {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_GENERATE_ARTICLE_NEEDLE);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
      lib::L2CValue::_L2CValue(aLStack96);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

