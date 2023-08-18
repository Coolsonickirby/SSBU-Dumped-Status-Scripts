
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialSHoldJump_main_loop(L2CFighterSonic *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SONIC_STATUS_SPECIAL_S_HOLD_JUMP_WORK_FLOAT_ADVANCE_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x18ac2eef40);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    if ((uVar4 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      if ((bVar2 & 1U) == 0) {
        bVar1 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_SMASH);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1) == 0) {
      iVar3 = 0;
      goto LAB_710001b780;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_DASH);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_HOLD);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  iVar3 = 1;
LAB_710001b780:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

