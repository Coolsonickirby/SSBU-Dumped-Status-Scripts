
void __thiscall
L2CWeaponGanonBeast::status::Start_init(L2CWeaponGanonBeast *this,L2CValue *return_value)

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
  undefined8 uStack64;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar3);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack128,0xc71626c4f);
  lib::L2CValue::L2CValue(aLStack144,0x8d8ad1dd1);
  uVar1 = lib::L2CValue::as_integer(aLStack128);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar3);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xc71626c4f);
  lib::L2CValue::L2CValue(aLStack144,0x8afaa2d47);
  uVar1 = lib::L2CValue::as_integer(aLStack128);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  uStack64 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::CameraModule__add_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&uStack64,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

