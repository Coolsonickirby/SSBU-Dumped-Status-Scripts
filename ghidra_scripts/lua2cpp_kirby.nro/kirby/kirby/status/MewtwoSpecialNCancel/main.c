
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MewtwoSpecialNCancel_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  signed sVar2;
  long lVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1012b7fbf8);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MEWTWO_SPECIAL_N_STATUS_WORK_ID_INT_CANCEL_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x14930274b8);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_AIR_MOT);
    lVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x195160ca42);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_AIR_MOT);
    lVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100188cd0(this);
  lib::L2CValue::L2CValue(aLStack64,8);
  sVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,MewtwoSpecialNCancel_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

