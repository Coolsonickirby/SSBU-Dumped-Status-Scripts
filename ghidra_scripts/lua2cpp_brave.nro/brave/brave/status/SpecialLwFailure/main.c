
void __thiscall
L2CFighterBrave::status::SpecialLwFailure_main(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xf0271344c);
  lib::L2CValue::L2CValue(aLStack80,0x1309e8b998);
  lib::L2CValue::L2CValue(aLStack96,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,SpecialLwFailure_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

