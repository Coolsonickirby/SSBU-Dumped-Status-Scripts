
void __thiscall
L2CFighterDonkey::status::SuperLiftWalk_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x14130cddf1);
  lib::L2CValue::L2CValue(aLStack64,0x16cbd3b94e);
  lib::L2CValue::L2CValue(aLStack80,0x14036de5e8);
  lib::L2CValue::L2CValue(aLStack96,false);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common
            (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

