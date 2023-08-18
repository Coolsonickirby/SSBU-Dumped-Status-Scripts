
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialNCancel_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  signed sVar3;
  long lVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0x1012b7fbf8);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_GROUND);
  lVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x14930274b8);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_AIR);
  lVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_GROUND);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_GROUND);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,8);
  sVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,RefletSpecialNCancel_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

