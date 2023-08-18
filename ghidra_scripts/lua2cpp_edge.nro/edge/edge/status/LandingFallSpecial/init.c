
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::LandingFallSpecial_init(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_CHARGED_RUSH);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x13997022d6);
    lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xc0);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

