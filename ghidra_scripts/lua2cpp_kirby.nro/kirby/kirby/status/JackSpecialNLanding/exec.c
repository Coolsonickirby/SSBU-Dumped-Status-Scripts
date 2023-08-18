
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::JackSpecialNLanding_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_KIRBY_STATUS_KIND_JACK_SPECIAL_N_LANDING);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exec_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

