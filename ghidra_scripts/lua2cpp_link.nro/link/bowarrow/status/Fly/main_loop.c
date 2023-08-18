
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLinkBowarrow::status::Fly_main_loop(L2CWeaponLinkBowarrow *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack64,_WN_LINK_BOWARROW_STATUS_KIND_STICK);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar1);
  return;
}

