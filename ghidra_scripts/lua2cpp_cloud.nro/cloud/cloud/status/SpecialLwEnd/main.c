
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialLwEnd_main(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  signed sVar2;
  ulong uVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x12aaf01d6d);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_JUMP_AERIAL);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1a79cc5dbe);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack96,0xee8a2e8a2);
  lib::L2CValue::L2CValue(aLStack112,aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  FUN_7100018920(this,aLStack64,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack144,8);
  sVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,SpecialLwEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

