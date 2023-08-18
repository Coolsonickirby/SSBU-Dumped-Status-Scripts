
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingSquid::status::SpecialHiRot_exec(L2CWeaponInklingSquid *this,L2CValue *return_value)

{
  int iVar1;
  MotionNodeRotateCompose MVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_WEAPON_INKLING_SQUID_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_ROT_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack80);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  MVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&local_40,MVar2,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

