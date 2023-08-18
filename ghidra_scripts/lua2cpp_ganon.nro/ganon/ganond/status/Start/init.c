
void __thiscall
L2CWeaponGanonGanond::status::Start_init(L2CWeaponGanonGanond *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xc71626c4f);
  lib::L2CValue::L2CValue(aLStack112,0x8d8ad1dd1);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xc71626c4f);
  lib::L2CValue::L2CValue(aLStack128,0x8afaa2d47);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::CameraModule__add_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

