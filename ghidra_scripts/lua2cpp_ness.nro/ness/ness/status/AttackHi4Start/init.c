
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::AttackLw4Start_init(L2CFighterNess *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack112 [16];
  L2CValue LStack96;
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_xx4_uniq_process_init(this,&LStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&LStack96);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_START._4_4_);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_LW4_START);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_71000046dc;
  }
  lib::L2CValue::L2CValue(aLStack112,0x3182c12213);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000046dc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

