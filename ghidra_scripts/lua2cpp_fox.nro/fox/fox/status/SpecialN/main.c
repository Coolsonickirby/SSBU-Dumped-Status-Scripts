
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterFox::status::SpecialN_main(L2CFighterFox *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710001ddc0(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_WOLF);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_BLASTER_STEP_START);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,-1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_INT_STEP_PREV);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      FUN_710001e1f0(this);
    }
    else {
      FUN_710001df00();
    }
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      FUN_710001e650(aLStack112,this);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
    lib::L2CValue::L2CValue(aLStack96,&LAB_710001e7a0);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,SpecialN_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xd483c0ed2);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x915c5de42);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_BLASTER_STATUS_WORK_ID_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_ALL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack128,ENERGY_STOP_RESET_TYPE_GROUND);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,SpecialN_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

