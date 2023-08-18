
void __thiscall
L2CFighterKirby::status::PickelSpecialN1WalkBack_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_WalkBack_common(this);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack48);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::set_speed_mul_2nd(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710012daa0(this);
  FUN_710012db40(this);
  FUN_7100134da0(this);
  lib::L2CValue::L2CValue(aLStack48,PickelSpecialN1WalkBack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

