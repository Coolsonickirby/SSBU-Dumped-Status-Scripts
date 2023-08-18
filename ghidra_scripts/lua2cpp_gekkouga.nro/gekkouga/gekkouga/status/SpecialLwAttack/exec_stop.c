
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwAttack_exec_stop
          (L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  lVar6 = lib::L2CValue::as_number(aLStack128);
  uVar4 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

