
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::Run_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar3,false);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lua2cpp::L2CFighterCommon::status_Run_Main(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

