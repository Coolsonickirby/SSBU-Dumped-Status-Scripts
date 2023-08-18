
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::SpecialHiBound_exec_stop(L2CFighterFalco *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  Hash40MapEntry **local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_FALCO_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_DIR);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar2 = (L2CValue *)0x31d39a761;
    lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,360.0);
    lib::L2CValue::operator_((L2CValue *)&local_40,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    uVar6 = lib::L2CValue::as_number(aLStack112);
    uVar7 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack160);
    local_40 = (Hash40MapEntry **)CONCAT44(uVar7,uVar6);
    uStack56 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar4,(Vector3f *)&local_40,0,0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

