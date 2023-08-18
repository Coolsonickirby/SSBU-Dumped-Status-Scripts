
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkfire::status::Pillar_init(L2CWeaponLucasPkfire *this,L2CValue *return_value)

{
  int iVar1;
  HitStatus HVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  ulong uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,*pfVar3);
  lib::L2CValue::L2CValue(aLStack144,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar3[2]);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_a0);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack208,0xc75487f5b);
  lib::L2CValue::L2CValue(aLStack224,0xf4e908bda);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  lib::L2CValue::operator_(aLStack96,aLStack192);
  uVar7 = lib::L2CValue::as_number(aLStack80);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack112);
  local_a0 = CONCAT44(uVar8,uVar7);
  uStack152 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,1);
  lib::L2CValue::L2CValue(aLStack176,HIT_STATUS_NORMAL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  HVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::HitModule__set_status_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  lib::L2CValue::L2CValue(aLStack176,_HIT_STATUS_OFF);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  HVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::HitModule__set_status_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

