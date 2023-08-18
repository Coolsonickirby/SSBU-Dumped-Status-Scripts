
void __thiscall
L2CFighterPickel::status::SpecialN3WalkBack_init(L2CFighterPickel *this,L2CValue *return_value)

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
  lib::L2CValue::L2CValue(aLStack48,fVar1);
  FUN_710002e160(aLStack64,this);
  lib::L2CValue::L2CValue(aLStack80,0x9fece0d5d);
  lib::L2CValue::L2CValue(aLStack96,0xb4fb275bd);
  lib::L2CValue::L2CValue(aLStack112,0x9eeaf3544);
  lib::L2CValue::L2CValue(aLStack128,aLStack80);
  lib::L2CValue::L2CValue(aLStack144,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,aLStack112);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::operator_(aLStack48,aLStack64);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  return;
}

