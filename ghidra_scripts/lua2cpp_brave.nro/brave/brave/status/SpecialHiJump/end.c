
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiJump_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack96);
  lVar7 = lib::L2CValue::as_number(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_FALL_SPECIAL);
  uVar6 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_HOLD_FRAME);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0xc535b9ad8);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0xc245caa4e);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x1ede05890d);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x2265455e8d);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar5);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_SUCCESS_SP);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
      uVar6 = lib::L2CValue::operator_(aLStack96,aLStack112);
      if ((uVar6 & 1) == 0) {
        uVar6 = lib::L2CValue::operator_(aLStack96,aLStack128);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack192,0x1afadfa4a8);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack192,0x1e3063c8c5);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack192,0x1a8dd8943e);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack192,0x1e4764f853);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar6,uVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0x1a77d7a95d);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar3 = lib::L2CValue::as_integer(aLStack192);
        fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0x1ebd6bc530);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar3 = lib::L2CValue::as_integer(aLStack192);
        fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLOAT_MUL_FALL_X_ACCEL);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

