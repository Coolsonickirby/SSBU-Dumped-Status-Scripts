
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiRot_main(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0x16fdbcbdd3);
  lib::L2CValue::L2CValue(aLStack144,0x83d144ff2);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_7100019758;
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_7100019758;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1607b380b0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x8c71b7291);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
  }
  else {
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_7100019758;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1607b380b0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x8c71b7291);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_7100019758:
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack128);
  lib::L2CValue::L2CValue(aLStack224,false);
  FUN_710001a510(aLStack176,this,aLStack192,aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack160,false);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  HVar5 = lib::L2CValue::as_hash(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::ArticleModule__change_motion_impl
            (this->moduleAccessor,iVar2,HVar5,(bool)(bVar1 & 1),-1.0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_INKLING_SQUID_STATUS_KIND_SPECIAL_HI_ROT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack272,true);
  FUN_7100018cd0(this,aLStack240,aLStack256,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack304,0xfb8379c37);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack304);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack288,fVar7);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack320,0x123dadb8c8);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack304,fVar7);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack336,0xea31b4912);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack336);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack320,fVar7);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack336,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack336,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::operator_(aLStack320);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack336,100.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack336,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack352,0xb5a643fe2);
  uVar4 = lib::L2CValue::as_integer(aLStack336);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
  iVar2 = lib::L2CValue::as_integer(aLStack368);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack352,fVar7);
  lib::L2CValue::operator_(aLStack352);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  uVar8 = lib::L2CValue::as_number(aLStack336);
  uVar9 = lib::L2CValue::as_number(aLStack384);
  uVar10 = lib::L2CValue::as_number(aLStack400);
  local_50 = CONCAT44(uVar9,uVar8);
  uStack72 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack432,&DAT_710001a940);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

