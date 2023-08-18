
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDuckhunt::status::FinalScene03_main_loop(L2CFighterDuckhunt *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x105f6d441d);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  uVar2 = lib::L2CValue::operator__(aLStack64,pLVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x33f3e60e5c);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    pLVar1 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DUCKHUNT_STATUS_KIND_FINAL_SCENE04);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar1 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

