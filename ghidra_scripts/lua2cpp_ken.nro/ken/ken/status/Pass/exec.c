
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::Pass_exec(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_uniq_process_Pass_exec_status(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_SPEED_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_OFFSET_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack160,0xba18057d9);
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack128);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::GroundModule__set_offset_y_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_SPEED_Y);
    fVar6 = (float)lib::L2CValue::as_number(aLStack144);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_OFFSET_Y);
    fVar6 = (float)lib::L2CValue::as_number(aLStack144);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

