
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSJumpEnd_main_loop(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *this_00;
  float fVar8;
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
  
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_7100009e90(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x12696fb619);
  lib::L2CValue::L2CValue(aLStack128,0x16e411e618);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_710001cbc0(this,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_AFTER_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_FALL);
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_710001d290(this,aLStack160,aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        FUN_710001dfa0(this);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_710001d290(this,aLStack160,aLStack176,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_710001d7e0:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
        goto LAB_710001d870;
      }
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710001d7e0;
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
LAB_710001d870:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar6 = aLStack224;
LAB_710001da64:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
    uVar5 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_AFTER_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack208,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_710001dfa0(this);
      lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack240,0x107e65a007);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar6 = aLStack80;
      goto LAB_710001da64;
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack224);
LAB_710001db48:
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_AFTER_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar5 & 1) == 0) {
LAB_710001dc14:
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_710001dd58;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_710001dd58;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_LANDING_HEAVY);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_710001dc14;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
    }
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack272,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar5 & 1) == 0) goto LAB_710001dd58;
      goto LAB_710001db48;
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar6 = aLStack224;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001dd58:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

