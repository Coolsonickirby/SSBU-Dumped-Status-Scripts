
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001b7e0(L2CFighterToonlink *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_RSLASH_TRANSITION_TERM_ID_HOLD);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) goto LAB_710001b930;
      lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_710001b930;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_KIND_SPECIAL_HI_HOLD);
      lib::L2CValue::L2CValue(aLStack80,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
LAB_710001b930:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_RSLASH_TRANSITION_TERM_ID_END);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_KIND_SPECIAL_HI_END);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          goto LAB_710001be04;
        }
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_RSLASH_FLAG_RESET_SPEED_MAX_X);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::~L2CValue(aLStack80);
            pLVar5 = aLStack96;
LAB_710001be40:
            lib::L2CValue::~L2CValue(pLVar5);
          }
          else {
            iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_LINK_SPECIAL_AIR_HI);
            uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack112,0x1ab4e2ed6a);
              uVar4 = lib::L2CValue::as_integer(aLStack96);
              uVar6 = lib::L2CValue::as_integer(aLStack112);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              app::sv_kinetic_energy::set_accel_x_mul(this->luaStateAgent);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack96,0x14c3c48011);
              uVar4 = lib::L2CValue::as_integer(aLStack80);
              uVar6 = lib::L2CValue::as_integer(aLStack96);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack64,fVar7);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack96,0x1220fc2660);
              lib::L2CValue::L2CValue(aLStack112,0);
              uVar4 = lib::L2CValue::as_integer(aLStack96);
              uVar6 = lib::L2CValue::as_integer(aLStack112);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack80,fVar7);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack128,0x1477af54c1);
              uVar4 = lib::L2CValue::as_integer(aLStack112);
              uVar6 = lib::L2CValue::as_integer(aLStack128);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar4,uVar6);
              lib::L2CValue::L2CValue(aLStack96,fVar7);
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              lib::L2CValue::operator/(aLStack96,aLStack80);
              lib::L2CValue::operator/(aLStack144,aLStack64);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::~L2CValue(aLStack144);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_RSLASH_FLAG_RESET_SPEED_MAX_X)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack80);
              pLVar5 = aLStack64;
              goto LAB_710001be40;
            }
          }
          iVar3 = 0;
          goto LAB_710001be1c;
        }
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
    }
LAB_710001be04:
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_710001be1c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

