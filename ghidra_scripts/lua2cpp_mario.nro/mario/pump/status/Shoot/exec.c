
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioPump::status::Shoot_exec(L2CWeaponMarioPump *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *this_00;
  Hash40 HVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  fVar5 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack208,0xa2a1583da);
  lib::L2CValue::L2CValue(aLStack224,0x500814509);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0xa2a1583da);
    lib::L2CValue::L2CValue(aLStack224,0xa00f75be9);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_(aLStack144);
    lib::L2CValue::operator_(aLStack240,aLStack160);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(aLStack224,aLStack256);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
    this_00 = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0xa2a1583da);
    lib::L2CValue::L2CValue(aLStack224,0x8828c7f69);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack208);
    this_00 = aLStack224;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_MARIO_PUMP_STATUS_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0xa2a1583da);
  lib::L2CValue::L2CValue(aLStack224,0xb67e745c5);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::operator_(aLStack176,aLStack96);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar2 = lib::L2CValue::operator_(aLStack192,aLStack128);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::operator_(aLStack192);
    uVar2 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack128,aLStack192);
  }
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_MARIO_PUMP_STATUS_WORK_FLOAT_ANGLE);
  fVar5 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0x7eddb2c4b);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::operator_(aLStack176);
  HVar4 = lib::L2CValue::as_hash(aLStack208);
  uVar2 = lib::L2CValue::as_number(aLStack224);
  lVar7 = lib::L2CValue::as_number(aLStack240);
  uVar6 = lib::L2CValue::as_number(aLStack256);
  local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar4,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

