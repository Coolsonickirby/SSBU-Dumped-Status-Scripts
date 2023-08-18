
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::AirLassoLanding_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  L2CValue *this_00;
  Fighter *pFVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_AirLassoLanding(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_object_id_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar3 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Luigi::delete_plunger(pFVar3,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

