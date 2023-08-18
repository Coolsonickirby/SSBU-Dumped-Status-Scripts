
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::AttackAir_main_loop(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_7100020720:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_ATTACK_FLAG_HIT_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          FUN_710001f280(aLStack80,this,aLStack112);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) goto LAB_7100020910;
        }
      }
      goto LAB_7100020814;
    }
    lib::L2CValue::L2CValue(aLStack128,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100020720;
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    FUN_710001f0c0(aLStack80,this,aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100020720;
LAB_7100020910:
    iVar3 = 1;
    goto LAB_7100020d6c;
  }
LAB_7100020814:
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0x192c9d0740);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      FUN_710001fb70(aLStack160,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) goto LAB_7100020910;
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x192c9d0740);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack80,fVar9);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar8);
    lib::L2CValue::L2CValue(aLStack80,0xc3a4e2597);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xc3495ada5);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_7100020d28;
      }
      lib::L2CValue::L2CValue(aLStack80,0xc33f869bc);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_B);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_7100020d28;
      }
      lib::L2CValue::L2CValue(aLStack80,0xdde67d935);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_HI);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_7100020d28;
      }
      lib::L2CValue::L2CValue(aLStack80,0xd40042152);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_LW);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        goto LAB_7100020d28;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_7100020d28:
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lua2cpp::L2CFighterCommon::status_AttackAir_Main(this);
  lib::L2CValue::_L2CValue(aLStack128);
  iVar3 = 0;
LAB_7100020d6c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

