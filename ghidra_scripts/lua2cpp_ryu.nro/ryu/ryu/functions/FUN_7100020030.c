
void FUN_7100020030(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  L2CValue *pLVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,param_3);
  lua2cpp::L2CFighterCommon::get_mini_jump_attack_data_cancel_function(param_2,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar1 & 1U) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 1),0x10f40d7b92);
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar2,param_3);
    lib::L2CValue::L2CValue(param_1,pLVar2);
  }
  else {
    lib::L2CValue::L2CValue(param_1,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

