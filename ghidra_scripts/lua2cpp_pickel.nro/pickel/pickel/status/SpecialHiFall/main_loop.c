
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiFall_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack96 [16];
  L2CValue LStack80;
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_Fall_Main(this,&LStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&LStack80);
  FUN_7100044110(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar1 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

