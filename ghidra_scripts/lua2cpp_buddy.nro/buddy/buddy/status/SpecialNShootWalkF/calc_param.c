
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootWalkF_calc_param(L2CFighterBuddy *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x144b518bb3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  fVar3 = (float)app::sv_fighter_util::get_walk_speed_mul(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack96,0x167d4bd539);
  lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED_FAST_RATIO);
  lua2cpp::L2CFighterCommon::set_speed_ratio(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

