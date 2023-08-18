
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialSCharge_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710001a900:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710001a900;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xeb9ce1b65);
    lib::L2CValue::L2CValue(aLStack112,0x1277377322);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack176,aLStack80);
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    lib::L2CValue::L2CValue(aLStack208,aLStack144);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,false);
    FUN_7100013d60(this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_GUARD._4_4_);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = aLStack144;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator_(aLStack80,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) goto LAB_710001a7c8;
    FUN_710001aad0(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_S_SHOOT);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710001a7c8:
  lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack272,0x8f90fa2a8);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_EDGE_STATUS_SPECIAL_S_INT_HOLD_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar4 & 1) != 0) {
    FUN_710001aad0(this);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_S_SHOOT);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

