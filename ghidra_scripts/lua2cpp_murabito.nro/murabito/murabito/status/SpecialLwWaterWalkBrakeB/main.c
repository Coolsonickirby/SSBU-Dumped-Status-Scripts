
void __thiscall
L2CFighterMurabito::status::SpecialLwWaterWalkBrakeB_main
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::sub_ItemShootWalkBBrake_Common(this);
  lib::L2CValue::L2CValue(aLStack48,SpecialLwWaterWalkBrakeB_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

