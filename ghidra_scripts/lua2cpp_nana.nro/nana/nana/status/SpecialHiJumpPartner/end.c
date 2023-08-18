
void __thiscall
L2CFighterNana::status::SpecialHiJumpPartner_end(L2CFighterNana *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
  uVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

