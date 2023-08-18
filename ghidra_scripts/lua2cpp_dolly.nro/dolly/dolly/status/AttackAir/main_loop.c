
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::AttackAir_main_loop(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *this_00;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_710001f608:
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710001f50c:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_STATUS_ATTACK_WORK_FLAG_HIT_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          FUN_71000204d0(aLStack64,this,aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) != 0) goto LAB_710001f5ec;
        }
      }
      goto LAB_710001f608;
    }
    lib::L2CValue::L2CValue(aLStack112,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710001f50c;
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    FUN_7100020310(aLStack64,this,aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710001f50c;
LAB_710001f5ec:
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    FUN_710001fc60(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack96,0x192c9d0740);
      uVar5 = lib::L2CValue::as_integer(aLStack80);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,HVar7);
        lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            goto LAB_710001fa8c;
          }
          lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_B);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            goto LAB_710001fa8c;
          }
          lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_HI);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            goto LAB_710001fa8c;
          }
          lib::L2CValue::L2CValue(aLStack64,0xd40042152);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_LW);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            goto LAB_710001fa8c;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_710001fa8c:
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lua2cpp::L2CFighterCommon::status_AttackAir_Main(this);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar3 = 0;
      goto LAB_710001fad0;
    }
  }
  iVar3 = 1;
LAB_710001fad0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

