
void __thiscall
L2CFighterNana::status::SpecialHiCliffPullPartner_exit(L2CFighterNana *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lua2cpp::L2CFighterCommon::sub_is_leave_cliff(this,(L2CValue)0xb0);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    app::lua_bind::GroundModule__leave_cliff_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

