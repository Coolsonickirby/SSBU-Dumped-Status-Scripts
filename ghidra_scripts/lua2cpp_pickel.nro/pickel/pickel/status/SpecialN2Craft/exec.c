
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN2Craft_exec(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
  uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
    uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((uVar4 & 1) == 0) goto LAB_710006cbdc;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME_MAX);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::operator_((L2CValue *)&local_40,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::operator_(aLStack144);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack160);
  uVar6 = lib::L2CValue::as_number(aLStack176);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = 0;
  app::lua_bind::EffectModule__set_custom_uv_offset_impl
            (this->moduleAccessor,uVar3,(Vector2f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_710006d3b0(this);
LAB_710006cbdc:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

