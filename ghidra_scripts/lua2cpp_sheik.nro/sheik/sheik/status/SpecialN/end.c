
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSheik::status::SpecialN_end(L2CFighterSheik *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_N_LOOP);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_N_SHOOT);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

