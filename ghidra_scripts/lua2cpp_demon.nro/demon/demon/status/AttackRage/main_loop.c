
void __thiscall
L2CFighterDemon::status::AttackRage_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x114355a698);
  lib::L2CValue::L2CValue(aLStack96,0x156e73fb55);
  FUN_71000293d0(aLStack64,this,aLStack80,aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    FUN_7100028850(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

