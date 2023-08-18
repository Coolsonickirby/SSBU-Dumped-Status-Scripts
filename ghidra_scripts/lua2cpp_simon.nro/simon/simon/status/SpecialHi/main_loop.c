
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSimon::status::SpecialLw_main_loop(L2CFighterSimon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  long lVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SIMON_STATUS_SPECIAL_LW_FLAG_GENERATE_HOLYWATER);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,0);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_SIMONHOLYWATER);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,0);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_RICHTERHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
LAB_7100018e6c:
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_7100018e74;
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_SIMONHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        goto LAB_7100018e6c;
      }
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_RICHTERHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SIMON_GENERATE_ARTICLE_HOLYWATER);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::ArticleModule__generate_article_have_item_impl
                  (*ppBVar10,iVar3,iVar4,0x7fb997a80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x51a07c0e7);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
        HVar9 = lib::L2CValue::as_hash(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::ItemModule__set_have_item_constraint_joint_impl(*ppBVar10,HVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MOTION_PART_SET_KIND_HAVE_ITEM);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        HVar9 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,HVar9);
        lib::L2CValue::L2CValue(aLStack112,0x10ba1c049e);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) == 0) goto LAB_7100018e7c;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_HAVE_ITEM);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar10,iVar3,false);
        pLVar6 = aLStack112;
        goto LAB_7100018e78;
      }
    }
    else {
LAB_7100018e74:
      pLVar6 = aLStack128;
LAB_7100018e78:
      lib::L2CValue::_L2CValue(pLVar6);
    }
LAB_7100018e7c:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SIMON_STATUS_SPECIAL_LW_FLAG_GENERATE_HOLYWATER);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SIMON_STATUS_SPECIAL_LW_FLAG_SHOOT_HOLYWATER);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,-1);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_SIMONHOLYWATER);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_RICHTERHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) goto LAB_7100018ff0;
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,0);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_SIMONHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack144);
LAB_71000199c4:
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::operator_(aLStack128,aLStack112);
        goto LAB_7100019040;
      }
      iVar3 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar10,0);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_RICHTERHOLYWATER);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) goto LAB_71000199c4;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
LAB_7100018ff0:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SIMON_GENERATE_ARTICLE_HOLYWATER);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__shoot_exist_impl(*ppBVar10,iVar3,0,true);
LAB_7100019040:
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,-1);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0xfc5dc9130);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0xfa32bb18f);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator_(aLStack160,aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0x12bc949afc);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0x12c4cb60aa);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator_(aLStack160,aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack112,_ITEM_HOLYWATER_ACTION_SPECIAL_THROW);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number(aLStack176);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ItemModule__set_have_item_action_impl(*ppBVar10,iVar3,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      fVar12 = (float)lib::L2CValue::as_number(aLStack160);
      fVar13 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      fVar14 = (float)lib::L2CValue::as_number(aLStack192);
      app::lua_bind::ItemModule__throw_item_impl
                (*ppBVar10,fVar11,fVar12,fVar13,iVar3,(bool)(bVar1 & 1),fVar14);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SIMON_STATUS_SPECIAL_LW_FLAG_SHOOT_HOLYWATER);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71000194f8:
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack128);
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
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack288,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
          lib::L2CValue::_L2CValue(aLStack288);
          pLVar6 = aLStack272;
        }
        else {
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack256,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar6 = aLStack240;
        }
        goto LAB_7100019758;
      }
    }
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack336,lVar8);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SIMON_STATUS_SPECIAL_LW_INT_MOTION_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack352,lVar8);
    lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    lib::L2CValue::L2CValue(aLStack400,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    lib::L2CValue::L2CValue(aLStack416,GROUND_CORRECT_KIND_AIR);
    FUN_71000171d0(aLStack304,this,aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400
                   ,aLStack416);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack320);
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar6 = aLStack128;
LAB_7100019758:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_71000194f8;
    }
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

