
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::ThrowKirby_main_loop(L2CFighterKrool *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float *pfVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  float in_s2;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  ulong local_80;
  ulong uStack120;
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack336,true);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
LAB_7100018d78:
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_7100018e3c:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack336,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack192,0);
        lib::L2CValue::L2CValue(aLStack208,0);
        lib::L2CValue::L2CValue(aLStack224,0);
        lib::L2CValue::L2CValue(aLStack240,0);
        lib::L2CValue::L2CValue(aLStack256,0);
        lib::L2CValue::L2CValue(aLStack336,true);
        bVar2 = lib::L2CValue::as_bool(aLStack336);
        app::lua_bind::GroundModule__set_test_coll_stop_status_impl
                  (this->moduleAccessor,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                  (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack336,fVar11);
        lib::L2CValue::operator_(aLStack176,aLStack336);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                  (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack336,fVar11);
        lib::L2CValue::operator_(aLStack192,aLStack336);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        uVar7 = lib::L2CValue::operator_(aLStack192,aLStack336);
        lib::L2CValue::_L2CValue(aLStack336);
        if ((uVar7 & 1) != 0) {
          fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack336,fVar11);
          lib::L2CValue::operator_(aLStack256,aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          app::sv_camera_manager::dead_range(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack336,in_s2);
          lib::L2CValue::operator_(aLStack208,aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          app::sv_camera_manager::camera_range();
          lib::L2CValue::L2CValue(aLStack336,in_s2);
          lib::L2CValue::operator_(aLStack160,aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          pLVar8 = aLStack160;
          lib::L2CValue::operator_(aLStack208,pLVar8);
          lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar8);
          lib::L2CValue::L2CValue(aLStack336,0.5);
          lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue(aLStack336,false);
          lib::L2CValue::operator_(aLStack224,aLStack336);
          lib::L2CValue::_L2CValue(aLStack336);
          uVar7 = lib::L2CValue::operator_(aLStack240,aLStack256);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack336,true);
            lib::L2CValue::operator_(aLStack224,aLStack336);
            lib::L2CValue::_L2CValue(aLStack336);
          }
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack336,GROUND_CORRECT_KIND_AIR);
            GVar6 = lib::L2CValue::as_integer(aLStack336);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
            pLVar8 = aLStack336;
          }
          else {
            lib::L2CValue::L2CValue(aLStack336,_GROUND_CORRECT_KIND_NONE);
            GVar6 = lib::L2CValue::as_integer(aLStack336);
            app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xf0);
            pLVar8 = (L2CValue *)(auStack288 + 0x10);
          }
          lib::L2CValue::_L2CValue(pLVar8);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_STATUS_THROW_FLAG_STOP);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack336,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((bVar3 & 1U) != 0) {
          pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack336,*pfVar9);
          lib::L2CValue::L2CValue(aLStack320,pfVar9[1]);
          lib::L2CValue::L2CValue(aLStack304,pfVar9[2]);
          FUN_7100019850(auStack288,this,aLStack336);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,_CAMERA_UPDATE_POS_XYZ);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::CameraModule__set_enable_update_pos_impl(this->moduleAccessor,uVar4,-1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue(aLStack352,0);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x18cdc1683);
          this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x1fbdb2615);
          this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x162d277af);
          this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x18cdc1683);
          this_03 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x1fbdb2615);
          this_04 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack288,0x162d277af);
          iVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar7 = lib::L2CValue::as_number(pLVar8);
          lVar13 = lib::L2CValue::as_number(this_00);
          uVar12 = lib::L2CValue::as_number(this_01);
          local_80 = uVar7 & 0xffffffff | lVar13 << 0x20;
          uStack120 = (ulong)uVar12;
          uVar7 = lib::L2CValue::as_number(this_02);
          lVar13 = lib::L2CValue::as_number(this_03);
          uVar12 = lib::L2CValue::as_number(this_04);
          local_90 = uVar7 & 0xffffffff | lVar13 << 0x20;
          uStack136 = (ulong)uVar12;
          app::lua_bind::CameraModule__update_force_impl
                    (this->moduleAccessor,iVar5,(Vector3f *)&local_80,(Vector3f *)&local_90);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::CameraModule__set_enable_update_pos_impl(this->moduleAccessor,uVar4,-1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_STATUS_THROW_WORK_INT_STOP_FRAME);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar7 & 1) != 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1.0);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
            app::FighterUtil::start_catch_stop(pBVar10,iVar5,fVar11);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_STATUS_THROW_FLAG_STOP);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        }
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lVar13 = -0x90;
        goto LAB_710001951c;
      }
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)(cVar1 + -0x70));
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack336,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) == 0) goto LAB_7100018e3c;
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)(cVar1 + -0x70));
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack336);
    iVar5 = 1;
  }
  else {
    lib::L2CValue::L2CValue(aLStack368,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack336,false);
    uVar7 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack336);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack368);
      lVar13 = -0x70;
LAB_710001951c:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar13));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack336,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) != 0) goto LAB_7100018d78;
    }
    iVar5 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

