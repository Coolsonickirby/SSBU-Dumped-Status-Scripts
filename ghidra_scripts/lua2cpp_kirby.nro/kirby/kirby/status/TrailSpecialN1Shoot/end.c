
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::TrailSpecialN1Shoot_end(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  Fighter *pFVar3;
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N1_END);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar3 = (Fighter *)lib::L2CValue::as_pointer(pLVar1);
    app::FighterSpecializer_Trail::change_magic(pFVar3);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

