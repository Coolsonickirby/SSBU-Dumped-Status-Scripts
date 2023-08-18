
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGanonBeast::status::Attack_exec(L2CWeaponGanonBeast *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack272 [16];
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
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack192,0xc71626c4f);
  lib::L2CValue::L2CValue(aLStack208,0x50f26fef6);
  uVar2 = lib::L2CValue::as_integer(aLStack192);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLOAT_VELOCITY_DX);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLOAT_VELOCITY_DY);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack224,aLStack80);
  lib::L2CValue::operator_(aLStack176,aLStack208);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack272,aLStack128);
  lib::L2CValue::operator_(aLStack160,aLStack256);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  uVar6 = lib::L2CValue::as_number(aLStack240);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

