
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterZelda::status::SpecialHi2_init(L2CFighterZelda *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  HitStatus HVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  ulong uVar10;
  L2CAgent *pLVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
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
  
  fVar13 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar13);
  fVar13 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar13);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  fVar13 = (float)lib::L2CValue::as_number(pLVar7);
  fVar14 = (float)lib::L2CValue::as_number(pLVar8);
  fVar13 = (float)app::sv_math::vec2_length(fVar13,fVar14);
  lib::L2CValue::L2CValue(aLStack192,fVar13);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  uVar9 = lib::L2CValue::operator_(aLStack112,aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0xaad220a27);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer(aLStack128);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack208,fVar13);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar9 = lib::L2CValue::operator_(aLStack192,aLStack208);
  if ((uVar9 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100003324:
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      goto LAB_710000333c;
    }
    lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) == 0) goto LAB_7100003324;
    bVar2 = app::lua_bind::GroundModule__is_passable_ground_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      goto LAB_710000333c;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack288,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(float)uVar17);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::L2CValue(aLStack128,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar12 = (L2CValue *)0x1fbdb2615;
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    fVar13 = (float)lib::L2CValue::as_number(pLVar7);
    fVar14 = (float)lib::L2CValue::as_number(pLVar8);
    fVar15 = (float)lib::L2CValue::as_number(this_00);
    fVar16 = (float)lib::L2CValue::as_number(this_01);
    fVar13 = (float)app::sv_math::vec2_angle(fVar13,fVar14,fVar15,fVar16);
    lib::L2CValue::L2CValue(aLStack128,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)auStack288,pLVar12);
    uVar9 = lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack224,aLStack112);
LAB_710000333c:
    pLVar7 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar7);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack112,1e-05);
  uVar9 = lib::L2CValue::operator_(aLStack112,pLVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack112,-1e-05);
    uVar9 = lib::L2CValue::operator_(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) goto LAB_7100003410;
    lib::L2CValue::L2CValue(aLStack112,-1.0);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar13);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar13);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100003410:
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0x101bd30130);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack288);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack240,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack304,0xe9835f17b);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer(aLStack304);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar13);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0.0);
  pLVar7 = (L2CValue *)(auStack352 + 0x10);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,SUB81(pLVar7,0));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack320);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar1 & 1U) == 0) {
    pLVar11 = (L2CAgent *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,aLStack128);
    lib::L2CAgent::math_atan(pLVar11,aLStack112,pLVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::operator_(aLStack240,aLStack192);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)auStack288);
    pLVar7 = aLStack112;
    lib::L2CValue::operator_(aLStack192,pLVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CAgent::math_cos((L2CAgent *)auStack352,pLVar7);
    lib::L2CValue::operator_(aLStack192,aLStack384);
    lib::L2CValue::operator_((L2CValue *)auStack368,aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator_(pLVar7,aLStack112);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
    pLVar8 = aLStack192;
    uVar9 = lib::L2CValue::operator_(aLStack208,pLVar8);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack368,90.0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack368,pLVar8);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::operator_(aLStack192,aLStack112);
      pLVar7 = aLStack112;
    }
    else {
      pLVar11 = (L2CAgent *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      lib::L2CValue::operator_(pLVar8,aLStack128);
      lib::L2CAgent::math_atan(pLVar11,(L2CValue *)auStack368,pLVar7);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar7 = (L2CValue *)auStack368;
    }
    lib::L2CValue::_L2CValue(pLVar7);
    lib::L2CValue::operator_(aLStack240,aLStack192);
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)auStack288);
    pLVar7 = aLStack112;
    lib::L2CValue::operator_(aLStack192,pLVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CAgent::math_cos((L2CAgent *)auStack352,pLVar7);
    lib::L2CValue::operator_(aLStack192,aLStack384);
    lib::L2CValue::operator_((L2CValue *)auStack368,aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    pLVar8 = aLStack112;
    lib::L2CValue::operator_(pLVar7,pLVar8);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CAgent::math_sin((L2CAgent *)auStack352,pLVar8);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)auStack368);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::L2CValue(aLStack400,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::GroundModule__set_attach_ground_impl(this->moduleAccessor,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar5);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,_ENERGY_STOP_RESET_TYPE_FREE);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,-1.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_HIT_STATUS_XLU);
  HVar6 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar6,0);
  lib::L2CValue::_L2CValue(aLStack112);
  app::lua_bind::GroundModule__clear_cliff_point_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

