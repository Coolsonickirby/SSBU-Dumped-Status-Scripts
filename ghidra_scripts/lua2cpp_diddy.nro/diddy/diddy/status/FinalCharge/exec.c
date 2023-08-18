
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalCharge_exec(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar5;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_CHARGE_COUNT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack112,0x1032621422);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_CHARGE_COUNT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  if ((uVar3 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    bVar1 = app::FighterSpecializer_Diddy::final_finish_attack_dir(pFVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar3 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,0x77a08c3fc);
      HVar6 = lib::L2CValue::as_hash(aLStack176);
      fVar7 = (float)app::sv_math::randf(HVar6,1.0);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x167);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
      fVar7 = (float)lib::L2CValue::as_number(aLStack160);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  if ((uVar3 & 1) == 0) goto LAB_7100009f34;
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x5a);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  lib::L2CValue::operator_(aLStack176,aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
  uVar3 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-180.0);
    uVar3 = lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack144,aLStack160);
      goto LAB_7100009e10;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack144,aLStack160);
LAB_7100009e10:
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack144,aLStack176);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack160,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  uVar3 = lib::L2CValue::as_number(aLStack144);
  lVar9 = lib::L2CValue::as_number(aLStack176);
  uVar8 = lib::L2CValue::as_number(aLStack192);
  local_50 = uVar3 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100009f34:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_CHARGE_ZOOM);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar3 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_CHARGE_ZOOM);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,true);
    FUN_710000a4e0(this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_CHARGE_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar3 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack160,0x31d39a761);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x5a);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,fVar7);
    lib::L2CValue::operator_(aLStack208,aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    HVar6 = lib::L2CValue::as_hash(aLStack160);
    uVar3 = lib::L2CValue::as_number(aLStack176);
    lVar9 = lib::L2CValue::as_number(aLStack240);
    uVar8 = lib::L2CValue::as_number(aLStack256);
    local_50 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack72 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

