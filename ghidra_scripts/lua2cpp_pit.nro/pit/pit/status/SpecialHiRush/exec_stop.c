
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPit::status::SpecialHiRushEnd_exec_stop(L2CFighterPit *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  Hash40MapEntry **local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  pLVar3 = (L2CValue *)0x31d39a761;
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,90.0);
  lib::L2CValue::operator_((L2CValue *)&local_40,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack144);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  local_40 = (Hash40MapEntry **)CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

