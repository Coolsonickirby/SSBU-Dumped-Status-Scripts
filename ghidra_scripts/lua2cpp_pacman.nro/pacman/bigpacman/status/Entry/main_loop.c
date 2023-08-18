
void __thiscall
L2CWeaponPacmanBigpacman::status::Entry_main_loop
          (L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  ulong uVar1;
  Hash40 HVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar1 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x90529316c);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,180.0);
    HVar2 = lib::L2CValue::as_hash(aLStack80);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    uVar6 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar5,uVar4);
    uStack56 = (ulong)uVar6;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar2,(Vector3f *)&local_40,0,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

