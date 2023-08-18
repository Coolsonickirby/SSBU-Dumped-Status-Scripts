
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerFlamepillar::status::Pillar_init
          (L2CWeaponMiigunnerFlamepillar *this,L2CValue *return_value)

{
  int iVar1;
  HitStatus HVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,0x1145588a59);
  lib::L2CValue::L2CValue(aLStack128,0xf4e908bda);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  uVar7 = lib::L2CValue::as_number(aLStack96);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  local_40 = CONCAT44(uVar7,uVar6);
  uStack56 = (ulong)uVar8;
  app::lua_bind::PostureModule__add_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,1);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_status_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  lib::L2CValue::L2CValue(aLStack80,HIT_STATUS_OFF);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_status_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

