
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::CliffCatchMove_init(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_AIR_LASSO_HANG);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_cliff_catch_move_uniq_process_init(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xc5e484a0a);
    lib::L2CValue::L2CValue(aLStack80,0x35dbfe258);
    lua2cpp::L2CFighterCommon::sub_cliff_catch_move_uniq_process_init_common
              (this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

