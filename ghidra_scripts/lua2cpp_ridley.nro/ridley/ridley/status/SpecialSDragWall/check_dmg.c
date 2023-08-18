
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragJump_check_dmg(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_DRAGF_DAMAGE);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  bVar1 = app::lua_bind::CatchModule__check_damage_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  return;
}

