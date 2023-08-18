
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalScene01_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW_START)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,8);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::SlowModule__set_whole_impl(this->moduleAccessor,uVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW_START);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW_END);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      app::lua_bind::SlowModule__clear_whole_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_WHOLE_SLOW_END)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    iVar4 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

