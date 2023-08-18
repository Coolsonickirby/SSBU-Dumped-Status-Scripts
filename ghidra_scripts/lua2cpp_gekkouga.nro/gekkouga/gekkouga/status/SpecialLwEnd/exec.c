
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwEnd_exec(L2CFighterGekkouga *this,L2CValue *return_value)

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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,10.0);
  uVar2 = lib::L2CValue::operator_(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue
              (aLStack192,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR_ORG_SPAN);
    iVar1 = lib::L2CValue::as_integer(aLStack192);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack176,fVar4);
    lib::L2CValue::operator_(aLStack112,aLStack176);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack176,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    HVar3 = lib::L2CValue::as_hash(aLStack176);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    lVar6 = lib::L2CValue::as_number(aLStack192);
    uVar5 = lib::L2CValue::as_number(aLStack208);
    local_50 = uVar2 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar5;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar3,(Vector3f *)&local_50,0,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
    fVar4 = (float)lib::L2CValue::as_number(aLStack176);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    uVar2 = lib::L2CValue::as_number(aLStack96);
    lVar6 = lib::L2CValue::as_number(aLStack176);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    local_50 = uVar2 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,
               _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_END_GROUND_TEST_BACKUP_Y);
    fVar4 = (float)lib::L2CValue::as_number(aLStack176);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

