
void __thiscall
L2CWeaponRosettaRing::status::Constraint_main_loop
          (L2CWeaponRosettaRing *this,L2CValue *return_value)

{
  Hash40 HVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  HVar1 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xd40042152);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,15.0);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,10.0);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x48fdcf576);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar1 = lib::L2CValue::as_hash(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack80);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar4,uVar3);
  uStack56 = (ulong)uVar5;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar1,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

