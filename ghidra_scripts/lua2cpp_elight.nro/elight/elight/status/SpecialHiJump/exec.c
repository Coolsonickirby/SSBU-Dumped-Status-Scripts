
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialHiJump_exec(L2CFighterElight *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_INT_FRAME_FROM_START);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

