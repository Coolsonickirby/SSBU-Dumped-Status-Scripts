
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterGanon::status::Final_exec(L2CFighterGanon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this_00;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_FINAL_AURA);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack80);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_FINAL_AURA_CHECKED);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100005ef8;
    lib::L2CValue::L2CValue(aLStack64,_EFFECT_SUB_ATTRIBUTE_EMIT);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__remove_all_impl(this->moduleAccessor,uVar4,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_BEAST_FINAL_AURA_CHECKED);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100005ef8:
  FUN_7100006990(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

