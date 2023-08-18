
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStep_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
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
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI_COMMAND);
    lib::L2CValue::operator_(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623ALONG);
        lib::L2CValue::operator_(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar1 & 1U) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623BLONG);
          lib::L2CValue::operator_(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack192,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
            iVar3 = lib::L2CValue::as_integer(aLStack192);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack304,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
              lib::L2CValue::L2CValue(aLStack320,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
              lib::L2CValue::_L2CValue(aLStack320);
              pLVar4 = aLStack304;
              goto LAB_710002fb88;
            }
          }
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_323CATCH);
          lib::L2CValue::operator_(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623STRICT);
            lib::L2CValue::operator_(pLVar4,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::_L2CValue(aLStack144);
            }
            else {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
              lib::L2CValue::L2CValue(aLStack192,0x115d6fd7da);
              lib::L2CValue::L2CValue(aLStack368,0xc001be4d6);
              uVar5 = lib::L2CValue::as_integer(aLStack192);
              uVar6 = lib::L2CValue::as_integer(aLStack368);
              iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar5,uVar6);
              lib::L2CValue::L2CValue(aLStack96,iVar3);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack144);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack384,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
                lib::L2CValue::L2CValue(aLStack400,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
                lib::L2CValue::_L2CValue(aLStack400);
                pLVar4 = aLStack384;
                goto LAB_710002fb88;
              }
            }
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_623A);
            lib::L2CValue::operator_(pLVar4,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_NEUTRAL);
              iVar3 = lib::L2CValue::as_integer(aLStack192);
              bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack96,true);
              uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack192);
              if ((uVar5 & 1) != 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x23);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6);
                lib::L2CValue::operator_(pLVar4,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
                lib::L2CValue::_L2CValue(aLStack144);
                if ((bVar1 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_1);
                  lib::L2CValue::L2CValue(aLStack464,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
                  lib::L2CValue::_L2CValue(aLStack464);
                  pLVar4 = aLStack448;
                  goto LAB_710002fb88;
                }
              }
              lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_ATTACK);
              iVar3 = lib::L2CValue::as_integer(aLStack192);
              bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                                (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack96,true);
              uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack192);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_NEUTRAL);
                iVar3 = lib::L2CValue::as_integer(aLStack192);
                bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
                lib::L2CValue::L2CValue(aLStack96,false);
                uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack192);
                if ((uVar5 & 1) != 0) {
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
                  lib::L2CValue::L2CValue(aLStack512,pLVar4);
                  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
                  lib::L2CValue::L2CValue(aLStack528,pLVar4);
                  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xf0);
                  lib::L2CValue::_L2CValue(aLStack528);
                  lib::L2CValue::_L2CValue(aLStack512);
                  lib::L2CValue::L2CValue(aLStack544,aLStack96);
                  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xe0);
                  lib::L2CValue::L2CValue(aLStack368,0x6e5ec7051);
                  lib::L2CValue::L2CValue(aLStack560,0x213892bd4b);
                  uVar5 = lib::L2CValue::as_integer(aLStack368);
                  uVar6 = lib::L2CValue::as_integer(aLStack560);
                  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                           (this->moduleAccessor,uVar5,uVar6);
                  lib::L2CValue::L2CValue(aLStack192,fVar7);
                  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack192);
                  lib::L2CValue::_L2CValue(aLStack192);
                  lib::L2CValue::_L2CValue(aLStack560);
                  lib::L2CValue::_L2CValue(aLStack368);
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack544);
                  if ((uVar5 & 1) != 0) {
                    lib::L2CValue::L2CValue
                              (aLStack144,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_NEUTRAL);
                    iVar3 = lib::L2CValue::as_integer(aLStack144);
                    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
                    lib::L2CValue::_L2CValue(aLStack144);
                  }
                  lib::L2CValue::_L2CValue(aLStack96);
                }
                lib::L2CValue::L2CValue
                          (aLStack192,_FIGHTER_DEMON_STATUS_ATTACK_STEP_WORK_INT_CANCEL_FRAME);
                iVar3 = lib::L2CValue::as_integer(aLStack192);
                iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::L2CValue(aLStack144,iVar3);
                lib::L2CValue::L2CValue(aLStack96,0);
                uVar5 = lib::L2CValue::operator_(aLStack96,aLStack144);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack192);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack560,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_NEUTRAL)
                  ;
                  iVar3 = lib::L2CValue::as_integer(aLStack560);
                  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
                  lib::L2CValue::L2CValue(aLStack368,(bool)(bVar2 & 1));
                  lib::L2CValue::L2CValue(aLStack96,true);
                  uVar5 = lib::L2CValue::operator__(aLStack368,aLStack96);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack368);
                  lib::L2CValue::_L2CValue(aLStack560);
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack192);
                  if ((uVar5 & 1) != 0) {
                    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump(this);
                    lib::L2CValue::L2CValue(aLStack96,true);
                    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    lib::L2CValue::_L2CValue(aLStack144);
                    if ((uVar5 & 1) != 0) goto LAB_710002fb8c;
                    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
                    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH);
                    lib::L2CValue::operator_(pLVar4,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
                    lib::L2CValue::_L2CValue(aLStack144);
                    if ((bVar1 & 1U) != 0) {
                      lib::L2CValue::L2CValue
                                (aLStack144,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
                      iVar3 = lib::L2CValue::as_integer(aLStack144);
                      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                        (this->moduleAccessor,iVar3);
                      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
                      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack144);
                      if ((bVar1 & 1U) != 0) {
                        FUN_7100030c20(this);
                        lib::L2CValue::L2CValue(aLStack576,_FIGHTER_STATUS_KIND_TURN_DASH);
                        lib::L2CValue::L2CValue(aLStack592,true);
                        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
                        lib::L2CValue::_L2CValue(aLStack592);
                        pLVar4 = aLStack576;
                        goto LAB_710002fb88;
                      }
                    }
                    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
                    lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_DASH);
                    lib::L2CValue::operator_(pLVar4,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
                    lib::L2CValue::_L2CValue(aLStack144);
                    if ((bVar1 & 1U) != 0) {
                      lib::L2CValue::L2CValue
                                (aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_DASH);
                      iVar3 = lib::L2CValue::as_integer(aLStack144);
                      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                        (this->moduleAccessor,iVar3);
                      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
                      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack144);
                      if ((bVar1 & 1U) != 0) {
                        FUN_7100030c20(this);
                        lib::L2CValue::L2CValue(aLStack608,FIGHTER_STATUS_KIND_DASH);
                        lib::L2CValue::L2CValue(aLStack624,true);
                        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
                        lib::L2CValue::_L2CValue(aLStack624);
                        pLVar4 = aLStack608;
                        goto LAB_710002fb88;
                      }
                    }
                    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
                    lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_TURN);
                    lib::L2CValue::operator_(pLVar4,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
                    lib::L2CValue::_L2CValue(aLStack144);
                    if ((bVar1 & 1U) != 0) {
                      lib::L2CValue::L2CValue
                                (aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN);
                      iVar3 = lib::L2CValue::as_integer(aLStack144);
                      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                        (this->moduleAccessor,iVar3);
                      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
                      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack144);
                      if ((bVar1 & 1U) != 0) {
                        FUN_7100030c20(this);
                        lib::L2CValue::L2CValue(aLStack640,FIGHTER_STATUS_KIND_TURN);
                        lib::L2CValue::L2CValue(aLStack656,true);
                        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
                        lib::L2CValue::_L2CValue(aLStack656);
                        pLVar4 = aLStack640;
                        goto LAB_710002fb88;
                      }
                    }
                    lua2cpp::L2CFighterCommon::sub_check_command_walk(this);
                    lib::L2CValue::L2CValue(aLStack96,true);
                    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    lib::L2CValue::_L2CValue(aLStack144);
                    if ((uVar5 & 1) != 0) {
                      lib::L2CValue::L2CValue
                                (aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
                      iVar3 = lib::L2CValue::as_integer(aLStack144);
                      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                                        (this->moduleAccessor,iVar3);
                      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
                      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::_L2CValue(aLStack144);
                      if ((bVar1 & 1U) != 0) {
                        FUN_7100030c20(this);
                        lib::L2CValue::L2CValue(aLStack672,FIGHTER_STATUS_KIND_WALK);
                        lib::L2CValue::L2CValue(aLStack688,true);
                        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
                        lib::L2CValue::_L2CValue(aLStack688);
                        pLVar4 = aLStack672;
                        goto LAB_710002fb88;
                      }
                    }
                  }
                }
                bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
                bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((bVar1 & 1U) == 0) goto LAB_710002fb8c;
                lib::L2CValue::L2CValue(aLStack704,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
                lib::L2CValue::L2CValue(aLStack720,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
                lib::L2CValue::_L2CValue(aLStack720);
                pLVar4 = aLStack704;
              }
              else {
                lib::L2CValue::L2CValue(aLStack480,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
                lib::L2CValue::L2CValue(aLStack496,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
                lib::L2CValue::_L2CValue(aLStack496);
                pLVar4 = aLStack480;
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack416,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
              lib::L2CValue::L2CValue(aLStack432,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
              lib::L2CValue::_L2CValue(aLStack432);
              pLVar4 = aLStack416;
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack336,_FIGHTER_DEMON_STATUS_KIND_CATCH_COMMAND);
            lib::L2CValue::L2CValue(aLStack352,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack352);
            pLVar4 = aLStack336;
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack192,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack192);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2L);
            lib::L2CValue::L2CValue(aLStack288,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            pLVar4 = aLStack272;
          }
          else {
            lib::L2CValue::L2CValue(aLStack240,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
            lib::L2CValue::L2CValue(aLStack256,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
            lib::L2CValue::_L2CValue(aLStack256);
            pLVar4 = aLStack240;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2S);
        lib::L2CValue::L2CValue(aLStack224,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        pLVar4 = aLStack208;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2S);
      lib::L2CValue::L2CValue(aLStack176,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar4 = aLStack160;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar4 = aLStack112;
  }
LAB_710002fb88:
  lib::L2CValue::_L2CValue(pLVar4);
LAB_710002fb8c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

