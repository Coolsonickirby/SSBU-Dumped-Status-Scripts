
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::AttackAirFWallJump_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  float fVar9;
  uint uVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong uStack80;
  undefined8 uStack72;
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001e9d8;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) goto LAB_710001df78;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001e9d8;
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_710001df78:
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_SET_PIERCE_EFFECT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::FighterSpecializer_Edge::set_pierce_effect_attack_air_f(pBVar7);
    lib::L2CValue::L2CValue
              ((L2CValue *)&uStack80,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_SET_PIERCE_EFFECT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001e9d8;
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001e9d8;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_MOVE_KINETIC_PARAM)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,0x12a3aeb9c5);
      lib::L2CValue::L2CValue(aLStack128,0x122146c483);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0x12a3aeb9c5);
      lib::L2CValue::L2CValue(aLStack144,0x12d5169d49);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::operator_(aLStack112);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack80,
                 _FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_MOVE_KINETIC_PARAM);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710001e9d8;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_CHANGE_JUMP_ACCEL_Y
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::operator_(aLStack112);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack80,
                 _FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_CHANGE_JUMP_ACCEL_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_JUMP_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack128,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_number(aLStack144);
      uVar10 = lib::L2CValue::as_number(aLStack160);
      uStack80 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
      uStack88 = LUA_SCRIPT_LINE_STATUS_SHIFT;
      local_60 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
      uStack72 = 0;
      app::KineticUtility::reset_enable_energy
                (iVar3,pBVar7,iVar4,(Vector2f *)&uStack80,(Vector3f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack80,_FIGHTER_EDGE_STATUS_ATTACK_AIR_F_WORK_FLAG_JUMP_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001e9d8:
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

