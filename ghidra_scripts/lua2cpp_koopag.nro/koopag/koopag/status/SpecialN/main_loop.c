
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialN_main_loop(L2CFighterKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar7 = aLStack128;
LAB_7100016bd8:
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_7100016a4c;
    }
    iVar3 = 1;
    goto LAB_71000181a0;
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100016a4c:
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack256,FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack272,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar7 = aLStack256;
      goto LAB_7100016bd8;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack304,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar7 = aLStack288;
      goto LAB_7100016bd8;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_7100016c80;
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1) != 0) goto LAB_7100016c90;
    bVar2 = false;
  }
  else {
LAB_7100016c80:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100016c90:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack336,bVar2);
  lib::L2CValue::operator_(aLStack336);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_START);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xd483c0ed2);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          goto LAB_7100017af0;
        }
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_END);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x11c0a0c60e);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_END);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x11c0a0c60e);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
          goto LAB_7100017af0;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_START);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_START);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
LAB_7100017af0:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_START);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x915c5de42);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          goto LAB_71000179a8;
        }
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_END);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xd20cd6527);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            fVar11 = (float)lib::L2CValue::as_number(aLStack128);
            fVar12 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_END);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xd20cd6527);
            HVar8 = lib::L2CValue::as_hash(aLStack112);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_WAIT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_TRANSITION_TERM_ID_FALL);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar10,iVar3);
          goto LAB_71000179a8;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_START);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_CONTINUE_START);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0xf3a6aace3);
          HVar8 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
LAB_71000179a8:
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
LAB_7100017b98:
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    if ((bVar2 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        goto LAB_7100017c1c;
      }
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1) != 0) goto LAB_7100017cd0;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_MAIN_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x956c0c32b);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar9 = lib::L2CValue::as_integer(aLStack208);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar9);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        uVar6 = lib::L2CValue::operator__(aLStack176,aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) != 0) goto LAB_7100017cd0;
      }
    }
    bVar2 = false;
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_7100017b98;
LAB_7100017c1c:
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_7100017cd0:
    bVar2 = true;
  }
  lib::L2CValue::L2CValue(aLStack224,bVar2);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    FUN_7100016670(this);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_START);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_END);
        lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar7 = aLStack144;
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_MAIN_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack144,iVar3);
          lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack208,0x956c0c32b);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          uVar9 = lib::L2CValue::as_integer(aLStack208);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar9);
          lib::L2CValue::L2CValue(aLStack176,iVar3);
          uVar6 = lib::L2CValue::operator__(aLStack176,aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_END);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
            goto LAB_7100017f54;
          }
          goto LAB_7100018198;
        }
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar7 = aLStack128;
      }
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100018198;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
LAB_7100017f54:
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = aLStack112;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_7100018198:
  iVar3 = 0;
LAB_71000181a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

