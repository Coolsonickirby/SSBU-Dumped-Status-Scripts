
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::FinalFinish_end(L2CFighterSheik *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHEIK_STATUS_KIND_FINAL_END);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    FUN_7100019720(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

