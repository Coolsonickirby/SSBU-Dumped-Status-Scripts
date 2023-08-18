
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDaisy::status::AttackAir_main(L2CFighterDaisy *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_STATUS_KIND_UNIQ_FLOAT_START);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_attack_air(this);
      lib::L2CValue::L2CValue(aLStack80,&DAT_710000d6a0);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
      pLVar2 = aLStack80;
      goto LAB_710000cdf0;
    }
  }
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar4);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack80,0xc3a4e2597);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xc3495ada5);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710000c9c4;
    lib::L2CValue::L2CValue(aLStack80,0xc33f869bc);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710000c9c4;
    lib::L2CValue::L2CValue(aLStack80,0xdde67d935);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710000c9c4;
    lib::L2CValue::L2CValue(aLStack80,0xd40042152);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710000c9c4;
  }
  else {
LAB_710000c9c4:
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_attack_air(this);
    lib::L2CValue::L2CValue(aLStack80,AttackAir_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
    pLVar2 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xc3a4e2597);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xc3495ada5);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_KEEP);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_710000cd94;
      }
      lib::L2CValue::L2CValue(aLStack80,0xc33f869bc);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_KEEP);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_B);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_710000cd94;
      }
      lib::L2CValue::L2CValue(aLStack80,0xdde67d935);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_KEEP);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_HI);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_710000cd94;
      }
      lib::L2CValue::L2CValue(aLStack80,0xd40042152);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_KEEP);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_LW);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_710000cd94;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0x2b94de0d96);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ACTION_CATEGORY_KEEP);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_710000cd94:
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    FUN_710000d4d0(this);
    lib::L2CValue::L2CValue(aLStack128,&DAT_710000d590);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
    pLVar2 = aLStack128;
  }
  lib::L2CValue::_L2CValue(pLVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = aLStack96;
LAB_710000cdf0:
  lib::L2CValue::_L2CValue(pLVar2);
  return;
}

