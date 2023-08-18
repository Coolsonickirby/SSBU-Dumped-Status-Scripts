
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialHiCling_end(L2CFighterCaptain *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CAPTAIN_STATUS_KIND_SPECIAL_HI_THROW);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_CUT);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      app::lua_bind::CatchModule__cling_cut_impl(this->moduleAccessor,false);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

