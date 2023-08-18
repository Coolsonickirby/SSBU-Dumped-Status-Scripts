
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialCustomize_main(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_INSTANCE_WORK_ID_INT_SPECIAL_KIND_CUSTOMIZE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack48,iVar1);
  lib::L2CValue::L2CValue(aLStack80,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

