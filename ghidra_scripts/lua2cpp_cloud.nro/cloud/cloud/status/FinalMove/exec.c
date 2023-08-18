
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::FinalMove_exec(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  ulong *this_00;
  float fVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong auStack176 [2];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  fVar4 = (float)app::sv_math::vec2_length(fVar4,fVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_SPEED);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  uVar2 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_SPEED);
    iVar1 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_((L2CValue *)&local_50,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
    lib::L2CValue::operator_(aLStack96,aLStack192);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack176);
    lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack224);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack208,fVar4);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    HVar3 = lib::L2CValue::as_hash(aLStack192);
    uVar2 = lib::L2CValue::as_number(aLStack208);
    lVar7 = lib::L2CValue::as_number(aLStack240);
    uVar6 = lib::L2CValue::as_number(aLStack256);
    local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack72 = (ulong)uVar6;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar3,(Vector3f *)&local_50,0,0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    this_00 = auStack176;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack176,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack176,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_FLAG_MOVE_END);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    this_00 = &local_50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar4);
  uVar2 = lib::L2CValue::as_number(aLStack96);
  lVar7 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number((L2CValue *)auStack176);
  local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

