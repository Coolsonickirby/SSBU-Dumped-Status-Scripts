
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::CatchDashPull_init(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  Hash40 HVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int in_stack_fffffffffffffea4;
  undefined in_stack_fffffffffffffeac;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,11.0);
  lib::L2CValue::L2CValue(aLStack128,-90.0);
  lib::L2CValue::L2CValue(aLStack160,0x16214ed6ba);
  lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,7.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,90.0);
  lib::L2CValue::L2CValue(aLStack256,1.0);
  lib::L2CValue::L2CValue(aLStack272,false);
  HVar4 = lib::L2CValue::as_hash(aLStack160);
  HVar5 = lib::L2CValue::as_hash(aLStack176);
  uVar9 = lib::L2CValue::as_number(aLStack192);
  lVar10 = lib::L2CValue::as_number(aLStack208);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  local_50 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack72 = (ulong)uVar6;
  uVar9 = lib::L2CValue::as_number(aLStack128);
  lVar10 = lib::L2CValue::as_number(aLStack224);
  uVar6 = lib::L2CValue::as_number(aLStack240);
  local_60 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar6;
  fVar7 = (float)lib::L2CValue::as_number(aLStack256);
  bVar1 = lib::L2CValue::as_bool(aLStack272);
  uVar6 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar4,HVar5,(Vector3f *)&local_50,(Vector3f *)&local_60,
                     fVar7,(bool)(bVar1 & 1),0,0,-1,in_stack_fffffffffffffea4,0,
                     (bool)in_stack_fffffffffffffeac,false);
  lib::L2CValue::L2CValue(aLStack144,uVar6);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLOAT_CATCH_EFFECT_LENGTH);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::operator_((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  uVar9 = lib::L2CValue::as_number(aLStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar9 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack72 = 0;
  app::lua_bind::EffectModule__set_custom_uv_offset_impl
            (this->moduleAccessor,uVar6,(Vector2f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lua2cpp::L2CFighterCommon::sub_catch_pull_uniq_process_init(this);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

