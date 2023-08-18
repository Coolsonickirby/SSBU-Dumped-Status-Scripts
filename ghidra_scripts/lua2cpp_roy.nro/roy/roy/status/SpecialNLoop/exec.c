
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialNLoop_exec(L2CFighterRoy *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  FUN_7100018150(aLStack64,this);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::operator_(aLStack160,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::operator_(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x1b38ac8882);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x1b4fabb814);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x1a535e36ac);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator_(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar3 = lib::L2CValue::operator_(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar3 = lib::L2CValue::operator_(aLStack112,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator_(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      uVar3 = lib::L2CValue::operator_(aLStack112,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,1);
        lib::L2CValue::operator_(aLStack144,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        uVar3 = lib::L2CValue::operator__(aLStack112,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar3 & 1) == 0) goto LAB_7100016c68;
        lib::L2CValue::L2CValue(aLStack64,3);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,2);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100016c68:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

