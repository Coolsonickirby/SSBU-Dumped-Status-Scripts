
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DiddySpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    iVar5 = 1;
    goto LAB_71001e36dc;
  }
  bVar4 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_71001e3028;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_71001e3030;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  else {
LAB_71001e3028:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71001e3030:
    FUN_71001e2b30(this);
  }
  bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71001e321c:
    bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71001e32b8:
      bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
          goto LAB_71001e3348;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_N_FLAG_SHOOT);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_SPECIAL_N_FLOAT_CHARGE);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack176,0x176756ecf3);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        lib::L2CValue::operator_(aLStack80,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        lib::L2CValue::operator_(aLStack144);
        lib::L2CValue::operator_(aLStack96,aLStack112);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        iVar5 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack112,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack112,ENERGY_STOP_RESET_TYPE_GROUND);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        }
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_N_FLAG_SHOOT);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
        pLVar7 = aLStack80;
        goto LAB_71001e36c8;
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_71001e32b8;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
LAB_71001e3348:
      lib::L2CValue::_L2CValue(aLStack96);
      lVar2 = -0x40;
LAB_71001e36d0:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar7 = aLStack128;
LAB_71001e36c8:
      lib::L2CValue::_L2CValue(pLVar7);
      lVar2 = -0x50;
      goto LAB_71001e36d0;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_71001e321c;
  }
  iVar5 = 0;
LAB_71001e36dc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

