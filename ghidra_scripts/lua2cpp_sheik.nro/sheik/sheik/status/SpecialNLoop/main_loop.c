
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialNLoop_main_loop(L2CFighterSheik *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  uint uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
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
  
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar12 = &this->moduleAccessor;
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      this_00 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) {
LAB_710000b740:
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar8 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar8 & 1) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
            lib::L2CValue::operator_(pLVar7,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar3);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((bVar2 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_AIR);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
              goto LAB_710000b9cc;
            }
          }
          lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
          lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                    (this,(L2CValue)0x80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) goto LAB_710000b9dc;
        }
        bVar2 = false;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator_(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator_(pLVar7,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
            lib::L2CValue::operator_(pLVar7,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((bVar2 & 1U) == 0) {
                lib::L2CValue::L2CValue
                          (aLStack144,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                          (this,(L2CValue)0x70);
                lib::L2CValue::L2CValue(aLStack112,true);
                uVar8 = lib::L2CValue::operator__(aLStack128,aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack144);
                if ((uVar8 & 1) == 0) goto LAB_710000b740;
                goto LAB_710000b9dc;
              }
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar3);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((bVar2 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_GUARD_ON);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar3);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              if ((bVar2 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_B);
                lib::L2CValue::L2CValue
                          (aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                iVar4 = lib::L2CValue::as_integer(aLStack128);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
              }
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar3);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
              lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              iVar4 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_ESCAPE_F);
              lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              iVar4 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
            }
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar8 = lib::L2CValue::operator__(aLStack128,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE);
            lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
            lib::L2CValue::L2CValue(aLStack128,_FT_SHEIK_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
          }
        }
LAB_710000b9cc:
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
LAB_710000b9dc:
        bVar2 = true;
      }
      lib::L2CValue::L2CValue(aLStack208,bVar2);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0xe946909a7);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        uVar9 = lib::L2CValue::as_integer(aLStack208);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        uVar8 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack144,0x10c2ff9b0d);
          uVar8 = lib::L2CValue::as_integer(aLStack112);
          uVar9 = lib::L2CValue::as_integer(aLStack144);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar8,uVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar13);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
          lib::L2CValue::operator_(aLStack144);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            pLVar7 = aLStack160;
LAB_710000c0f4:
            lib::L2CValue::_L2CValue(pLVar7);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack304,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
            iVar3 = lib::L2CValue::as_integer(aLStack304);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
            lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
            lib::L2CValue::operator_(aLStack288);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((bVar2 & 1U) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
              uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
                GVar5 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar3);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack160,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
                iVar3 = lib::L2CValue::as_integer(aLStack160);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
                lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
                lib::L2CValue::operator_(aLStack144);
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack160);
                if ((bVar2 & 1U) == 0) {
                  lib::L2CValue::L2CValue(aLStack112,0x12fa41ef06);
                  fVar13 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar12);
                  lib::L2CValue::L2CValue(aLStack144,fVar13);
                  lib::L2CValue::L2CValue(aLStack160,false);
                  HVar11 = lib::L2CValue::as_hash(aLStack112);
                  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
                  fVar14 = (float)lib::L2CValue::as_number(aLStack128);
                  bVar1 = lib::L2CValue::as_bool(aLStack160);
                  app::lua_bind::MotionModule__change_motion_impl
                            (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack112,0x12fa41ef06);
                  lib::L2CValue::L2CValue(aLStack144,0.0);
                  lib::L2CValue::L2CValue(aLStack160,false);
                  HVar11 = lib::L2CValue::as_hash(aLStack112);
                  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
                  fVar14 = (float)lib::L2CValue::as_number(aLStack128);
                  bVar1 = lib::L2CValue::as_bool(aLStack160);
                  app::lua_bind::MotionModule__change_motion_impl
                            (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
                }
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
              }
              else {
                lib::L2CValue::L2CValue(aLStack112,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
                GVar5 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar3);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack160,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
                iVar3 = lib::L2CValue::as_integer(aLStack160);
                bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
                lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
                lib::L2CValue::operator_(aLStack144);
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack160);
                if ((bVar2 & 1U) == 0) {
                  lib::L2CValue::L2CValue(aLStack112,0x11e2130515);
                  lib::L2CValue::L2CValue(aLStack144,0.0);
                  lib::L2CValue::L2CValue(aLStack160,false);
                  HVar11 = lib::L2CValue::as_hash(aLStack112);
                  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
                  fVar14 = (float)lib::L2CValue::as_number(aLStack128);
                  bVar1 = lib::L2CValue::as_bool(aLStack160);
                  app::lua_bind::MotionModule__change_motion_impl
                            (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack112,0xeb8131ac9);
                  lib::L2CValue::L2CValue(aLStack144,0.0);
                  lib::L2CValue::L2CValue(aLStack160,false);
                  HVar11 = lib::L2CValue::as_hash(aLStack112);
                  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
                  fVar14 = (float)lib::L2CValue::as_number(aLStack128);
                  bVar1 = lib::L2CValue::as_bool(aLStack160);
                  app::lua_bind::MotionModule__change_motion_impl
                            (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
                }
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
                iVar3 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
              }
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::L2CValue(aLStack112,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_MOT_CHANGE);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
              pLVar7 = aLStack112;
              goto LAB_710000c0f4;
            }
          }
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack144);
            pLVar7 = aLStack160;
LAB_710000c1b4:
            lib::L2CValue::_L2CValue(pLVar7);
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_AIR);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
              pLVar7 = aLStack112;
              goto LAB_710000c1b4;
            }
          }
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack144);
            pLVar7 = aLStack160;
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            uVar8 = lib::L2CValue::operator__(pLVar7,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar8 & 1) == 0) goto LAB_710000c278;
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_MTRANS_WAIT_GROUND);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
            pLVar7 = aLStack112;
          }
          lib::L2CValue::_L2CValue(pLVar7);
LAB_710000c278:
          bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) {
            HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar12);
            lib::L2CValue::L2CValue(aLStack144,HVar11);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
            uVar6 = lib::L2CValue::as_integer(pLVar7);
            uVar6 = app::sv_battle_object::kind(uVar6);
            lib::L2CValue::L2CValue(aLStack160,uVar6);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_KIND_KIRBY);
            uVar8 = lib::L2CValue::operator__(aLStack160,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar8 & 1) != 0) {
              HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar12);
              lib::L2CValue::L2CValue(aLStack160,HVar11);
              HVar11 = lib::L2CValue::as_hash(aLStack160);
              HVar11 = app::lua_bind::FighterMotionModuleImpl__motion_kind_kirby_copy_original_impl
                                 (*ppBVar12,HVar11);
              lib::L2CValue::L2CValue(aLStack112,HVar11);
              lib::L2CValue::operator_(aLStack144,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack160);
            }
            lib::L2CValue::L2CValue(aLStack112,0x11e2130515);
            uVar8 = lib::L2CValue::operator__(aLStack144,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,0xeb8131ac9);
              lib::L2CValue::L2CValue(aLStack160,0.0);
              lib::L2CValue::L2CValue(aLStack208,false);
              HVar11 = lib::L2CValue::as_hash(aLStack112);
              fVar13 = (float)lib::L2CValue::as_number(aLStack160);
              fVar14 = (float)lib::L2CValue::as_number(aLStack128);
              bVar1 = lib::L2CValue::as_bool(aLStack208);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack112);
            }
            lib::L2CValue::_L2CValue(aLStack144);
          }
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack128);
          return;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        app::FighterUtil::flash_eye_info(pBVar10);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack272,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack272);
        pLVar7 = aLStack256;
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_N_CANCEL);
        lib::L2CValue::L2CValue(aLStack240,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack240);
        pLVar7 = aLStack224;
      }
      lib::L2CValue::_L2CValue(pLVar7);
      iVar3 = 0;
      goto LAB_710000b2a0;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack192,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  iVar3 = 1;
LAB_710000b2a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

