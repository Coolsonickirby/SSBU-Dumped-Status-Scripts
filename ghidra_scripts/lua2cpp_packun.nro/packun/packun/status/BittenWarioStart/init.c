
void __thiscall
L2CFighterPackun::status::BittenWarioStart_init(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_MOTION_SHARE_TYPE_BIG);
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessBittenWarioStart_init_status_sub
            (this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

