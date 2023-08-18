
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::AirLasso_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Fighter *pFVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_AirLasso(this);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_AIR_LASSO_HANG);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_AIR_LASSO_LANDING);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID);
        iVar1 = lib::L2CValue::as_integer(aLStack112);
        iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        uVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_exist_object_id_impl(this->moduleAccessor,uVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
        pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
        app::FighterSpecializer_Luigi::delete_plunger(pFVar5,false);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

