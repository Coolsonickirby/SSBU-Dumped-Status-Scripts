
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLuigiFireball::status::Start_main_loop(L2CWeaponLuigiFireball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  float *pfVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int in_stack_fffffffffffffe94;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  ulong local_80;
  ulong uStack120;
  ulong uStack112;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  pfVar6 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar6);
  lib::L2CValue::L2CValue(aLStack240,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar6[2]);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_100);
  lib::L2CValue::operator_(pLVar4,aLStack240);
  lib::L2CValue::operator_(pLVar5,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,30.0);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,(L2CValue *)&uStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar10 = lib::L2CValue::as_number(pLVar3);
  lVar11 = lib::L2CValue::as_number(pLVar4);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  local_100 = uVar10 & 0xffffffff | lVar11 << 0x20;
  uStack248 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_100,0);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,0xff);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0x18b78d41a0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_100);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack288,0xe081c1812);
    lib::L2CValue::L2CValue(aLStack304,0x31ed91fca);
    HVar7 = lib::L2CValue::as_hash(aLStack288);
    HVar8 = lib::L2CValue::as_hash(aLStack304);
    uStack248 = _FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP;
    local_100 = FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK;
    local_90 = local_100;
    uStack136 = uStack248;
    local_80 = local_100;
    uStack120 = uStack248;
    uStack112 = local_100;
    uStack104 = uStack248;
    uVar9 = app::lua_bind::EffectModule__req_on_joint_impl
                      (this->moduleAccessor,HVar7,HVar8,(Vector3f *)&local_100,
                       (Vector3f *)&uStack112,1.0,(Vector3f *)&local_80,(Vector3f *)&local_90,false,
                       0,in_stack_fffffffffffffe94,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,uVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(aLStack272);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

