
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100017dd0(L2CFighterSonic *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100017ed8;
    }
    iVar2 = 1;
    goto LAB_710001896c;
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100017ed8:
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_S_END_WORK_INT_WAIT_MTRANS_TYPE_PHASE01);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::operator=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,1);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,2);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x17);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack224,1);
            goto LAB_71000182a0;
          }
        }
        lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
        fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,(int)pLVar6);
        lib::L2CValue::L2CValue(aLStack128,fVar11);
        lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar6);
        lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack192,0x1cd8d8a3ed);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar11);
        uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack224,1);
          goto LAB_71000182a0;
        }
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack224,1);
          goto LAB_71000182a0;
        }
      }
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,(int)pLVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar6);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0x1826754a57);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar11);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,1);
        goto LAB_71000182a0;
      }
    }
    lib::L2CValue::L2CValue(aLStack224,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,1);
  }
LAB_71000182a0:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator==(aLStack224,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,(int)pLVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar6);
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x1cd8d8a3ed);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar11);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        FUN_7100018c80(this);
        lib::L2CValue::L2CValue(aLStack96,FUN_7100018df0);
        lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
        goto LAB_71000184fc;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_S_AIR_END);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack96,HVar8);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
      lib::L2CValue::L2CValue(aLStack112,lVar9);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,2);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_S_END_WORK_INT_WAIT_MTRANS_TYPE_PHASE01);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,(int)pLVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar6);
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x1826754a57);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar11);
      uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        FUN_7100018c80(this);
        lib::L2CValue::L2CValue(aLStack96,FUN_7100018df0);
        lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
LAB_71000184fc:
        lib::L2CValue::~L2CValue(aLStack96);
        return;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_S_END);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack96,HVar8);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_AIR_KIND);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
      lib::L2CValue::L2CValue(aLStack112,lVar9);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_ID_UTILITY_WORK_INT_MOT_KIND);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_S_END_WORK_INT_WAIT_MTRANS_TYPE_PHASE01);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  iVar2 = 0;
LAB_710001896c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

