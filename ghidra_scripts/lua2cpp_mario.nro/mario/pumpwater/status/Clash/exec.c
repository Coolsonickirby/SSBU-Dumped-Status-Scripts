
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioPumpwater::status::Clash_exec(L2CWeaponMarioPumpwater *this,L2CValue *return_value)

{
  GroundCorrectKind GVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_GROUND_CORRECT_KIND_NONE);
  GVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

