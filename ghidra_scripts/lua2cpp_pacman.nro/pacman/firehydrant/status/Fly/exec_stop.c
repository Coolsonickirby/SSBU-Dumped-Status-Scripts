
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanFirehydrant::status::Fly_exec_stop
          (L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  MotionNodeRotateCompose MVar4;
  MotionNodeRotateOrder MVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
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
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack112,0x19bc93065a);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack128,0x19259a57e0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lib::L2CValue::operator_(aLStack80);
  lib::L2CValue::operator_(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,_MOTION_NODE_ROTATE_COMPOSE_NONE);
  lib::L2CValue::L2CValue(aLStack208,_MOTION_NODE_ROTATE_ORDER_ZYX);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  uVar12 = lib::L2CValue::as_number(aLStack176);
  local_40 = CONCAT44(uVar11,uVar10);
  uStack56 = (ulong)uVar12;
  MVar4 = lib::L2CValue::as_integer(aLStack192);
  MVar5 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_40,MVar4,MVar5);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,true);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack96);
  uVar12 = lib::L2CValue::as_number(aLStack112);
  local_40 = CONCAT44(uVar11,uVar10);
  uStack56 = (ulong)uVar12;
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_40,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x4207dd664);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::operator_(aLStack96);
  lib::L2CValue::operator_(aLStack112);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack208,true);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  uVar12 = lib::L2CValue::as_number(aLStack176);
  local_40 = CONCAT44(uVar11,uVar10);
  uStack56 = (ulong)uVar12;
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (this->moduleAccessor,HVar8,(Vector3f *)&local_40,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

