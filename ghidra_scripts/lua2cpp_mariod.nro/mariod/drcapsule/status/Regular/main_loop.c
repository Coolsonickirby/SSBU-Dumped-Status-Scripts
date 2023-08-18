
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMariodDrcapsule::status::Regular_main_loop
          (L2CWeaponMariodDrcapsule *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  Hash40 HVar6;
  ulong *this_00;
  L2CValue *this_01;
  uint uVar7;
  long lVar8;
  ulong auStack240 [2];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 uStack96;
  undefined8 uStack88;
  ulong uStack80;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&uStack80,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  if ((uVar4 & 1) == 0) {
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,0xff);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&uStack80,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar4 & 1) == 0) goto LAB_71000088d8;
    lib::L2CValue::L2CValue(aLStack176,0x18b78d41a0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::operator_(aLStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,0xc61ff5239);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&uStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar6,-1);
      this_00 = &uStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,0xfa06bb067);
      pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,*pfVar5);
      lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
      lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
      HVar6 = lib::L2CValue::as_hash(aLStack224);
      uVar4 = lib::L2CValue::as_number(aLStack176);
      lVar8 = lib::L2CValue::as_number(aLStack160);
      uVar7 = lib::L2CValue::as_number(aLStack144);
      uStack80 = uVar4 & 0xffffffff | lVar8 << 0x20;
      uStack72 = (ulong)uVar7;
      uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S;
      uStack96 = FIGHTER_STATUS_KIND_SPECIAL_HI;
      uVar7 = app::lua_bind::EffectModule__req_impl
                        (this->moduleAccessor,HVar6,(Vector3f *)&uStack80,(Vector3f *)&uStack96,1.0,
                         0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack208,uVar7);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack176,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      this_00 = auStack240;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CValue::_L2CValue(aLStack176);
    this_01 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,*pfVar5);
    lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    lVar8 = lib::L2CValue::as_number(aLStack160);
    uVar7 = lib::L2CValue::as_number(aLStack144);
    uStack80 = uVar4 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar7;
    uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S;
    uStack96 = FIGHTER_STATUS_KIND_SPECIAL_HI;
    uVar7 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar6,(Vector3f *)&uStack80,(Vector3f *)&uStack96,1.0,0,
                       -1,false,0);
    lib::L2CValue::L2CValue(aLStack112,uVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack176,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack192);
    this_01 = aLStack176;
  }
  lib::L2CValue::_L2CValue(this_01);
LAB_71000088d8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

