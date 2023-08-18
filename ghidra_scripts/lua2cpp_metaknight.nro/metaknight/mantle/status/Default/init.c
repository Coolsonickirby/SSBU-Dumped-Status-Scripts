
void __thiscall
L2CWeaponMetaknightMantle::status::Default_init
          (L2CWeaponMetaknightMantle *this,L2CValue *return_value)

{
  Hash40 HVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x82aef2fed);
  lib::L2CValue::L2CValue(aLStack80,0x12fb53e30f);
  HVar1 = lib::L2CValue::as_hash(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::VisibilityModule__set_impl(this->moduleAccessor,HVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

