
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWolf::status::SpecialHiBound_exec_stop(L2CFighterWolf *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  Hash40MapEntry **local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_FOX_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_FOX_STATUS_KIND_SPECIAL_HI_RUSH_END);
    uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) == 0) goto LAB_7100008a20;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLOAT_DIR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = (L2CValue *)0x31d39a761;
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack128);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  local_50 = (Hash40MapEntry **)CONCAT44(uVar7,uVar6);
  uStack72 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar4,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100008a20:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

