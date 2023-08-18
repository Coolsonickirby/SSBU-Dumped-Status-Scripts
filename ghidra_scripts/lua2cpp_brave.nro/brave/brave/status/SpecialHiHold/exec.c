
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiHold_exec(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_HOLD_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0xc535b9ad8);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_HOLD_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack96,0x159a18a335);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar4,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

