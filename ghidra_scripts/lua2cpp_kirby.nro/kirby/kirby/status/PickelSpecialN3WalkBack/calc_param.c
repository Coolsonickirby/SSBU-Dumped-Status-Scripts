
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3WalkBack_calc_param
          (L2CFighterKirby *this,L2CValue *return_value)

{
  float fVar1;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar1 = (float)app::FighterSpecializer_Pickel::get_special_n3_walk_speed_max();
  lib::L2CValue::L2CValue(aLStack64,fVar1);
  lib::L2CValue::L2CValue(aLStack80,0x9fece0d5d);
  lib::L2CValue::L2CValue(aLStack96,0xb4fb275bd);
  lib::L2CValue::L2CValue(aLStack112,0x9eeaf3544);
  lib::L2CValue::L2CValue(aLStack48,0x10a4f0be1e);
  lib::L2CValue::operator_(aLStack80,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0x12c68ed173);
  lib::L2CValue::operator_(aLStack96,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0x10b4918607);
  lib::L2CValue::operator_(aLStack112,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,aLStack64);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,aLStack80);
  lib::L2CValue::L2CValue(aLStack176,aLStack96);
  lib::L2CValue::L2CValue(aLStack192,aLStack112);
  lua2cpp::L2CFighterCommon::reset_walk_speed_ratio
            (this,(L2CValue)0xd0,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,
             (L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

