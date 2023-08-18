
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialSCharge_main_loop(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0x106f411784);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000310bc;
  }
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar8,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_SHOOT);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000310bc;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x10f674be44);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
      goto LAB_7100030368;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1477c13104);
      HVar9 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
LAB_7100030368:
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar8,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_ESCAPE_AIR);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
        lib::L2CValue::L2CValue(aLStack432,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000310bc;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack448);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      uVar6 = lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_JUMP_AERIAL)
            ;
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
          }
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack464,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_JUMP_CANCEL);
          lib::L2CValue::L2CValue(aLStack480,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::_L2CValue(aLStack480);
          lib::L2CValue::_L2CValue(aLStack464);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_71000310bc;
        }
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack448);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      uVar6 = lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack496,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_JUMP_CANCEL);
        lib::L2CValue::L2CValue(aLStack512,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack512);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000310bc;
      }
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
      lib::L2CValue::L2CValue(aLStack240,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000310bc;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_F);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
      lib::L2CValue::L2CValue(aLStack272,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000310bc;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_B);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
      lib::L2CValue::L2CValue(aLStack304,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000310bc;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_JUMP);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
      lib::L2CValue::L2CValue(aLStack336,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000310bc;
    }
    bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator_(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_JUMP);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack352,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
        lib::L2CValue::L2CValue(aLStack368,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000310bc;
      }
    }
    lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_GUARD);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACKUN_STATUS_SPECIAL_S_WORK_INT_CANCEL_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar5);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack384,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_S_CANCEL);
      lib::L2CValue::L2CValue(aLStack400,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000310bc;
    }
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::operator_(pLVar8);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    FUN_710002dc60(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000310bc:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

