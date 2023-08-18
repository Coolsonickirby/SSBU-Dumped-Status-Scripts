
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiJump_main(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
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
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) != 0) {
    app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,0x17a8fff32f);
  lib::L2CValue::L2CValue(aLStack144,0x99d43405a);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x1199bf7bcd);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x1471a251a7);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1752f0ce4c);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  fVar8 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack208,false);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::ArticleModule__change_motion_impl
            (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_INKLING_SQUID_STATUS_KIND_SPECIAL_HI_JUMP);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
  lib::L2CValue::L2CValue(aLStack240,true);
  FUN_7100018cd0(this,aLStack208,aLStack224,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack256,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack272,0xb5a643fe2);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack112);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack256);
  lVar10 = lib::L2CValue::as_number(aLStack272);
  uVar9 = lib::L2CValue::as_number(aLStack288);
  local_60 = uVar4 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialHiJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

