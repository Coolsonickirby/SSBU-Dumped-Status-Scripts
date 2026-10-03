
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001e890(L2CFighterMiifighter *this,L2CValue *return_value)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar3 & 1U) == 0) {
    bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
LAB_710001e9b0:
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_SUPLEX_FLAG_REQUEST_GRAVITY);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_SUPLEX_FLAG_REQUEST_GRAVITY);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_SUPLEX_FLAG_GRAVITY_ON)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack112,0x1909fec2c8);
        uVar7 = lib::L2CValue::as_integer(aLStack80);
        uVar8 = lib::L2CValue::as_integer(aLStack112);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack96,fVar11);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0x1d78dabb2f);
        uVar7 = lib::L2CValue::as_integer(aLStack80);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar9,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack144,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::operator-(aLStack96);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,5);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
          app::KineticUtility::clear_unable_energy(iVar5,pBVar10);
        }
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      iVar5 = _SITUATION_KIND_GROUND;
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_SUPLEX_INT_START_SITUATION);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack96,iVar6);
      lib::L2CValue::L2CValue(aLStack80,iVar5);
      uVar7 = lib::L2CValue::operator==(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      cVar2 = (char)&stack0xfffffffffffffff0;
      if ((uVar7 & 1) == 0) {
        bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar3 & 1U) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator==(pLVar9,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_SUPLEX_FLAG_GRAVITY_ON);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
            bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
              lib::L2CValue::L2CValue(aLStack96,false);
              lua2cpp::L2CFighterBase::change_status
                        (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
              goto LAB_710001eeec;
            }
          }
LAB_710001efd4:
          iVar5 = 0;
          goto LAB_710001ef04;
        }
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar9,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
        }
        else {
          bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar3 & 1U) == 0) goto LAB_710001efd4;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
        }
      }
LAB_710001eeec:
      lib::L2CValue::~L2CValue(aLStack96);
      lVar1 = -0x40;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_710001eefc;
        goto LAB_710001e9b0;
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lVar1 = -0x50;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_710001eefc:
  iVar5 = 1;
LAB_710001ef04:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

