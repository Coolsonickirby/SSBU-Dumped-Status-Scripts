
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN2Craft_end(L2CFighterPickel *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2_SUCCESS);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_SUCCESS_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

