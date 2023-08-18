
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::FinalEnd_main_loop(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_STATUS_KIND_FALL);
  lib::L2CValue::L2CValue(aLStack64,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

