
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialS2_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001e260();
  FUN_710001f030(this);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_S3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_CHANGE_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      FUN_710001f160(this);
    }
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_710001f410);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xa7d7e3773);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xe8d2c5de7);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
  lVar5 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_DETACH_EFFECT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  FUN_710001e7e0(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,SpecialS2_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

