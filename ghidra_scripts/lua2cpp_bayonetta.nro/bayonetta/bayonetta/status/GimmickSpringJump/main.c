
void __thiscall
L2CFighterBayonetta::status::GimmickSpringJump_main
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue aLStack48 [16];
  
  FUN_710000d7f0();
  FUN_710000d920(this);
  lua2cpp::L2CFighterCommon::status_GimmickSpringJump(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

