
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamus::status::AirLassoHang_end(L2CFighterSamus *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_AirLassoHang(this);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_AIR_LASSO_REWIND);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_AIR_LASSO_FAILURE);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SAMUSD);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_GENERATE_ARTICLE_GUN);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUSD_GENERATE_ARTICLE_GUN);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
      }
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

