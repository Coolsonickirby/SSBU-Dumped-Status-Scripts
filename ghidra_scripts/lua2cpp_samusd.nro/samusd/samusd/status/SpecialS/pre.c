
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamusd::status::SpecialS_pre(L2CFighterSamusd *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ST_INIT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN_RUN);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x22);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH);
    lib::L2CValue::operator_(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) == 0) goto LAB_710000e6fc;
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack128,aLStack80);
  }
  else {
    uVar3 = app::lua_bind::ControlModule__get_flick_no_reset_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,uVar3 & 0xff);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0xcb0109cf4);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    uVar5 = lib::L2CValue::operator_(aLStack112,aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710000e6fc;
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack128,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000e6fc:
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S1A);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S2A);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S1G);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_S2G);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

