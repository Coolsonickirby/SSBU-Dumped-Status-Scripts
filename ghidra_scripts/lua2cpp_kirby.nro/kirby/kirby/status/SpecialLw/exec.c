
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialLw_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
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
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_PREV_BLINK_ONOFF);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_BLINK_ONOFF);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if (((bVar2 & 1U) != 0) &&
     (uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96), (uVar5 & 1) == 0)) {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_BLINK_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_BLINK_TABLE_SELECT)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_BLINK_TABLE_SELECT)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack64);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_PREV_BLINK_ONOFF);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_PREV_BLINK_ONOFF);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::operator_(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_BLINK_ONOFF);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack160,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack176);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_STONE_BLINK_TABLE_SELECT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack176);
    lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_BLINK_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator_(aLStack80,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator_(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::operator_(aLStack80,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack64,4);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,4);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      FUN_710000fbe0(this,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,false);
      FUN_710000fbe0(this,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_BLINK_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

