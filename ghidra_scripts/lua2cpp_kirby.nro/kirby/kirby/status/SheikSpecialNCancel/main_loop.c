
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SheikSpecialNCancel_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  GroundCorrectKind GVar7;
  int iVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(aLStack112,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  ppBVar12 = &this->moduleAccessor;
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_check_charge_cancel_jump_mini_attack(this);
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar3 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar12,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lVar1 = -0x90;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
      uVar10 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar10 & 1) == 0) goto LAB_71001f9f98;
      lib::L2CValue::L2CValue(aLStack112,true);
      bVar3 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (*ppBVar12,(bool)(bVar3 & 1));
      lVar1 = -0x60;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_71001f9f98:
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
    uVar10 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar10 & 1) == 0) {
      bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar10 & 1) == 0) {
        bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,true);
        uVar10 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar10 & 1) == 0) goto LAB_71001fa338;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_GUARD_ON);
      uVar10 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_GUARD);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar3 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar10 & 1) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack288,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_71001fadf0;
          }
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack304,_FIGHTER_STATUS_KIND_FALL);
            lib::L2CValue::L2CValue(aLStack320,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_71001fadf0;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack336,aLStack128);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71001fadf0;
    }
    bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    cVar2 = (char)&stack0xfffffffffffffff0;
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar2 + '`'));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar10 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar10 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar10 = lib::L2CValue::operator__(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar10 & 1) != 0) goto LAB_71001fa12c;
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71001fadf0;
    }
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71001fa12c:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar10 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar10 & 1) == 0) goto LAB_71001fa338;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar10 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar9 = aLStack240;
        goto LAB_71001fa9d0;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + '@'),(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar9 = aLStack208;
LAB_71001fa9d0:
      lib::L2CValue::_L2CValue(pLVar9);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71001fadf0;
  }
LAB_71001fa338:
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack144);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lVar1 = -0x90;
LAB_71001fabc0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
    iVar5 = lib::L2CValue::as_integer(aLStack384);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
    lib::L2CValue::L2CValue(aLStack368,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack368);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar4 & 1U) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar10 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0x14930274b8);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        uVar10 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar10 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FLY);
          uVar10 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar10 & 1) != 0) goto LAB_71001fa628;
        }
        else {
LAB_71001fa628:
          lib::L2CValue::L2CValue(aLStack112,0x195160ca42);
          lib::L2CValue::operator_(aLStack144,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack192,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
        iVar5 = lib::L2CValue::as_integer(aLStack192);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar10 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar10 & 1) == 0) {
          fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack112,fVar13);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar11 = lib::L2CValue::as_hash(aLStack144);
          fVar13 = (float)lib::L2CValue::as_number(aLStack112);
          fVar14 = (float)lib::L2CValue::as_number(aLStack160);
          bVar3 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar11 = lib::L2CValue::as_hash(aLStack144);
          fVar13 = (float)lib::L2CValue::as_number(aLStack112);
          fVar14 = (float)lib::L2CValue::as_number(aLStack160);
          bVar3 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
        lVar1 = -0x60;
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
        uVar6 = lib::L2CValue::as_integer(pLVar9);
        uVar6 = app::sv_battle_object::kind(uVar6);
        lib::L2CValue::L2CValue(aLStack160,uVar6);
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_KIND_KIRBY);
        bVar3 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,0x195160ca42);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0x1faad76cba);
          lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack112,HVar11);
        uVar10 = lib::L2CValue::operator__(aLStack112,aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar10 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_LANDING);
          lib::L2CValue::L2CValue(aLStack416,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          goto LAB_71001fadf0;
        }
        lib::L2CValue::L2CValue(aLStack112,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
        GVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack368,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
        iVar5 = lib::L2CValue::as_integer(aLStack368);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar10 = lib::L2CValue::operator__(aLStack192,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack368);
        if ((uVar10 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x1012b7fbf8);
          fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack192,fVar13);
          lib::L2CValue::L2CValue(aLStack368,1.0);
          lib::L2CValue::L2CValue(aLStack384,false);
          HVar11 = lib::L2CValue::as_hash(aLStack112);
          fVar13 = (float)lib::L2CValue::as_number(aLStack192);
          fVar14 = (float)lib::L2CValue::as_number(aLStack368);
          bVar3 = lib::L2CValue::as_bool(aLStack384);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1012b7fbf8);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack368,1.0);
          lib::L2CValue::L2CValue(aLStack384,false);
          HVar11 = lib::L2CValue::as_hash(aLStack112);
          fVar13 = (float)lib::L2CValue::as_number(aLStack192);
          fVar14 = (float)lib::L2CValue::as_number(aLStack368);
          bVar3 = lib::L2CValue::as_bool(aLStack384);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar3 & 1),0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lVar1 = -0x90;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack112,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar5);
      lVar1 = -0x60;
      goto LAB_71001fabc0;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
    lVar1 = -0x90;
LAB_71001facd0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
      lib::L2CValue::L2CValue(aLStack144,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar8 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar5,iVar8);
      lib::L2CValue::_L2CValue(aLStack144);
      lVar1 = -0x60;
      goto LAB_71001facd0;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar5);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
    lVar1 = -0x90;
LAB_71001fade0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar10 = lib::L2CValue::operator__(pLVar9,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
      lib::L2CValue::L2CValue(aLStack144,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar8 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar5,iVar8);
      lib::L2CValue::_L2CValue(aLStack144);
      lVar1 = -0x60;
      goto LAB_71001fade0;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71001fadf0:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

