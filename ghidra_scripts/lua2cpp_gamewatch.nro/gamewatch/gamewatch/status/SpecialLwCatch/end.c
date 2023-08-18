
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwReflect_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_ENABLE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100029ec0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

