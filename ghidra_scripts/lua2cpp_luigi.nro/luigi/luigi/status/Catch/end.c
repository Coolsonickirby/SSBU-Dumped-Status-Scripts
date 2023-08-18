
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::Catch_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Catch(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,true);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_PULL);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_object_id_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,true);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_PULL);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar1 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    app::FighterSpecializer_Luigi::delete_plunger(pFVar6,false);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

