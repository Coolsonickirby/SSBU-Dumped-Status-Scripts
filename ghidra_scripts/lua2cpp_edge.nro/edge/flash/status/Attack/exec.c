
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlash::status::Attack_exec(L2CWeaponEdgeFlash *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 uStack64;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLASH_INSTANCE_WORK_ID_FLAG_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xb17c1f83e);
    lib::L2CValue::L2CValue(aLStack112,0x13336d0c78);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar8);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lVar1 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xb17c1f83e);
    lib::L2CValue::L2CValue(aLStack128,0x10a8b79678);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::L2CValue(aLStack160,0xb17c1f83e);
    lib::L2CValue::L2CValue(aLStack176,0x1094baa921);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_EDGE_FLASH_INSTANCE_WORK_ID_FLOAT_ATTACK_RATIO);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lua2cpp::L2CFighterBase::lerp
              (this,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50),(L2CValue)0x70,(L2CValue)0x40
              );
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_EDGE_FLASH_INSTANCE_WORK_ID_EFFECT_ID);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  if ((bVar3 & 1U) != 0) {
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar9 = lib::L2CValue::as_number(aLStack80);
    uVar10 = lib::L2CValue::as_number(aLStack80);
    uVar11 = lib::L2CValue::as_number(aLStack80);
    uStack64 = CONCAT44(uVar10,uVar9);
    uStack56 = (ulong)uVar11;
    app::lua_bind::EffectModule__set_scale_impl(this->moduleAccessor,uVar5,(Vector3f *)&uStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

