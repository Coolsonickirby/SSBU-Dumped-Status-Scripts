
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1LandingLight_init
          (L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1447a7e8cc);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_LANDING);
  lib::L2CValue::L2CValue(aLStack96,0xdc81fdc09);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N1_LANDING_LIGHT);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main_param
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

