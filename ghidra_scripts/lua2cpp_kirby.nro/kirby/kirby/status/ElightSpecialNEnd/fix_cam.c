
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ElightSpecialNEnd_fix_cam(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_EFFECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xc28b70a0b);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator_(aLStack80,aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_number(aLStack144);
    uVar9 = lib::L2CValue::as_number(aLStack128);
    uVar10 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar9,uVar8);
    uStack56 = (ulong)uVar10;
    app::lua_bind::EffectModule__set_scale_impl(this->moduleAccessor,uVar4,(Vector3f *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

