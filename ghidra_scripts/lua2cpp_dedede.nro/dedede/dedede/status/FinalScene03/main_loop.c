
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::FinalScene03_main_loop(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue *this_00;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack80;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x32946b84ee);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEDEDE_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

