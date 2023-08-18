
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiHold_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
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
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xf560f55fa);
  lib::L2CValue::L2CValue(aLStack80,0x135d96d82e);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710001a040(this);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_HOLD_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack224,0xe3adad701);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar2 & 1U) == 0) {
    uVar4 = lib::L2CValue::operator__(aLStack192,aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001a60c;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack176);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack224,0x178e0f1beb);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    HVar6 = lib::L2CValue::as_hash(aLStack224);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar6,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_HI_JUMP);
  lib::L2CValue::L2CValue(aLStack224,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001a60c:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

