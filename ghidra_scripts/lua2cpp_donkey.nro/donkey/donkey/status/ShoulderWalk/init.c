
void __thiscall
L2CFighterDonkey::status::ShoulderWalk_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack64,true);
  pFVar2 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::FighterSpecializer_Donkey::apply_lift_param(pFVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x127d758abd);
  lib::L2CValue::L2CValue(aLStack80,0x1462101369);
  lib::L2CValue::L2CValue(aLStack96,0x126d14b2a4);
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

