
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialHiAttack_end(L2CFighterNess *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  long lVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_END);
  lib::L2CValue::L2CValue(aLStack176,0xd07d69a9b);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack160);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    uVar3 = lib::L2CValue::as_number(aLStack112);
    lVar8 = lib::L2CValue::as_number(aLStack128);
    uVar6 = lib::L2CValue::as_number(aLStack144);
    local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar6;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar4,(Vector3f *)&local_50,0,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar3 = lib::L2CValue::as_number(aLStack96);
    lVar8 = lib::L2CValue::as_number(aLStack112);
    uVar6 = lib::L2CValue::as_number(aLStack128);
    local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar3 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

