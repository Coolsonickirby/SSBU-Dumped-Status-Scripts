
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialLwHold_main_loop(L2CFighterNess *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_NESS_STATUS_SPECIAL_LW_FLAG_BUTTON_RELEASE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = 1;
      goto LAB_7100011f2c;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_WAIT_MTRANS_KIND);
    FUN_7100010240(aLStack80,this,aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) != 0) goto LAB_7100011e58;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack64);
LAB_7100011e58:
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_WAIT_MTRANS_KIND);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_NESS_AIR_STOP_X_NORMAL_MAX_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack144,0xf9b9c1202);
    lib::L2CValue::L2CValue(aLStack160,0x1390059fd6);
    lib::L2CValue::L2CValue(aLStack176,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    FUN_7100011890(this,aLStack64,aLStack80,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 0;
LAB_7100011f2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

