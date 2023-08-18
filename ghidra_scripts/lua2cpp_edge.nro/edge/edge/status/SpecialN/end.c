
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::SpecialN_end(L2CFighterEdge *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_N_SHOOT);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x128938c1af);
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack112,0x18f1f89a72);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__remove_screen_impl(this->moduleAccessor,HVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

