
void __thiscall
L2CWeaponPikminPikmin::status::SpecialSCling_end(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_30,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_30);
  app::lua_bind::AttackModule__set_ignore_just_shield_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar2 = lib::L2CValue::as_number(aLStack64);
  uVar3 = lib::L2CValue::as_number(aLStack80);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  local_30 = CONCAT44(uVar3,uVar2);
  uStack40 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_30,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

