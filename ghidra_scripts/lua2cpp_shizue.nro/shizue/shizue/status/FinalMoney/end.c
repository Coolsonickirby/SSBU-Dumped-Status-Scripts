
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::FinalMoney_end(L2CFighterShizue *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_MURABITO);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SHIZUE);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_7100019168;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_GENERATE_ARTICLE_MONEYBAG);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar1,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_GENERATE_ARTICLE_MONEYBAG);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar1,0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100019168:
  FUN_710001a000(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

