
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterWhip::status::HoldEnd_end(L2CWeaponRichterWhip *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_PH2NDARY_CRAW_SLEEP);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::PhysicsModule__set_2nd_status_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

