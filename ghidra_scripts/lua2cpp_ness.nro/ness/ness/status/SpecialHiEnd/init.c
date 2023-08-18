
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialHiEnd_init(L2CFighterNess *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
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
  
  lib::L2CValue::L2CValue(aLStack160,0xeace38357);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x12eeb17698);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  lib::L2CValue::L2CValue(aLStack192,aLStack160);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_DEC_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  lib::L2CValue::operator_((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  uVar2 = lib::L2CValue::as_number(aLStack96);
  lVar6 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar2 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar5;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  HVar3 = lib::L2CValue::as_hash(aLStack192);
  uVar5 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar3);
  lib::L2CValue::L2CValue(aLStack128,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  uVar2 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::operator_(aLStack96,aLStack112);
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

