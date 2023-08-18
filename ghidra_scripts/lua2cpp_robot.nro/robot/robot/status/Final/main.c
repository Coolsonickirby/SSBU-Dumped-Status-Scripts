
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRobot::status::Final_main(L2CFighterRobot *this,L2CValue *return_value)

{
  bool bVar1;
  Hash40Map *this_00;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xf9b673ae9);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,1.0);
    lib::L2CValue::L2CValue(aLStack192,false);
    HVar9 = lib::L2CValue::as_hash(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack160);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xb9e61061f);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,1.0);
    lib::L2CValue::L2CValue(aLStack192,false);
    HVar9 = lib::L2CValue::as_hash(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack160);
    fVar11 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_LAMP_KIND_S);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_LAMP_EFFECT_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar2 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  this_00 = &this[1].functions;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xff9b26652);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x75a1d25a7);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xd6991270c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xd6991270c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  iVar3 = app::lua_bind::FighterManager__entry_count_impl
                    (FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_MOTION_KIND_FAILURE);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue(aLStack128,1);
  lib::L2CValue::operator_(aLStack160,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if (-1 < iVar3) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue
                (aLStack128,iVar4 + _FIGHTER_ROBOT_STATUS_FINAL_WORK_FLAG_HOMINGLASER_ACTIVE);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0x50000000);
      lib::L2CValue::L2CValue
                (aLStack176,
                 iVar4 + _FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_TARGET_OBJECT_ID);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0x50000000);
      lib::L2CValue::L2CValue
                (aLStack176,
                 iVar4 + _FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_TARGET_ARTICLE_ID);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      bVar1 = iVar4 < iVar3;
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

