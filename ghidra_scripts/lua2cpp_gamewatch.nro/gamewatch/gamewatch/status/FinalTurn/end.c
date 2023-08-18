
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalTurn_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TURN_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_JUMP_SQUAT);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    }
  }
  FUN_710001dbf0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

