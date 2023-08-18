
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDaisy::status::Throw_end(L2CFighterDaisy *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Throw(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,true);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_CUT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_PEACH);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DAISY_GENERATE_ARTICLE_KINOPIO);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

