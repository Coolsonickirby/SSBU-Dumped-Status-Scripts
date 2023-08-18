
void __thiscall
L2CFighterBayonetta::status::AttackDash_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  float fVar2;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lua2cpp::L2CFighterCommon::status_end_AttackDash(this);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH_TURN);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar2);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    fVar2 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar2);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar1 = lib::L2CValue::operator_(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack64,-1.0);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

