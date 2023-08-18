
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLw_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
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
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71000290f0:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_TURN_CHECK);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_LW_INT_TURN_COUNTER);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
        fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator_(pLVar7,aLStack96);
        lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack160,0xcee0a3848);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack112,fVar10);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_TURN);
          lib::L2CValue::L2CValue(aLStack192,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar7 = aLStack176;
          goto LAB_7100029594;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_INHERIT_LANDING_1);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,fVar10);
          lib::L2CValue::L2CValue(aLStack80,1.0);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_1);
            lib::L2CValue::L2CValue(aLStack224,true);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + '@'),(L2CValue)(cVar1 + '0'));
            lib::L2CValue::_L2CValue(aLStack224);
            pLVar7 = aLStack208;
            goto LAB_7100029594;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_set_pass(this);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = &this->globalTable;
    if ((bVar4 & 1U) == 0) {
LAB_71000295a8:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        bVar3 = app::lua_bind::GroundModule__is_passable_ground_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_GUARD_TO_PASS);
          lib::L2CValue::operator_(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_FORBID_LANDING);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_INHERIT_LANDING_2)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) == 0) goto LAB_710002999c;
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_FORBID_RESERVE_LANDING);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          goto LAB_7100029994;
        }
        lib::L2CValue::L2CValue(aLStack112,false);
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_FORBID_RESERVE_LANDING);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar4 & 1U) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            goto LAB_7100029b90;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_FORBID_RESERVE_LANDING);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
LAB_7100029b90:
          lib::L2CValue::_L2CValue(aLStack80);
        }
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_2);
          lib::L2CValue::L2CValue(aLStack320,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lVar2 = -0x60;
          goto LAB_7100029d10;
        }
        pLVar7 = aLStack112;
LAB_7100029998:
        lib::L2CValue::_L2CValue(pLVar7);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_FORBID_RESERVE_LANDING);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            goto LAB_7100029994;
          }
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_7100029994:
            pLVar7 = aLStack80;
            goto LAB_7100029998;
          }
        }
      }
LAB_710002999c:
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
        lib::L2CValue::L2CValue(aLStack144,0xe46c0e666);
        lib::L2CValue::L2CValue(aLStack160,true);
        lib::L2CValue::L2CValue(aLStack336,aLStack112);
        lib::L2CValue::L2CValue(aLStack352,aLStack144);
        lib::L2CValue::L2CValue(aLStack368,aLStack160);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack384,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
          iVar5 = lib::L2CValue::as_integer(aLStack384);
          bVar3 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack384);
          if ((bVar4 & 1U) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
              lib::L2CValue::L2CValue(aLStack384,0xe46c0e666);
              lib::L2CValue::L2CValue(aLStack400,true);
              iVar5 = lib::L2CValue::as_integer(aLStack80);
              HVar9 = lib::L2CValue::as_hash(aLStack384);
              bVar3 = lib::L2CValue::as_bool(aLStack400);
              app::lua_bind::ArticleModule__change_motion_impl
                        (this->moduleAccessor,iVar5,HVar9,(bool)(bVar3 & 1),-1.0);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
              lib::L2CValue::L2CValue(aLStack384,0xab6928cf2);
              lib::L2CValue::L2CValue(aLStack400,true);
              iVar5 = lib::L2CValue::as_integer(aLStack80);
              HVar9 = lib::L2CValue::as_hash(aLStack384);
              bVar3 = lib::L2CValue::as_bool(aLStack400);
              app::lua_bind::ArticleModule__change_motion_impl
                        (this->moduleAccessor,iVar5,HVar9,(bool)(bVar3 & 1),-1.0);
            }
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      FUN_7100027540(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack416,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack432,false);
      lib::L2CValue::L2CValue(aLStack448,aLStack80);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting_gravity_func
                (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      FUN_7100011ba0(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lVar2 = -0x40;
LAB_7100029d10:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_71000295a8;
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar7 = aLStack272;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar7 = aLStack240;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100029598;
      goto LAB_71000290f0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = aLStack96;
  }
LAB_7100029594:
  lib::L2CValue::_L2CValue(pLVar7);
LAB_7100029598:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

