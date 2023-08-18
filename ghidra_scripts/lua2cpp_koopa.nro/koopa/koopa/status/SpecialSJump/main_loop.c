
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopa::status::SpecialSJump_main_loop(L2CFighterKoopa *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar2 = (bVar2 & 1U) != 0;
  if (bVar2) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_KIND_SPECIAL_S_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar2);
  return;
}

