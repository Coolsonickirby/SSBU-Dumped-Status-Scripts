
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwEnd_main(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong *this_00;
  float fVar4;
  float fVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong auStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x12aaf01d6d);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar4);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)auStack128);
  uVar7 = lib::L2CValue::as_number(aLStack96);
  lVar8 = lib::L2CValue::as_number(aLStack144);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  local_50 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xb4);
  uVar7 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,10.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack128);
    this_00 = auStack128;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,10.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    this_00 = &local_50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR_ORG_SPAN)
  ;
  fVar4 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SpecialLwEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

