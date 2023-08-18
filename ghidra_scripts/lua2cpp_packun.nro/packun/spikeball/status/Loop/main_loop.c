
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPackunSpikeball::status::Loop_main_loop
          (L2CWeaponPackunSpikeball *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,2);
  uVar3 = lib::L2CValue::operator_(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    FUN_71000452b0(aLStack64,this,aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACKUN_SPIKEBALL_STATUS_KIND_HOP);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      goto LAB_7100047330;
    }
  }
  FUN_7100045de0(this);
LAB_7100047330:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

