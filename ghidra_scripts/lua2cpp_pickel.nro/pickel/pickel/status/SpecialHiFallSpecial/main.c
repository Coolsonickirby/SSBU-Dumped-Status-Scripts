
void __thiscall
L2CFighterPickel::status::SpecialHiFallSpecial_main(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack64,7.0);
  lib::L2CValue::operator_(pLVar1,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack64,pLVar1);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack144,pLVar1);
  FUN_7100043a10(this,aLStack64,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_fall_special(this);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,SpecialHiFallSpecial_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

