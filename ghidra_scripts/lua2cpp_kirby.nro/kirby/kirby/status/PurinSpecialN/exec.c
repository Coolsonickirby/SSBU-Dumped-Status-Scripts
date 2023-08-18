
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialN_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,iVar1);
  lib::L2CValue::L2CValue(aLStack208,aLStack192);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack224,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_START_TURN_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar3 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) goto LAB_7100096a28;
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar5 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0xcee0a3848);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator_(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    uVar3 = lib::L2CValue::operator_(aLStack144,aLStack128);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator_(aLStack144);
      uVar3 = lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        goto LAB_7100096938;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator_(aLStack112,aLStack80);
LAB_7100096938:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_START_TURN);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_START_TURN_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100096a28:
  lib::L2CValue::_L2CValue(aLStack96);
  uVar3 = lib::L2CValue::operator__(aLStack208,aLStack224);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator__(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      FUN_71001bfcd0(this);
    }
    else {
      FUN_71001bf960(this);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

