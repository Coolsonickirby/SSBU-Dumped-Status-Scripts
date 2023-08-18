
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialLw_main_loop(L2CFighterRobot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::ControlModule__clear_command_impl(*ppBVar9,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_MISS);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack96,fVar11);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROBOT_STATUS_GYRO_WORK_FLOAT_CHARGY_MAX_VALUE);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack144,fVar11);
        uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_HOLD);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
          lib::L2CValue::L2CValue(aLStack128,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      goto LAB_7100016100;
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  this_00 = &this->globalTable;
  if ((bVar2 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100015bd0;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100015bd0;
    }
  }
  else {
LAB_7100015bd0:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
        goto LAB_7100015ef0;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar7);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar8,fVar11,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
LAB_71000160e4:
      pLVar6 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar7);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar8,fVar11,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        goto LAB_71000160e4;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,lVar7);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
LAB_7100015ef0:
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar6 = aLStack128;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
  FUN_7100013310(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100016100:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

