
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNess::status::AttackLw4_init(L2CFighterNess *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue LStack48;
  
  lua2cpp::L2CFighterCommon::sub_attack_xx4_uniq_process_init(this,&LStack48);
  lib::L2CValue::_L2CValue((L2CValue *)&LStack48);
  lib::L2CValue::L2CValue(aLStack80,0x3248e946a7);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_LINK_NO_YOYO);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

