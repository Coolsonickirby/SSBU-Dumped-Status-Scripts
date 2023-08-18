
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLw_exec(L2CFighterPackun *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *this_00;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong auStack144 [2];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_DEGREE)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    FUN_710000cbb0(aLStack112,this);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    this_00 = &local_50;
    goto LAB_71000064c4;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x157de69c60);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  FUN_710000cbb0(auStack144,this);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,(L2CValue *)auStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack144);
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      goto LAB_710000641c;
    }
  }
  else {
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    uVar4 = lib::L2CValue::operator__((L2CValue *)auStack144,(L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_((L2CValue *)auStack144,aLStack128);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_BACK_TILT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
LAB_710000641c:
      lib::L2CValue::_L2CValue(aLStack176);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack128,aLStack160);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  this_00 = auStack144;
LAB_71000064c4:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_7100007c20(this);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
  HVar6 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  lVar9 = lib::L2CValue::as_number(aLStack128);
  uVar8 = lib::L2CValue::as_number((L2CValue *)auStack144);
  local_50 = uVar4 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar8;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

