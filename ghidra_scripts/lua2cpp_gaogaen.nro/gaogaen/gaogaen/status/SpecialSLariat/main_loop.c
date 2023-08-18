
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSLariat_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71000210ec:
      fVar9 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar6 = lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_LARIAT_HIT_FRAME)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar9);
        lib::L2CValue::L2CValue(aLStack80,1.0);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack80,1.0);
        uVar6 = lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,1.0);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          fVar9 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
          lib::L2CValue::L2CValue(aLStack80,1.0);
          fVar9 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_HIT);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          FUN_7100021910(aLStack96,this);
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            FUN_71000206c0(aLStack96,this);
            lib::L2CValue::L2CValue(aLStack80,false);
            uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,0x50000000);
              lib::L2CValue::L2CValue
                        (aLStack96,
                         _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER
                        );
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
              lib::L2CValue::_L2CValue(aLStack96);
              goto LAB_7100021484;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_CHECKED_FINISH_CAMERA);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_REQUEST_CHECK_FINISH_CAMERA_THROW);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_CHECKED_FINISH_CAMERA);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
LAB_7100021484:
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      this_00 = &this->globalTable;
      if ((bVar1 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_7100021618;
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x1064075d74);
          HVar8 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,false);
          FUN_710001d4b0(this,aLStack80);
LAB_710002170c:
          lib::L2CValue::_L2CValue(aLStack80);
        }
        else {
LAB_7100021618:
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
              GVar5 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0x14e5b2d234);
              HVar8 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,false);
              FUN_710001d4b0(this,aLStack80);
              goto LAB_710002170c;
            }
          }
        }
        FUN_710001fc90(this);
        FUN_710001ff80(this);
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      iVar3 = 0;
      goto LAB_7100021768;
    }
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_71000210ec;
    }
  }
  iVar3 = 1;
LAB_7100021768:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

