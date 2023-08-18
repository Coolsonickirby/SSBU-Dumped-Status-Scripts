
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SpecialFEnd_main(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xd10bd2ee6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x11f0d08dcf);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,&DAT_710001ad80);
  lib::L2CValue::L2CValue(aLStack128,&DAT_710001aee0);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_710001b620(this,aLStack64,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,SpecialFEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

