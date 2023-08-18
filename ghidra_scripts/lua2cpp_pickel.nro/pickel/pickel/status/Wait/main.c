
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPickel::status::Wait_main(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_ATTACK_WAIT);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) != 0) {
    FUN_7100088b80(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
  }
  lua2cpp::L2CFighterCommon::status_Wait(this);
  return;
}

