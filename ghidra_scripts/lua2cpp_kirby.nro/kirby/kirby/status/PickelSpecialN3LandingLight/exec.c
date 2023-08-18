
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3LandingLight_exec
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_LANDING);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_LANDING_LIGHT);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_exec_main_param
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710011e710(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

