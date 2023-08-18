
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialNHold_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLOAT_PARAM_MOTION_RATE);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0xbb92bf67e);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::operator_(aLStack112,aLStack208);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_FRAME_MAX)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar7);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack224,aLStack256);
  lib::L2CValue::operator_(aLStack192,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::operator_(aLStack192,aLStack112);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::operator_(aLStack208,aLStack192);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,uVar4);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar5 = lib::L2CValue::operator_(aLStack160,aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator_(aLStack128,aLStack160);
  }
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack144);
  if ((uVar5 & 1) != 0) {
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack208);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack208);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLAG_RELEASE_HOLD_BUTTON);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_N_WORK_FLAG_RELEASE_HOLD_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar1 & 1U) == 0) {
      FUN_710002c370(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_N_SHOT);
      lib::L2CValue::L2CValue(aLStack208,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack224,0x141921c83a);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_N_FLASHING);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack208,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack208,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_N_MAX_SHOT);
      lib::L2CValue::L2CValue(aLStack208,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

