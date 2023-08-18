
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialNLanding_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_status_landing_fall_special_main_cmn(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_SPECIAL_RAW);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar1 & 1U) == 0) goto LAB_7100020e6c;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
        lib::L2CValue::L2CValue(aLStack80,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
      }
LAB_7100020e6c:
      iVar3 = 0;
      goto LAB_7100020e74;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_7100020e74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

