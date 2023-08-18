
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SuperSpecial_end(L2CFighterDolly *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x13b33e8d03);
  FUN_7100009650(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_INT_SCREEN_EFFECT_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack96,0x23295adaf1);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    HVar3 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar3,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

