
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialHiAttack_main_loop(L2CFighterLucas *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  float fVar9;
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100016e44;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_ATTACK_END);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_ATTACK_END);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x103286cb68);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_DIR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    pLVar7 = aLStack80;
    lib::L2CValue::operator_((L2CValue *)auStack272,pLVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_cos((L2CAgent *)auStack272,pLVar7);
    lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),aLStack112);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    pLVar7 = aLStack80;
    lib::L2CValue::operator_(aLStack288,pLVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::math_sin((L2CAgent *)auStack272,pLVar7);
    lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),aLStack96);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x18ae6635cd);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      lib::L2CValue::operator_(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_RIGHT);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) goto LAB_710001694c;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001694c:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_WALL_BRAKE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_WALL_BRAKE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x16d45acc45);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      lib::L2CValue::operator_(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_LANDING_ENABLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack112,0x1c9e53d0e3);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        uVar6 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::operator_(aLStack240,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100016e44;
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_FLOAT_DIR);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_LUCAS_SPECIAL_HI_ATTACK);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_LUCAS_SPECIAL_AIR_HI_ATTACK);
    lib::L2CValue::L2CValue(aLStack128,0xb7804953b);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack160,0xf188f88aa);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_HI_REFLECT);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_REFLECT_GROUND);
    lib::L2CValue::L2CValue(aLStack208,0x10aed2b9e8);
    FUN_7100017110(this,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,
                   aLStack192,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x19ea19ce46);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_SPECIAL_AIR_END_MOTION);
    lVar8 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100016e44:
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

