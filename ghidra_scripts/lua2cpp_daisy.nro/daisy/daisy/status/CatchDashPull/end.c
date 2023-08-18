
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDaisy::status::CatchDashPull_end(L2CFighterDaisy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchDashPull(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,true);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_WAIT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_THROW);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100007be8;
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100007be8:
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
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

