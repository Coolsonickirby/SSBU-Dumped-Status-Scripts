
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialSOverTurn_exec(L2CFighterPzenigame *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack112;
  fVar3 = (float)app::lua_bind::ControlModule__get_clatter_time_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PZENIGAME_STATUS_SPECIAL_S_FLOAT_CLATTER_TIME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack96);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,2.0);
    fVar3 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PZENIGAME_STATUS_SPECIAL_S_FLOAT_CLATTER_TIME);
    fVar3 = (float)lib::L2CValue::as_number(aLStack112);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    fVar3 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

