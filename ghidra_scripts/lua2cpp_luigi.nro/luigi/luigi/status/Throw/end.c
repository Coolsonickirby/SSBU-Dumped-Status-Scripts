
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::Throw_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Throw(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,true);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_CUT);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    uVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_object_id_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

