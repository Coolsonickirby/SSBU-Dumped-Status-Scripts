
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPopo::status::CliffWait_main_loop(L2CFighterPopo *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_CliffWait_Main(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0xa067cf12e);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar6 = lib::L2CValue::operator__(aLStack64,pLVar5);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710000c12c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_710000c12c;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack80,0x22580944b4);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar4,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) goto LAB_710000c12c;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack80,0x22580944b4);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar4,0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710000c12c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

