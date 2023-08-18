
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMarth::status::SpecialS3_main(L2CFighterMarth *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  long lVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_CONTINUE_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100017540(this);
  app::lua_bind::ControlModule__reset_trigger_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARTH_STATUS_KIND_SPECIAL_S4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_CHANGE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    FUN_7100008ea0(aLStack64,this);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100017640);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_HI);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc089beb91);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x10b0d1dc9b);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xd56393db5);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x11b6549e9c);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xdc85ac5d2);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x11283766fb);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    lVar6 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_HI);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARTH_STATUS_SPECIAL_S_FLAG_INPUT_LW);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialS3_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

