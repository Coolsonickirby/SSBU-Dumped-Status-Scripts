
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN2Success_exec(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_EFFECT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar4,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar4,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_SUCCESS_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar4,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_EFFECT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    FUN_710006d3b0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

