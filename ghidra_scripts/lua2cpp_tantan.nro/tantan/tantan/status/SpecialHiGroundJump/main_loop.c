
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiGroundJump_main_loop
          (L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  long lVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
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
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) goto LAB_710003e29c;
      }
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x1fee7bcce6);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      uVar4 = lib::L2CValue::operator__(aLStack240,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack112,0xc63a09d9c);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar3);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_DRAGONIZE_L);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_GROUND_HIGH_JUMP);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
            lib::L2CValue::L2CValue(aLStack160,0x1270b0bdb9);
            lib::L2CValue::L2CValue(aLStack176,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
            lib::L2CValue::L2CValue(aLStack160,0x1737a0cbef);
            lib::L2CValue::L2CValue(aLStack176,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,true);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
            lib::L2CValue::L2CValue(aLStack160,0x11fe72b090);
            lib::L2CValue::L2CValue(aLStack176,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
            lib::L2CValue::L2CValue(aLStack160,0x163e30a9ac);
            lib::L2CValue::L2CValue(aLStack176,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
        }
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x59a6ef56c);
        lib::L2CValue::L2CValue(aLStack160,0xadd214353);
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        lVar8 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar6,lVar8);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x71a99f496);
        lib::L2CValue::L2CValue(aLStack160,0xcec1191d4);
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        lVar8 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar6,lVar8);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_GROUND_HIGH_JUMP);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack160,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
          uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
            lib::L2CValue::L2CValue(aLStack176,0x128abf80da);
            lib::L2CValue::L2CValue(aLStack192,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
            lib::L2CValue::L2CValue(aLStack176,0x1570ac1d55);
            lib::L2CValue::L2CValue(aLStack192,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack160,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
          uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
            lib::L2CValue::L2CValue(aLStack176,0x11047d8df3);
            lib::L2CValue::L2CValue(aLStack192,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
            lib::L2CValue::L2CValue(aLStack176,0x1487f4bd65);
            lib::L2CValue::L2CValue(aLStack192,false);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            fVar10 = (float)lib::L2CValue::as_number(aLStack128);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar7,(bool)(bVar1 & 1),fVar10);
          }
        }
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack112,0x56061c80f);
        lib::L2CValue::L2CValue(aLStack160,0xae4fd20b8);
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        lVar8 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar6,lVar8);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x7e096c9f5);
        lib::L2CValue::L2CValue(aLStack160,0xcd5cdf23f);
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        lVar8 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar6,lVar8);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x147f67c194);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      lib::L2CValue::L2CValue(aLStack272,true);
      FUN_710003b450(this,aLStack256,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
      lib::L2CValue::L2CValue(aLStack304,true);
      FUN_710003b450(this,aLStack288,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x126fd3c78c);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
      lib::L2CValue::L2CValue(aLStack336,false);
      FUN_710003b450(this,aLStack320,aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack352,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
      lib::L2CValue::L2CValue(aLStack368,false);
      FUN_710003b450(this,aLStack352,aLStack368);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_STATUS_KIND_SPECIAL_HI_GROUND_END);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
LAB_710003e29c:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

