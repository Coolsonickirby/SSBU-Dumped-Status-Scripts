
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001f9c0(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_710001fac4:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar4 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
LAB_710001fc3c:
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) goto LAB_710001fcfc;
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) goto LAB_710001fcfc;
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar6);
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) goto LAB_710001fc3c;
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_MOTION);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar6);
      }
      lib::L2CValue::~L2CValue(aLStack96);
LAB_710001fcfc:
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar8 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,0x11b7bf50dd);
        lib::L2CValue::L2CValue(aLStack208,0x15c1e2a4c2);
        lib::L2CValue::L2CValue(aLStack224,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
      }
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_ATTACK_END);
        iVar6 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_ATTACK_END);
          iVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar6);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack128,0x73ac73c6c);
          uVar8 = lib::L2CValue::as_integer(aLStack112);
          uVar10 = lib::L2CValue::as_integer(aLStack128);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack96,fVar12);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack240,0x74dc00cfa);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          uVar10 = lib::L2CValue::as_integer(aLStack240);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack112,fVar12);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
          lib::L2CValue::operator-(aLStack96);
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack272,fVar12);
          lib::L2CValue::operator*(aLStack256,aLStack272);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
          iVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar6);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack256,0x137feb2a31);
          uVar8 = lib::L2CValue::as_integer(aLStack240);
          uVar10 = lib::L2CValue::as_integer(aLStack256);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack128,fVar12);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack272,0x17814a5874);
          uVar8 = lib::L2CValue::as_integer(aLStack256);
          uVar10 = lib::L2CValue::as_integer(aLStack272);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack240,fVar12);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_kinetic_energy::mul_x_accel_mul(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_kinetic_energy::mul_x_accel_add(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLOAT_ATTACK_POWER);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar12);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar8 = lib::L2CValue::operator<=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        uVar8 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,uVar8);
        iVar6 = lib::L2CValue::as_integer(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            lib::L2CValue::L2CValue(aLStack128,iVar11);
            iVar7 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar7,false);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((bVar4 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack96,iVar11);
              lib::L2CValue::L2CValue(aLStack128,false);
              iVar7 = lib::L2CValue::as_integer(aLStack96);
              fVar12 = (float)lib::L2CValue::as_number(aLStack112);
              bVar3 = lib::L2CValue::as_bool(aLStack128);
              app::lua_bind::AttackModule__set_power_impl
                        (this->moduleAccessor,iVar7,fVar12,(bool)(bVar3 & 1));
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::~L2CValue(aLStack96);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::~L2CValue(aLStack160);
      return;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator==(pLVar9,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lVar2 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar8 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) goto LAB_7100020328;
      goto LAB_710001fac4;
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lVar2 = -0x60;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100020328:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

