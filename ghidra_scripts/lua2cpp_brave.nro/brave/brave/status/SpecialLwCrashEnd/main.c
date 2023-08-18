
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwCrashEnd_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  float fVar3;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_HIT_STATUS_OFF);
  HVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,SpecialLwCrashEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

