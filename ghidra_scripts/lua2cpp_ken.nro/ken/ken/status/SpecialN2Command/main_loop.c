
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::SpecialN2Command_main_loop(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xf0);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_710001c27c;
    }
    iVar4 = 1;
    goto LAB_710001ca90;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001c27c:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_710001c2c4;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710001c974;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) goto LAB_710001c2c4;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710001c2c4:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,lVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack176,0x1220fc2660);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar9 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack160,fVar11);
        lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack240,0x137bfdce41);
        uVar5 = lib::L2CValue::as_integer(aLStack224);
        uVar9 = lib::L2CValue::as_integer(aLStack240);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack208,fVar11);
        lib::L2CValue::operator_(aLStack160,aLStack208);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        goto LAB_710001c96c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack128,lVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_MOTION_FIRST);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_TYPE_MOTION);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
LAB_710001c96c:
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
LAB_710001c974:
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_710001ca88;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_710001ca88:
  iVar4 = 0;
LAB_710001ca90:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

