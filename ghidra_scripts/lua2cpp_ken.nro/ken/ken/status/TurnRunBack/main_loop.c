
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::TurnRunBack_main_loop(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CAgent *this_01;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
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
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x29);
  lib::L2CValue::L2CValue(aLStack112,pLVar4);
  lua2cpp::L2CFighterCommon::sub_transition_group_disguise(this,(L2CValue)0x90);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      ppBVar7 = &this->moduleAccessor;
      bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack160);
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) goto LAB_7100025a38;
      }
      lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_TURN);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar1 & 1U) != 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_CATCH);
            lib::L2CValue::operator_(pLVar4,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((bVar1 & 1U) != 0) {
              bVar2 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar7,0);
              lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack96,false);
              uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack160);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_KIND_CATCH_TURN);
                lib::L2CValue::L2CValue(aLStack224,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
                lib::L2CValue::_L2CValue(aLStack224);
                lib::L2CValue::_L2CValue(aLStack208);
                goto LAB_7100025a38;
              }
            }
          }
          lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack176,0x1bd60b9854);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack160,iVar3);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack240,0x2167342969);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack240);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack176,iVar3);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_FRAME_RUN_TURN);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack240,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          uVar5 = lib::L2CValue::operator__(aLStack160,aLStack240);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::operator_(aLStack160,aLStack176);
            uVar5 = lib::L2CValue::operator__(aLStack240,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar5 & 1) != 0) {
              lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_special(this);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                goto LAB_710002613c;
              }
              lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_item(this);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                goto LAB_710002613c;
              }
              lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH_DASH)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack272);
              bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar7,iVar3);
              lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack96,true);
              uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar5 & 1) == 0) {
LAB_7100025e14:
                lib::L2CValue::_L2CValue(aLStack256);
                lib::L2CValue::_L2CValue(aLStack272);
              }
              else {
                pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_CATCH);
                lib::L2CValue::operator_(pLVar4,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack96,0);
                uVar5 = lib::L2CValue::operator__(aLStack288,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::_L2CValue(aLStack288);
                  goto LAB_7100025e14;
                }
                bVar2 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar7,0);
                lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
                lib::L2CValue::L2CValue(aLStack96,false);
                uVar5 = lib::L2CValue::operator__(aLStack304,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack304);
                lib::L2CValue::_L2CValue(aLStack288);
                lib::L2CValue::_L2CValue(aLStack256);
                lib::L2CValue::_L2CValue(aLStack272);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_CATCH_DASH);
                  lib::L2CValue::L2CValue(aLStack336,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
                  lib::L2CValue::_L2CValue(aLStack336);
                  lib::L2CValue::_L2CValue(aLStack320);
                  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                  goto LAB_710002613c;
                }
              }
              lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_attack(this);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                goto LAB_710002613c;
              }
            }
          }
          lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_guard(this);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_710002613c;
          }
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_DASH);
          iVar3 = lib::L2CValue::as_integer(aLStack256);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar1 & 1U) != 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
            lib::L2CValue::operator_(pLVar4,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((bVar1 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_ATTACK_DASH);
              lib::L2CValue::L2CValue(aLStack368,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack352);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              goto LAB_710002613c;
            }
          }
          lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump(this);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710002613c;
          }
          bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar7);
          lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_TURN_RUN_FLAG_TO_RUN);
            iVar3 = lib::L2CValue::as_integer(aLStack288);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar5 = lib::L2CValue::operator__(aLStack272,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((uVar5 & 1) != 0) goto LAB_7100026038;
          }
          else {
            lib::L2CValue::_L2CValue(aLStack256);
LAB_7100026038:
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
            fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
            lib::L2CValue::L2CValue(aLStack256,fVar8);
            lib::L2CValue::operator_(pLVar4,aLStack256);
            lib::L2CValue::L2CValue(aLStack288,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack304,0xb12f3fbba);
            uVar5 = lib::L2CValue::as_integer(aLStack288);
            uVar6 = lib::L2CValue::as_integer(aLStack304);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack272,fVar8);
            uVar5 = lib::L2CValue::operator__(aLStack272,aLStack96);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack384,_FIGHTER_STATUS_KIND_RUN);
              lib::L2CValue::L2CValue(aLStack400,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              goto LAB_710002613c;
            }
          }
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_RUN);
          iVar3 = lib::L2CValue::as_integer(aLStack272);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_TURN_RUN_WORK_INT_TURN_FRAME);
            iVar3 = lib::L2CValue::as_integer(aLStack272);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack256,iVar3);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack272);
            }
            else {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
              fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
              lib::L2CValue::L2CValue(aLStack288,fVar8);
              lib::L2CValue::operator_(pLVar4,aLStack288);
              lib::L2CValue::L2CValue(aLStack416,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack432,0x101ab8fec1);
              uVar5 = lib::L2CValue::as_integer(aLStack416);
              uVar6 = lib::L2CValue::as_integer(aLStack432);
              fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
              lib::L2CValue::L2CValue(aLStack304,fVar8);
              uVar5 = lib::L2CValue::operator__(aLStack96,aLStack304);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack272);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack448,FIGHTER_STATUS_KIND_TURN_RUN);
                lib::L2CValue::L2CValue(aLStack464,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
                lib::L2CValue::_L2CValue(aLStack464);
                lib::L2CValue::_L2CValue(aLStack448);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                goto LAB_710002613c;
              }
            }
          }
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_TURN_RUN_FLAG_STOP_START);
          iVar3 = lib::L2CValue::as_integer(aLStack256);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_TURN_RUN_FLAG_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack272);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack272);
            if ((uVar5 & 1) != 0) {
              pLVar4 = (L2CValue *)0x1a;
              this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
              lib::L2CAgent::math_abs(this_01,pLVar4);
              lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack288,0xb12f3fbba);
              uVar5 = lib::L2CValue::as_integer(aLStack272);
              uVar6 = lib::L2CValue::as_integer(aLStack288);
              fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
              lib::L2CValue::L2CValue(aLStack256,fVar8);
              uVar5 = lib::L2CValue::operator_(aLStack96,aLStack256);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack480,_FIGHTER_STATUS_KIND_RUN_BRAKE);
                lib::L2CValue::L2CValue(aLStack496,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
                lib::L2CValue::_L2CValue(aLStack496);
                lib::L2CValue::_L2CValue(aLStack480);
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                goto LAB_710002613c;
              }
            }
          }
          lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_TURN_RUN_FLAG_STOP_START);
          iVar3 = lib::L2CValue::as_integer(aLStack256);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_TURN_RUN_FLAG_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack272);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack272);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,0.0);
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
              fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
              lib::L2CValue::L2CValue(aLStack288,fVar8);
              lib::L2CValue::operator_(aLStack288);
              lib::L2CValue::operator_(pLVar4,aLStack272);
              uVar5 = lib::L2CValue::operator__(aLStack96,aLStack256);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue(aLStack288);
              if ((uVar5 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack512,_FIGHTER_STATUS_KIND_WAIT);
                lib::L2CValue::L2CValue(aLStack528,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
                lib::L2CValue::_L2CValue(aLStack528);
                lib::L2CValue::_L2CValue(aLStack512);
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                lib::L2CValue::_L2CValue(aLStack96);
LAB_710002613c:
                lib::L2CValue::_L2CValue(aLStack240);
                lib::L2CValue::_L2CValue(aLStack176);
                lib::L2CValue::_L2CValue(aLStack160);
                return;
              }
              lib::L2CValue::_L2CValue(aLStack96);
            }
          }
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        iVar3 = 0;
        goto LAB_7100025a40;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
LAB_7100025a38:
  iVar3 = 1;
LAB_7100025a40:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

