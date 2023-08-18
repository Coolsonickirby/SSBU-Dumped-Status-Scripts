
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialNLanding_pre(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_WORK_KEEP_FLAG_SPECIAL_N_LANDING_FLAG);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lua2cpp::L2CFighterCommon::status_pre_landing_fall_special_common
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

