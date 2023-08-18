
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterElight::status::SpecialSForward_main(L2CFighterElight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CAgent *this_01;
  ulong uVar10;
  L2CValue *pLVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_CHECK_CLIFF);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_NEAR_CLIFF);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      pLVar11 = aLStack192;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,SUB81(pLVar11,0));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar14 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                         (this->moduleAccessor,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,(float)uVar14);
      pLVar7 = (L2CValue *)(auStack224 + 0x10);
      lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::operator_(pLVar9,(L2CValue *)auStack224);
      lib::L2CValue::operator_(this_00,pLVar7);
      lib::L2CValue::_L2CValue(pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      fVar12 = (float)lib::L2CValue::as_number(pLVar7);
      fVar13 = (float)lib::L2CValue::as_number(pLVar9);
      fVar12 = (float)app::sv_math::vec2_length(fVar12,fVar13);
      lib::L2CValue::L2CValue(aLStack128,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,1e-05);
      uVar8 = lib::L2CValue::operator_((L2CValue *)auStack224,aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) != 0) {
        this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
        lib::L2CAgent::math_atan(this_01,pLVar7,pLVar11);
        lib::L2CAgent::math_deg((L2CAgent *)aLStack144,pLVar7);
        lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack160,0x11e7fad1ad);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        uVar10 = lib::L2CValue::as_integer(aLStack160);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar10);
        lib::L2CValue::L2CValue(aLStack144,fVar12);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        uVar8 = lib::L2CValue::operator_(aLStack144,aLStack128);
        if ((uVar8 & 1) != 0) {
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack240,fVar12);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
          lib::L2CValue::operator_(aLStack240,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
          uVar8 = lib::L2CValue::operator_((L2CValue *)auStack224,aLStack160);
          lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack240);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack240,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x10);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::L2CValue((L2CValue *)auStack224,GROUND_CORRECT_KIND_AIR);
            GVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack224,_FIGHTER_ELIGHT_STATUS_SPECIAL_S_FLAG_IS_TILT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)auStack224);
          }
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack256,0x976c3b29b);
  lib::L2CValue::L2CValue(aLStack272,0xd2b3a620b);
  lib::L2CValue::L2CValue(aLStack288,false);
  lib::L2CValue::L2CValue(aLStack320,aLStack256);
  lib::L2CValue::L2CValue(aLStack336,aLStack272);
  lib::L2CValue::L2CValue(aLStack352,aLStack288);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack384,false);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack224,FIGHTER_KINETIC_TYPE_MOTION);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xbfa5ff42f);
  uVar8 = lib::L2CValue::as_integer(aLStack144);
  uVar10 = lib::L2CValue::as_integer(aLStack160);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar10)
  ;
  lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar12);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,FIGHTER_INSTANCE_WORK_ID_FLAG_LOUPE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_INSTANCE_WORK_ID_FLAG_LOUPE_DAMAGE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_INSTANCE_WORK_ID_FLAG_CURSOR);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FRONT_FIX);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,SpecialSForward_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  return;
}

