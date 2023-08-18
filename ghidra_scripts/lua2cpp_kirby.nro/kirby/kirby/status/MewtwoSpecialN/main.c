
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MewtwoSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  signed sVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710018c180(this);
  lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack96,0x1008b0a33d);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_SHADOWBALL_CHARGE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MEWTWO_SHADOWBALL_TRANSITION_TERM_ID_START_HOLD);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MEWTWO_SHADOWBALL_TRANSITION_TERM_ID_START_SHOOT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
      FUN_710018c270(aLStack96,this,aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
    lib::L2CValue::L2CValue(aLStack64,&DAT_710018c4c0);
    lib::L2CValue::operator_(this_00,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MEWTWO_SPECIAL_N_STATUS_WORK_ID_FLAG_CHARGE_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,8);
  sVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,MewtwoSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

