
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingStopCeil_main(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack96,0x1686416cf2);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_STOP_CEIL_WORK_INT_FALL_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack144,0xcad2ee25e);
  lib::L2CValue::L2CValue(aLStack160,0x21ee5e6465);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator_(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwFlyingStopCeil_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

