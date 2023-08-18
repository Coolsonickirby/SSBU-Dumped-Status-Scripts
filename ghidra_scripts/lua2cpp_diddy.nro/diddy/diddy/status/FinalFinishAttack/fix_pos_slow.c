
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalFinishAttack_fix_pos_slow
          (L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x5a);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar3);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack176);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

