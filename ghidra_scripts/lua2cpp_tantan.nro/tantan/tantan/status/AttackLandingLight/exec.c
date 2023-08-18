
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackLandingLight_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000186b0(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LANDING);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LANDING_LIGHT);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exec_main_param
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

