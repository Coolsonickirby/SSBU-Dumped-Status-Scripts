
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::AttackAir_main_loop(L2CFighterToonlink *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_01;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_01 = aLStack192;
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_710000f3ec;
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CLEAR);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x2e03b5bcfc);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CLEAR);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue
                (aLStack176,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_LW2_BLANK_TIME);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        fVar6 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_LW2_BLANK_TIME);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__sub_float_impl(this->moduleAccessor,fVar6,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_HIT_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack192,0xe6fb1e05c);
        uVar4 = lib::L2CValue::as_integer(aLStack176);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_LW2_BLANK_TIME);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        lib::L2CValue::operator_(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_SET_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = lib::L2CValue::operator__(aLStack96,aLStack112), (uVar4 & 1) != 0)) {
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          if ((uVar4 & 1) == 0) goto LAB_710000f3b0;
          app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack176,0x2fd16f3e74);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack80);
          this_01 = aLStack176;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack176);
        }
        lib::L2CValue::_L2CValue(this_01);
      }
    }
  }
LAB_710000f3b0:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lua2cpp::L2CFighterCommon::status_AttackAir_Main(this);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = 0;
LAB_710000f3ec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

