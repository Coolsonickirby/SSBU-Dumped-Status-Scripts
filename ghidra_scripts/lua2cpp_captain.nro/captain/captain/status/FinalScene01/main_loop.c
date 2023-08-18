
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::FinalScene01_main_loop(L2CFighterCaptain *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack64,60.0);
  uVar3 = lib::L2CValue::operator__(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CAPTAIN_STATUS_KIND_FINAL_SCENE02);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar1);
  return;
}

