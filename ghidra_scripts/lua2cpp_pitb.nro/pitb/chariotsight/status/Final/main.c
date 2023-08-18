
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPitbChariotsight::status::Final_main
          (L2CWeaponPitbChariotsight *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  float fVar7;
  int in_stack_ffffffffffffff44;
  undefined in_stack_ffffffffffffff4c;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x12d424fc65);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x153ec7dd07);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack112,100.0);
  lib::L2CValue::L2CValue(aLStack128,0x1172560beb);
  lib::L2CValue::L2CValue(aLStack144,0x4ef3e3778);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  uStack72 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT;
  local_50 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S3;
  uStack64 = local_50;
  uStack56 = uStack72;
  uVar2 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar5,HVar6,(Vector3f *)&uStack64,(Vector3f *)&local_50,
                     1.0,false,0,0,-1,in_stack_ffffffffffffff44,0,(bool)in_stack_ffffffffffffff4c,
                     false);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,uVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  app::lua_bind::EffectModule__set_rate_last_impl(this->moduleAccessor,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0xedc4666a3);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  iVar1 = app::lua_bind::SoundModule__play_se_no3d_impl(this->moduleAccessor,HVar5,false,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,Final_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

