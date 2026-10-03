
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100020e40(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  ulong uVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack144,true);
    FUN_7100020d60(aLStack112,aLStack128,aLStack144);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::L2CValue(aLStack208,false);
    FUN_7100020d60(aLStack160,aLStack176,aLStack208);
    lib::L2CValue::L2CValue(aLStack224,true);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x90,(L2CValue)0x60,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_VARIOUS_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_SLEEP);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
      pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
      bVar1 = app::FighterSpecializer_Brave::special_lw_active_command(pFVar6);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) goto LAB_71000218d0;
    }
  }
  FUN_7100021bf0(this);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) goto LAB_71000218d0;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack192);
LAB_7100021194:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
LAB_71000212a4:
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND09_CRASH);
      uVar4 = lib::L2CValue::operator==(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack192,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
        uVar4 = lib::L2CValue::operator==(aLStack192,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x17);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
              lib::L2CValue::L2CValue(aLStack192,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,true);
              return;
            }
          }
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_DEATH_RESERVE);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CRASH_END);
          lib::L2CValue::L2CValue(aLStack192,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
          goto LAB_710002138c;
        }
      }
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_ENERGY);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((bVar2 & 1U) == 0) goto LAB_71000218d0;
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack192,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
        lib::L2CValue::L2CValue(aLStack272,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                 (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar8);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack240,0xf71f4d4f8);
        lib::L2CValue::L2CValue(aLStack272,0);
        uVar4 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar8);
        lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack320,0x24428be337);
        uVar4 = lib::L2CValue::as_integer(aLStack304);
        uVar7 = lib::L2CValue::as_integer(aLStack320);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack288,fVar8);
        lib::L2CValue::operator*(aLStack192,aLStack288);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack272,0x280dced03b);
        uVar4 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar8);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_ENERGY)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_CONTROL_ENERGY);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_71000212a4;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
      }
LAB_710002138c:
      lib::L2CValue::~L2CValue(aLStack192);
    }
    pLVar5 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack240,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator==(aLStack272,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack192);
      if ((uVar4 & 1) == 0) goto LAB_71000218d0;
      goto LAB_7100021194;
    }
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar5 = aLStack192;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_71000218d0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

