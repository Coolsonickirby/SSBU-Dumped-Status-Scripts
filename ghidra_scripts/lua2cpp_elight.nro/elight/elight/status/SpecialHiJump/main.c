
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialHiJump_main(L2CFighterElight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CAgent *pLVar7;
  L2CValue *this_01;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  
  lib::L2CValue::L2CValue(aLStack112,0x13e5efd33f);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  fVar11 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0xa4cbc78f9);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)0x1a;
  pLVar7 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  lib::L2CAgent::math_abs(pLVar7,pLVar8);
  pLVar8 = (L2CValue *)0x1b;
  pLVar7 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
  lib::L2CAgent::math_abs(pLVar7,pLVar8);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    pLVar9 = (L2CValue *)0x1b;
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    fVar10 = (float)lib::L2CValue::as_number(pLVar8);
    fVar11 = (float)lib::L2CValue::as_number(this_01);
    fVar12 = (float)lib::L2CValue::as_number(aLStack112);
    fVar13 = (float)lib::L2CValue::as_number(aLStack160);
    fVar10 = (float)app::sv_math::vec2_angle(fVar10,fVar11,fVar12,fVar13);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack144,pLVar9);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack224,pLVar8);
    lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x20);
    lib::L2CValue::operator_(aLStack192,aLStack208);
    lib::L2CValue::L2CValue(aLStack112,-1);
    lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x165cf9ff69);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0x1508222c14);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar5 = lib::L2CValue::operator_(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,aLStack160);
      lib::L2CValue::operator_(aLStack176);
      lib::L2CValue::L2CValue(aLStack256,aLStack192);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x30,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,aLStack160);
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::L2CValue(aLStack256,aLStack176);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x30,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::operator_(aLStack160,aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar8 = (L2CValue *)(ulong)FIGHTER_KINETIC_ENERGY_ID_MOTION;
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::math_rad((L2CAgent *)aLStack160,pLVar8);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_kinetic_energy::set_angle(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_STATUS_SPECIAL_HI_FLAG_GROUND_START);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x12c0348a40);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x15ef825379);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialHiJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

