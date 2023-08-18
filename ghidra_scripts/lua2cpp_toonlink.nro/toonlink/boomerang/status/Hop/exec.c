
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponToonlinkBoomerang::status::Hop_exec
          (L2CWeaponToonlinkBoomerang *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  float *pfVar3;
  Hash40 HVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack208 [16];
  ulong local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  if ((uVar2 & 1) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar2 & 1) == 0) goto LAB_7100021788;
  }
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar3);
  lib::L2CValue::L2CValue(aLStack176,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar3[2]);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack208,0xfa06bb067);
  HVar4 = lib::L2CValue::as_hash(aLStack208);
  uVar2 = lib::L2CValue::as_number(aLStack112);
  lVar6 = lib::L2CValue::as_number(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  local_c0 = uVar2 & 0xffffffff | lVar6 << 0x20;
  uStack184 = (ulong)uVar5;
  uStack72 = _FIGHTER_INSTANCE_WORK_ID_FLAG_INFINITY_SMASH_HOLD;
  local_50 = GROUND_CLIFF_CHECK_KIND_ON_DROP;
  uVar5 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar4,(Vector3f *)&local_c0,(Vector3f *)&local_50,1.0,0,-1
                     ,false,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,uVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100021788:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

