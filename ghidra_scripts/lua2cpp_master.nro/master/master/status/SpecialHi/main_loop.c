
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHi_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  GroundCliffCheckKind GVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
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
  
  ppBVar12 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002f6e4:
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      bVar3 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::GroundModule__set_rhombus_modify_air_lasso_impl(*ppBVar12,(bool)(bVar3 & 1));
LAB_710002fa30:
      pLVar9 = aLStack80;
LAB_710002fb70:
      lib::L2CValue::_L2CValue(pLVar9);
LAB_710002fb74:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TURN_CHECK);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TURN_CHECK_END);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack96,fVar13);
          lib::L2CValue::operator_(pLVar9,aLStack96);
          lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack176,0x19f79d657d);
          uVar8 = lib::L2CValue::as_integer(aLStack160);
          uVar10 = lib::L2CValue::as_integer(aLStack176);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack144,fVar13);
          lib::L2CValue::operator_(aLStack144);
          uVar8 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) != 0) {
            app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar12);
            app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar12);
          }
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TURN_CHECK_END);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar4 & 1U) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar8 & 1) == 0) goto LAB_710002fe4c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lVar2 = -0x40;
        goto LAB_710002fe38;
      }
LAB_710002fe4c:
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                (this,(L2CValue)(cVar1 + -0x50));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0xa28f17495);
      lib::L2CValue::L2CValue(aLStack144,0xed8a31e01);
      lib::L2CValue::L2CValue(aLStack160,true);
      lib::L2CValue::L2CValue(aLStack192,aLStack112);
      lib::L2CValue::L2CValue(aLStack208,aLStack144);
      lib::L2CValue::L2CValue(aLStack224,aLStack160);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar8 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0x139538a2ac);
          HVar11 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::SoundModule__play_landing_se_impl(*ppBVar12,HVar11);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lVar2 = -0x60;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_AIR_LASSO_FLAG_CHECK);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
          uVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar12,uVar6);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
          GVar7 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar12,GVar7);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_AIR_LASSO_FAIL);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
          goto LAB_710002fa30;
        }
        goto LAB_710002fb74;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_AIR_LASSO_FLAG_IS_CHECK);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_SEARCH_HIT_FIGHTER);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) {
LAB_710002fb64:
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar9 = aLStack112;
        goto LAB_710002fb70;
      }
      bVar3 = app::lua_bind::GroundModule__is_status_cliff_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      if ((bVar4 & 1U) == 0) {
LAB_710002fb5c:
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_710002fb64;
      }
      bVar3 = app::lua_bind::GroundModule__can_entry_cliff_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_710002fb5c;
      }
      lib::L2CValue::L2CValue(aLStack192,FIGHTER_INSTANCE_WORK_ID_INT_CLIFF_NO_CATCH_FRAME);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack176,iVar5);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar8 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) goto LAB_710002fb74;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_AIR_LASSO_FLAG_HANG_IMMIDIATE);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) {
        fVar13 = (float)app::lua_bind::GroundModule__hang_cliff_dir_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack144,fVar13);
        fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack160,fVar13);
        lib::L2CValue::operator_(aLStack144,aLStack160);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar8 = lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar8 & 1) == 0) {
          pLVar9 = aLStack96;
          goto LAB_710002fb70;
        }
      }
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE);
      bVar3 = lib::L2CValue::as_bool(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar3 & 1),iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_AIR_LASSO_REACH);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      lVar2 = -0x50;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x50;
LAB_710002fe38:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) goto LAB_710002f6e4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

