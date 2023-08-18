
void __thiscall
L2CFighterPzenigame::status::SpecialSLoop_exec(L2CFighterPzenigame *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
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
  
  FUN_7100008e60(&stack0xffffffffffffffc0,this);
  lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0xf9e5c2ca1);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0xf525157ae);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0xf8eb67073);
  uVar1 = lib::L2CValue::as_integer(aLStack128);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xf42bb0b7c);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
  uVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar3,uVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar3);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::operator_(aLStack160,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::operator_(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,aLStack160);
  lib::L2CValue::L2CValue(aLStack208,aLStack112);
  lib::L2CValue::L2CValue(aLStack224,aLStack128);
  lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

