
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialS_main_loop(L2CFighterGamewatch *this,L2CValue *return_value)

{
  Hash40Map *this_00;
  L2CValue *this_01;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  long lVar9;
  long lVar10;
  Hash40 HVar11;
  L2CTable *this_02;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
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
  
  lib::L2CValue::L2CValue(aLStack240,0);
  ppBVar12 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_710002d134;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710002da1c;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710002d134:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710002d404:
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    this_01 = &this->globalTable;
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_710002d430;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_710002d430;
      }
    }
    else {
LAB_710002d430:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GAMEWATCH_SPECIAL_AIR_S);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          HVar11 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
          goto LAB_710002d7a4;
        }
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        fVar14 = (float)lib::L2CValue::as_number(aLStack144);
        bVar2 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar4);
LAB_710002d998:
        lVar9 = -0x50;
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar11 = lib::L2CValue::as_hash(aLStack96);
          fVar13 = (float)lib::L2CValue::as_number(aLStack128);
          fVar14 = (float)lib::L2CValue::as_number(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_MOT_CHANGE);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar4);
          goto LAB_710002d998;
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
LAB_710002d7a4:
        lib::L2CValue::_L2CValue(aLStack96);
        lVar9 = -0x60;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_FLAG_FIX_PANEL);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack112);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar3 & 1U) != 0) {
        if (((DAT_7100159ac8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_7100159ac8), iVar4 != 0)) {
          this_02 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(this_02,9);
          lib::L2CValue::L2CValue((L2CValue *)&DAT_7100159a28,this_02);
          lib::L2CValue::L2CValue(aLStack96,0x4d5cb9290);
          lib::L2CValue::L2CValue(aLStack112,0x44cc2c32a);
          lib::L2CValue::L2CValue(aLStack128,0x43bc5f3bc);
          lib::L2CValue::L2CValue(aLStack144,0x4a5a1661f);
          lib::L2CValue::L2CValue(aLStack160,0x4d2a65689);
          lib::L2CValue::L2CValue(aLStack176,0x44baf0733);
          lib::L2CValue::L2CValue(aLStack192,0x43ca837a5);
          lib::L2CValue::L2CValue(aLStack208,0x4ac172a34);
          lib::L2CValue::L2CValue(aLStack224,0x4db101aa2);
          FUN_7100008560(&DAT_7100159a28,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,
                         aLStack176,aLStack192,aLStack208,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          FUN_7100000300(lib::L2CValue::_L2CValue,&DAT_7100159a28,&PTR_LOOP_7100157000);
          __cxa_guard_release(&DAT_7100159ac8);
        }
        this_00 = &this[1].functions;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::operator_(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
        lib::L2CValue::operator_(pLVar7,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
        lib::L2CValue::L2CValue(aLStack96,9);
        uVar6 = lib::L2CValue::operator_(aLStack96,pLVar7);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::operator_(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,0x5a2add30f);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb34fc72d1);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb50b57417);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(pLVar7,pLVar8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&DAT_7100159a28,pLVar7);
        lVar9 = lib::L2CValue::as_integer(aLStack96);
        lVar10 = lib::L2CValue::as_integer(pLVar7);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar12,lVar9,lVar10);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      goto LAB_710002d404;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::operator_(aLStack240,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::operator_(aLStack240,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,aLStack240);
    lib::L2CValue::L2CValue(aLStack112,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60))
    ;
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack272);
LAB_710002da1c:
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

