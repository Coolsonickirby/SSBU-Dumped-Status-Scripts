
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001aca0(L2CFighterCloud *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
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
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator&(pLVar7,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack192,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
    lib::L2CValue::~L2CValue(aLStack192);
    pLVar7 = aLStack176;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    ppBVar11 = &this->moduleAccessor;
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar8 & 1) == 0) {
LAB_710001b364:
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar8 = lib::L2CValue::operator==(aLStack144,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((uVar8 & 1) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
            lib::L2CValue::operator&(pLVar7,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((bVar4 & 1U) == 0) goto LAB_710001b4dc;
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
            iVar5 = lib::L2CValue::as_integer(aLStack144);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack144);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_AIR);
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack144);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            lVar2 = -0x80;
            goto LAB_710001b5f8;
          }
LAB_710001b4dc:
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS);
          lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                    (this,(L2CValue)(cVar1 + -0x80));
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((bVar4 & 1U) == 0) goto LAB_710001b51c;
          goto LAB_710001b604;
        }
LAB_710001b51c:
        bVar4 = false;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
        lib::L2CValue::operator&(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar4 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator&(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_ESCAPE_F);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            goto LAB_710001b5f4;
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator&(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE_B);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            goto LAB_710001b5f4;
          }
          lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            else {
              lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_GUARD_ON);
              lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS)
              ;
              iVar5 = lib::L2CValue::as_integer(aLStack112);
              iVar6 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
            }
            goto LAB_710001b5f4;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS);
          lua2cpp::L2CFighterCommon::sub_check_jump_in_charging_for_cancel_status
                    (this,(L2CValue)(cVar1 + -0x70));
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((bVar4 & 1U) == 0) goto LAB_710001b364;
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
          lib::L2CValue::operator&(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack144);
          if ((bVar4 & 1U) != 0) {
            lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar8 = lib::L2CValue::operator==(aLStack160,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar8 & 1) == 0) goto LAB_710001b604;
            lib::L2CValue::L2CValue
                      (aLStack112,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_FLAG_CANCEL_JUMP_MINI_ATTACK);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
            goto LAB_710001b5fc;
          }
          pLVar7 = aLStack144;
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
          iVar5 = lib::L2CValue::as_integer(aLStack144);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack112,false);
          uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_ESCAPE);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            iVar6 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_STATUS_KIND_NONE);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_CLOUD_STATUS_SPECIAL_LW_INT_CANCEL_STATUS);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            iVar6 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar5,iVar6);
          }
LAB_710001b5f4:
          lVar2 = -0x70;
LAB_710001b5f8:
          lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710001b5fc:
          pLVar7 = aLStack112;
        }
        lib::L2CValue::~L2CValue(pLVar7);
LAB_710001b604:
        bVar4 = true;
      }
      lib::L2CValue::L2CValue(aLStack240,bVar4);
      bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((bVar4 & 1U) == 0) {
        bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar8 & 1) == 0) goto LAB_710001ae2c;
        HVar9 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack128,HVar9);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar8 & 1) == 0) {
LAB_710001b780:
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar8 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack352,true);
              lib::L2CValue::L2CValue(aLStack368,0x162bdda624);
              lib::L2CValue::L2CValue(aLStack384,0x132e908f3f);
              lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack144,0xba5b8d905);
              uVar8 = lib::L2CValue::as_integer(aLStack112);
              uVar10 = lib::L2CValue::as_integer(aLStack144);
              fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar11,uVar8,uVar10);
              lib::L2CValue::L2CValue(aLStack400,fVar13);
              FUN_7100018920(this,aLStack352,aLStack368,aLStack384,aLStack400);
              lib::L2CValue::~L2CValue(aLStack400);
              lib::L2CValue::~L2CValue(aLStack144);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack384);
              lib::L2CValue::~L2CValue(aLStack368);
              pLVar7 = aLStack352;
              goto LAB_710001bad4;
            }
          }
          lib::L2CValue::L2CValue(aLStack112,0x162bdda624);
          uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar8 & 1) != 0) {
            bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
            lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar8 = lib::L2CValue::operator==(aLStack144,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack112,0xf250902eb);
              lib::L2CValue::L2CValue(aLStack144,0.0);
              lib::L2CValue::L2CValue(aLStack160,1.0);
              lib::L2CValue::L2CValue(aLStack240,false);
              HVar9 = lib::L2CValue::as_hash(aLStack112);
              fVar13 = (float)lib::L2CValue::as_number(aLStack144);
              fVar12 = (float)lib::L2CValue::as_number(aLStack160);
              bVar3 = lib::L2CValue::as_bool(aLStack240);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar11,HVar9,fVar13,fVar12,(bool)(bVar3 & 1),0.0,false,false);
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack160);
              lib::L2CValue::~L2CValue(aLStack144);
              pLVar7 = aLStack112;
              goto LAB_710001bad4;
            }
          }
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar8 = lib::L2CValue::operator==(pLVar7,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar8 & 1) == 0) goto LAB_710001b780;
          lib::L2CValue::L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack112,0x162bdda624);
          uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,false);
            lib::L2CValue::operator=(aLStack144,aLStack112);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,true);
            lib::L2CValue::operator=(aLStack144,aLStack112);
          }
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack288,aLStack144);
          lib::L2CValue::L2CValue(aLStack304,0xf250902eb);
          lib::L2CValue::L2CValue(aLStack320,0x132e908f3f);
          lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack160,0xba5b8d905);
          uVar8 = lib::L2CValue::as_integer(aLStack112);
          uVar10 = lib::L2CValue::as_integer(aLStack160);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar8,uVar10);
          lib::L2CValue::L2CValue(aLStack336,fVar13);
          FUN_7100018920(this,aLStack288,aLStack304,aLStack320,aLStack336);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          pLVar7 = aLStack144;
LAB_710001bad4:
          lib::L2CValue::~L2CValue(pLVar7);
        }
        pLVar7 = aLStack128;
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_LW_END);
        lib::L2CValue::L2CValue(aLStack272,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::~L2CValue(aLStack272);
        pLVar7 = aLStack256;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::~L2CValue(aLStack224);
      pLVar7 = aLStack208;
    }
  }
  lib::L2CValue::~L2CValue(pLVar7);
LAB_710001ae2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

