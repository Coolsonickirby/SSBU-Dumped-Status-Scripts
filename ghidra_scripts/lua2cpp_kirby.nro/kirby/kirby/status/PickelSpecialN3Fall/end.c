
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3Fall_end(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Fall(this);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_7100127aa0(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
  FUN_71001201d0(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

