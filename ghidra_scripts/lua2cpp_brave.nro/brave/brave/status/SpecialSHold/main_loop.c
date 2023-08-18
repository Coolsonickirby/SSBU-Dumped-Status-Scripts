
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialSHold_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
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
  
  lib::L2CValue::L2CValue(aLStack80,0xeb9ce1b65);
  lib::L2CValue::L2CValue(aLStack96,0x12fb9ceeaa);
  lib::L2CValue::L2CValue(aLStack112,true);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100028af0(this);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_HOLD_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack240,0xc535b9ad8);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack256,0xc245caa4e);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack272,0xe3adad701);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  if ((bVar2 & 1U) == 0) {
    uVar4 = lib::L2CValue::operator__(aLStack240,aLStack192);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002b050;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  uVar4 = lib::L2CValue::operator_(aLStack192,aLStack208);
  if ((uVar4 & 1) == 0) {
    uVar4 = lib::L2CValue::operator_(aLStack192,aLStack224);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack272,0x166126face);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      HVar6 = lib::L2CValue::as_hash(aLStack272);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar6,-1);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK3);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK2);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK1);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
  }
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710002b050:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

