
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiChargedRush_exec(L2CFighterEdge *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  FUN_7100002cf0();
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_STATUS_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

