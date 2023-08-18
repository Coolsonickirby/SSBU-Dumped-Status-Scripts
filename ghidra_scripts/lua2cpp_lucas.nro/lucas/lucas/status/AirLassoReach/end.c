
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::AirLassoReach_end(L2CFighterLucas *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_end_AirLassoReach(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

