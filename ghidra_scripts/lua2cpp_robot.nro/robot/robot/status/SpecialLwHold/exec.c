
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialLwEnd_exec(L2CFighterRobot *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_HOLD);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x106f411784);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    uVar2 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
      fVar4 = (float)lib::L2CValue::as_number(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

