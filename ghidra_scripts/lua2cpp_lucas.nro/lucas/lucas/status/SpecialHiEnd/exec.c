
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialHiEnd_exec(L2CFighterLucas *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_ANGLE);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_DEC_ANGLE);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) != 0) goto LAB_7100004274;
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  uVar2 = lib::L2CValue::operator_((L2CValue *)&local_40,aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
LAB_71000041cc:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar2 = lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar2 = lib::L2CValue::operator_((L2CValue *)&local_40,aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      if ((uVar2 & 1) != 0) goto LAB_710000421c;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    uVar2 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) == 0) goto LAB_71000041cc;
LAB_710000421c:
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::operator_(aLStack80,aLStack96);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100004274:
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  uVar2 = lib::L2CValue::as_number(aLStack80);
  lVar6 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  local_40 = uVar2 & 0xffffffff | lVar6 << 0x20;
  uStack56 = (ulong)uVar5;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

