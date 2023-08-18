
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTrailThunder::status::Fall_end(L2CWeaponTrailThunder *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  int in_stack_ffffffffffffff54;
  undefined in_stack_ffffffffffffff5c;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0xd4022630a);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xcad87cf4f);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x143b81d89a);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar7 = lib::L2CValue::as_hash((L2CValue *)&uStack64);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar7,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x1891462356);
  HVar7 = lib::L2CValue::as_hash((L2CValue *)&uStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar7,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack112,0x188f630f2d);
  lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  HVar8 = lib::L2CValue::as_hash(aLStack128);
  uStack72 = _FIGHTER_STATUS_ATTACK_WORK_INT_FRAME;
  local_50 = FIGHTER_KINETIC_TYPE_MOTION_RUN_STOP;
  uStack64 = local_50;
  uStack56 = uStack72;
  uVar4 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar7,HVar8,(Vector3f *)&uStack64,(Vector3f *)&local_50,
                     1.0,false,0,0,-1,in_stack_ffffffffffffff54,0,(bool)in_stack_ffffffffffffff5c,
                     false);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,uVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

