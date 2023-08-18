
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::SpecialLw_main(L2CFighterFalco *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ShieldStatus SVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FALCO_REFLECTOR_KIND_REFLECTOR);
  lib::L2CValue::L2CValue(aLStack80,_SHIELD_STATUS_NORMAL);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLECTOR_GROUP_EXTEND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  SVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ReflectorModule__set_status_impl(this->moduleAccessor,iVar2,SVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100016120(this);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    FUN_71000166d0(aLStack80,this);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack64,&LAB_7100016a80);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

