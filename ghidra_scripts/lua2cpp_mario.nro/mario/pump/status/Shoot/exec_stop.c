
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioPump::status::Shoot_exec_stop(L2CWeaponMarioPump *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
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
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MARIO_PUMP_STATUS_WORK_FLOAT_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar3);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x7eddb2c4b);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::operator_(aLStack80);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

