
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialNCharge_main_loop
          (L2CFighterPzenigame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
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
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_710000b10c:
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
        lib::L2CValue::operator_(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack480,FIGHTER_STATUS_KIND_ESCAPE_AIR);
              lib::L2CValue::L2CValue(aLStack496,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
              lib::L2CValue::_L2CValue(aLStack496);
              pLVar4 = aLStack480;
              goto LAB_710000aa94;
            }
          }
        }
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
        lib::L2CValue::operator_(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack416);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,iVar3);
          uVar5 = lib::L2CValue::operator_(aLStack96,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack512,FIGHTER_STATUS_KIND_JUMP_AERIAL);
                lib::L2CValue::L2CValue(aLStack528,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
                lib::L2CValue::_L2CValue(aLStack528);
                pLVar4 = aLStack512;
                goto LAB_710000aa94;
              }
            }
          }
        }
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
          iVar3 = lib::L2CValue::as_integer(aLStack416);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,iVar3);
          uVar5 = lib::L2CValue::operator_(aLStack96,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_AERIAL_BUTTON);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack544,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack560,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
              lib::L2CValue::_L2CValue(aLStack560);
              pLVar4 = aLStack544;
              goto LAB_710000aa94;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack416,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack432,0xca3dc30e5);
        uVar5 = lib::L2CValue::as_integer(aLStack416);
        uVar6 = lib::L2CValue::as_integer(aLStack432);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack576,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack592,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack592);
          pLVar4 = aLStack576;
          goto LAB_710000aa94;
        }
      }
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
LAB_710000b754:
        pLVar4 = aLStack112;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
LAB_710000b71c:
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) goto LAB_710000b754;
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) goto LAB_710000aa98;
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) goto LAB_710000b71c;
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack608,false);
        lib::L2CValue::L2CValue(aLStack624,0xe06860a20);
        lib::L2CValue::L2CValue(aLStack640,0x1244d4ffef);
        FUN_7100009c60(this,aLStack608,aLStack624,aLStack640);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack624);
        pLVar4 = aLStack608;
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
      lib::L2CValue::operator_(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_KIND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack208,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
          lib::L2CValue::_L2CValue(aLStack208);
          pLVar4 = aLStack192;
          goto LAB_710000aa94;
        }
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
      lib::L2CValue::operator_(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_ESCAPE_F);
          lib::L2CValue::L2CValue(aLStack240,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::_L2CValue(aLStack240);
          pLVar4 = aLStack224;
          goto LAB_710000aa94;
        }
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
      lib::L2CValue::operator_(pLVar4,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack256,FIGHTER_STATUS_KIND_ESCAPE_B);
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack272);
          pLVar4 = aLStack256;
          goto LAB_710000aa94;
        }
      }
      lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator_(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack368,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack368);
            pLVar4 = aLStack352;
            goto LAB_710000aa94;
          }
        }
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
          lib::L2CValue::operator_(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar1 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
              lib::L2CValue::L2CValue(aLStack400,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack400);
              pLVar4 = aLStack384;
              goto LAB_710000aa94;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack416,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack432,0xca3dc30e5);
        uVar5 = lib::L2CValue::as_integer(aLStack416);
        uVar6 = lib::L2CValue::as_integer(aLStack432);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) goto LAB_710000b10c;
        lib::L2CValue::L2CValue(aLStack448,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack464,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack464);
        pLVar4 = aLStack448;
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack336,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack336);
          pLVar4 = aLStack320;
        }
        else {
          lib::L2CValue::L2CValue(aLStack288,FIGHTER_STATUS_KIND_GUARD_ON);
          lib::L2CValue::L2CValue(aLStack304,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::_L2CValue(aLStack304);
          pLVar4 = aLStack288;
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_REMOVE_COMMON);
    lib::L2CValue::L2CValue(aLStack112,0xaec2db62e);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PZENIGAME_STATUS_KIND_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar4 = aLStack144;
  }
LAB_710000aa94:
  lib::L2CValue::_L2CValue(pLVar4);
LAB_710000aa98:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

