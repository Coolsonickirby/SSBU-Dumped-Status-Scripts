
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackSquat1_main(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  float fVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,&DAT_710002c450);
  lib::L2CValue::L2CValue
            (aLStack112,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_07 |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  lua2cpp::L2CFighterCommon::status_AttackLw3_common_param
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0xef481d9bf);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar2 = lib::L2CValue::as_hash(aLStack128);
  fVar3 = (float)lib::L2CValue::as_number(aLStack144);
  fVar4 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar2,fVar3,fVar4,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0x2b94de0d96);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,false);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,AttackSquat1_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

