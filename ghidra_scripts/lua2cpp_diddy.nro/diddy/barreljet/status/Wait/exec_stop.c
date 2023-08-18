
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyBarreljet::status::Explosion_exec_stop
          (L2CWeaponDiddyBarreljet *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CAgent *this_01;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  Hash40MapEntry **local_a0;
  ulong uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  pLVar6 = aLStack128;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,SUB81(pLVar6,0));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(float)uVar10);
  pLVar4 = (L2CValue *)(auStack176 + 0x20);
  lib::L2CValue::L2CValue(pLVar4,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::operator_(pLVar2,(L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  fVar7 = (float)lib::L2CValue::as_number(pLVar4);
  fVar8 = (float)lib::L2CValue::as_number(this_00);
  uVar10 = app::sv_math::vec2_normalize(fVar7,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(float)uVar10);
  pLVar4 = (L2CValue *)(auStack176 + 0x20);
  lib::L2CValue::L2CValue(pLVar4,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::operator_(pLVar2,(L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CAgent::math_atan(this_01,pLVar4,pLVar6);
  lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar4);
  lib::L2CValue::L2CValue(aLStack208,0x570211ebd);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,fVar7);
  lib::L2CValue::operator_(aLStack192,aLStack240);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack208);
  uVar11 = lib::L2CValue::as_number(aLStack224);
  lVar12 = lib::L2CValue::as_number(aLStack256);
  uVar9 = lib::L2CValue::as_number(aLStack272);
  local_a0 = (Hash40MapEntry **)(uVar11 & 0xffffffff | lVar12 << 0x20);
  uStack152 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar5,(Vector3f *)(auStack176 + 0x10),0,0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  FUN_71000010f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

