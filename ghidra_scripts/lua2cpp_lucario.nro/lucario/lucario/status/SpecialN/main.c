
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialN_main(L2CFighterLucario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  signed sVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100023700(this);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x1008b0a33d);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack64,fVar7);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AURABALL_CHARGE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AURABALL_CHARGE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_AURABALL_TRANSITION_TERM_ID_START_HOLD);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_AURABALL_TRANSITION_TERM_ID_START_SHOOT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      FUN_71000237f0(aLStack112,this,aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
    lib::L2CValue::L2CValue(aLStack64,&DAT_7100023a40);
    lib::L2CValue::operator_(this_00,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_SPECIAL_N_STATUS_WORK_ID_FLAG_CHARGE_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100008790(this);
  lib::L2CValue::L2CValue(aLStack64,8);
  sVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

