
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::SpecialNEnd_main_loop(L2CFighterEflame *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001184c:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_ATK_END_CHANGED);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_ATK_END_REQUEST
                  );
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          fVar8 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack64,fVar8);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack96,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          fVar8 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack80,fVar8);
          lib::L2CValue::operator_(aLStack64,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack80,
                     _FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_ATK_END_CHANGED);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,
                     _FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_FLAG_SPEED_CHANGE_ATK_END_REQUEST);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0xa6b71fe5a);
      lib::L2CValue::L2CValue(aLStack96,0xe9b2394ce);
      lib::L2CValue::L2CValue(aLStack128,true);
      lib::L2CValue::L2CValue(aLStack160,aLStack80);
      lib::L2CValue::L2CValue(aLStack176,aLStack96);
      lib::L2CValue::L2CValue(aLStack192,aLStack128);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      if ((bVar4 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          iVar5 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack208,true);
      lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      return;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x60));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_7100011cbc;
      goto LAB_710001184c;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100011cbc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

